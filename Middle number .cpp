#include <stdio.h>
int main()
{int n,j,k,m,t,i,b,q,f;
int a[1000];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
  for(i=1;i<n;i++)
 {
 j=i-1;
 t=a[i];
  while(j>=0&&a[j]>t)
{ 
 a[j+1]=a[j];
j--;  
}
a[j+1]=t;	
	
}
f=0;
for(i=1;i<n-1;i++)
{b=0;q=0;
for(j=0;j<i;j++)
{if(a[j]<a[i])
b++;  
}
for(k=i+1;k<n;k++)
{if(a[k]>a[i])
q++;
}
if(q==b)
{printf("%d",a[i]);
f=1;
break;
}
}
if(f==0)	
printf("-1");
	return 0;
}

