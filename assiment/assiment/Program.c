
#include <stdio.h>
#include<math.h>
#include<string.h>

void kiemTraSoNguyen()
{
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);

    printf("%d la so nguyen.\n", x);

    int soNguyenTo = 1;
    if (x <= 1)
    {
        soNguyenTo = 0;
    }
    else {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                soNguyenTo = 0;
                break;
            }
        }
    }

    if (soNguyenTo)
        printf("%d la so nguyen to.\n", x);
    else
        printf("%d khong phai la so nguyen to.\n", x);

    int laChinhPhuong = 0;
    for (int i = 1; i * i <= x; i++) {
        if (i * i == x) {
            laChinhPhuong = 1;
            break;
        }
    }

    if (laChinhPhuong)
        printf("%d la so chinh phuong.\n", x);
    else
        printf("%d khong phai la so chinh phuong.\n", x);

}

void uocChungBoiChung()
{
    int x;
    int y;
    int tmp;// temperay
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    printf("Nhap so nguyen y: ");
    scanf("%d", &y);
    int a = x;
    int b = y;
    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    int UCLN = a;
    int BSCNN = (x * y) / UCLN;
    printf("Uoc so chung lon nhat (UCLN) cua %d va %d la: %d\n", x, y, UCLN);
    printf("Boi so chung nho nhat (BSCNN) cua %d va %d la: %d\n", x, y, BSCNN);
}


void tinhTienKaraoke()
{
    int gioBD, gioKT;
    float tongTien = 0.0;

    printf("Nhap gio bat dau (12 - 23): ");
    scanf("%d", &gioBD);
    printf("Nhap gio ket thuc (12 - 23): ");
    scanf("%d", &gioKT);

    // Ki?m tra gi? h?p l?
    if (gioBD < 12 || gioBD > 23 || gioKT < 12 || gioKT > 23 || gioKT <= gioBD) {
        printf("Gio khong hop le.\n");
        return 0;
    }
    int gioThue = gioKT - gioBD;

    if (gioThue <= 3) {
        tongTien = gioThue * 50000;
    }
    else {
        tongTien = 3 * 50000;
        tongTien += (gioThue - 3) * 50000 * 0.7;
    }

    if (gioBD >= 14 && gioBD <= 17) {
        tongTien *= 0.9;
    }
    printf("Tong tien phai thanh toan: %.0f\n", tongTien);

}

