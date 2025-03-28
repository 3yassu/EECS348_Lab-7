#include "temperature.h"
#include <stdio.h>
int main(int argc, char *argv[]) {
    float temperature; char scale; char convert; float new_temp; float cels;
    printf("Give me a tempurature value please: "); scanf("%f", &temperature);
    printf("Give me a scale please (C, F, K): "); scanf(" %c", &scale);
    switch (scale){
        case 'F':
            cels = fahrenheit_to_celsius(temperature); break;
        case 'K':
            cels = kelvin_to_celsius(temperature); break;
        case 'C':
            cels = temperature; break;
        default:
            printf("Enter a valid conversion please, options: C, F, K. %c", &scale); return 0;
    }
    if(celsius_to_kelvin(cels) < 0){printf("Invalid number, colder than absolute 0, impossible"); return 0;}
    printf("Choooose the conversion target (C, F, K): "); scanf(" %c", &convert);
    if(convert == scale){printf("Please provide 2 different types for scale and conversion."); return 0;}
    switch (convert){
        case 'F':
            new_temp = celsius_to_fahrenheit(cels); break;
        case 'K':
            new_temp = celsius_to_kelvin(temperature); break;
        case 'C':
            new_temp = cels; break;
        default:
            printf("Enter a valid conversion please, options: C, F, K.");
    }
    printf("New temp is: %f %c\n", new_temp, convert);
    categorize_temperature(cels);
    return 0;
}
