#include <stdio.h>

int main()
{
    int a;
    int sum=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(i%5==0&&i%10==5&&i/5!=1) {
            sum=sum+i;
        }
    }
     printf("%d\n",sum);

    return 0;
}
#include <stdio.h>

int main()
{
    int a;
    int sum=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(i/10==7&&i%2!=0) {
            sum=sum+i;
        }
    }
     printf("%d\n",sum);

    return 0;
}

#include <stdio.h>

int main()
{
    int a,b;
    int sum=0;
    scanf("%d",&a);
    loop:if(a!=0)
    {
        b = a%10;
        sum=sum+1;
        a=a/10;
        goto loop;
    }
     printf("%d\n",sum);

    return 0;
}

#include <stdio.h>

int main()
{
    int a,b;
    int sum=0;
    scanf("%d",&a);
    loop:if(a!=0)
    {
        b = a%10;
        sum=sum+b;
        a=a/10;
        goto loop;
    }
     printf("%d\n",sum);

    return 0;
}
reverse 12345-->>54321
#include <stdio.h>

int main()
{
    int a,b;
    int sum=0;
    scanf("%d",&a);
    int temp=a;
    abc:if(a!=0)
    {
        b = a%10;
        sum=sum+1;
        a=a/10;
        goto abc;
    }
    int c=temp%10;
    printf("%d\n",sum);
    printf("%d\n",b);
    printf("%d\n",c);
    int d,e,f,g,h,m;
    d=1;
    e=1;
    ab:if(d<sum)
    {
        e=e*10;
        d++;
        goto ab;
    }
    printf("%d\n",e);
    int ans=0;
    dh:if(temp!=0)
    {
         c=temp%10;
         f=e*c;
         ans=ans+f;
         temp=temp/10;
         e=e/10;
         goto dh;
         
    }
    printf("%d\n",ans);
    
    return 0;
}

123456-->>623451
#include <stdio.h>

int main()
{
    int a,b;
    int sum=0;
    scanf("%d",&a);
    int temp=a;
    abc:if(a!=0)
    {
        b = a%10;
        sum=sum+1;
        a=a/10;
        goto abc;
    }
    int c=temp%10;
    printf("%d\n",sum);
    printf("%d\n",b);
    printf("%d\n",c);
    int d,e,f,g,h,m;
    d=1;
    e=1;
    ab:if(d<sum)
    {
        e=e*10;
        d++;
        goto ab;
    }
    printf("%d\n",e);
    int ans;
    dh:if(temp!=0)
    {
         c=temp%10;
         f=e*c;
         h=(temp%e);
         g=(h/10)*10;
         m=temp/e;
         ans=f+g+m;
         
    }
    printf("%d\n",ans);
    
    return 0;
}
56-->>56 555-->>455
#include <stdio.h>

int main()
{
    int a,b;
    int sum=0;
    scanf("%d",&a);
    int temp=a;
    loop:if(a!=0)
    {
        b=a%10;
        sum=sum+1;
        a=a/10;
        goto loop;
        
    }
    printf("%d\n",sum);
    int d=1;
    int e=1;
    ab:if(d<sum)
        {
            e=e*10;
            d++;
            goto ab;
        }
        printf("%d\n",e);
        int ans=0;
       // printf("%d\n",temp);
     if(temp%2!=0)
        {
            int c=(temp/e);
            int s=(c-1)*e;
            int d=(temp%e);
            ans=s+d;
            printf("%d\n",ans);
        }
        else
        {
            printf("%d\n",temp);
        }
}
// You are using GCC
#include<stdio.h>
int main()
{
    int a;
    int sum =0;
    scanf("%d",&a);
    int t = a;
    while(a!=0)
    {
        int b = a%10;
        sum+=1;
        a=a/10;
    }
   // printf("%d\n",sum);
    int d = 2;
    int e = 1;
    while(d<=sum)
    {
        e*=10;
        d++;
    }
    //printf("%d\n",e);
    int c = t%e;
    int c1 = c/10;
    printf("%d\n",c1);
    int n = c1/2;
   // printf("%d\n",n);
    int i = 2;
    int s=0;
    while(i<=n)
    {
        if(c1%i==0)
        {
            s++;
            break;
        }
        i++;
    }
    if(s==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
    
}