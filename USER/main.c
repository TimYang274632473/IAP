#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"



int main(void)
{		
	int i = 0;
	delay_init();	    	 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 
//  printf("������ %d ��\n", __LINE__);  
  printf("��������ʱ��%s %s\n", __DATE__, __TIME__);  
  printf("�ļ��� %s\n", __FILE__);  
  printf("������ %s\n", __FUNCTION__); 
	while(1)
	{
		printf("~:%d ",i++);	
//		printf("Out:%d ",i++);
		delay_ms(10);
	}
	
//	void (*p)(void) = (void (*)(void))(*((int*)0x20005004));	
//	NVIC_SetVectorTable(NVIC_VectTab_FLASH,0x20005000);	
//	while(1)
//	{
//		p();
//	}	
}

