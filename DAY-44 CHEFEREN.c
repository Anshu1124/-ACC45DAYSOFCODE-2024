#include <stdio.h>

int main() {
	int t,i,x,a,b;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d%d%d",&x,&a,&b);
	    if(x%2==0)
	       printf("%d\n",((x/2)*a)+((x/2)*b));
	    else if(x%2!=0)
	    {
	        printf("%d\n",(((x/2)*a)+((x-(x/2))*b)));
	    }
	}

}


