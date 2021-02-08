#include<stdio.h>
int main()
{
    int x,y;
    float time,result=0;
    char promotion;
    scanf("%c",&promotion);
    scanf("%f",&time);
    x=time;
    y=time*100;
    y%=100;
    if(promotion == 'A')
    {
        result+=199;
        if(time > 200)
        {
            x-=200;
            result+=x*3;
            result+=y*3/60.0;
        }
    }
    else
    {
        if(promotion == 'B')
        {
            result+=299;
            if(time > 400)
            {
                x-=400;
                result+=x*2;
                result+=y*2/60.0;
            }
        }
    }
    printf("%.2f",result);
    return 0;
}
