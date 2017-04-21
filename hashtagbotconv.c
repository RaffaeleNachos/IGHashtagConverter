#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ins_cancelletto(char **a, char *b)
{
    int i=0;
    int j;
    printf("Inserire i tag seguiti dalla parola 'stop' senza apici:\n");
    scanf("%s", a[i]);
    while(strcmp(a[i],b)!=0){
        i++;
        scanf("%s", a[i]);
    }
    for(j=0; j<i; j++){
        printf("#%s ", a[j]);
    }
    printf("\n");
}

void format_bot(char **a, char *b)
{
    int i=0;
    int j;
    printf("Inserire i tag seguiti dalla parola 'stop' senza apici:\n");
    scanf("%s", a[i]);
    while(strcmp(a[i],b)!=0){
        i++;
        scanf("%s", a[i]);
    }
    for(j=0; j<i; j++){
        printf("'%s', ", a[j]);
    }
    printf("\n");
}

void del_cancelletto(char **a, char *b)
{
    int i=0;
    int k,j;
    printf("Inserire i tag seguiti dalla parola 'stop' senza apici:\n");
    scanf("%s", a[i]);
    while(strcmp(a[i],b)!=0){
        i++;
        scanf("%s", a[i]);
    }
    for(j=0; j<i; j++){
        for(k=1; a[j][k]!=0; k++){
            printf("%c", a[j][k]);
        }
        printf(" ");
    }
    printf("\n");
}

int main ()
{
    int i=0;
    int scelta;
    char **a;
    char *b="stop";
    a=malloc(1000*sizeof(char*));
    for(i=0; i<1000; i++){
        a[i]=malloc(1001*sizeof(char));
    }
    printf("Inserisci 1 per aggiungere il cancelletto prima di ogni hashtag\n");
    printf("Inserisci 2 per formattare gli hashtag per instabot\n");
    printf("Inserisci 3 per stampare gli hashtag senza cancelletto\n");
    scanf("%d", &scelta);
    if (scelta==1){
        ins_cancelletto(a,b);
    }

    if (scelta==2){
        format_bot(a,b);
    }
    if (scelta==3){
        del_cancelletto(a,b);
    }
    return 0;
}
