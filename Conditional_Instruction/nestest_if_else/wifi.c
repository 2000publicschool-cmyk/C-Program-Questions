```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ssid[100] = "";
    char command[200];
    char line[300];
    FILE *fp;
    int found = 0;

    /* Get connected Wi-Fi information */
    system("netsh wlan show interfaces > wifi.txt");

    fp = fopen("wifi.txt", "r");

    if (fp == NULL)
    {
        printf("Error reading Wi-Fi information.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        if (strstr(line, " SSID") != NULL &&
            strstr(line, "BSSID") == NULL)
        {
            char *p = strchr(line, ':');

            if (p != NULL)
            {
                p++;
                while (*p == ' ')
                    p++;

                p[strcspn(p, "\r\n")] = '\0';

                if (strlen(p) > 0)
                {
                    strcpy(ssid, p);
                    found = 1;
                    break;
                }
            }
        }
    }

    fclose(fp);

    if (!found)
    {
        printf("No connected Wi-Fi network found.\n");
        return 0;
    }

    printf("Connected Wi-Fi: %s\n", ssid);

    printf("\nUse Windows Wi-Fi settings to view "
           "the saved password for this network.\n");

    sprintf(command, "start ms-settings:network-wifi");
    system(command);

    return 0;
}
```
