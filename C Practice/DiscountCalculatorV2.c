#include <stdio.h>

int main()
{
    float harga[100];
    float totalHarga = 0;
    int totalBelanja = 0;
    float diskon = 0.0;
    float jumlahDiskon = 0.0;
    float persentaseDiskon = 0.0;
    char opsi;

    printf("\n=====================================\n");
    printf("\033[0;32mPROGRAM PENGHITUNG DISKON UNTUK KASIR\033[0m\n");
    printf("=====================================\n\n");

    for (int i = 0; i < 100; i++)
    {
        printf("Masukkan total belanja anda: Rp.");
        scanf("%f", &harga[i]);
        printf("Belanja lagi? (Y/N): ");
        scanf(" %c", &opsi);

        totalHarga += harga[i];
        totalBelanja++;

        if (opsi == 'N' || opsi == 'n')
        {
            break;
        }
    }

    if (totalHarga >= 250000 && totalHarga < 550000)
    {
        diskon = 0.1;
    }
    else if (totalHarga >= 550000 && totalHarga < 1000000)
    {
        diskon = 0.2;
    }
    else if (totalHarga >= 1000000)
    {
        diskon = 0.3;
    }

    if (totalBelanja >= 4)
    {
        diskon += 0.2;
    }

    jumlahDiskon = totalHarga * diskon;
    float hargaAkhir = totalHarga - jumlahDiskon;
    persentaseDiskon = diskon * 100;

    printf("\n=====================================\n\n");
    printf("Detail Transaksi:\n");
    printf("Harga total: Rp.%.2f\n", totalHarga);
    printf("Diskon yang di peroleh: %.2f%%\n", persentaseDiskon);
    printf("Potongan harga sebesar: Rp.%.2f\n\n", jumlahDiskon);
    printf("=====================================\n\n");
    printf("Harga yang harus dibayar: Rp.%.2f", hargaAkhir);

    return 0;
}
