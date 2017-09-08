#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ins_hashtag(char **a, char *b)
{
    int i=0;
    int j;
    printf("* Insert the words followed by the word 'stop' without quotes *\n");
    scanf("%s", a[i]);
    while(strcmp(a[i],b)!=0){
        i++;
        scanf("%s", a[i]);
    }
	printf("* Here them are! Just copy them! *\n");
    for(j=0; j<i; j++){
        printf("#%s ", a[j]);
    }
    printf("\n");
}

void format_bot(char **a, char *b)
{
    int i=0;
    int j,k,x;
	printf("** Insert 1 if you are inserting WITH hashtag '#' (example: #hello #red #yellow) **\n");
	printf("** Insert 2 if you are inserting WITHOUT hashtag '#' (example: hello red yellow) **\n");
	scanf("%d", &x);
	if (x==1){
		printf("* Insert the tags followed by the word 'stop' without quotes (example: #hello #red #yellow stop) *\n");
    	scanf("%s", a[i]);
    	while(strcmp(a[i],b)!=0){
       		i++;
        	scanf("%s", a[i]);
   		}
		printf("* Here them are! Just copy them! *\n");
		for(j=0; j<i; j++){
			printf("'");
        	for(k=1; a[j][k]!=0; k++){
        	    printf("%c", a[j][k]);
       		 }
		printf("',");
      	printf(" ");
    	}
	}
	else if (x==2){
		printf("* Insert the tags followed by the word 'stop' without quotes (example: #hello #red #yellow stop) *\n");
    	scanf("%s", a[i]);
    	while(strcmp(a[i],b)!=0){
       		i++;
        	scanf("%s", a[i]);
   		}
	    for(j=0; j<i; j++){
 	       printf("'%s', ", a[j]);
	    }
	}
	else {
		printf("* You did not insert the right number, restart the program *\n");
	}
	printf("\n");
}

void del_hashtag(char **a, char *b)
{
    int i=0;
    int k,j;
    printf("* Insert the tags followed by the word 'stop' without quotes *\n");
    scanf("%s", a[i]);
    while(strcmp(a[i],b)!=0){
        i++;
        scanf("%s", a[i]);
    }
	printf("* Here them are! Just copy them! *\n");
    for(j=0; j<i; j++){
        for(k=1; a[j][k]!=0; k++){
            printf("%c", a[j][k]);
        }
    }
    printf("\n");
}

void printbesthashtags()
{
	printf("* Here them are! Just copy them! *\n");
	printf("'love', 'look', 'selfie', 'winter', 'tweegram', 'photooftheday', '20likes', 'amazing', 'smile', 'follow4follow', 'like4like', 'heroscommunity', 'instalike', 'igers', 'picoftheday', 'food', 'instadaily', 'instafollow', 'me', 'girl', 'iphoneonly', 'instagood', 'bestoftheday', 'instacool', 'instago', 'all_shots', 'follow', 'webstagram', 'colorful', 'style', 'swag', 'cute'\n");
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
    printf("* Insert 1 for adding the hashtag '#' before every word (useful for posting on instagram)                     *\n");
    printf("* Insert 2 for getting your hashtag ready for instabot (insert them without the hashtag, use firstly mode 3!) *\n");
    printf("* Insert 3 for printing the hashtags without the '#'                                                          *\n");
	printf("* Insert 4 for printing the best 20 hashtags out there! (they are ready for instabot)                         *\n");
    scanf("%d", &scelta);
    if (scelta==1){
        ins_hashtag(a,b);
    }
    else if (scelta==2){
        format_bot(a,b);
    }
    else if (scelta==3){
        del_hashtag(a,b);
    }
	else if (scelta==4){
        printbesthashtags();
    }
	else {
		printf("* You did not insert the right number, restart the program *\n");
	}
    return 0;
}
