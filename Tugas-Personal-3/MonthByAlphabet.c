#include <stdio.h>
#include <string.h>

int isVowel(char c)
{
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; i < strlen(vowels); i++)
    {
        if (c == vowels[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char input;
    char *months[] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli",
                      "Agustus", "September", "Oktober", "November", "Desember"};

    printf("Masukkan huruf (A-Z): ");
    scanf(" %c", &input);

    printf("Bulan-bulan yang dimulai dengan huruf '%c':\n", input);
    int found = 0;
    for (int i = 0; i < 12; i++)
    {
        if (months[i][0] == input || months[i][0] == input + 32 || months[i][0] == input - 32)
        {
            printf("- %s\n", months[i]);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Tidak ada bulan yang dimulai dengan huruf '%c'.\n", input);
        return 0;
    }

    char selectedMonth[20];
    printf("Pilih salah satu bulan di atas: ");
    scanf(" %[^\n]", selectedMonth);

    int vowelCount = 0;
    int nonVowelCount = 0;

    for (int i = 0; i < strlen(selectedMonth); i++)
    {
        if (isVowel(selectedMonth[i]))
        {
            vowelCount++;
        }
        else if (selectedMonth[i] != ' ')
        {
            nonVowelCount++;
        }
    }

    printf("Jumlah karakter vokal dalam bulan: %d\n", vowelCount);
    printf("Jumlah karakter nonvokal dalam bulan: %d\n", nonVowelCount);

    return 0;
}