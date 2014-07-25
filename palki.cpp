#include <iostream>
using namespace std;
unsigned max_cut(unsigned);
unsigned max(unsigned, unsigned);
unsigned p[]={0,1,5,6,9};
unsigned is_calculated[]={0,0,0,0,0};
unsigned global_count=0;

int main(){

	cout<<max_cut(4)<<endl;
        cout<<global_count<<endl;

	return 0;
}

unsigned max_cut(unsigned n){

	unsigned i,v;
	if (n==0)
		return 0;
	if (is_calculated[n]==1)
		return p[n];

	for (i=1;i<=n;i++){
		v=max(p[n],p[i]+max_cut(n-i));
                global_count++;    
		if (v>p[n])
			p[n]=v;
		
		}
	is_calculated[n]=1;
	return p[n];
}
unsigned max(unsigned a, unsigned b){


	if (a>=b)
		return a;
	else
		return b;
}


