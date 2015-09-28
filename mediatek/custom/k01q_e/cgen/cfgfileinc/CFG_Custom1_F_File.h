#ifndef _CFG_CUSTOM1_F_FILE_H
#define _CFG_CUSTOM1_F_FILE_H

typedef struct
{
	int magic;
	int pcba_test_pass;
	int misc_offset;
	int misc_length;		//include factroy header.
	int fac_offset;
	int fac_length;	
	int pcba_is_test;
	int fac_is_test;
	int checksun;
	int imei;
	int pcba_register_num;		//now the same as pcba_need_test_num.
	int pcba_need_test_num;		//now deciede by init function call or not,  but ftm_PCBA_test_items too(now, not care).
	int pcba_test_ok_num;		
	int pcba_test_fail_num;		
	int pcba_no_test_num;
	int ftm_register_num;			//
	int ftm_need_test_num;		//now decide by read_config function.
	int ftm_test_ok_num;		
	int ftm_test_fail_num;		
	int ftm_no_test_num;
	int version;
}Factory_header_Struct;

#define CFG_FILE_FACTORY_HEADER_REC_SIZE    sizeof(Factory_header_Struct)
#define CFG_FILE_FACTORY_HEADER_REC_TOTAL   1


struct FAC_TEST_RESULT_NVM {
	int id;
	int test_reuslt;
};
typedef struct
{
	struct FAC_TEST_RESULT_NVM item[128];		//keep 1K (128*8)
}Factory_test_result_Struct;

#define CFG_FILE_FACTORY_RESULT_REC_SIZE    sizeof(Factory_test_result_Struct)
#define CFG_FILE_FACTORY_RESULT_REC_TOTAL   1

#endif
