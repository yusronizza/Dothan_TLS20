#include <stdio.h>
int main()
{

	int x1, v1, x2, v2, a, b, c;
	char j1[20], j2[20];

	printf("Masukkan nama jangkrik 1... \n");
	scanf("%s", &j1);
	printf("Masukkan nama jangkrik 2... \n");
	scanf("%s", &j2);
	printf("Masukkan posisi awal %s... \n",j1);
	scanf("%i", &x1);
	printf("Masukkan daya lompat %s... \n",j1);
	scanf("%i", &v1);
	printf("Masukkan posisi awal %s... \n",j2);
	scanf("%i", &x2);
	printf("Masukkan daya lompat %s... \n",j2);
	scanf("%i", &v2);
	a = x1;
	b= x2;

if (0 <= x1 < x2 < 1000)
{
	c = 1;
	do{
		a = a + v1;
		b = b + v2;
		c++;

	}
	while( a != b && a < 1000);
	if (a == b)
	{
		printf("YES\n");
		printf("%s dan %s akan bertemu pada lompatan ke %i pada jarak %i \n",j1, j2, c, a);
	}
	else{
		printf("NO\n");
	}
}

return 0;
}	