#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/device.h>
#include <linux/sysfs.h>

#define MAX_ITEM (6)
static char *hw_module_info = "[ LCM ]:\n \
chip : otm1283a_hd720 \n \
vendor: vendor \n \
id : 0xffff \n \
more : 720 * 1280 \n \
\n \
[ Touch Panel ]: \n \
chip : GT915 \n \
vendor: 0x57 \n \
id : 0xba00 \n \
more : v 1088 \n \
\n \
[ Main Camera ]: \n \
chip : imx111mipiraw \n \
vendor: \n \
id : 0x0 \n \
\n \
[ Sub Camera ]: \n \
chip : gc2235mipiraw \n \
vendor: \n \
id : 0x0 \n \
\n \
[ ALS/PS ]: \n \
chip : AP3216C \n \
vendor:  \n \
id : 0x1E \n \
more : already \n \
\n \
[ G-sensor ]: \n \
chip : MC32X0 \n \
vendor: \n \
id : 0x0"; 

typedef struct {
	char type[64];
	char chip[64];
	char vendor[64];
	char more[64];
	int id;

} hwm_module_info_item;

hwm_module_info_item hwm_items[MAX_ITEM];
char hwm_info_str[4096];
int hw_module_info_add_item(char *type, char *chip, char *vendor, int id, char *more)
{
	int i = 0;
	int j = 0;
	static char *tmpaddr = hwm_info_str;
	int count = 0;
	printk("\nhw_module_info_add_item %s %s %s %d %s\n",type, chip, vendor, id, more);
	for(i = 0;i < MAX_ITEM;i++)
	{
		if(hwm_items[i].type[0] == 0)
		{
			for(j = 0;j < MAX_ITEM;j++){
				if(!strcmp(hwm_items[j].type, type) ||!strcmp(hwm_items[j].chip, chip))
					return printk("\n type exist\n");
			}
			strcpy(hwm_items[i].type, type);
			strcpy(hwm_items[i].chip, chip);
			strcpy(hwm_items[i].vendor, vendor);
			hwm_items[i].id= id;
			strcpy(hwm_items[i].more, more);
			count = sprintf(tmpaddr, "[ %s ]:\n chip : %s \n vendor: %s \n id : 0x%x \n\n", type,  chip, vendor, id);
			tmpaddr += count;
			if(!memcmp(type , "LCM", 3))
				sprintf(tmpaddr, "%s", more );
			break;
		}
	}
	*(tmpaddr+1) = '\0';
	printk("\nsky %s\n",hwm_info_str);

}
EXPORT_SYMBOL(hw_module_info_add_item);
	
static ssize_t hw_module_info_show(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	return snprintf(buf, PAGE_SIZE, "%s\n \n", hwm_info_str);
}
static DEVICE_ATTR(hw_module_info, S_IRUGO, hw_module_info_show, NULL);

static struct kobject *hwinfo_kobj;

static int __init hwinfo_sysfs_init(void)
{
	int i;

	hwinfo_kobj = kobject_create_and_add("hwm_info", NULL);
	if (hwinfo_kobj) {
		sysfs_create_file(hwinfo_kobj, &dev_attr_hw_module_info.attr);
	}

	return 0;
}

module_init(hwinfo_sysfs_init);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hwinfo Sysfs Export");
