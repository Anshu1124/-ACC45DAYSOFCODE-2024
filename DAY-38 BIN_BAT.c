#include <stdio.h>
#include <math.h> // Include math.h for log2 function

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        // Calculate the number of rounds, k
        int rounds = log2(N);
        
        // Calculate the total time
        int total_time = rounds * A + (rounds - 1) * B;
        
        // Output the result
        printf("%d\n", total_time);
    }
    
    return 0;
}
