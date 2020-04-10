#include <stdio.h>
int main() {
	int a[20], n, k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
		scanf("%d", &a[i]);

	for (int i = 0; i < 3; i++){
			scanf("%d",&k);
			if(k<=a[0]){				for (int z = n - 1; z >= 0; z--)
					a[z + 1] = a[z];
					n++;
			a[0]=k;
			}
		for (int j = 0; j < n; j++){
			if (a[j] < k && k <= a[j + 1]){
				for (int z = n - 1; z > j; z--)
					a[z + 1] = a[z];
				a[j + 1] = k;
				n++;
				break;
			}
		}	
							
	for (int g = 0; g < n; g++) 
	printf("%d", a[g]);	
	}
	

}