#include <stdlib.h>
#include <stdio.h>
 
int primo (int n) {
 
for(int m = 2; m < n; m++) {
 
if ( n % m != 0)
continue;
else
return 0;
}
return 1;
}
 
main() {
 
int a;
	printf("Entre com um valor: ");
	scanf("%d", &a);
	printf("%d \n", primo(a));
 
system("pause");
}
