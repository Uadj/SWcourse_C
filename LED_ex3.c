/*
 * LED_ex1.c
 *
 * Created: 2020-04-01 ���� 3:15:44
 * Author : YJ
 */ 
#define F_CPU	16000000 // Ŭ�����ļ� ����
#include <avr/io.h>      // ������Լ� ������� ����
#include <util/delay.h>  // �����Լ� ������� ����

int main(void)
{
	int i;
    /* Replace with your application code */
	DDRD = 0b11111111;   // DDRD=0xFF; Data direction Resister D
    while (1) 
    {
		for(i=0; i<8;i++){
		PORTD=0b00000001<<i;	// 1�϶� ������� ��Ʈ(PORTD)���� ��������.(LED ON)
		_delay_ms(1000);    // 1�� �ð� ����
		}
		PORTD=0b00000000;	
		_delay_ms(1000);
	}
	return 0;
}

