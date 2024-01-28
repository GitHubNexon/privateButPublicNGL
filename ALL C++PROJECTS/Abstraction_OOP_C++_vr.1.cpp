#include <iostream>
#include <windows.h>

using namespace std;

// Abstraction that the base class is FileExplorer 
class FileExplorer{
public:
	virtual void OpenAFile() = 0;
	
};

class WordFile:public FileExplorer {
public:
	void OpenAFile(){
		cout << "Opening Algorithm.docx...\n\n";
		Sleep(2000);
	}
		
};

class ExcelFile:public FileExplorer {
public:
	void OpenAFile(){
		cout << "Opening Algorithm.xlsx...\n\n";
		Sleep(1000);
	}
		
};

class PowerpointFile:public FileExplorer {
public:
	void OpenAFile(){
		cout << "Opening Algorithm.pptx...\n\n";
		Sleep(500);
	}
		
};


int main()
{
// in this output make the FileExplorer open the three files or three inherited class simultaneously
	cout << "Opening FileExplorer...\n\n";
		Sleep(2000);

	FileExplorer* f1=new WordFile();

	FileExplorer* f2=new ExcelFile();

	FileExplorer* f3=new PowerpointFile();
	
	FileExplorer* FileExplorer[3] = {f1,f2,f3};
	for (int i = 0; i <3; i++)
		FileExplorer[i]->OpenAFile();
	
	
	cout << "Pulmano John Mark L - Thursday, February 17, 2022 at 4:43PM \n\n";
		Sleep(2000);
	
	system("pause");
	return 0;
}

