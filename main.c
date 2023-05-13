#include <stdio.h>

// Dizide arama yapan fonksiyon
int linear_search(int dizi[], int n, int aranan) {
    for (int i = 0; i < n; i++) {
        if (dizi[i] == aranan) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, aranan;

    // Dizinin boyutunu ve elemanlarýný kullanýcýdan isteyiniz
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);
    int dizi[n];
    for (int i = 0; i < n; i++) {
        printf("Dizinin %d. elemanýný girin: ", i+1);
        scanf("%d", &dizi[i]);
    }

    // Dizide aranacak olan elemaný kullanýcýdan isteyiniz
    printf("Aranacak elemaný girin: ");
    scanf("%d", &aranan);

    // Aranýlan elemanýn dizide olup olmadýðýnýn kontrolünü yapýn
    int sonuc = linear_search(dizi, n, aranan);
    if (sonuc != -1) {
        printf("Aranan eleman dizide %d. sýrada bulundu.\n", sonuc+1);
    } else {
        printf("Aranan eleman dizide bulunamadý.\n");
    }

    return 0;
}
