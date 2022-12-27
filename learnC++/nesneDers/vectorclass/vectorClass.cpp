#include <iostream>
using namespace std;
#include <fstream>
#include <vector>


#define roomCount 5

class Hotel
{
private:
	string name;
	string telephone;
	int roomNo;
	int day;
	float price;

public:
	void hotelRecord(string name, string telephone, int roomNo, int day, float price);
	void customerInfo(int);
	void emptyRooms();
	int roomControl(int);
	void updateRecord(int);
	void deleteRecord(int);
	int isRoomEmpty(int);
	friend ostream &operator<<(ostream &, Hotel &);
};




int main (){
    









    return 0;
}
