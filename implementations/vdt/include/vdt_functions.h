#ifndef VDT_FUNCTIONS_H
#define VDT_FUNCTIONS_H


#ifdef __cplusplus
extern "C" {
#endif

double cos_vdt(double x);
double exp_vdt(double x);
double log_vdt(double x);
double sin_vdt(double x);
double tan_vdt(double x);

double cosf_vdt(double x);
double expf_vdt(double x);
double logf_vdt(double x);
double sinf_vdt(double x);
double tanf_vdt(double x);

double small_cos_vdt(double x);
double small_sin_vdt(double x);

double small_cosf_vdt(double x);
double small_sinf_vdt(double x);

#ifdef __cplusplus
}
#endif


#endif
