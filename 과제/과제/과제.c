/*
컴퓨터 프로그래밍 평가과제 (배점25점)
학과 : 컴퓨터 공학부
학번 : 202201531
이름 : 박준규

과제 주제 : 코로나에 관련된 여러 유용한 정보를 제공하는 프로그램 만들기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A;

	struct 증상 {
		char a[100] = "공통적인 증세 : 발열, 기침, 피로감, 미각 또는 후각 상실"
		char b[100] = "드문 증상 : 인후통, 두통, 몸살, 설사"
		char c[100] = "심각한 증상 : 호흡 곤란, 가슴 통증, 언어 또는 운동 장애"
	};

	struct 증상 data;

	struct 치료 {
		char d[100] = "의료 기관, 코로나 콜 센터에 문의하여 검사를 한다."
		char e[100] = "손을 자주 씻고 의료용 마스크를 착용한다."
		char f[100] = "실내를 환기하며 타인과 거리를 둔다."
	};

	struct 치료 data;

	struct 예방 {
		char g[100] = "마스크를 착용한다."
		char h[100] = "손을 자주 씻는다."
		char i[100] = "거리두기를 생활화한다."
	};
	
	struct 예방 data;

	printf("원하시는 정보의 숫자를 입력하세요:_\n (1: 코로나 증상 / 2: 코로나 치료 / 3: 코로나 예방)");
	scanf("%d", &A);

	if (A == 1);
	{
		printf("코로나에 감염된 경우 발생할 수 있는 증상들입니다.\n");
		printf("%s\n", data.a);
		printf("%s\n", data.b);
		printf("%s\n", data.c);

	}

	if (A == 2);
	{
		printf("코로나의 치료와 관련된 정보입니다.\n");
		printf("%s\n", data.d);
		printf("%s\n", data.e);
		printf("%s\n", data.f);
	}

	if (A == 3);
	{
		printf("코로나 예방과 관련된 정보입니다.\n");
		printf("%s\n", data.a);
		printf("%s\n", data.b);
		printf("%s\n", data.c);
	}

	else
	{
		printf("잘못된 숫자를 입력하셨습니다. 프로그램을 종료합니다.");
	}
	return 0;
}