#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void get_gender(const float f0, bool *gender) {

    if(f0 >= 165.0f) {
        *gender = true;      // Women
    } else *gender = false;  // Men
}

void get_size(const float f0, bool gender, float *human_size) {
    
    if(gender) {
        *human_size = 200.0f - 0.7f * f0;    // Calculate women's size
    } else *human_size = 218.0f - 0.9f * f0; // Calculate men's size
}