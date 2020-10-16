#include <stdio.h>
int main(){
	int jumlah, total, p, l, t;
	
	printf("Masukkan jumlah kotak yang ingin diangkut...\n");
	scanf("%i", &jumlah);
	int volume[jumlah];
	total = 0;
	for (int i = 0; i < jumlah; i++)
	{
		
		printf("Masukkan panjang, lebar, tinggi kotak... (beri spasi pada tiap input)\n");
		scanf("%i %i %i", &p, &l, &t);
		
		if (t < 41)
		{
			volume[i] = p*l*t;
			total = total + 1;
		}
	}

	printf("Total kotak = %i\n",jumlah );
	printf("Kotak yang bisa diangkut = %i\n",total );
	for (int j = 0; j < jumlah ; j++)
	{
		if (volume[j] > 0)
		{
			printf("Volume kotak ke-%i = %i\n",j+1, volume[j]);
		}
		else {
			printf("Kotak ke-%i tidak bisa diangkut karena melebihi tinggi terowongan\n",j+1);
		}
	}
	return 0;
}
