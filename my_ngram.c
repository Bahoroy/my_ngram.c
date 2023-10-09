#include <stdio.h>
int main(int argc, char** argv){
    int arr[128] = {0};
    for(int i = 1; i < argc; i++){
        for(int j = 0;argv[i][j];j++){
            arr[(int)argv[i][j]]++;
        }
    }
    for(int i = 0;i<128; i++){
        if(arr[i]>0){
            printf("%c:%d\n",i,arr[i]);
        }
    }
}