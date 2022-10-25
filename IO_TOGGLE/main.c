#include<stdint.h>
#include<stm32f446xx.h>

void delay();
int main(){
RCC->AHB1ENR |= 0x00000005;
GPIOA->MODER |= 0x00000400;
	GPIOC->MODER |= 0x00;
	GPIOC->PUPDR |= 0x00;
GPIOA->OTYPER |= 0x00;
GPIOA->OSPEEDR |= 0x00;
while(1){
	
if(GPIOC->IDR & (1<<13)){
GPIOA->BSRR |= 0x00000020;}
//delay();
else{
GPIOA->BSRR |= 0x00200000;
}//	delay();




}


}

void delay(){
for(uint32_t i=0;i<100000;i++);

}
