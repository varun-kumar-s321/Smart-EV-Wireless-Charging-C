#include <stdio.h>
#include <unistd.h>   // for sleep()

#define STOP_CHARGE 80   // Battery full level

int main()
{
    int irSensor;       // 1 = EV detected, 0 = No EV
    int battery;        // Battery percentage

    int charging = 0;   // Wireless charging
    int redLED = 0;     // Charging indicator
    int greenLED = 0;   // Station free indicator

    while (1)
    {
        printf("\n--- SMART EV WIRELESS CHARGING SYSTEM ---\n");

        printf("IR Sensor (1 = EV Near Station, 0 = No EV): ");
        scanf("%d", &irSensor);

        printf("Battery Level (0-100 %%): ");
        scanf("%d", &battery);

        /* Control Logic */
        if (irSensor == 1 && battery < STOP_CHARGE)
        {
            charging = 1;
            redLED = 1;
            greenLED = 0;
        }
        else
        {
            charging = 0;
            redLED = 0;
            greenLED = 1;
        }

        /* Output Status */
        printf("\n--- SYSTEM STATUS ---\n");

        printf("EV Detection   : %s\n",
               irSensor ? "EV PRESENT" : "NO EV");

        printf("Battery Level  : %d %%\n", battery);

        printf("Wireless Charging : %s\n",
               charging ? "ON" : "OFF");

        printf("RED LED   (Charging Zone) : %s\n",
               redLED ? "ON" : "OFF");

        printf("GREEN LED (Station Free)  : %s\n",
               greenLED ? "ON" : "OFF");

        printf("---------------------------------\n");

        sleep(3);   // Delay for simulation
    }

    return 0;
}
