#include <stdio.h>
int main(){
	int n, sum=0;
	printf("enter the number of terms:");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			sum-=i;
		}else{
			sum+=i;
		}
    }
	printf("%d/n", sum);
	return 0;
}
