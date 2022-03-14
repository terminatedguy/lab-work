#include<iostream>
using namespace std;
class demo
{
	static int x;
public:
	static int y;
	void test(int x)
	{
		cout << demo::x<<endl;
		cout << x<<endl;
	}
};
int demo::x= 4;
int demo::y =4;
int main()
{
	demo abc;
	int x=16;
	abc.test(x);
	cout<<demo::y;
	return 0;
}
