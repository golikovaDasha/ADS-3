// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int i = 0, j = size - 1, k = 0; // i - левая граница массива, j - правая
int mid = i + (j - i) / 2;
for (int i = 0; i <= mid; i++) {
  if (arr[i] == value) {
   k+=1;        
  }
}
for (int i = size; i > mid; i--) {
  if (arr[i] == value) {
   k += 1;    
  }
}
return k;
}
