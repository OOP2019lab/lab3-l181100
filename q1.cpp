#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int size=0;
struct gethub_user {
	string fname;
	string usename;
	string  email;
	string institute; 
	string qualification;
	string *folname;
	int foldcount;

};

void bacgroundinfo(gethub_user *user);
void readfile(gethub_user* user);
void print(gethub_user *user);
void remove(gethub_user &user);
void backup(gethub_user *user ,gethub_user *backup_arr);

int main()
{
	gethub_user *user;
	user = new gethub_user[0];
	 readfile(user);
	 bacgroundinfo(user);
	 print(user);
	system("pause");
	return 0;
}

void readfile(gethub_user* user)
{
	int k = 0;
	ifstream myfile("C:\\Users\\Mohammad Humais\\Desktop\\humais.txt");
	myfile >> size;
	user = new gethub_user[size];
	for (int i = 0; i < size; i++)
	{
		myfile  >> user[i].fname;
		myfile  >> user[i].usename;
		myfile  >> user[i].email;
		myfile  >> user[i].foldcount;
		user[i].folname = new string[user[i].foldcount];
		for (int j = 0; j < user[i].foldcount; j++)
		{
			getline(myfile , user[i].folname[j]);
		}
	}
}

void bacgroundinfo(gethub_user *user)
{
	  for (int k = 0; k < size; k++)
      {
	    cout<<user[k].fname<<" enter your institute : \n";
	    cin>>user[k].institute;
	    cout<<user[k].fname<<" enter your qualification : \n";
	    cin>>user[k].qualification;
	  }
}

void backup(gethub_user *user , gethub_user *backup_arr)
{

	backup_arr = user;

}

	

void print(gethub_user *user)
{
  for (int k = 0; k < size; k++)
   {
	cout<<user[k].fname<<endl;
	cout<< user[k].usename<<endl;
	cout << user[k].email<<endl;
	cout<< user[k].foldcount<<endl;
   for (int m = 0; m < user[k].foldcount; m++)
	 {
		cout<<user[k].folname[m];
	 }
   cout<< user[k].institute<<endl;
   cout<< user[k].qualification<<endl;
	cout<<endl;
   }
}
 