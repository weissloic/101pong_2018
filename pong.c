/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** [enter description here]
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <fenv.h>

int main(int argc, char *argv[])
{
    /*if (argc < 8) {
        printf("%s\n", "Invalid numbers of arguments.");
        return (84);
    }*/

    /*while (i != 8) {
        if (my_str_isnum(argv[i]) != 1) {
            printf("Invalid formats of arguments.\n");
            return (84);
        }
        i++;*/


    float x0 = atof(argv[1]);
    float y0 = atof(argv[2]);
    float z0 = atof(argv[3]);
    float x1 = atof(argv[4]);
    float y1 = atof(argv[5]);
    float z1 = atof(argv[6]);
    int n = atoi(argv[7]);

    float Coord_vect_x = 0, Coord_vect_y = 0, Coord_vect_z = 0;
    float Coord_vect_x_time_n = 0, Coord_vect_y_time_n = 0, Coord_vect_z_time_n = 0;
    float Coord_vect_long1 = 0, Coord_vect_long2 = 0, Coord_vect_long3 = 0;
    float Coord_vect_scalaire = 0, longUV = 0, angle = 0;

    Coord_vect_x = (x1 - x0); // 2 sans sqrt * 3 / *2 sqrt
    Coord_vect_y = (y1 - y0);
    Coord_vect_z = (z1 - z0);

    Coord_vect_x_time_n = Coord_vect_x * n + x1;
    Coord_vect_y_time_n = Coord_vect_y * n + y1;
    Coord_vect_z_time_n = Coord_vect_z * n + z1;

    Coord_vect_long1 = sqrtf((pow(Coord_vect_x, 2) + pow(Coord_vect_y, 2) + pow(Coord_vect_z, 2)));
    Coord_vect_long2 = sqrtf((pow(Coord_vect_x, 2) + pow(Coord_vect_y, 2)));
    Coord_vect_long3 = (pow(Coord_vect_x, 2) + pow(Coord_vect_y, 2));

    Coord_vect_scalaire = ((x0 * x1) + (y0 * y1) + (z0 * z1));


    longUV = (Coord_vect_long3/((Coord_vect_long1) * (Coord_vect_long2)));
    longUV = fabs(longUV);
    angle = acos(longUV) * 57.295779513;
    angle = fabs(angle);


    printf("The velocity vector of the ball is:\n(%.2f, %.2f, %.2f)", Coord_vect_x, Coord_vect_y, Coord_vect_z);
    printf("\nAt time t + %d, ball coordinates will be:\n(%.2f, %.2f, %.2f)",n, Coord_vect_x_time_n, Coord_vect_y_time_n, Coord_vect_z_time_n);
    if (Coord_vect_z != 0 && ((-z1)/Coord_vect_z) >= 0 && z1 != 0) {
        printf("\nThe incidence angle is:\n%.2f degrees\n", angle);
        return(angle);
    }
    else
        printf("\nThe ball won't reach the bat\n");
    //return (84);
}
