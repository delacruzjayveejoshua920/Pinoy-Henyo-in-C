#include <stdio.h>
#include <conio.h>
#include <windows.h>

struct Node{
	int Data,Score;
	char question[50],Player_name[10];
	struct Node *Left,*Right;
}; typedef struct Node *TreePointer;

struct scoring{
       int data;
       char name[10];
       scoring *left, *right;
}; typedef scoring *tp;

tp root;
void load2(TreePointer Tree);
void scoreboard();
void answers();
int validate(char str[]);
void message(TreePointer Tree);
void message2(TreePointer Tree);
void invalid_input_message();
void question_board(TreePointer Tree);
void graphic_interface2();

int score,pass,checker1=1,length1,pass1;
int main();
char name[10];
FILE *database,*qa;

int length(char src[]){
	int count = 0;
	while(src[count]){
		count++;
	}
	return count;
}

void gotoxy(int x, int y){
     COORD cur = {x,y};
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
}

void mycopy(char dst[],char src[]){
	for(int i=0;src[i]!='\0';i++){
		dst[i] = src[i];
		printf("%c",dst[i]);
	}
	dst[length(src)] = '\0';
}

void UPPER(char str[]){
     for(int a = 0;str[a] != 0; a++){
     	if(str[a] == 32){
	    	str[a]=95; // ascii of underscore('_')
	    }
		if(str[a] >=97 ){
			str[a] -= 32;
		}
		else
		str[a];
	    }
}

