#ifndef MG
#define MG

#include "index.h"
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_blas.h>

void *clean(void *ptr);
void **clean_matrix(void **tab, int rows);
char **build_chord_table(FILE *fp);
int **initialize_transition_matrix();
int find_chord_id(char **chord_set, char *chord);
void print_matrix(char **chord_set, int **transition_matrix);
void write_matrix(char **chord_set, int **transition_matrix, FILE *result);
void btm_occurences(FILE *fp, int **transition_matrix, char **chord_set);
void btm_prefix_sums(int **transition_matrix);
void build_transition_matrix(FILE *fp, FILE *result);

#endif