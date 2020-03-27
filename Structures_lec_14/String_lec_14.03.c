#include<stdio.h>

int main()
{
	struct Aligned { // 구조체를 변수선언할 때는 메모리에 할당x
		int a;  //4
		float b; //4
		double c;//8
	};

	struct Aligned a1, a2;

	printf("struct Aligned a1\n");
	printf("Sizeof %zd\n", sizeof(struct Aligned)); // 16
	printf("%lld\n", (long long)&a1); // 주소 0
	printf("%lld\n", (long long)&a1.a); // 주소 0
	printf("%lld\n", (long long)&a1.b); // 주소 4
	printf("%lld\n", (long long)&a1.c); // 주소 8

	printf("struct Aligned a1\n");
	printf("Sizeof %zd\n", sizeof(struct Aligned));
	printf("%lld\n", (long long)&a2);
	printf("%lld\n", (long long)&a2.a);
	printf("%lld\n", (long long)&a2.b);
	printf("%lld\n", (long long)&a2.c);


	/* ----------padding (struct member alignment)---------- 
				1 word: 4 bytes in x86, 8 bytes in x64

				Memorry <--> CPU 데이터를 서로 보낼때,
				데이터를 묶어서 보낸다. (word 만큼씩)
	*/

	struct Padded1 {
		char a; // 1 byte
		float b; // 4
		double c; // 8
	}; // 1 + 4 + 8 = 13

	/*With padding
	0 1 2 3 |4 5 6 7 |8 9 10 11 12 13 14 15 16
	|char a |float b|double c
	char는 1byte인데 컴파일러가 3byte를 추가해 놓은다.(padding)
	(word 단위로 정보를 한번에 보내기 위해서)
	*/

	struct Padded1 p1;
	printf("struct Aligned p1\n");
	printf("Sizeof %zd\n", sizeof(p1)); /* 16btye */
	printf("%lld\n", (long long)&p1); // 주소 0
	printf("%lld\n", (long long)&p1.a); // 주소 0
	printf("%lld\n", (long long)&p1.b); // 주소 4
	printf("%lld\n", (long long)&p1.c); // 주소 8

	struct Padded2 {
		float a; // 4
		double b; // 8
		char c; // 1
	};

	/*
	|0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|16 17 18 19 20 21 22 23|24
	|float a		|double b			  | char c				  |
	(padding 이 float와 char 둘다 들어감.)
	*/


	struct Padded2 p2;
	printf("struct Aligned p2\n");
	printf("Sizeof %zd\n", sizeof(p2)); /* 16btye */
	printf("%lld\n", (long long)&p2); // 주소 0
	printf("%lld\n", (long long)&p2.a); // 주소 0
	printf("%lld\n", (long long)&p2.b); // 주소 8
	printf("%lld\n", (long long)&p2.c); // 주소 6

	struct Person {
		char name[41];
		int age;
		float height;
	};

	struct Person mommy;
	printf("struct Person\n");
	printf("Sizeof %zd\n", sizeof(mommy)); // 52
	printf("%lld\n", (long long)&mommy); // 주소 0
	printf("%lld\n", (long long)&mommy.name); // 주소 0
	printf("%lld\n", (long long)&mommy.age); // 주소 44
	printf("%lld\n", (long long)&mommy.height); // 주소 52


	/*----------구조체 배열----------*/
	struct Person f[4];

	printf("Sizeof a structure array %zd\n", sizeof(f)); // 208 = 52 * 4

	return 0;
}