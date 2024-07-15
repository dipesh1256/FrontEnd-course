#include <stdio.h>
int main()
{
	int i,n,ans=1;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{			
		ans =ans * i;
		printf("%d\t",i);
	}
			printf("\n%d",ans);

	return 0;
}
