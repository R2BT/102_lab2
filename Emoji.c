#include<stdio.h>
int main()
{
    int day,x;
    char name;
    char even_emoji[][50]= {"{@_@}","{*v*}","{x_x}"};
    char odd_emoji[][50]= {"(^_^)","(*0*)","(T_T)"};
    char oddfive_emoji[][50]= {"\\(^_^)/","\\(*0*)/","\\(T_T)/"};
    char evenfive_emoji[][50]= {"\\{@_@}/","\\{*v*}/","\\({x_x}/"};
    scanf("%c",&name);
    x = (int)(name);
    scanf("%d",&day);
    if(day%2!=0)
    {
        if(x%5==0)
        {
            if((x>=65&&x<=73))
                printf("%s",odd_emoji[0]);
            else if((x>=74&&x<=82))
                printf("%s",odd_emoji[1]);
            else if((x>=83&&x<=90))
                printf("%s",odd_emoji[2]);
        }
        else
        {
            if((x>=65&&x<=73))
                printf("%s",oddfive_emoji[0]);
            else if((x>=74&&x<=82))
                printf("%s",oddfive_emoji[1]);
            else if((x>=83&&x<=90))
                printf("%s",oddfive_emoji[2]);
        }
    }
    else
    {
        if(x%5==0)
        {
            if((x>=65&&x<=73))
                printf("%s",even_emoji[0]);
            else if((x>=74&&x<=82))
                printf("%s",even_emoji[1]);
            else if((x>=83&&x<=90))
                printf("%s",even_emoji[2]);
        }
        else
        {
            if((x>=65&&x<=73))
                printf("%s",evenfive_emoji[0]);
            else if((x>=74&&x<=82))
                printf("%s",evenfive_emoji[1]);
            else if((x>=83&&x<=90))
                printf("%s",evenfive_emoji[2]);
        }
    }
    return 0;
}
