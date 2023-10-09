#include <stdio.h>

int main()
{
    float harga, totalHarga = 0;
    int jumlahBelanja = 1;
    char opsi;
    float diskon;
    float persentaseDiskon;
    float jumlahDiskon;

    printf("\n=====================================\n");
    printf("\033[0;32mPROGRAM PENGHITUNG DISKON UNTUK KASIR\033[0m\n");
    printf("=====================================\n\n");

    do
    {
        printf("Masukkan total harga: Rp.");
        scanf("%f", &harga);

        if (harga >= 250000 && harga < 550000)
        {
            diskon = 0.1;
        }
        else if (harga >= 550000 && harga < 1000000)
        {
            diskon = 0.2;
        }
        else if (harga >= 1000000)
        {
            diskon = 0.3;
        }
        else
        {
            diskon = 0.0;
        }

        if (jumlahBelanja >= 4) // Cek apakah jumlah belanja lebih dari atau sama dengan 4
        {
            diskon += 0.2;     // Tambahkan diskon tambahan 20%
            jumlahBelanja = 0; // Reset jumlah belanja
            diskon == 0.0;     // Reset diskon menjadi 0 lagi agar diskon 20% tidak tersimpan di pembelanjaan berikutnya
        }

        jumlahDiskon = harga * diskon;
        totalHarga = harga - jumlahDiskon;
        persentaseDiskon = diskon * 100;
        if (diskon > 0)
        {
            printf("Selamat Anda mendapat diskon sebesar: %.2f%%\n", persentaseDiskon);
            printf("Potongan harga yang diperoleh: Rp.%.2f\n", jumlahDiskon);
        }
        if (jumlahBelanja == 0)
        {
            printf("Sudah berapa kali belanja dalam sebulan: 4\n\n");
        }
        else
        {
            printf("Sudah berapa kali belanja dalam sebulan: %d\n\n", jumlahBelanja);
        }
        printf("\033[1;33mJumlah belanja yang harus dibayar: Rp.%.2f\033[0m\n\n", totalHarga);
        printf("==========================================\n");
        printf("TERIMA KASIH TELAH BERBELANJA DI TOKO KAMI\n");
        printf("==========================================\n\n");

        jumlahBelanja++;

        printf("Apakah anda ingin pergi berbelanja lagi? (Y/N): ");
        scanf(" %c", &opsi);

        if (opsi != 'y' && opsi != 'Y' && opsi != 'n' && opsi != 'N')
        {
            printf("\033[0;31mWARNING: PERINTAH TIDAK VALID. HANYA MASUKAN 'Y'/'N'.\033[0m\n\n");
        }

    } while (opsi == 'y' || opsi == 'Y');

    return 0;
}
