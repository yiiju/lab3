#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	int num,i,temp;
	vector <int> weight;
	ifstream infile("file.in",ios::in);
	if(!infile){
		cerr<<"failed opening"<<endl;
		exit(1);
	}
	infile>>num;
	for(i=0;i<num;i++){
		infile>>temp;
		weight.push_back(temp);
	}
	sort(weight.begin(),weight.end());
	int total=0;
	for(i=1;i<=5;i++){
		total+=weight[num-i];
	}
	cout<<total<<endl;
	return 0;
}
