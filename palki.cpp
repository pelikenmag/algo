#include <iostream>
using namespace std;
unsigned max_cut(unsigned, unsigned *);
unsigned max(unsigned, unsigned);

int main(){

	unsigned p[]={0,3,5,6,11};
	cout<<max_cut(4,p)<<endl;

	return 0;
}

unsigned max_cut(unsigned n, unsigned *p){

	unsigned i,v,s=0;
	if (n==0)
		return 0;

	for (i=1;i<=n;i++){
		 v=max(p[n],p[i]+max_cut(n-i,p));    
		if (v>s)
			s=v;

		}
	return s;
}
unsigned max(unsigned a, unsigned b){


	if (a>=b)
		return a;
	else
		return b;
}
