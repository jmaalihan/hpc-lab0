#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

typedef double dtype;

void mm_cb (dtype *C, dtype *A, dtype *B, int N, int K, int M)
{
  /* =======================================================+ */
  /* Implement your own cache-blocked matrix-matrix multiply  */
  /* =======================================================+ */

  /*
  int i, j, k;
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      for(int k = 0; k < K; k++) {
        C[i * M + j] += A[i * K + k] * B[k * M + j];
      }
    }
 }
  */

  int b_size = 8;

  for (int ii = 0; ii < N; ii+= b_size) {
	  for (int jj = 0; jj < M; jj+= b_size) {
		  for (int kk = 0; kk < K; kk+= b_size) {
			  for(int i = ii; (i < ii+b_size) && (i < N); i++) {
				  for(int j = jj; (j < jj+b_size) && (j < M); j++) {
					  for(int k = kk; k < (kk+b_size) && (k < K); k++) {
						C[i * M + j] += A[i * K + k] * B[k * M + j];
						}
					}
 				}
   	 		}
 		}
	}
}
