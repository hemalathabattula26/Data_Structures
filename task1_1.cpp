//22A91A05A6
#include<iostream>
using namespace std;
class student{
	private:
		string name,branch,college;
		int per;
		float attendance;
	public:
	student(string n,string b,string c,int p,int a)
	{
		this->name=n;
		this->branch=b;
		this->college=c;
		this->per=p;
		this->attendance=a;
	}
	void modify()
	{
		name="HEMA";
	}
	void display()
	{
		cout<<name<<" "<<branch<<" "<<college<<" "<<per<<" "<<attendance<<endl;
	}
};
int main()
{
	student s1("hema","CSE","AEC",95,90.5);
	s1.modify();
	s1.display();
}
