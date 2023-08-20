#include<stdio.h>
void main()
{
    int n,m,ans1,ans2,ans3,ans=0;
    printf("enter the rows=");
    scanf("%d",&n);
    printf("enter the columb=");
    scanf("%d",&m);
    int arr[n][m];
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<m;l++)
        {
            printf("enter the element =");
            scanf("%d",&arr[k][l]);
        }
    }
    ans1=arr[0][0]*((arr[2][2]*arr[1][1])-(arr[1][2]*arr[2][1]));
    ans2=arr[0][1]*((arr[2][2]*arr[1][0])-(arr[1][2]*arr[2][0]));
    ans3=arr[0][2]*((arr[2][1]*arr[1][0])-(arr[1][1]*arr[2][0]));
    ans=(ans1+ans3)-ans2;
    printf("the answer of this 3 * 3 matrix = %d",ans);

}