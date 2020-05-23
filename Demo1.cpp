#include<iostream>
#include<stdio.h>
using namespace std;
class Base
{
	public:
		char ch;
		 double num;
		char ch1;
		int num1;
};


main()
{
	Base obj;
	printf("\nSize of obj : %d\n",sizeof(obj));
	printf("\nSize of ch : %d\n",sizeof(obj.ch));
	printf("\nSize of num : %d\n",sizeof(obj.num));
	printf("\nSize of ch1 : %d\n",sizeof(obj.ch1));
	printf("\nSize of num1 : %d\n",sizeof(obj.num1));
	
	printf("\nAddress of obj : %u",&obj);
	printf("\naddress of obj.ch : %u",&obj.ch);
	printf("\naddress of obj.num : %u",&obj.num);
	printf("\naddress of obj.ch1 : %u",&obj.ch1);
	printf("\naddress of obj.num1 : %u",&obj.num1);
	
/*	printf("\n size of (arr) : %d",sizeof(arr));
	printf("\n &arr : %u",&arr);
	printf("\n arr : %u",arr);
	printf("\n &arr[0] : %u",&arr[0]);
	printf("\n &arr[1] : %u",&arr[1]);
	printf("\n &arr[2] : %u",&arr[2]);
	printf("\n &arr[3] : %u",&arr[3]);
	printf("\n &arr[4] : %u",&arr[4]);
	*/

//	printf("\n address of val : %u",&val);

	//int arr[5];
/*	char ch;
	float num;
	char ch1;
	double num1;

	printf("\n address of ch : %u",&ch);
	printf("\n address of num : %u",&num);
	printf("\n address of ch : %u",&ch1);
	printf("\n address of num : %u",&num1);*/
	
	
	cout<<"In Dev Branch";


}
