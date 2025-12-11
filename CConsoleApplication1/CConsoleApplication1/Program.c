

#include <stdio.h>
#include<string.h>
struct thuCung
{
    char maThuCung[100];
    char tenThuCung[50];
    int namSinh;
    int tuoi;
};
void thongTinThuCung()
{
    struct thuCung TC[100];

    for (int i = 0; i < 3; i++)
    {
        while (getchar() != '\n');
        printf("nhap ma thu cung\n");
        fgets(TC[i].maThuCung, sizeof(TC[i].maThuCung), stdin);
        printf("nhap ten thu cung\n");
        fgets(TC[i].tenThuCung, sizeof(TC[i].tenThuCung), stdin);
        printf("nhap nam sinh\n");
        scanf("%d", &TC[i].namSinh);
        TC[i].tuoi = 2025 - TC[i].namSinh;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("ma thu cung\n");
        puts(TC[i].maThuCung);
        printf("tenThuCung\n");
        puts(TC[i].tenThuCung);
        printf("nam sinh: %d\n", TC[i].namSinh);
        printf("tuoi: %d\n", TC[i].tuoi);
    }


}
void tinhTong()
{
    int N;

    int sum = 0;



    do {

        printf("Nhap mot so nguyen duong lon hon 3: ");

        scanf("%d", &N);

        if (N <= 3) {

            printf("So nhap vao phai lon hon 3. Moi nhap lai.\n");

        }

    } while (N <= 3);



    for (int i = 1; i <= N; i++) {

        if (i % 2 != 0) {

            sum += i;

        }

    }



    printf("Tong cac so le tu 1 den %d la: %d\n", N, sum);


    if (N % 5 == 0) {

        printf("kiem tra so %d chia het cho 5.\n", N);

    }

    else {

        printf("kiem tra so % d khong chia het cho 5.\n", N);

    }
}
void thongTinCuaHang()
{
    int n;// so luong thu cung
    int array[50];//can nang thu cung




}





void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
        case 1:
            thongTinThuCung();
            break;
        case 2:
            tinhTong();
            break;
        case 3:
            thongTinCuaHang();
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
        printf("\n===== MENU =====\n");
        printf("1. thong tin thu cung\n");
        printf("2. tinh tong \n");
        printf("3. thong tin cua hang\n");
        printf("0.thoat\n");
        printf("Hay chon CN [0-3]: ");
        scanf("%d", &chonChucNang);
        lapChucNang(chonChucNang);
    } while (chonChucNang != 0);
}

