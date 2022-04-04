#include <stdio.h>

struct Em_gai 
{
	char *ten;
	int vong_1;
	int *vong_2;
	int *vong_3;
} Tien, *Linh;

void main()
{
	int a = 50;
	struct Em_gai *Lan;
	Tien.ten = "Ghe dit bu";
	Tien.vong_2 = 50;
	Tien.vong_1 = 90;
	Linh = &Tien;
	Tien.vong_3 = 0;
	printf("%d",Linh->vong_1);
	printf("\n%d",Linh->vong_2);
	printf("\n%s",Linh->ten);
	scanf("%d",&Linh->vong_3);
//	printf("%d", Linh->vong_1 + Linh->vong_2 + Linh->vong_3);
}
