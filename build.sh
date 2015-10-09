#script compile kernel by andr7e
#setting build

toolchain="$HOME/kernel_build/android-toolchain-eabi-4.9/bin/arm-linux-androideabi-"
source_path=`pwd`

# CCACHE
export CCACHE_DIR="$HOME/.ccache"
export CC=ccache gcc
export PATH=/usr/lib/ccache:$PATH
export USE_CCACHE=1
export CROSS_COMPILE=$toolchain

mtktools_path="$source_path/mtktools"
dest_cwm_path="$mtktools_path/cwm_recovery"
dest_twrp_path="$mtktools_path/twrp_recovery"

build_kernel()
{ 
   projectName="$1";

   echo "$projectName";
  
   ./makeMtk -o=TARGET_BUILD_VARIANT=user -t "$projectName" r k

   projectKernelName="boot.img-kernel-$projectName.img"
   projectDataName="$mtktools_path/$projectName"

   cp "$source_path/out/target/product/"$projectName"/kernel_$projectName.bin" "$mtktools_path/$projectKernelName"

   cd "$mtktools_path"
   ./unpack.pl boot_stock.img
   ./repack.pl -boot "$projectKernelName" boot_stock.img-ramdisk "$projectDataName/boot.img"

   cd "$projectDataName"
   zip -r out .

   if [ ! -d "$source_path/build" ]; then
      mkdir $source_path/build
   fi

   mv "$projectDataName/out.zip" "$source_path/build/$projectName-kernel_KK.zip"
}

repack_recovery()
{
   projectName="$1";
   type="$2";

   echo "$projectName";

   projectKernelName="boot.img-kernel-$projectName.img"
   projectDataName="$mtktools_path/$projectName"

   echo  "repacking $type..."
   dest_path="$source_path/build/recovery"
   cd $mtktools_path
   ./repack.pl -recovery "$projectKernelName" "recovery.img-ramdisk-$type" "$dest_path/recovery.img"
   cd $dest_path
   zip -r recovery .
   mv "$dest_path/recovery.zip" "$source_path/build/$projectName-$type-recovery.zip"
   rm "$dest_path/recovery.img"
}

recovery_param="recovery"

if [ "$1" = "list" ];
then
   echo "Available projects:"

else
   if [ "$2" = "$recovery_param" ];
   then
       repack_recovery "$1" "twrp"
   else
       build_kernel "$1"
   fi
fi
