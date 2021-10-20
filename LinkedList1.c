#include<stdio.h>

struct Manush
{
    int boyosh;
    struct Manush *next;
};

int main()
{
    int option=666;
    struct Manush *Matha = NULL;

    while(option != 0)
    {
        printf("Ki korte chan???? \n");
        printf("1 den insert korte\n");
        printf("2 den traverse korte\n");
        //printf("3 den delete korte\n");
        printf("0 den ber hote\n");

        scanf("%d", &option);


        if(option==1)
        {
            struct Manush *NoyaManush = (struct Manush*) malloc(sizeof(struct Manush));
            int boyosh;
            printf("Manushter Boyosh koto? ");
            scanf("%d",&boyosh);

            if(Matha == NULL)
            {
                Matha = NoyaManush;
                NoyaManush->boyosh = boyosh;
                NoyaManush->next = NULL;

                printf("Insert holo suru---- %d\n", Matha->boyosh);
            }
            else
            {
                struct Manush *tempu = NULL;
                tempu = Matha;
                while(tempu->next != NULL)
                {
                    //printf("%d, ", tempu->boyosh);
                    tempu = tempu->next;
                }

                tempu->next = NoyaManush;
                NoyaManush->boyosh = boyosh;
                NoyaManush->next = NULL;
                printf("Insert holo---- %d\n", NoyaManush->boyosh);

            }
        }
        else if(option==2)
        {
            struct Manush *tempu = NULL;
            tempu = Matha;
            while(tempu != NULL)
            {
                printf("%d ", tempu->boyosh);
                tempu = tempu->next;
            }
        }


    }


    return 0;
}


