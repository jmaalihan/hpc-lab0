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
  int i, j, k;
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      for(int k = 0; k < K; k++) {
        C[i * M + j] += A[i * K + k] * B[k * M + j];
      }
    }
  }
}
