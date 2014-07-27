#include <iostream>
using namespace std;
unsigned max_cut(unsigned);
unsigned max(unsigned, unsigned);
<<<<<<< HEAD
unsigned p[]={0,3,5,6,11};
=======
unsigned p[]={0,1,5,6,9};
unsigned is_calculated[]={0,0,0,0,0};
unsigned global_count=0;
>>>>>>> 5e487d578c8c4030f1c5882eb3f242286860c64c

int main(){

	cout<<max_cut(4)<<endl;
<<<<<<< HEAD
=======
        cout<<global_count<<endl;
>>>>>>> 5e487d578c8c4030f1c5882eb3f242286860c64c

	return 0;
}

unsigned max_cut(unsigned n){

<<<<<<< HEAD
	unsigned i,j,s;

	for (j=2;j<=n;j++)
		for(i=1;i<j;i++)
			s=max(p[j],p[i]+p[j-i];
			
	return 0;
=======
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
>>>>>>> 5e487d578c8c4030f1c5882eb3f242286860c64c
}
unsigned max(unsigned a, unsigned b){


	if (a>=b)
		return a;
	else
		return b;
}


