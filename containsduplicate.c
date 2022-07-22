    #include<stdio.h>
    #include<stdlib.h>
    int main(){
        int array[]={1,2,3,1};
        int flag=0;
        int count = sizeof(array) / sizeof(array[0]);
        if(count<=1){
            return 0;
        }
        else{
            for (int i = 0; i < count - 1; i++) {
                for (int j = i + 1; j < count; j++) {
                    if (array[i] == array[j]) {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag=1){
                return 1;
            }
            else{
                return 0;
            }
    }
    }
