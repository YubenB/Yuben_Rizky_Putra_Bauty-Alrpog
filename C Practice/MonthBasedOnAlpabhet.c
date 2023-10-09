#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char alphabet;
    char bulan[][10] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    int jumlahVokal = 0, jumlahNonVokal = 0;

    printf("Masukkan huruf dari A-Z: ");
    scanf(" %c", &alphabet);

    printf("Bulan yang berawalan dari huruf '%c' adalah:\n", alphabet);

    for (int i = 0; i < 12; i++)
    { // Check if the starting letter of the month matches the alphabet variable value, ignoring lower/upper case
        if (tolower(alphabet) == tolower(bulan[i][0]))
        {
            printf("- %s\n", bulan[i]);
            for (int j = 0; j < strlen(bulan[i]); j++) // Iterate through each character in the month name
            {
                char ch = tolower(bulan[i][j]);
                if (ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o') // Check if the character is a vowel (a, i, u, e, o)
                {
                    jumlahVokal++;
                }
                else if (isalpha(ch)) // Check if the character is a letter (non-vowel)
                {
                    jumlahNonVokal++;
                }
            }
        }
    }

    printf("\nJumlah karakter vokal (a,i,u,e,o) dalam bulan-bulan tersebut: %d\n", jumlahVokal);
    printf("Jumlah karakter nonvokal dalam bulan-bulan tersebut: %d\n", jumlahNonVokal);

    return 0;
}