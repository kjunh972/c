#include <stdio.h>
int main(void)
{
    int n;
    int i, j;
 
    printf("출력할 라인 수: ");
    
    scanf_s("%d", &n);
    
    for (i = 0; i < n; i++)
    {
    	
        for (j = 0; j < n; j++)
        {
        	
            printf("* ");
            
        }
        printf("\n");
        
    }
    
    return 0;
} 
