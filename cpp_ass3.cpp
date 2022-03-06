#include<iosream>
using namespace std;
class AddAmount{
	int amount=50;
	public:
	AddAmount(){
		cout<<"constructor without parameter \n";
	            }
	AddAmount(int n){
		cout<<"initial amount in the piggi bank is:"<<amount<<endl;
		amount=amount+n;
		
	            }
void display()
{
cout<<"After adding amount \n the final amount in the piggi bank is:"<<amount<<endl;
}
};

int main()
{
int x;
cout<<"enter amount that you want to add in the piggi bank:";
cin>>x;
obj=x;;
obj.display();
return 0;
}
