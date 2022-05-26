#include "sys.h"  


void WFI_SET(void){
	__ASM volatile("WFI");
}

void INTX_DISABLE(void){
	__ASM volatile("CPSID   I");
	__ASM volatile("BX      LR");
}

void INT_ENABLE(void){
	__ASM volatile("CPSIE   I");
	__ASM volatile("BX      LR");
}

void MSR_MSP(u32 addr){
	__ASM volatile("MSR MSP, r0");
	__ASM volatile("BX r14");
}


// __asm void WFI_SET(void)
// {
// 	WFI;		  
// }

// __asm void INTX_DISABLE(void)
// {
// 	CPSID   I
// 	BX      LR	  
// }

// __asm void INTX_ENABLE(void)
// {
// 	CPSIE   I
// 	BX      LR  
// }

// __asm void MSR_MSP(u32 addr) 
// {
// 	MSR MSP, r0 			
// 	BX r14
// }

