#import<stdio.h>
#import<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	if(t>=1&&t<=100)
	{
	    char arr[t][7];
	    long long sum=1;
	    int len;
	    for(int i=0;i<t;i++)
	        scanf("%s",arr[i]);

	        for(int i=0;i<t;i++)
	        {
	            len=strlen(arr[i]);
	            sum=1;
							if(len!=1){
	                for(int j=0;j<len-1;j++)
	                sum=sum*(arr[i][j]-64)*26;

	                sum=sum+26+arr[i][len-1]-64;

	                printf("%lld\n",sum);
								}
									else
									printf("%d\n",arr[i][0]-64);

	}
	}
	return 0;
}
