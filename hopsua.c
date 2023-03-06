#include<stdio.h>
#include<conio.h>

struct HopSua
{
    int Ngay ;
    float TrongLuong;
    char NhanHieu;
};
typedef struct HopSua HOPSUA;

void NhapHopSua(HOPSUA &h)
{
    printf("Nhap ngay : \n");
    scanf("%d", &h.Ngay);

    
    printf("Nhap vao nhan hieu: \n");
    scanf("%d", &h.NhanHieu);

    printf("Nhap vao trong luong: \n");
    scanf("%f", &h.TrongLuong);
}

void XuatHopSua(HOPSUA h)
{
    printf("Ngay: %d\n", h.Ngay);
    printf("NhanHieu: %s\n", h.NhanHieu);
    printf("TrongLuong: %.2f (kg^2)\n", h.TrongLuong);
}

int main()
{
    HOPSUA h1;
    NhapHopSua(h1);
    XuatHopSua(h1);

    getch();
    return 0;
}