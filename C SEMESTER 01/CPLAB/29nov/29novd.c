//Write a recursive program to print 1 to n where n will be provided by user.
//Method 2.
#include <stdio.h>
void print_number(int g);
int main()
{
    int n;
    printf("Enter your number n: ");
    scanf("%d", &n);
    print_number(n);
    return 0;
}

void print_number(int g)
    {
        if(g==0)
        {
            return;
        }
        print_number(g-1);
        printf("%d", g);
        
    }