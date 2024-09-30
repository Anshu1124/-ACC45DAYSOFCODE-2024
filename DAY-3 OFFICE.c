#include <stdio.h>

int main() {
	
  
    int T, X, Y;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    while(T--) {
        // Read X and Y for each test case
        scanf("%d %d", &X, &Y);
        
        // Calculate the total working hours
        int total_hours = 4 * X + Y;
        
        // Print the result
        printf("%d\n", total_hours);
    }
    return 0;
}