#include <stdio.h>

int main()
{

    float distanceX; // Variabel yang menyimpan Jarak KM

    while (1)
    {
        printf("Masukkan jarak dalam kilometer: ");
        scanf("%f", &distanceX); // Menyimpan hasil value User Input dan mengalokasikanya kepada variabel distanceX

        float meter = distanceX * 1000;        // 1 km = 1000 m
        float sentimeter = distanceX * 100000; // 1 km = 100000 cm

        printf("\n%.0f Kilometer dalam Meter adalah = %.0f Meter\n%.0f Kilometer dalam Sentimeter is = %.0f Sentimeter\n\n", distanceX, meter, distanceX, sentimeter);

        // Membersihkan buffer input
        while (getchar() != '\n')
            ;

        printf("Tekan Enter untuk mengulang program atau Ctrl+C untuk keluar...\n");
        getchar(); // Menunggu tombol Enter ditekan
    }

    return 0;
}
