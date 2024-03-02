#include <stdio.h>

int main() {
    int jumlahTransaksi, nominal;

    printf("Masukan jumlah transaksi: ");
    scanf("%d", &jumlahTransaksi);

    if (jumlahTransaksi <= 0) {
        printf("Tidak ada transaksi hari ini");
        return 0;
    }

    int totalNominal = 0;

    for (int i = 0; i < jumlahTransaksi; i++) {
        printf("Masukkan nominal: ");
        scanf("%d", &nominal);
        totalNominal += nominal;
    }

    printf("Total pengeluaran: %d\n", totalNominal);

    return 0;
}