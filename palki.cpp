#include <iostream>
using namespace std;
unsigned max_cut(unsigned);
unsigned max(unsigned, unsigned);
unsigned p[]={0,3,5,6,11};

int main(){

	cout<<max_cut(4)<<endl;

	return 0;
}

unsigned max_cut(unsigned n){

	unsigned i,j,s;

	for (j=2;j<=n;j++)
		for(i=1;i<j;i++)
			s=max(p[j],p[i]+p[j-i];
			
	return 0;
}
unsigned max(unsigned a, unsigned b){


	if (a>=b)
		return a;
	else
		return b;
}
