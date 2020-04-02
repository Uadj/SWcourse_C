/*
 * LED_ex1.c
 *
 * Created: 2020-04-01 오후 3:15:44
 * Author : YJ
 */ 
#define F_CPU	16000000 // 클럭주파수 선언
#include <avr/io.h>      // 입출력함수 헤더파일 선언
#include <util/delay.h>  // 지연함수 헤더파일 선언

int main(void)
{
	int i;
    /* Replace with your application code */
	DDRD = 0b11111111;   // DDRD=0xFF; Data direction Resister D
    while (1) 
    {
		for(i=0; i<8;i+=2){
		PORTD+=0b00000001<<i;	// 1일때 출력으로 포트(PORTD)에서 전류나옴.(LED ON)
		_delay_ms(1000);    // 1초 시간 지연
		}
		for(i=1; i<8;i+=2){
		PORTD+=0b00000001<<i;	// 1일때 출력으로 포트(PORTD)에서 전류나옴.(LED ON)
		_delay_ms(1000);    // 1초 시간 지연
		}
		PORTD=0b00000000;	
		_delay_ms(1000);
	}
	return 0;
}

