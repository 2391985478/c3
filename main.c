#include <stdio.h>
struct Point
{
    int x;
    int y;
};

int main(){
    int index = 0;
    struct Point arr[100];

    printf("xitong!\n");


while(1){

    printf("1---tianjia\n");
    printf("2---shanchu\n");
    printf("3---xianshi\n");
    printf("4---fanhui\n");
    printf("5---tuichu\n");

    printf("gongneng\n");

    int code;
    scanf("%d",&code);


    if(code == 1){
        printf("shuru:\n");
        int x;
        int y;
        scanf("%d",&x);
        scanf("%d",&y);

        arr[index].x = x;
        arr[index].y = y;

        index++;

        printf("tianjiachenggong,huiche\n");
        char xx;
        scanf("%c",&xx);
        scanf("%c",&xx);

    }
    if(code == 2){

        if(index > 0){

            index--;
            printf("shanchuchenggong,huiche\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }

        else{

            printf("shibai,huiche\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }

        
    }
    if(code == 3){

        
    }
    if(code == 4){

        
    }
    if(code == 5){
        printf("tuichu\n");
        break;
    }
}
    return 0;

}