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

void get_weight(const float f0, bool gender, float human_size, float *weight) {

    if(gender) {

        *weight = 0.65f * human_size - 45.0f;    // Calculate woman's weight
    } else *weight = 0.75f * human_size - 60.0f; // Calculate men's weight
}

void get_bmi(float weight, float human_size, float *bmi) {

    *bmi = weight / ((human_size / 100.0f) * (human_size / 100.0f)); // Calculate BMI (IMC)
}

void get_age(const float f0, bool gender, float jitter, float shimmer, float *age) {

    if(gender)
    {
        *age = 15.0f + 0.15f * f0;
    } else *age = 80.0f - 0.25f * f0;

    // Add jitter and shimmer to the age
    *age += 0.5f * jitter;
    *age += 0.5f * shimmer;
}

// CAD: Coronary Artery Disease Risk 
void get_cad(const float f0, bool gender, float intensity, float jitter, float shimmer, float *cad_risk) { 

    *cad_risk = exp(0.2f * f0) - 0.1f * intensity + 0.3f * jitter + 0.2f * shimmer;
    if (gender) *cad_risk *= 1.1f; // Higher risk for women
}

// HFM: Heart-Failure Mortality
void get_hfm(const float f0, bool gender, float jitter, float shimmer, float intensity, float *hfm_risk) {

    *hfm_risk = 0.15f * f0 - 0.25f * jitter + 0.1f * intensity + 0.2f * shimmer;
    if (gender) *hfm_risk = 1.05f;
}

// Drepression Risk
void get_depression(const float f0, bool gender, float jitter, float shimmer, float *depression_risk) {

    *depression_risk = 0.1f * f0 + 0.4f * jitter + 0.3f * shimmer;
    if (gender) *depression_risk += 1.0f;
}

// Parkinson Risk
void get_parkinson(const float f0, bool gender, float jitter, float shimmer, float intensity, float *parkinson_risk) {
    
    *parkinson_risk = 0.1f * f0 + 0.2f * jitter + 0.3f * shimmer + 0.1f * intensity;
    if (gender) *parkinson_risk += 0.5f;
}

// Stress Risk
void get_stress(const float f0, bool gender, float jitter, float shimmer, float intensity, float *stress_risk) {

    *stress_risk = 0.2f * f0 + 0.3f * jitter + 0.1f * shimmer + 0.4f * intensity;
    if (gender) *stress_risk *= 1.1f;
}

