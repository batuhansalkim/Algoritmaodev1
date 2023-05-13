#include <stdio.h>

// Dizide arama yapan fonksiyon
int linear_search(int dizi[], int n, int search) {
    for (int i = 0; i < n; i++) {
        if (dizi[i] == search) {
            return i;
        }
    }
    return -1;
}

int main() {
    int x, search;

    // Dizinin boyutunu ve elemanlarini kullanicidan istiyoruz
    printf("Dizi Kac Boyutlu Olacak ?: ");
    scanf("%d", &x);
    int dizi[x];
    for (int i = 0; i < x; i++) {
        printf("Dizinin %d. elamanini giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }

    // Dizide aranacak olan elemani kullanicidan al
    printf("Aranacak elemani girin: ");
    scanf("%d", &search);

    // Aranan elemanin dizide olup olmadigini kontrol et
    int sonuc = linear_search(dizi, x, search);
    if (sonuc != -1) {
        printf("Aranan eleman dizide %d. sirada bulundu.\n", sonuc+1);
    } else {
        printf("Aranan eleman dizide bulunamadi.\n");
    }

    return 0;
}
