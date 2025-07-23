#include <stdio.h>
#include <math.h>


int main() {
    int m;
    double theta_deg, d_micrometer;
    
    printf("Enter the order (m), the angle theta ,slit distance d (in micrometers): ");
    scanf("%d %lf %lf", &m ,&theta_deg,&d_micrometer );
    double theta_rad = theta_deg * 3.1416 / 180.0; 
    double d_meter = d_micrometer * 1e-6;        

     
    double wavelength_m = (d_meter * sin(theta_rad)) / m;
    double wavelength_nm = wavelength_m * 1e9;   

    printf("The numeric value of tha Wavelength = %.2f nm\n", wavelength_nm);
    double wavelength=wavelength_nm;
    
    
   
    if (wavelength >= 380 && wavelength < 450)
        printf("the color of the light : Violet\n");
    else if (wavelength >= 450 && wavelength < 485)
        printf("the color of the light : Blue\n");
    else if (wavelength >= 485 && wavelength < 500)
        printf("the color of the light : Cyan\n");
    else if (wavelength >= 500 && wavelength < 565)
        printf("the color of the light :Green\n");
    else if (wavelength >= 565 && wavelength < 590)
        printf("the color of the light : Yellow\n");
    else if (wavelength >= 590 && wavelength < 625)
        printf("the color of the light :Orange\n");
    else if (wavelength >= 625 && wavelength <= 750)
        printf("the color of the light : Red\n");
    else
        printf("Not in visible range\n");


    return 0;
}
