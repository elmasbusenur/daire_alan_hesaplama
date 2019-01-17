#include <stdio.h>
#include <stdlib.h>

/*Calculate the area of a circle
with given radius*/
int main() {
	
	int r;
	printf("Dairenin alanini hesaplama\n");
	printf("Yaricap giriniz:");
	scanf("%d", &r);
	float alan;
	alan=3.14*r*r;
	printf("Alan=%f", alan);
	return 0;
}
