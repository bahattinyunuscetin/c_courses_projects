#include <stdio.h>

int main() {
    float pressure, constantR = 0.082; // Gaz sabiti (L·atm)/(mol·K)
    int numberOfMoles, volume, temperature;

    // Kullanıcıdan giriş alınması
    printf("Kabın hacmini giriniz (L): ");
    scanf("%d", &volume);

    printf("Kaptaki mol sayısını giriniz: ");
    scanf("%d", &numberOfMoles);

    printf("Ortam sıcaklığını giriniz (K): ");
    scanf("%d", &temperature);

    // Basınç hesaplaması
    pressure = (numberOfMoles * constantR * temperature) / volume;

    // Sonuçların ekrana yazdırılması
    printf("%d L hacmindeki kaptaki gazın basıncı: %.2f atm\n", volume, pressure);

    return 0;
}
