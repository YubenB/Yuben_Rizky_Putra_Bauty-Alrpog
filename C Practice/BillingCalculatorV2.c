#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

double calculateDiscount(double playTimeInHours, double totalPrice)
{
    if (playTimeInHours > 10)
    {
        return totalPrice * 0.25;
    }

    if (playTimeInHours > 8)
    {
        return totalPrice * 0.2;
    }

    if (playTimeInHours > 6)
    {
        return totalPrice * 0.15;
    }

    if (playTimeInHours > 4)
    {
        return totalPrice * 0.1;
    }

    return 0;
}

double calculatePrice(double playTimeInHours)
{
    const double hourlyRate = 10000.0;
    return playTimeInHours * hourlyRate;
}

int main()
{
    char inputStartTime[128], inputEndTime[128];
    char modifiedStartTime[128], modifiedEndTime[128];
    struct tm startTime;
    struct tm endTime;

    printf("Masukan jam mulai dengan format YYYY/MM/DDTHH:MM:SS: ");
    scanf("%s", inputStartTime);

    // Replace 'T' with a space for inputStartTime
    strcpy(modifiedStartTime, inputStartTime); // Copy input to modified variable
    char *tPtr = strchr(modifiedStartTime, 'T');
    if (tPtr != NULL)
    {
        *tPtr = ' ';
    }

    if (strptime(modifiedStartTime, "%Y/%m/%d %H:%M:%S", &startTime) == NULL)
    {
        fprintf(stderr, "Error parsing date string\n");
        return 1;
    }

    time_t tStart = mktime(&startTime);
    if (tStart == -1)
    {
        fprintf(stderr, "Error converting date\n");
        return 1;
    }

    printf("Masukan jam selesai dengan format YYYY/MM/DDTHH:MM:SS: ");
    scanf("%s", inputEndTime);

    // Replace 'T' with a space for inputEndTime
    strcpy(modifiedEndTime, inputEndTime); // Copy input to modified variable
    char *endPtr = strchr(modifiedEndTime, 'T');
    if (endPtr != NULL)
    {
        *endPtr = ' ';
    }

    if (strptime(modifiedEndTime, "%Y/%m/%d %H:%M:%S", &endTime) == NULL)
    {
        fprintf(stderr, "Error parsing date string\n");
        return 1;
    }

    time_t tEnd = mktime(&endTime);
    if (tEnd == -1)
    {
        fprintf(stderr, "Error converting date\n");
        return 1;
    }

    double playTimeInSeconds = difftime(tEnd, tStart);
    double playTimeInHours = floor(playTimeInSeconds / 3600.0);
    double totalPrice = calculatePrice(playTimeInHours);
    double discount = calculateDiscount(playTimeInHours, totalPrice);
    double finalAmount = totalPrice - discount;

    printf("Mulai bermain pada jam           : %s", asctime(&startTime));
    printf("Selesai bermain pada jam         : %s", asctime(&endTime));
    printf("Lama bermain (dalam jam)         : %.1f\n", playTimeInHours);
    printf("Harga billing                    : %.2f\n", totalPrice);
    printf("Discount                         : %.2f\n", discount);
    printf("Harga Billing Yang Harus Dibayar : %.2f\n", finalAmount);
    return 0;
}