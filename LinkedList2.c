#include<stdio.h>
#include<stdlib.h>

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
        //system("cls");
        printf("Ki korte chan???? \n");
        printf("1 den insert korte\n");
        printf("2 den traverse korte\n");
        printf("3 den delete korte\n");
        printf("0 den ber hote\n");

        scanf("%d", &option);


        if(option==1)
        {
            ///Inserting data to linked list
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
            ///Traversing data to linked list
            struct Manush *tempu = NULL;
            tempu = Matha;
            while(tempu != NULL)
            {
                printf("%d ", tempu->boyosh);
                tempu = tempu->next;
            }
        }
        else if(option ==3)
        {
            ///Deleting data to linked list
            struct Manush *NoyaManush = (struct Manush*) malloc(sizeof(struct Manush));
            int pos, khuj=1;
            printf("Koto nombor manush k delete korben? ");
            scanf("%d",&pos);

            if(Matha == NULL)
            {
                 printf("Kono manusher tottho nai\n");
            }
            else
            {
                struct Manush *tempu = NULL;
                tempu = Matha;
                while(tempu->next != NULL)
                {
                    if(khuj!=pos-1)
                    {
                        tempu = tempu->next;
                        khuj++;
                    }
                    else
                    {
                        struct Manush *rakho = NULL;
                        rakho = tempu->next;
                        tempu->next = rakho->next;
                        printf("Delete holo\n");
                        break;
                    }
                }
            }
        }
       // getch();
    }


    return 0;
}


