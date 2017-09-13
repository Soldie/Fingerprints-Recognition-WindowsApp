#include "MyForm.h"

using namespace CLRSample;

[STAThreadAttribute]
int main(){
	MyForm fm;
	fm.ShowDialog();
	return 0;
}