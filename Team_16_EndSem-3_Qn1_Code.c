#include <stdio.h>
#include <string.h>
#include <dirent.h>
#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif

void main1()
{
    struct dirent *de;  
    DIR *dr = opendir("."); 
    if (dr == NULL)  
    {
        printf("Could not open current directory" );
    }
    while ((de = readdir(dr)) != NULL)
            printf("%s\n", de->d_name);  
    closedir(dr);
    printf("\n---------------------------------");
    printf("\n         "); 
    printf("\n");     
}

void PWD()
{
char buff[FILENAME_MAX];
GetCurrentDir( buff, FILENAME_MAX );
printf(buff);
}

void JOB()
{
printf("\n         "); 
printf("\n");
system("ps -au");
printf("\n---------------------------------");
printf("\n         "); 
printf("\n");
}

void NEWD()
{
char newdir[100];
printf("Enter the directory: ");
gets(newdir);
char temp[100] ="mkdir ";
system(strcat(temp, newdir));
printf("\n         ");
printf("\nNew Directory created Sucessfully");
printf("\n---------------------------------");
printf("\n         "); 
printf("\n");
}

void MATCH()
{
char str1[100];
char str2[100];
printf("Enter file name: ");
gets(str1);
printf("Enter string: ");
gets(str2);
char cm1[100]="cat ";
char cm2[100]="| grep ";
strcat(cm1,str1);
strcat(cm2,str2);
system(strcat(cm1,cm2));
printf("\n---------------------------------");
printf("\n         "); 
printf("\n");
}

void HELP()
{
printf("\n     _________________________________________________________________________________________________________________________________________________________________________     \n    | DIR - This should list all the files in the current  directory                                                                                                          |    \n    | PWD - It should display the present working directory’s absolute path                                                                                                   |    \n    | JOB - This should display all the user level tasks which are currently running on the machine                                                                           |\n    | NEWD - To create a new folder in the current directory. This command should be used with an argument which should be the name of the folder which needs to be created.  | \n    | MATCH - To create search for a particular patter in a specific file. This command takes two arguments. First one is the file name and second one is the pattern.        |\n    | EXIT - to exit from the shell                                                                                                                                           |\n    | HELP - To display this help and exit                                                                                                                                    |\n    ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯");
printf("\n         "); 
printf("\n");
}

void EXIT()
{
printf("\033[0;31mExiting....... \033[0m");
printf("\n---------------------------------------------------------------------------oOo---------------------------------------------------------------------------");
printf("\n");
}
int main()
{
system("clear");
printf("BL.EN.U4AIE20023 – UTHEJ K\nBL.EN.U4AIE20030 - KOTHURU GURUNADH\nBL.EN.U4AIE20043 – NIKHIL KUMAR MUSUNURU\n------------------------------------------\n          OS Project Work\n------------------------------------------\n");
while (1) {
    char x[100]="x";
    printf("\n[ \033[0;33m");
    PWD();
    printf("/Team_16.c\033[0m ]");
    printf(">> ");
    gets(x);
	if (!strcmp(x, "DIR")) {
       		 main1();
	}
	else if (!strcmp(x, "PWD")) {
  		printf("\n         ");
		printf("\nCurrent working directory: "); 
  		PWD(); \
 		printf("\n         ");
  		printf("\n---------------------------------");
  		printf("\n         "); 
 		printf("\n"); 
	}
else if (!strcmp(x, "JOB")) {
  		 JOB(); 
	}
	else if (!strcmp(x, "NEWD")) {
  		NEWD();  
	}
	else if (!strcmp(x, "MATCH")) {
  		MATCH();  
	}
	else if (!strcmp(x, "HELP")) {
 		HELP();  
	}
	else if (!strcmp(x, "EXIT")) {
  		EXIT();
 		break; 
	}
	else {
    		printf("\n\033[0;31mCommand not found \033[0m");
    		printf("\n         ");
	}
    
}
 return 0;
}
