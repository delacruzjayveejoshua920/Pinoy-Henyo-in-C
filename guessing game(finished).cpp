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
void scoreboard();
void answers();
int validate(char str[]);
void message(TreePointer Tree);
void answer_question(TreePointer &Tree);
void message2(TreePointer Tree);
void invalid_input_message();
void question_board(TreePointer Tree);
void graphic_interface2();
typedef char * string;
typedef char * string2;
typedef char * string3;
typedef char * string4;
typedef char * string5;
int score,pass,checker1=1,length1;
int main();
char name[10];
FILE *database;

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
	
	char choice;
	if(Tree){
		start:
		
		
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
	answer_question(Tree);
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
	    answer_question(Tree);
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

void answer_question(TreePointer &Tree){
	int id[11]={5000,6000,7000,8000,6800,6900,5800,5825,5827,5810,5815};
	int id2[18] = {4500,4600,4700,4800,4650,4655,4645,4647,4520,4530,4540,4525,4526,4515,4516,4517,4503,4504};
	int id3[8] = {3400,3500,3600,3700,3550,3555,3548,3549};
	int id4[7] = {2400,2500,2600,2450,2455,2445,2447};
	int id5[7] = {1400,1500,1600,1450,1455,1445,1447};
	string strs[12];
	system("cls");
	strs[0] = "Person?"; //50
	strs[1] = "Is he/she a local celebrity?"; //60
	strs[2] = "Is he a guy?"; //70
	strs[3] = "Daniel Padiilla!!"; //80 --answer
	strs[4] = "Is she a girl?"; //68
	strs[5] = "Kim Chiu!!"; //69 --answer 
	strs[6] = "Is he/she a foreign celebrity?"; //58
	strs[7] = "Is he an actor?"; //58.25
	strs[8] = "Tom Cruise!!"; //58.27 --answer
	strs[9] = "Is she an actress"; //58.10
	strs[10] = "Nicole Kiddman!!"; //58.15 --answer
	
	//4
	
	string2 strs2[18];
	strs2[0] = "Food?"; //4500
	strs2[1] = "Is it a local cuisine?"; //4600
	strs2[2] = "Is it made of pork?"; //4700
	strs2[3] = "Lechon!!"; //4800 --answer
	strs2[4] = "Is it made of poultry?"; //4650
	strs2[5] = "Chicken Inasal!!"; //4655 --answer
	strs2[6] = "Is it is made from vegetables?"; //4645
	strs2[7] = "Chopsuey!!"; //4647 --answer
	strs2[8] = "Is it famous American food?"; // 4520
	strs2[9] = "Is this a sandwich type of food?"; // 4530
	strs2[10] = "Hamburger!!"; // 4540 --answer
	strs2[11] = "Is this roasted?"; // 4525 
	strs2[12] = "Roasted Steak!!"; // 4526 -anwser
	strs2[13] = "Is it an Italian delicacy?"; // 4515 -
	strs2[14] = "Does it have meatballs?"; // 4516
	strs2[15] = "Spaghetti!!"; // 4517 --answer
	strs2[16] = "Is it Mexican?"; // 4503
	strs2[17] = "Burrito!!"; // 4504 --answer
	
	//7
	
	string3 strs3[8];
	strs3[0] = "Place?"; //3400
	strs3[1] = "Is it in Philippines?"; //3500
	strs3[2] = "Is it in Luzon?"; //3600
	strs3[3] = "Baguio!!"; //3700 --answer
	strs3[4] = "Is it in Visayas?";
	strs3[5] = "Boracay!!"; //--answer
	strs3[6] = "Is it in Mindanao?";
	strs3[7] = "Davao!!"; //--answer
	
	//3
	
	string4 strs4[7];
	strs4[0] = "Animal?"; 
	strs4[1] = "Is it a Mammal?"; 
	strs4[2] = "Monkey!!";  //--answer
	strs4[3] = "Is it a Reptiles?"; 
	strs4[4] = "Crocodile!!"; //--answer  
	strs4[5] = "Is it a Crustacian?";
	strs4[6] = "Lobster!!"; //--answer
	
	//3
	
	string5 strs5[7];
	strs5[0] = "Things?"; 
	strs5[1] = "Is it a School Supplies?"; 
	strs5[2] = "Bond Paper!!"; //--answer
	strs5[3] = "Is it for Carpentry?"; 
	strs5[4] = "Hammer!!"; //--answer
	strs5[5] = "Is it for Gardening?";
	strs5[6] = "Rake!!"; //--answer
	
	//3
	
	system("cls");
	for(int i=0;i<11;i++){
		insert(Tree,id[i],strs[i]);
	}
	for(int i=0;i<18;i++){
		insert(Tree,id2[i],strs2[i]);
	}
	for(int i=0;i<8;i++){
		insert(Tree,id3[i],strs3[i]);
	}
	for(int i=0;i<7;i++){
		insert(Tree,id4[i],strs4[i]);
	}
	for(int i=0;i<7;i++){
		insert(Tree,id5[i],strs5[i]);
	}
	
	system("cls");
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
	answer_question(Root);
	graphic_interface2();
	start:
	graphics_interface();	
	choice = getche();
	system("cls");
	switch(choice){
		case '1': answers();  game(Root);  break;
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
