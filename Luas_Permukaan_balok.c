// Nama: Randy
// Nim : 02
// Program: Menghitung Luas Permukaan Balok

#include <stdio.h>

int main()
{
  int panjang, lebar, volume, tinggi,lpb;

  printf("Masukkan panjang : ");
  scanf("%d", &panjang);
  printf("Masukkan lebar : ");
  scanf("%d", &lebar);
  printf("Masukan nilai tinggi: ");
  scanf("%d", &tinggi);

  lpb = 2*(panjang * lebar + panjang * tinggi + lebar * tinggi);
  printf("Luas Permukaan Balok Adalah %d cm \n", lpb);

  return 0;
}
