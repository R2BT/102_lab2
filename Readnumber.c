#include<stdio.h>
int main()
{
    int i,n;
    long long x,y;
    scanf("%lld",&x);
    y = x;
    if(x != 0)
    {
        for(n=0;y>0;n++)
        {
            y/=10;
        }
        int a[n];
        for(i=0;i<n;i++)
        {
            a[i] = x%10;
            x/=10;
        }
        for(i=n;i>0;i--)
        {
            switch(a[i-1])
            {
            case 0 : printf("Zero");
                     break;
            case 1 : printf("One");
                     break;
            case 2 : printf("Two");
                     break;
            case 3 : printf("Three");
                     break;
            case 4 : printf("Four");
                     break;
            case 5 : printf("Five");
                     break;
            case 6 : printf("Six");
                     break;
            case 7 : printf("Seven");
                     break;
            case 8 : printf("Eight");
                     break;
            case 9 : printf("Nine");
                     break;
            }
            if(i!=1)
                printf("-");
        }
    }
    else
    {
       printf("Zero");
    }

    return 0;
}
