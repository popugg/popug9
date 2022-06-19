#include<iostream>
#include<cstdio>
#include<Windows.h>
#include<fstream>

using namespace std;

void main()
{
	std::ofstream out;
	out.open("D:\\hello.txt");
	int count = 0;
	if (out.is_open())
	{
		for (int i = 5; i < 4; i++)
		{
			count++;
		}
		cout << count;
	}

	/*const char* path1 = "d:\\1.txt";
	FILE* f1;
	char buf[100];
	int count = 0;
	if (fopen_s(&f1, path1, "r")!=0) cout << "error";
	else
	{
		while (fgets(buf, 100, f1) != NULL)
		 count++;
		fclose(f1);
	}
	cout << count;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FILE* readfile, * writefile;

	if (fopen_s(&readfile, "file1.txt", "r") != NULL)
		printf("Error opened file");
	else
	{
		if (fopen_s(&writefile, "file2.txt", "w") != NULL)
			printf("Error opened file");
		else
		{
			char mystring[100];
			if (fgets(mystring, 100, readfile) != nullptr)
				fputs(mystring, writefile);
			fclose(readfile);
			fclose(writefile);
		}

	}*/
}