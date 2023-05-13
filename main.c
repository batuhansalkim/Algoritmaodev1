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

    // Dizinin boyutunu ve elemanlar�n� kullan�c�dan isteyiniz
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);
    int dizi[n];
    for (int i = 0; i < n; i++) {
        printf("Dizinin %d. eleman�n� girin: ", i+1);
        scanf("%d", &dizi[i]);
    }

    // Dizide aranacak olan eleman� kullan�c�dan isteyiniz
    printf("Aranacak eleman� girin: ");
    scanf("%d", &aranan);

    // Aran�lan eleman�n dizide olup olmad���n�n kontrol�n� yap�n
    int sonuc = linear_search(dizi, n, aranan);
    if (sonuc != -1) {
        printf("Aranan eleman dizide %d. s�rada bulundu.\n", sonuc+1);
    } else {
        printf("Aranan eleman dizide bulunamad�.\n");
    }

    return 0;
}
