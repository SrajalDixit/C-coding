#include<stdio.h>
#include<math.h>
void main(){
    int i, n , m, j, a[50];
    printf("Enter the length of Array: ");
    scanf("%d",&n);
    printf("Enter the first Array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    m=pow(2,n);
    printf("Enter the first Array:%d",  m );
    printf("\nphi");
    for(i=0;i<m;i++){
        for(j=0;j<=n;j++){
            if(i & (1<<j))
            printf("%d", a[j]);
       }
       printf("\n");
    }  

}
