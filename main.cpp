#include <iostream>

int main()
{
	int  a{ 10 };
	int* p{ &a };		// pointer variable
	int** pp{ &p };		// pointer to pointer variable 
						// type int* 에 *를 넣는 느낌

	std::cout << a << std::endl;    //	10
	std::cout << p << std::endl;    //	100번지
	std::cout << *p << std::endl;   //	10
	
	std::cout << pp << std::endl;   //	104번지
	std::cout << *pp << std::endl;  //  pp의 역참조 =  *(pp) = 100번지

	std::cout << **pp << std::endl; // *pp의 역참조 = *(*pp) = 10 

	// 오른쪽 방향으로 읽는 것이 편하다
}