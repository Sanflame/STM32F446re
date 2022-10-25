#include<stdint.h>
#include<stm32f4xx.h>
#include<stm32f446xx.h>


void delay();

int main(){
RCC->AHB1ENR |= 0x00000001;
GPIOA->MODER |= 0x00000400;
GPIOA->OSPEEDR |= 0x00;

while(1){
GPIOA->BSRR |= 0x00000020;
	delay();
	GPIOA->BSRR |= 0x00200000;
	delay();


}	
	
}

void delay(){
for(uint32_t i=1;i<1000000;i++);

}