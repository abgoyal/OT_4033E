
#ifndef CMMB_ERRCODE_H
#define CMMB_ERRCODE_H

#ifdef __cplusplus
extern "C" {
#endif
typedef enum
{
	//service provider use
	CMMB_S_OK 							= 0x00000000,
	CMMB_S_ALREADY_ACTIVE			= 0x00000001,
	CMMB_E_UNKNOWN					= 0x00000002,
	CMMB_E_INVALID_ARG				= 0x00000003,
	CMMB_E_TIMEOUT					= 0x00000004,
	CMMB_E_MEM_ALLOC_FAILED    		= 0x00000005,
	CMMB_E_WRONGSTATE				= 0x00000006,

	//parser use
	CMMB_PARSER_S_OK 		  	    		= 0x60000000,
	CMMB_PARSER_E_DATA_CORRUPTED	= 0x60000001,
	CMMB_PARSER_E_INVALID_ARG		= 0x60000002,
	CMMB_PARSER_E_ALREADY_PLAYED	= 0x60000003,
	CMMB_PARSER_E_FAILED_CRC_CHECK	= 0x60000004,
	CMMB_PARSER_E_NOT_SUPPORTED	= 0x60000005,
	CMMB_PARSER_E_EXCEEDED_ALLOCATED_MEMORY= 0x60000006,
	CMMB_PARSER_E_ILLEGAL_DATA		= 0x60000007,
	CMMB_PARSER_E_FALSE				= 0x60000008,
	
	
	//ESG parser use
	CMMB_ESG_S_IN_PROGRESS      	 = 0x70000000,
	CMMB_ESG_E_BAD_DATA 			 = 0x70000001,
	CMMB_ESG_E_TABLE_NOT_FOUND  = 0x70000002,

	//EB parser use
	CMMB_EB_S_COMPLETE  			= 0x80000000
} CmmbResult;
#ifdef __cplusplus
}
#endif

#endif // CMMB_ERRCODE_H