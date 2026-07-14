
#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum,max;
    sum=0;
    max=0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=i;j<n;j++)
        {
        for(int k=i;k<=j;k++)
        {
            sum+=arr[k];
            }
            if(sum>max)
                max=sum;
                sum=0;
        }
        
    }
   printf("%d\n",max);

    return 0;
}
