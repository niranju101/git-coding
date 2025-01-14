

	#include<stdio.h>
	int main()
	{
  		int i,j,m1,m2,m3,a[50],b[50],c[100],temp;
  		printf("enter the size of an array\n");
   		scanf("%d",&m1);
   		printf("enter the first array elements\n");
		for(i=0;i<m1;i++)
	{
  		scanf("%d",&a[i]);
	}
		printf("enter the size of second array\n");

		scanf("%d",&m2);

		printf("enter the elements of second array\n");
		for(i=0;i<m2;i++)
	{
		scanf("%d",&b[i]);
	}
  		m3=m1+m2;
 		for(i=0;i<m1;i++)
  		c[i]=a[i];
		for(i=0;i<m2;i++)
   		c[i+m1]=b[i];
  		printf("merged array is");
		for(i=0;i<m3;i++)
   		printf("%d",c[i]);
		printf("sorted array is");
		for(i=0;i<m3;i++)
		for(j=i+1;j<m3;j++)
	{
   		if(c[i]>c[j])
 	{
    		temp=c[i];
   		 c[i]=c[j];    
    		c[j]=temp;
  	}
	}
		for(i=0;i<m3;i++)
	{
   		printf("%d",c[i]);
	}
 		return 0;
	}

