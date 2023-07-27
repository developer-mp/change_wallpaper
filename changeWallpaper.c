#include <stdio.h>
#include <Windows.h>

int main()
{
    char path[MAX_PATH];

    printf("Enter path to the picture: ");
    scanf("%s", path);

    if (SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, path, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE))
    {
        printf("Wallpaper has been changed successfully\n");
    }
    else
    {
        printf("Failed to change wallpaper\n");
    }

    return 0;
}