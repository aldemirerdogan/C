#include <stdio.h>

int main() {
    int num_0, num_1, num_2, num_3, degree;

    printf("Enter an integer : ");
    scanf("%d", &degree);
    num_0 = 0;
    num_1 = 1;
    num_2 = 1;
    printf("1. : %d\n", num_0);
    printf("2. : %d\n", num_1);
    printf("3. : %d\n", num_2);

    for (int i = 0; i < degree-3 ; ++i) {
        num_3 = num_0 + num_1 + num_2;
        printf("%d. : %d\n",i+4,num_3);
        num_0 = num_1;
        num_1 = num_2;
        num_2 = num_3;
    }
    return 0;
}



%% new

#include <stdio.h>

int main() {
    int num_0, num_1, num_2, num_3, degree;
    int num_new0, num_new1, num_new2;
    printf("Enter an integer : ");
    scanf("%d", &degree);
    num_0 = 0;
    num_1 = 1;
    num_2 = 2;

    printf("1.: %d\n", num_0);
    printf("2.: %d\n", num_1);
    printf("3.: %d\n", num_2);

    for (int i = 0; i < degree-3 ; ++i) {
        num_new0 = (num_0 + num_1 + num_2) ;
        num_new1 = (num_0 + num_2) ;
        num_new2 = (num_2-num_1) ;
        printf("%d. : %d\n",i+4,num_new0);
        printf("%d. : %d\n",i+5,num_new1);
        printf("%d. : %d\n",i+6,num_new2);
        num_0 = num_new0;
        num_1 = num_new1;
        num_2 = num_new2;
    }
    return 0;
}