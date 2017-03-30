#include<vector>
#include<algorithm>
#include<iostream>
#include<cstdlib>
#include"clock.h"
using namespace std;
void insertion_sort(vector<int> &v)
{
	int insert,moveltem;
	for(int next=1;next<v.size();++next)
	{
		insert=v.at(next);
		moveltem=next;
		while((moveltem>0) && (v.at(moveltem-1)>insert)){
			v.at(moveltem)=v.at(moveltem-1);
			--moveltem;
		}
		v.at(moveltem)=insert;
	}
}
int main()
{
	Clock clk;
	const int size=1000000;
	vector<int>v1(size),v2;
	srandom(time(NULL));
	for(int i=0;i<size;i++) v1.at(i)=random();
	v2=v1;
	clk.start();
	sort(v1.begin(),v1.end());
	cout<<"sort(): "<<clk.getElapsedTime()<<" seconds\n";
	cout<<"v1/v2 are "<<((v1==v2)?"the same.\n":"different.\n");
	clk.start();
	insertion_sort(v2);
	cout<<"insertion_sort(): "<<clk.getElapsedTime()<<" seconds\n";
	cout<<"v1/v2 are "<<((v1==v2)?"the same.\n":"different.\n");
	return 0;
}
