#include<stdio.h>

int main(){
	// Kieu so nguyen: Luu tru cac so nguyen, khong co so thap phan
	int a = 10;
	
	// Kieu so thuc: Luu tru cac so thap phan
	float b = 3.14;
	
	// Kieu so thuc chinh xac cao hon: Luu tru cac so thap phan co do chinh xac cao hon
	double c = 1.23456789;
	
	// Kieu ky tu: Luu tru mot ky tu duy nhat
	char d = 'A';
	
	// In ra các giá tri de kiem tra.
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %lf\n", c);
    printf("d = %c\n", d);
    
	return 0;
}
