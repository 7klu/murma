#ifndef ALGO_H
#define ALGO_H

void get_gender(const float f0, bool *gender);
void get_size(const float f0, bool is_female, float *human_size);
void get_weight(const float f0, bool gender, float human_size, float *weight);
void get_bmi(float weight, float human_size, float *bmi);
void get_age(const float f0, bool gender, float jitter, float shimmer, float *age);
void get_cad(const float f0, bool gender, float intensity, float jitter, float *cad_risk);
void get_hfm(const float f0, bool gender, float jitter, float shimmer, float intensity, float *hfm_risk);
void get_depression(const float f0, bool gender, float jitter, float shimmer, float *depression_risk);
void get_parkinson(const float f0, bool gender, float jitter, float shimmer, float intensity, float *parkinson_risk);
void get_stress(const float f0, bool gender, float jitter, float shimmer, float intensity, float *stress_risk);

#endif