#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k,m;
	    scanf("%d %d %d",&n,&k,&m);
	    int a=k*m;
	    if(n%a==0){
	        printf("%d\n",n/a);
	    }
	    else{
	        printf("%d\n",(n/a)+1);
	    }
	}

}

