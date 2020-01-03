#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"



int main(void)
{		
	int i = 0;
	delay_init();	    	 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(115200);	 
//  printf("代码在 %d 行\n", __LINE__);  
  printf("代码编译的时间%s %s\n", __DATE__, __TIME__);  
  printf("文件名 %s\n", __FILE__);  
  printf("函数名 %s\n", __FUNCTION__); 
	while(1)
	{
		printf("~:%d ",i++);
		delay_ms(300);
	}
	
//	void (*p)(void) = (void (*)(void))(*((int*)0x08005004));	
//	NVIC_SetVectorTable(NVIC_VectTab_FLASH,0x08005000);	
//	while(1)
//	{
//		p();
//	}	
}