void animation()
{
    
for(int a=0;a<10;a++){
gotoxy(20,0);
printf("%c%c%c%c%c%c",201,205,205,205,205,205);
gotoxy(20,1);
printf("%c%c%c%c%c%c",186,176,176,176,176,176);
gotoxy(20,2);
printf("%c",186);
gotoxy(20,3);
printf("%c",186);
gotoxy(20,4);
printf("%c",186);
gotoxy(20,5);
printf("%c%c%c%c%c%c%c",200,205,205,203,205,205,205);
gotoxy(26,0);
printf("%c",187);
gotoxy(26,1);
printf("%c",186);
gotoxy(26,2);
printf("%c",186);
gotoxy(26,3);
printf("%c",186);
gotoxy(26,4);
printf("%c",186);
gotoxy(26,5);
printf("%c",188);
gotoxy(22,2);
printf("%c %c",233,233); //eyes
gotoxy(19,3);
printf("%c",219);
gotoxy(27,3);
printf("%c",219);
gotoxy(23,3);
printf("%c",234);  //nose
gotoxy(22,4);
printf("%c%c%c",196,196,196);  //mouth

//body
gotoxy(23,6);
printf("%c",186);
gotoxy(18,7);
printf("%c%c%c%c%c%c%c%c%c%c%c",205,203,205,205,205,202,205,205,205,203,205);
gotoxy(19,8);
printf("%c",186);
gotoxy(19,9);
printf("%cWINNER!",186);
gotoxy(19,10);
printf("%c",186);
gotoxy(19,11);
printf("%c",186);

gotoxy(27,8);
printf("%c",186);
gotoxy(27,9);
printf("%c",186);
gotoxy(27,10);
printf("%c",186);
gotoxy(27,11);
printf("%c",186);
gotoxy(19,12);
printf("%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,185);


gotoxy(19,13);//left foot
printf("%c",186);
gotoxy(19,14);
printf("%c",186);
gotoxy(19,15);
printf("%c",186);
gotoxy(19,16);
printf("%c",186);
gotoxy(19,17);
printf("%c",186);
gotoxy(19,18);
printf("%c",186);
gotoxy(19,19);
printf("%c",186);
gotoxy(19,20);
printf("%c",186);
gotoxy(19,21);
printf("%c",219);
gotoxy(18,21);
printf("%c",220);
gotoxy(17,21);
printf("%c",220);

gotoxy(27,13);//right foot
printf("%c",186);
gotoxy(27,14);
printf("%c",186);
gotoxy(27,15);
printf("%c",186);
gotoxy(27,16);
printf("%c",186);
gotoxy(27,17);
printf("%c",186);
gotoxy(27,18);
printf("%c",186);
gotoxy(27,19);
printf("%c",186);
gotoxy(27,20);
printf("%c",186);
gotoxy(27,21);
printf("%c",219);
gotoxy(28,21);
printf("%c",220);
gotoxy(29,21);
printf("%c",220);

gotoxy(16,7); //right hand
printf("%c%c",201,205);

gotoxy(16,8);
printf("%c",186);
gotoxy(16,9);
printf("%c",186);
gotoxy(16,10);
printf("%c",186);
gotoxy(16,11);
printf("%c",186);
gotoxy(16,12);
printf("%c",219);
gotoxy(16,13);
printf("%c",234);

gotoxy(28,7);      //left hand
printf("%c%c",205,187);

gotoxy(29,8);
printf("%c",186);
gotoxy(29,9);
printf("%c",186);
gotoxy(29,10);
printf("%c",186);
gotoxy(29,11);
printf("%c",186);
gotoxy(29,12);
printf("%c",219);
gotoxy(29,13);
printf("%c",234);

Sleep(100);
system("cls");

//p2

gotoxy(20,0);
printf("%c%c%c%c%c%c",201,205,205,205,205,205);
gotoxy(20,1);
printf("%c%c%c%c%c%c",186,176,176,176,176,176);
gotoxy(20,2);
printf("%c",186);
gotoxy(20,3);
printf("%c",186);
gotoxy(20,4);
printf("%c",186);
gotoxy(20,5);
printf("%c%c%c%c%c%c%c",200,205,205,203,205,205,205);
gotoxy(26,0);
printf("%c",187);
gotoxy(26,1);
printf("%c",186);
gotoxy(26,2);
printf("%c",186);
gotoxy(26,3);
printf("%c",186);
gotoxy(26,4);
printf("%c",186);
gotoxy(26,5);
printf("%c",188);
gotoxy(22,2);
printf("%c %c",196,196);  //eyes
gotoxy(19,3);
printf("%c",219);
gotoxy(27,3);
printf("%c",219);
gotoxy(23,3);
printf("%c",234);  //nose
gotoxy(22,4);
printf("%c%c%c",247,247,247);  //mouth

//body
gotoxy(23,6);
printf("%c",186);
gotoxy(18,7);
printf("%c%c%c%c%c%c%c%c%c%c%c",205,203,205,205,205,202,205,205,205,203,205);
gotoxy(19,8);
printf("%c",186);
gotoxy(19,9);
printf("%cWINNER!",186);
gotoxy(19,10);
printf("%c",186);
gotoxy(19,11);
printf("%c",186);

gotoxy(27,8);
printf("%c",186);
gotoxy(27,9);
printf("%c",186);
gotoxy(27,10);
printf("%c",186);
gotoxy(27,11);
printf("%c",186);
gotoxy(19,12);
printf("%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,185);


gotoxy(19,13);
printf("%c",186);
gotoxy(19,14);
printf("%c",186);
gotoxy(19,15);
printf("%c",186);
gotoxy(19,16);
printf("%c",188);
gotoxy(28,16);
printf("%c%c%c%c",205,205,205,205);
printf("%c",188);
gotoxy(14,16);
printf("%c",219);
gotoxy(14,17);
printf("%c",219);

gotoxy(27,13);
printf("%c",186);
gotoxy(27,14);
printf("%c",186);
gotoxy(27,15);
printf("%c",186);
gotoxy(27,16);
printf("%c",200);
gotoxy(15,16);
printf("%c%c%c%c",205,205,205,205);


gotoxy(32,16);
printf("%c",219);
gotoxy(32,17);
printf("%c",219);


gotoxy(16,7);//left hand
printf("%c%c",200,205);
gotoxy(16,6);
printf("%c",186);
gotoxy(16,5);
printf("%c",186);
gotoxy(16,4);
printf("%c",186);
gotoxy(16,3);
printf("%c",186);
gotoxy(16,2);
printf("%c",219);
gotoxy(16,1);
printf("%c",174);

gotoxy(29,7);//right hand
printf("%c%c",205,188);
gotoxy(30,6);
printf("%c",186);
gotoxy(30,5);
printf("%c",186);
gotoxy(30,4);
printf("%c",186);
gotoxy(30,3);
printf("%c",186);
gotoxy(30,2);
printf("%c",219);
gotoxy(30,1);
printf("%c",175);

Sleep(100);
system("cls");

}

}

void insert(TreePointer &Tree,int id,char question[]){
	if(Tree == NULL){
		Tree=(TreePointer)malloc(sizeof(struct Node));
		Tree->Data = id;
		mycopy(Tree->question,question);
		Tree->Left = Tree->Right = NULL;
	}
	else if(id<Tree->Data){
		insert(Tree->Left,id,question);
	}
	else if(id>Tree->Data){
		insert(Tree->Right,id,question);
	}
}

void insert_score(tp *root, int x,char player_name[]){
     tp newnode = (tp)malloc(sizeof(struct scoring));
     newnode->left = NULL;
     newnode->right = NULL;
     newnode->data = x;
     mycopy(newnode->name,player_name);
     while(*root){
                  if(x < (*root)->data){
                                      root = &(*root)->left;
                                      }
                  else{
                       root = &(*root)->right;
                       }
                  }
     *root = newnode;
     }

void game(TreePointer Tree){
	printf("aa");
	char choice;
	if(Tree){
		start:
		
		//load2(Tree);
		question_board(Tree);
		choice = getche();
		system("cls");
		switch(choice){
		case 'N': case 'n': 
		if(Tree->Left==NULL){
			system("cls");
			message(Tree);
		}
		game(Tree->Left);
		break;
		
	    case 'Y': case 'y':	
	    if(Tree->Right==NULL){
	    	score++;
	    	
			system("cls");
			
			message2(Tree);
			
		}
		game(Tree->Right); 
		break;
	    default: system("cls"); invalid_input_message(); goto start; break;
	}
}
}

void message(TreePointer Tree){
	for(int i = 0;i<80;i++){
		gotoxy(i,6); printf("%c",205);
	}
	for(int i = 0;i<80;i++){
		gotoxy(i,8); printf("%c",205);
	}
	//gotoxy(20,7); printf("You're fooling me!");
	//getch();
	Tree = NULL;
	load2(Tree);
	game(Tree);
}

void message2(TreePointer Tree){
	animation();
	database = fopen("db.txt","a+");
	char choice;
	start:
	for(int i = 0;i<80;i++){
		gotoxy(i,6); printf("%c",205);
	}
	for(int i = 0;i<80;i++){
		gotoxy(i,9); printf("%c",205);
	}
	//animation();
	gotoxy(20,7); printf("You guessed it! You have %i point(s)",score);
	
	gotoxy(20,8); printf("Do you want play again?[Y/N]");
	choice = getche();
	system("cls");
	switch(choice){
		case 'Y': case 'y': 
		Tree = NULL;
	    load2(Tree);
	    answers();
	    game(Tree);
	    break;
	    
	    case 'N': case 'n':
	    for(int i=0;i<80;i++){
	    	gotoxy(i,6); printf("%c",205);
	    }
	    for(int i=0;i<80;i++){
	    	gotoxy(i,8); printf("%c",205);
	    }
	    gotoxy(20,7); printf("You're score is %i",score);
	    fprintf(database,"%s %i\n",name,score);
	    fclose(database);
	    score = 0;
	    pass=0;
	    getch();
	    system("cls");
	    
	    exit(0);
	    break;
	    default: invalid_input_message(); goto start; system("cls"); break;
	}
	getch();
	
}

void graphics_interface(){
     for(int i=0;i<80;i++){
     	gotoxy(i,0); printf("%c",205);
     }
     for(int i=0;i<80;i++){
     	gotoxy(i,4); printf("%c",205);
     }
     gotoxy(30,2); printf("Welcome to Pinoy Henyo!");
     gotoxy(30,6); printf("%c",201);
     gotoxy(31,6); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
     gotoxy(30,7); printf("%c %c",186,186);
     gotoxy(30,8); printf("%c%c%c%c",200,205,202,205);
     for(int i=0; i<14;i++){
     	printf("%c",205);
     }
     printf("%c",188);
     gotoxy(48,7); printf("%c",186);
     gotoxy(30,9); printf("%c",201);
     gotoxy(31,9); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
     gotoxy(30,10); printf("%c %c",186,186);
     gotoxy(30,11); printf("%c%c%c%c",200,205,202,205);
     for(int i=0; i<14;i++){
     	printf("%c",205);
     }
     printf("%c",188);
     gotoxy(48,10); printf("%c",186);
     gotoxy(37,7); printf("Play");
     gotoxy(34,10); printf("Scoreboard");
     gotoxy(31,7); printf("1");
     gotoxy(31,10); printf("2");
     gotoxy(0,1); printf("Hi, %s",name);
}

void graphic_interface2(){
	
	for(int i=0;i<80;i++){
	    gotoxy(i,5); printf("%c",177);
    }

    for(int i=0;i<80;i++){
	    gotoxy(i,7); printf("%c",177);
    }

    gotoxy(22,6); printf("Enter your name: ");
    gets(name);
    validate(name);
    UPPER(name);
	system("cls");
}

void invalid_input_message(){
	for(int i=0;i<80;i++){
	    gotoxy(i,5); printf("%c",177);
    }

    for(int i=0;i<80;i++){
	    gotoxy(i,7); printf("%c",177);
    }

    gotoxy(28,6); printf("Invalid Input!");
	getch();
	system("cls");
}

void scoreboard(){
	for(int i = 0;i<80;i++){
		gotoxy(i,0); printf("%c",205);
	}
	for(int i = 0;i<80;i++){
		gotoxy(i,2); printf("%c",205);
	}
	gotoxy(0,1); printf("Name: %s\tScore: %i",name,score);
}



void question_board(TreePointer Tree){
	
	for(int i=0;i<80;i++){
		gotoxy(i,7); printf("%c",205);
	}
	for(int i=0;i<80;i++){
		gotoxy(i,9); printf("%c",205);
	}
	//gotoxy(25,8); printf("%i %s[Y/N]",Tree->Data,Tree->question);
	gotoxy(25,8); printf("%s[Y/N]",Tree->question);
}

void load(tp &root){  
system("cls");     
       char alias[10];
       int score_player;
       int count=1;
       pass++;
       if(pass == 1){
       if((database = fopen("db.txt","a+")) == NULL)
       printf("File Empty");
       else
       {
            while(!feof(database)){
                   fscanf(database,"%s %i",alias,&score_player);
                   if(feof(database))
                   break;
                   insert_score(&root,score_player,alias);
                   system("cls");
            }         
       }
       fclose(database);
} 
}

void load2(TreePointer &Tree){  
system("cls");     
       char question2[50];
       int value;
       pass1++;
       
       if((qa = fopen("questions.txt","a+")) == NULL)
       printf("File Empty");
       else
       {
            while(!feof(qa)){
                   fscanf(qa,"%i %s",&value,question2);
                   if(feof(qa))
                   break;
                   insert(Tree,value,question2);
                   system("cls");
            }         
       }
       fclose(qa);

}

void leader_board(tp root){
	
		while(root){
              leader_board(root->right);
              for(int i=0;i<80;i++){
              	printf("%c",205);
              }
              printf("\t\t%s \t\t|\t\t %i \n", root->name,root->data);
              for(int i=0;i<80;i++){
              	printf("%c",205);
              }
              leader_board(root->left);
              break;
        }
}

void rank_column(){
     for(int i=0;i<80;i++){
     	 gotoxy(i,0); printf("%c",205);
     	 gotoxy(i,2); printf("%c",205);
     }
     gotoxy(30,1); printf("SCOREBOARD");
     printf("\n");
}

main(){
	TreePointer Root=NULL;
	root =NULL;
	char choice;
	database = fopen("db.txt","a+");
	load2(Root);
	graphic_interface2();
	start:
	graphics_interface();	
	choice = getche();
	system("cls");
	switch(choice){
		case '1': answers(); game(Root);  break;
		case '2': load(root); rank_column(); leader_board(root); getch(); system("cls"); goto start; break;
		case '3': exit(0); break; 
		default: invalid_input_message(); goto start; break;
	}
}

int validate(char str[]) {
	system("cls");
    checker1 = 0;
    length1 = strlen(str);
     
    if(length1 >= 11 || length1 == 0){
                  checker1 = 0;
                  for(int i=0;i<80;i++){
                       gotoxy(i,7); printf("%c",205);
                       gotoxy(i,9); printf("%c",205);
                  }
                  gotoxy(25,8); printf("You must enter 10 characters only\n");
                  getch();
                  system("cls");
                  graphic_interface2();
        }
}

void answers(){
	for(int j=0; j<80; j++){
		gotoxy(j,1); printf("%c",205);
		gotoxy(25,2); printf("List of Possible Answers!");
		gotoxy(j,3); printf("%c",205);
		gotoxy(25,4); printf("Daniel Padilla");
		gotoxy(25,5); printf("Lechon");
		gotoxy(25,6); printf("Nicole Kiddman");
		gotoxy(25,7); printf("Baguio");
		gotoxy(25,8); printf("Spaghetti");
		gotoxy(25,9); printf("Monkey");
		gotoxy(25,10); printf("Tom Cruise");
		gotoxy(25,11); printf("Hamburger");
		gotoxy(25,12); printf("Kim Chiu");
		gotoxy(25,13); printf("Chicken Inasal");
		gotoxy(25,14); printf("Burrito");
		gotoxy(25,15); printf("Boracay");
		gotoxy(25,16); printf("Crocodile");
		gotoxy(25,17); printf("Hammer");
		gotoxy(25,18); printf("Rake");
		gotoxy(25,19); printf("Roasted Steak");
		gotoxy(25,20); printf("Davao");
		gotoxy(j,21); printf("%c", 205);
		
}
	getch();
	system("cls");
}
