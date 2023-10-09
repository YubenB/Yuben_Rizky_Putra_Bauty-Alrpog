#include <stdio.h>

int main()
{
    float nilai[100];
    float totalNilai = 0;
    int totalLooping = 0;
    float nilaiRataRata = 0;
    float nilaiTertinggi = 0;
    float nilaiTerendah = 0;

    printf("\x1b[1;33mMasukan nilai ujian (0 untuk berhenti): \x1b[0m\n\n");

    for (int i = 0; i < 100; i++)
    {
        printf("\x1b[31mMasukan Nilai: \x1b[0m");
        scanf("%f", &nilai[i]);

        if (nilai[i] == 0)
        {
            break;
        }

        totalNilai += nilai[i];
        totalLooping++;
    }
    nilaiRataRata = totalNilai / totalLooping;
    nilaiTertinggi = nilai[0];
    nilaiTerendah = nilai[0];
    for (int i = 1; i < totalLooping; i++)
    {
        if (nilai[i] > nilaiTertinggi)
        {
            nilaiTertinggi = nilai[i];
        }
        if (nilai[i] < nilaiTerendah)
        {
            nilaiTerendah = nilai[i];
        }
    }

    printf("\nNilai Rata Rata: %.2f\nNilai Tertinggi: %.2f\nNilai Terendah: %.2f", nilaiRataRata, nilaiTertinggi, nilaiTerendah);
}