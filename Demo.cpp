#include<iostream>
using namespace std;
class Demo
{
	int num;
	float val;
	public:
		Demo()
		{
			this->num=0;
			this->val=0.0f;
		}
		Demo(int temp1,float val1)
		{
			this->num=temp1;
			this->val=val1;
		}
		Demo(Demo &temp)
		{
			this->num=100;
			this->val=200.1f;
		}
		void display()
		{
			cout<<"\n\tthis->num:"<<this->num;
			cout<<"\n\tthis->val:"<<this->val;
		}
};
int main()
{
	Demo obj(5,10);
	Demo obj1=obj;
	obj.display();
	obj1.display();
}
