#include<stdio.h>
#include<conio.h>

void main()
{
int i,f[20],n[50],div[50],j,temp,quotient[20],z[10],any,end,lo,g[10],dif,nf[10],k,sum[20],c,new[50],v[50];
printf("enter max length of message\n");
scanf("%d",&any);
printf("value of r\n");
scanf("%d",&lo);
end= any + lo;


printf("enter the number\n");
for(i=0;i<any;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<any;i++)
{
    v[i]=n[i];
}



printf("enter the divisor\n");
for(i=0;i<lo+1;i++)
{
scanf("%d",&div[i]);
}


for(i=any;i<end;i++)
{
n[i]=0;
}
for(i=0;i<any;i++)
{
temp=i;
if(n[i]==1)
{
for (j=0;j<lo;j++)
{
if (n[temp]==div[j])
{n[temp]=0;
f[j]=0;}
else
{n[temp]=1;
f[j]=1;}
temp=temp+1;

}
quotient[i]=1;
}
else
quotient[i]=0;
}

printf("\n and the remainder is \n ");
for(j=0;j<lo;j++)
{
printf("%d",f[j]);
}


printf("\n and crc is:");
for(i=0;i<any;i++)
{
    printf("%d",v[i]);
}
for(j=0;j<lo;j++)
{
printf("%d",f[j]);
}
  
  
  int merge[70];
    
    for(i=0; i<any; i++)
    {
        merge[i] = v[i];
    }
    k = i;
    
    for(i=0; i<lo; i++)
    {
        merge[k] = f[i];
        k++;
    }
    printf("\nThe CRC code is:\n");
    for(i=0; i<k; i++)
        printf("%d ", merge[i]);
    getch();

    
int temp1, e[30];


for(i=0;i<end;i++)
{
temp1=i;
if(merge[i]==1)
{
for (j=0;j<lo;j++)
{
if (merge[temp1]==div[j])
{merge[temp1]=0;
e[j]=0;}
else
{merge[temp1]=1;
e[j]=1;}
temp1=temp1+1;

}
quotient[i]=1;
}
else
quotient[i]=0;
}

printf("\n and the remainder is \n ");
for(j=0;j<lo;j++)
{
printf("%d",e[j]);
}

return 0;
}