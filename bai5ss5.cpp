#include <stdio.h>

int main() {
    int ngay, thang;

    printf("ngay sinh ");
    scanf("%d", &ngay);
    printf("thang sinh: ");
    scanf("%d", &thang);

    if ((thang == 3 && ngay >= 21) || (thang == 4 && ngay <= 19)) {
        printf("cung bach duong\n");
    } else if ((thang == 4 && ngay >= 20) || (thang == 5 && ngay <= 20)) {
        printf("cung kim nguu\n");
    } else if ((thang == 5 && ngay >= 21) || (thang == 6 && ngay <= 20)) {
        printf("cung song tu\n");
    } else if ((thang == 6 && ngay >= 21) || (thang == 7 && ngay <= 22)) {
        printf("cung cu giai\n");
    } else if ((thang == 7 && ngay >= 23) || (thang == 8 && ngay <= 22)) {
        printf("cung su tu\n");
    } else if ((thang == 8 && ngay >= 23) || (thang == 9 && ngay <= 22)) {
        printf("cung xu nu\n");
    } else if ((thang == 9 && ngay >= 23) || (thang == 10 && ngay <= 22)) {
        printf("cung thien binh\n");
    } else if ((thang == 10 && ngay >= 23) || (thang == 11 && ngay <= 21)) {
        printf("cung bo cap\n");
    } else if ((thang == 11 && ngay >= 22) || (thang == 12 && ngay <= 21)) {
        printf("cung nhan ma\n");
    } else if ((thang == 12 && ngay >= 22) || (thang == 1 && ngay <= 19)) {
        printf("cung ma ket\n");
    } else if ((thang == 1 && ngay >= 20) || (thang == 2 && ngay <= 18)) {
        printf("cung bao binh\n");
    } else if ((thang == 2 && ngay >= 19) || (thang == 3 && ngay <= 20)) {
        printf("cung song ngu\n");
    } else {
        printf("ko hop le");
    }

}
