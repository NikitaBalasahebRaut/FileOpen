//accept the file name from user and open that file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char name[30] = {'\0'};
	int fd = 0;
	
	printf("Enter the file name \n");
	scanf("%s",&name);
	
	fd = open(name,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open the file \n");
	}
	else
	{
		printf("File successfully open with fd : %d",fd);
	}
	
	return 0;
}

/*

output

Enter the file name
data.txt
Unable to open the file

D:\ProgramTopicWise\LB\8File_Handling\OpenFile>myexe
Enter the file name
Infi.txt
Unable to open the file

D:\ProgramTopicWise\LB\8File_Handling\OpenFile>myexe
Enter the file name
Info.txt
File successfully open with fd : 3

*/