#include "temperature.h"
#include <stdio.h>
#define MAX_LEN 100
float celsius_to_fahrenheit (float celsius){return ((9.0/5.0)*celsius)+32;}
float fahrenheit_to_celsius (float fahrenheit){return ((5.0/9.0)*(fahrenheit-32));}
float celsius_to_kelvin (float celsius){return celsius+273.15;}
float kelvin_to_celsius (float kelvin){return kelvin-273.15;}
float fahrenheit_to_kelvin (float fahrenheit){return ((5.0/9.0)*(fahrenheit-32))+273.15;}
float kelvin_to_fahrenheit (float kelvin){return ((9.0/5.0)*(kelvin-273.15))+32;}
void categorize_temperature(float celsius){
    if(celsius < 0){
        printf("Stay inside, it's FREEEZING!!\n");
    }else if(celsius < 10){
        printf("Wear a coat... for it's cold outside\n");
    }else if(celsius < 25){
        printf("Have fun outside brochacho, ;)\n");
    }else if(celsius < 35){
        printf("Be wary, don't wear too many layers, it's gonna be hot\n");
    }else{
        printf("AHHHH THE HEAT IS EXTREEEEEMEE, wear SHADES, I reccoment staying INSIDE!!!!\n");
    }
}