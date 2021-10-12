#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

char pass[10], encryp[31];
char character[] = "abcdefghijklmnopqrstuvwxyz!@#$%^&*?ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char* pas = pass, * encryp_pas = encryp;
int num, i;

int main() {
    srand(time(NULL));
    printf("Password;");
    for (int i = 0; i < 10; i++) {
        pass[i] = _getch();
        printf("*");
    }


    for (int i = 0; i < 30; i++) {
        num = rand() % 59 + 1;

        switch (i) {
        case 1: *(encryp_pas + 1) = *(pas); break; //PASSWORD ต่ำแหน่งที่ 0 อยู่ใน encrypt ต่ำแหน่งที่ 1
        case 2: *(encryp_pas + 2) = *(pas + 1); break;
        case 3: *(encryp_pas + 3) = *(pas + 2); break;
        case 5: *(encryp_pas + 5) = *(pas + 3); break;
        case 7: *(encryp_pas + 7) = *(pas + 4); break;
        case 11:*(encryp_pas + 11) = *(pas + 5); break;
        case 13:*(encryp_pas + 13) = *(pas + 6); break;
        case 17:*(encryp_pas + 17) = *(pas + 7); break;
        case 19:*(encryp_pas + 19) = *(pas + 8); break;
        case 23:*(encryp_pas + 23) = *(pas + 9); break;
        default: *(encryp_pas + i) = character[num];
        }

    }



    printf("\nYour Password:%s\n", pass);
    printf("Encrypt:%s", encryp_pas);

    return 0;
}