void tinhTienDien()
{
    int kWh;
    double tien = 0.0;

    printf("Nhap so kWh dien da su dung: ");
    scanf("%d", &kWh);

    if (kWh < 0) {
        printf("So kWh khong hop le.\n");
        return 0;
    }
    if (kWh > 0) {
        int bac = kWh < 50 ? kWh : 50;
        tien += bac * 1678;
        kWh -= bac;
    }
    if (kWh > 0) {
        int bac = kWh < 50 ? kWh : 50;
        tien += bac * 1734;
        kWh -= bac;
    }

    if (kWh > 0) {
        int bac = kWh < 100 ? kWh : 100;
        tien += bac * 2014;
        kWh -= bac;
    }

    if (kWh > 0) {
        int bac = kWh < 100 ? kWh : 100;
        tien += bac * 2536;
        kWh -= bac;
    }
    if (kWh > 0) {
        int bac = kWh < 100 ? kWh : 100;
        tien += bac * 2834;
        kWh -= bac;
    }

    if (kWh > 0) {
        tien += kWh * 2927;
    }
    printf("So tien can tra: %.0f dong\n", tien);

}
void chucNangDoiTien()
{
    int tien;
    int menhGia[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };

    printf("Nhap so tien can doi: ");
    scanf("%d", &tien);

    if (tien <= 0) {
        printf("So tien khong hop le.\n");
    }

    printf("Cac menh gia tien:\n");

    for (int i = 1; i < 9; i++)
    {
        if (tien >= menhGia[i]) {
            int soTo = tien / menhGia[i];
            tien = tien % menhGia[i];
            printf("%d to %d\n", soTo, menhGia[i]);
            tien %= menhGia[i];
        }
    }
}
void xayDungChucNangLaiXuat()
{
    double tienVay;
    double laiSuat;
    int kyHan;
    double laiThang;
    double gocThang;
    double tongThang;
    double conLai;

    printf("Nhap so tien muon vay: ");
    scanf("%lf", &tienVay);
    printf("Nhap lai suat hang thang (%%): ");
    scanf("%lf", &laiSuat);
    printf("Nhap ky han vay (thang): ");
    scanf("%d", &kyHan);

    gocThang = tienVay / kyHan;
    conLai = tienVay;

    printf("\n%-5s %-15s %-15s %-15s %-15s\n", "Ky", "Lai phai tra", "Goc phai tra", "Tong phai tra", "So tien con lai");

    for (int i = 1; i <= kyHan; i++) {
        laiThang = conLai * (laiSuat / 100);
        tongThang = laiThang + gocThang;
        conLai -= gocThang;

        printf("%-5d %-15.0lf %-15.0lf %-15.0lf %-15.0lf\n", i, laiThang, gocThang, tongThang, conLai);
    }
}
void vayTienMuaXe()
{
    double soTienVay = 500000000;// trieu
    int thoiHanNam = 24;
    double laiSuatNam = 0.072;
    double phanTramVay;

    printf("Nhap so phan tram vay toi da (0-100): ");
    scanf("%lf", &phanTramVay);

    if (phanTramVay <= 0 || phanTramVay > 100) {
        printf("Gia tri khong hop le.\n");
        return 0;
    }

    double tienTraLanDau = soTienVay * (100 - phanTramVay) / 100;

    double tienVay = soTienVay * phanTramVay / 100;

    int tongThang = thoiHanNam * 12;

    double laiSuatThang = laiSuatNam / 12;

    double tienTraHangThang = tienVay * (laiSuatThang * pow(1 + laiSuatThang, tongThang)) /
        (pow(1 + laiSuatThang, tongThang) - 1);

    printf("Tien tra lan dau: %.0f VND\n", tienTraLanDau);
    printf("Tien tra hang thang: %.0f VND\n", tienTraHangThang);
}
void sapXepThongTinSinhVIen()
{
    struct SinhVien {
        char hoTen[50];
        float diem;
        char hocLuc[20];
    };

    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    struct SinhVien sv[50];

    // Nh?p + x?p lo?i
    for (int i = 0; i < n; i++) {
        printf("\nNhap ho ten sinh vien %d: ", i + 1);
        fgets(sv[i].hoTen, sizeof(sv[i].hoTen), stdin);
        sv[i].hoTen[strcspn(sv[i].hoTen, "\n")] = 0;

        printf("Nhap diem: ");
        scanf("%f", &sv[i].diem);
        getchar();

        if (sv[i].diem >= 9.0)
            strcpy(sv[i].hocLuc, "Xuat sac");
        else if (sv[i].diem >= 8.0)
            strcpy(sv[i].hocLuc, "Gioi");
        else if (sv[i].diem >= 6.5)
            strcpy(sv[i].hocLuc, "Kha");
        else if (sv[i].diem >= 5.0)
            strcpy(sv[i].hocLuc, "Trung binh");
        else
            strcpy(sv[i].hocLuc, "Yeu");
    }

    // S?p x?p gi?m d?n theo ?i?m
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diem < sv[j].diem) {
                struct SinhVien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }

    printf("\n----- DANH SACH SINH VIEN -----\n");
    printf("%-25s %-10s %-15s\n", "Ho Ten", "Diem", "Hoc Luc");

    for (int i = 0; i < n; i++) {
        printf("%-25s %-10.2f %-15s\n", sv[i].hoTen, sv[i].diem, sv[i].hocLuc);
    }


}
void gameFPOLYLOTT()
{
    int a, b;
    printf("Nhap so thu nhat (01-15): ");
    scanf("%d", &a);

    printf("Nhap so thu hai (01-15): ");
    scanf("%d", &b);

    // Sinh s? ng?u nhiên
    srand(time(NULL));
    int x = rand() % 15 + 1;  // 01 - 15
    int y = rand() % 15 + 1;  // 01 - 15

    printf("\nSo trung thuong: %02d  %02d\n", x, y);

    int dem = 0;

    // Ki?m tra trúng s?
    if (a == x || a == y) dem++;
    if (b == x || b == y) dem++;

    // Xu?t k?t qu?
    if (dem == 0)
        printf("Ket qua: Chuc ban may man lan sau!\n");
    else if (dem == 1)
        printf("Ket qua: Chuc mung ban da trung giai NHI!\n");
    else
        printf("Ket qua: Chuc mung ban da trung giai NHAT!\n");
}
void tinhToanPhanSo()
{
    int tu1, mau1, tu2, mau2;

    printf("Nhap tu so thu 1: ");
    scanf("%d", &tu1);

    printf("Nhap mau so thu 1: ");
    scanf("%d", &mau1);

    printf("Nhap tu so thu 2: ");
    scanf("%d", &tu2);

    printf("Nhap mau so thu 2: ");
    scanf("%d", &mau2);

    if (mau1 == 0 || mau2 == 0) {
        printf("Mau so khong hop le (khong duoc bang 0)!\n");
    }

    int tuTong = tu1 * mau2 + tu2 * mau1;
    int mauTong = mau1 * mau2;

    int tuHieu = tu1 * mau2 - tu2 * mau1;
    int mauHieu = mau1 * mau2;

    int tuTich = tu1 * tu2;
    int mauTich = mau1 * mau2;

    int tuThuong = tu1 * mau2;
    int mauThuong = mau1 * tu2;

    printf("Tong: %d/%d\n", tuTong, mauTong);
    printf("Hieu: %d/%d\n", tuHieu, mauHieu);
    printf("Tich: %d/%d\n", tuTich, mauTich);
    printf("Thuong: %d/%d\n", tuThuong, mauThuong);
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
            tinhTienKaraoke();
            break;
        case 4:
            tinhTienDien();
            break;
        case 5:
            chucNangDoiTien();
            break;
        case 6:
            xayDungChucNangLaiXuat();
            break;
        case 7:
            vayTienMuaXe();
            break;
        case 8:
            sapXepThongTinSinhVIen();
            break;
        case 9:
            gameFPOLYLOTT();
            break;
        case 10:
            tinhToanPhanSo();
            break;
        case 0:
            return;
        default:
            printf("Hay chon lai [0-10]");
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
        printf("1. Kiem Tra So Nguyen\n");
        printf("2. Uoc chung & Boi chung cua 2 so\n");
        printf("3. Tinh tien quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5.Chuc nang doi tien\n");
        printf("6.xay dung chuc nang lai xuat\n");
        printf("7.vay tien mua xe\n");
        printf("8.thong tin sinh vien\n");
        printf("9.gameFPOLYLOTT\n");
        printf("10. tinh toan phan so\n");
        printf("0.thoat\n");
        printf("Hay chon CN [0-10]: ");
        scanf("%d", &chonChucNang);
        lapChucNang(chonChucNang);
    } while (chonChucNang != 0);
}