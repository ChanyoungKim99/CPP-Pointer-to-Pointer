#include <iostream>

int main()
{
	int  a{ 10 };
	int* p{ &a };		// pointer variable
	int** pp{ &p };		// pointer to pointer variable 
						// type int* �� *�� �ִ� ����

	std::cout << a << std::endl;    //	10
	std::cout << p << std::endl;    //	100����
	std::cout << *p << std::endl;   //	10
	
	std::cout << pp << std::endl;   //	104����
	std::cout << *pp << std::endl;  //  pp�� ������ =  *(pp) = 100����

	std::cout << **pp << std::endl; // *pp�� ������ = *(*pp) = 10 

	// ������ �������� �д� ���� ���ϴ�
}