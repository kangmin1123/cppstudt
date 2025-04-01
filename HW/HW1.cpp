/* 
#include <cstdio>

int main(){
    int cnt=0;
    int a=0,b=0;
    int q1=0,q2=0,q3=0,q4=0,ax=0;

    scanf("%d",&cnt);
    for(int i = 0; i<cnt; i++){
        scanf("%d %d",&a,&b);
        if (a == 0 || b == 0){
            ax++;
        }
        else{
            if(a > 0 && b > 0){
                q1++;
            }
            if(a < 0 && b > 0){
                q2++;
            }
            if(a < 0 && b < 0){
                q3++;
            }
            if(a > 0 && b < 0){
                q4++;
            }
        }
    }

    printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n",q1,q2,q3,q4,ax);
    return 0;
}
    */

    #include <cstdio>

    int main(){
        int arr[8];
        int check = 0;

        for(int i = 0; i<8; i++){
            scanf("%d",&arr[i]);
        }

        for(int i = 0; i<7;i++){
            if (arr[i] + 1 == arr[i+1]){
                check = 1;
            }
            else if (arr[i] == arr[i+1] +1){
                check = 2;
            }
            else{
                check =3;
                break;
            }
        }
        if (check == 1){
            printf("ascending\n");
        }
        if (check == 2){
            printf("descending\n");
        }
        if (check == 3){
            printf("mixed\n");
        }

        return 0;
    }
