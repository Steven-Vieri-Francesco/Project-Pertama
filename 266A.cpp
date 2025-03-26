#include<iostream>
#include<string>
using namespace std;
int main()
{
	bool a,b,c;
	a=false;
	b=a;c=a;
	int i,test=0,lol;
	string ok,ok1="";
	char cur;
	cin>>lol;
	cin>>ok;
	cur=ok[0];
	for(i=1;i<ok.size();i++)
	{
		if(cur==ok[i]){
			ok.erase(i,1);
			i--;
			test++;
		}
		else cur=ok[i];
	}
	cout<<test;	
}
