#include <stdio.h>

int main() {
	// your code goes here
    int T, N;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &N);
        printf("%d\n", (1000*N)/100);
    }
    return 0;
}

