#include <iostream>

using namespace std;

void printPosition() {
	int i,j;
	char text[1024]="1234567890";
	int text_length = 10;
	char array_to_search1[4] = "23";
	int array_to_search1_length = 2;
	int position1 = -1;
	for (i=0;i<text_length-array_to_search1_length+1;i++) {
		bool found = true;
		for (j=0;j<array_to_search1_length;j++) {
			if (text[i+j]!=array_to_search1[j])
				found = false;
		}
		if (found) {
			position1 = i;
			break;
		}
	}
cout << "Position :" << position1 << endl;
}

int main()
{
    printPosition();
    return 0;
}
