#include <iostream>
using namespace std;

class siswa;

class orang {
private:
	string nama;
public:
	void serNama(string pNama);
	friend class siswa;
};

int main()
{
}

