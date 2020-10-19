#include<stdio.h>

int main(){
	float a,b,hasil;
	int aritmatika;
	char operator;

	printf("selamat datang di program kalkulator sederhana");

	//memasukkan nilai
	printf("\nmasukkan bilangan pertama = ");
	scanf("%f",&a);
	printf("(+)= 1\n(-)= 2\n(x)= 3\n(:)= 4");
	printf("\nmasukkan operasi hitung (+,-,x,:) dengan kode diatas ");
	scanf("%d",&aritmatika);
	printf("masukkan bilangan kedua = ");
	scanf("%f",&b);

	if(aritmatika == 1){
		hasil = a + b;
		operator = '+';
	}else if(aritmatika == 2){
		hasil = a - b;
		operator = '-';
	}else if(aritmatika == 3){
		hasil = a*b;
		operator = 'x';
	}else if(aritmatika == 4){
		hasil = a/b;
		operator = ':';
	}else{
		printf("operator hitung tidak ditemukan");
	}

	printf("\nhasil perhitungan\n");
	printf("%.2f %c %.2f = %.2f",a,operator,b,hasil);
	printf("\nprogram selesai");
	return 0;
}