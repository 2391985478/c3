#include <stdio.h>
#include <math.h>
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
        printf("ruxia:\n");

        for(int i = 0; i < index; i++)
        {
            printf("di %d gechewei(%d,%d)\n",i+1,arr[i].x,arr[i].y);
        }

        printf("huichejixu\n");
        char xx;
        scanf("%c",&xx);
        scanf("%c",&xx);

        
    }
    if(code == 4){
        printf("zuobbiao:\n");
        int x;
        int y;
        scanf("%d",&x);
        scanf("%d",&y);


        double min = 100000;
        int carID = 0;
        for(int i=0;i<index;i++){
            int dx = x - arr[i].x;
            int dy = y - arr[i].y;
            double l = sqrt(dx*dx+dy*dy);

            if(min > l){
                min = l;
                carID = i;
            }
        }

        printf("dangqianweizhiyudi%djuliwei%1f,shizuixiaojuli\n",carID+1,min);

        printf("dianjihuiche\n");
        char xx;
        scanf("%c",&xx);
        scanf("%c",&xx);

        
    }
    if(code == 5){
        printf("tuichu\n");
        break;
    }
}
    return 0;

}