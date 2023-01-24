#include <stdio.h>

int output_list(int array[], int size);
int output_list(int array[], int size){
  int i;
  for (i=0 ; i < size ; i++)	{
		printf("%d ", array[i]);
	}
  printf("\n");

	return 0;
}

int descending_order(int array[], int size);
int descending_order(int array[], int size){
  int i,j,k;
  int tmp;

  int array_copy[size];

  for (int k = 0; k < size; ++k) {
        array_copy[k] = array[k];
    }

  for (i = 0; i < size; i++){
    for(j = i + 1; j < 5; j++){
      if (array_copy[i] < array_copy[j]){
        tmp = array_copy[i];
        array_copy[i] = array_copy[j];
        array_copy[j] = tmp;
      }
    }
  }

  output_list(array_copy,size);

  return 0;
}

int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言 

    printf("実行例1\n");

    int scores[SIZE] = {0, 60, 70, 100, 90};
    //処理コード
    
    printf("scores = ");
    output_list(scores,SIZE);

    printf("results = ");
    descending_order(scores,SIZE);

    printf("実行例2\n");

    int scores2[6] = {100, 60, 70, 100, 90, 80};
    
    printf("scores2 = ");
    output_list(scores2,SIZE);

    printf("results2 = ");
    descending_order(scores2,SIZE);


    return 0;
}