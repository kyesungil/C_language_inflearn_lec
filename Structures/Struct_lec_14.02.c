#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 41

struct person { // Person is a tag of structure

	char name[MAX]; // member
	int age; /* member ,구조체 안에서 맴버를 선언해줄때는 메모리를 갖지 않는다. 
			 구조체 변수가 선언이 될 때, 메모리를 갖는다. */
	float height; // member
};

int main()
{
	int flag;

	/* ----------Structure variable(구조체 변수 접근)---------- */

	struct person genie; /* struct tag(이름) 변수 
						 변수를 선언하는 순간 구조체 멤버들이 메모리에 할당된다.*/

	/* dot(.) is structure membership operator (member access operator, member operator)*/
	// 구조체 멤버 접근
	strcpy(genie.name, "Will Smith");
	genie.age = 1000;

	flag = scanf("%f", &genie.height);
	printf("%f\n", genie.height);



	/* ----------Initializtion (구조체 초기화)---------- */

	struct person princess = { "Naomi Scott", 18, 160.0f };

	struct person princess2 = {
		"Naomi Scott",
		18,
		160.0f
	};

	strcpy(princess.name, "Naomi Scott");
	princess.age = 18;
	princess.height = 160.0f;


	/* ----------Designated initializers(지정해서 초기화)---------- */

	struct person beauty = {
		.age = 19,
		.name = "Bell",
		.height = 150.0f
	// 구조체 멤버 순서와 달리 지정해도 가능. 
	};


	/* ----------Pointer to a strcture variable(구조체 변수에 대한 포인터)---------- */

	struct person* someone;
	someone = &genie;

	// Indirect member(ship) operator (or structure pointer operator)

	// 포인터가 구조체 접근할 때는 dot 대신에 arrow에 operator를 사용한다.
	someone->age = 1001;
	printf("%s %d\n", someone->name, (*someone).age);


	/* ----------Structure declarations in a function(함수 안에서 구조체 선언)---------- */

	struct book {
		char title[MAX];
		float price;
	};


	/* ----------No tag----------*/

	struct {
		char farm[MAX];
		float price;
	} apple, apple2; // 선언

	strcpy(apple.farm, "Trade Joe");
	apple.price = 1.2f;

	strcpy(apple2.farm, "Safeway");
	apple2.price = 5.6f;


	/* ----------typedef and structure(구조체가 사용자가 정의한 새로운 자료형 처럼 사용하기)---------- */

	typedef struct person my_person;

	my_person p3; // my_person 자료형에 대한 p3변수
	
	typedef struct person person;

	person p4;
	
	typedef struct {
		char name[MAX];
		char hobby[MAX];
	}friend;

	friend f4;
	

	return 0;
}