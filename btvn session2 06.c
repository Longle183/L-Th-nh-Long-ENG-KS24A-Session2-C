#include<stdio.h>

int main(){
	float PI = 3.14;
	int banKinh = 3;
	float chuVi = 2 * PI * banKinh;
	float dienTich = PI * banKinh * banKinh;
	printf("Ban kinh hinh tron la : %d\n",banKinh);
	printf("Chu vi hinh tron la : %.2f\n",chuVi);
	printf("Dien tich hinh tron la : %.2f\n",dienTich);
	
	return 0;
}
