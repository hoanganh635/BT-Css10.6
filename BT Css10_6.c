#include <stdio.h>

int main() {
  const int max = 10;
  int found[max];
  int arr[]={9,5,3,1,7,1};
  int n, foundcount = 0;
  int size = sizeof(arr)/sizeof(arr[0]);

  int check = 1;
  printf("moi ban nhap 1 ky tu bat ki : ");
  scanf("%d",&n);
  for(int i=0;i< size;i++){
    if(arr[i] == n) {
      found[foundcount] = i;
      foundcount++;
    }
  }
  if(foundcount >0) {
    printf("gia tri %d duoc tim thay tai vi tri :   ",n);
    for(int i=0;i<foundcount;i++) {
      printf("%d ",found[i]);
    }
    printf("\n");
  }else {
    printf("ko tim thay gia tri %d trong mang",n);
  }
  return 0;
}





