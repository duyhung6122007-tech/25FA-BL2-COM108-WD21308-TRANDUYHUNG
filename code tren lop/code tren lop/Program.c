
#include<string.h>

#include <stdio.h>

void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
}

void uocChungBoiChung()
{
	printf("Uoc Chung Boi Chung");
}
void sapXepPhanTuMang1Chieu()
{
	int integerArray[100] = { 0 };
	int length;
	int tmp; //temperay
	int i;
	printf("nhap so luong phan tu mang:");
	scanf_s("%d", &length);
	printf("nhap du lieu mang %d phan tu\n", length);
	for (i = 0; i < length; i++)
	{
		printf("mang[%d]=", i);
		scanf("%d", &integerArray[i]);
	}
	printf("sap xep tang dan du lieu mang %d phan tu\n", length);
	for (i = 0; i < length - 1; i++)
	{
		if (integerArray[i] > integerArray[i + 1])
		{
			tmp = integerArray[i];
			integerArray[i] = integerArray[i + 1];
			integerArray[i + 1] = tmp;
			i = -1;
		}
	}
	printf("xuat du lieu mang %d phan tu giam dan\n", length);
	for (i = length - 1;i > -1;  i--)
	{
		printf("mang[%d] = %d\n", i, integerArray[i]);
	}
	printf("xuat du lieu mang %d phan tu tang dan\n", length);
	for (i = 0; i < length; i++)
	{
		printf("mang[%d] = %d\n", i, integerArray[i]);
	}
}
void mangKyTu()
{
	char kyTu = 'A';
	//string-"string.h"
	char mangKyTu[10] = { "Anh" };
	for (int i = 0; i < 3; i++)
	{
		scanf_s(" %c", &mangKyTu[i]);
		if (mangKyTu[i] == '.')
		{
			break;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%c", mangKyTu[i]);
	}
	printf("\n");
}
void deMoMang2Chieu()
{
	int array[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("mang[%d][%d]=", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d,", array[i][j]);
		}
		printf("\n");
	}
}
void deMoString()
{
	char mangKyTu[50];
//fgets mangkytu	

	while (getchar() != '\n')

    printf("nhap du lieu ky tu: ");
    printf("nhap du lieu ky tu: ");
	

	fgets(mangKyTu, sizeof(mangKyTu), stdin);

	printf("%s", mangKyTu);

	printf("\n");
	
	printf("String Length:");
	printf("%d",strlen(mangKyTu)-1);
	printf("\n");

	printf("String Compare The Same As:");
	printf("%d", strcmp("aBc","aBc"));
	printf("\n");
	printf("String Compare Less Than:");
	printf("%d", strcmp("A","B"));
	printf("\n");
	printf("String Compare Greater Than:");
	printf("%d", strcmp("B","A"));
	printf("\n");

	printf("String Reverse:(Encryption)");
	printf("%s", _strrev(mangKyTu));
	printf("\n");
	printf("String Reverse:(cryption)");
	printf("String Reverse:(DEcryption)");
	printf("%s", _strrev(mangKyTu));
	printf("\n");

	/*printf("String Lower ");
	printf("%s", _strlwr(mangKyTu));
	printf("\n");

	printf("String Upper ");
	printf("%s", _strupr(mangKyTu));
	printf("\n");

	printf("Find String in string ");
	if (strstr(mangKyTu, "A") != NULL)
	{
			printf("Found:");
			printf("%s", strstr(mangKyTu, "A"));
	}
	else
	{
		printf("NOT FOUND");

	}
	printf("\n");*/
}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocChungBoiChung();
			break;
		case 3:
			sapXepPhanTuMang1Chieu();
			break;
		case 4:
			deMoMang2Chieu();
			break;
		case 5:
			deMoString();
			break;
		case 7:
			mangKyTu();
			break;
		case 0:
			return;
		default:
			printf("Hay chon lai [0-3]");
			break;
		}

		printf("\n");
		printf("Tiep tuc CN nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. TEN chuc nang 2");
		printf("\n");
		printf("3.sap xep mang du lieu 1 chieu ");
		printf("\n");
		printf("4.mang 2 chieu ");
		printf("\n");
		printf("5.de mo string ");
		printf("6.3");
		printf("\n");
		printf("Hay chon CN [0-5]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}

// GV: AnhTT184