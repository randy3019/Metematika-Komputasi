// Nama: Randy 
// Nim : 02
// Program: Menghitung Volume Balok

#include <stdio.h>

int main()
{
  int panjang, lebar, volume, tinggi;

  printf("Masukkan panjang : ");
  scanf("%d", &panjang);
  printf("Masukkan lebar : ");
  scanf("%d", &lebar);
  printf("Masukan nilai tinggi: ");
  scanf("%d", &tinggi);


  volume = panjang * lebar * tinggi;
  printf("Volume Balok Adalah %d cm \n", volume);

  return 0;
