/*PATIENT RECORED MANAGEMENT SYSTEM -- DLL ! */

#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;
struct patient {
     char name[90];
     char card_No[40];
     char sex[10];
     int age;
     int date_added;
     float cost;
     patient* next;
     patient* prev;
};
struct patient* start = NULL;
struct patient* last = NULL;
void insertAtBeginning();
void insertAtEnd();
void insertAtMiddle();
void deleteAtBeginning();
void deleteAtEnd();
void deletebyname();
void deletebysex();
void deletebycard_No();
void deletebyage();
void deletebycost();
void deletebydate_added();
void deletenthnode();
void searchminimumcost();
void searchmaximumage();
void averageage();
void averagecost();
void deleteminimumcost();
void deletemaximumage();
void searchbyname();
void searchbysex();
void searchbycard_No();
void searchbyage();
void searchbycost();
void searchbydate_added();
void displaybackward();
void displayforward();
void copylisttofile();
int numberofoccurencebyname();
int numberofoccurencebysex();
int numberofoccurencebycard_No();
int numberofoccurencebyage();
int numberofoccurencebycost();
int numberofoccurencebydate_added();
int totalnumberofpatient();
void updatename();
void updatesex();
void updatecard_No();
void updateage();
void updatecost();
void updatedate_added();
void sortbyname();
void sortbysex();
void sortbycard_No();
void sortbyage();
void sortbycost();
void sortbydate_added();
void toptenname();
void toptensex();
void toptencard_No();
void toptenage();
void toptencost();
void toptendate_added();
void sortbycost2();//order in descending order.//
void sortswap(patient *temp1, patient *temp2);
int main()
{
      int n, k, w, choice, t, update, sh, del, cal, sp, num, top,sr,e;
     cout << "-------------------------------------------------" << endl;
     cout << "WELCOME TO PATIENT RECORED SYSTEM" << endl;
     cout << " -------------------------------------------------" << endl;
     cout << "                                   " << endl;
     cout << "                                   " << endl;
     cout << "                                   " << endl;
     cout << "---------------------------------------" << endl;
     cout << " ****PATIENT RECORED MANAGEMENT SYSTEM***" << endl;
     cout << "---------------------------------------" << endl;
     cout << "                                      " << endl;
     cout << "Enter patient information" << endl;
          cout << "How many Patients do yo want to register?" << endl;
          cin >> n;
          do {
               cout << "Where do you want to Register your patients?" << endl;
               cout << endl << "1,Insert at the Begining" << endl;
               cout << endl << "2,Insert at the Middle" << endl;
               cout << endl << "3,Insert at the End" << endl;
               cin >> k;
          } while (k != 3 && k != 2 && k != 1);
          switch (k) {
          case 1: {
               for (int i = 1; i <= n; i++) {
                    insertAtBeginning();
               }
               break;
          }
          case 2: {
               for (int i = 1; i <= n; i++) {
                    insertAtMiddle();
               }
                    break;
               
          }
          case 3: {
               for (int i = 1; i <= n; i++) {
                    insertAtEnd();
               }
                    break;
              }
          }
          
     p:
          do {
               cout << "Do you want other options like:- " << endl;
               cout << "Select '1'to Display" << endl;
               cout << "Select '2'to update" << endl;
               cout << "Select '3'to know numberofoccurence  attributes " << endl;
               cout << "Select '4'to Delete  attributes" << endl;
               cout << "Select '5'to perform calculations" << endl;
               cout << "Select '6'to display top 10 elements in the list" << endl;
               cout << "Select '7'to swap the information of patient" << endl;
               cout << "Select '8'to copy all informations of all patient in the linked list to notepad file " << endl;
               cout<<"select '9' to search the information"<<endl;
                cout<<"select '10' to insert at middle "<<endl;
                 cout<<"select '11' to insert at begining"<<endl;
                  cout<<"select '12' to insert at begining"<<endl;
               cout << "Select any Number to End the program";
               cout << "Enter Choice: ";
               cin >> choice;
               switch (choice) {
               case 1: {
               a:
                    cout << "In which order do you want to display?" << endl;
                    cout << "1,Display forward" << endl;
                    cout << "2,Display bakward" << endl;
                    cin >> t;
                    if (t == 1)
                         displayforward();
                    else if (t == 2)
                         displaybackward();
                    else {
                         cout << "Invalid input ";
                         goto a;
                    }
                    break;
               }
               case 2: {
               b:
                    cout << "In what attribute do you want to update your information?" << endl;
                    cout << "1,update  name" << endl;
                    cout << "2,update  age" << endl;
                    cout << "3,update  Card Number" << endl;
                    cout << "4,update  Sex" << endl;
                    cout << "5,update  Date of Registration" << endl;
                    cout << "6,update  Cost" << endl;
                    cin >> update;
                    switch (update) {
                    case 1: {
                         updatename();
                         break;
                    }
                    case 2: {
                         updateage();
                         break;
                    }
                    case 3: {
                         updatecard_No();
                              break;
                    }
                    case 4: {
                         updatesex();
                         break;
                    }
                    case 5: {
                         updatedate_added();
                         break;
                    }
                    case 6:
                    {
                        updatecost();
                        break;
                    }
                    default: {
                         cout << "Invalid input";
                         goto b;
                         break;
                    }
                    }
                    break;
               }
               case 3: {
               c:
                    cout << "In what attribute do you want tonumberofoccurence your information?" << endl;
                    cout << "1 numberofoccurence by  name" << endl;
                    cout << "2 numberofoccurence by age" << endl;
                    cout << "3 numberofoccurence by Card Number" << endl;
                    cout << "4 numberofoccurence by Sex" << endl;
                    cout << "5 numberofoccurence by  Date of Registration" << endl;
                    cout << "6 numberofoccurence by  Cost" << endl;
                    cin >> sh;
                    switch (sh) {
                    case 1: {
                       cout<<  numberofoccurencebyname();
                         break;
                    }
                    case 2: {
                        cout<< numberofoccurencebyage();
                         break;
                    }
                    case 3: {
                     cout<<    numberofoccurencebycard_No();
                              break;
                    }
                    case 4: {
                       cout<<  numberofoccurencebysex();
                         break;
                    }
                    case 5: {
                         cout<<numberofoccurencebydate_added();
                         break;
                    }
                    case 6: {
                        cout<< numberofoccurencebycost();
                         break;
                    }
                    default: {
                         cout << "Invalid input";
                         goto c;
                         break;
                    }
                    }
                           break;
                    
               }
               case 4: {
               d:
                    cout << "In which way do you want to delete your information?" << endl;
                    cout << "1,to delete the first element of the linked list" << endl;
                    cout << "2,to delete the last element of the linked list" << endl;
                    cout << "3 to delete  name" << endl;
                    cout << "4,to delete  age " << endl;
                    cout << "5,to delete  Card Number" << endl;
                    cout << "6,to delete  sex" << endl;
                    cout << "7,to delete  Date of Registration" << endl;
                    cout << "8,to delete  Cost" << endl;
                    cout << "9,to delete nth node" << endl;
                    cout << "10,to delete Minimum age" << endl;
                    cout << "11,to delete Maximum  age" << endl;
                    cin >> del;
                    switch (del) {
                    case 1: {
                         deleteAtBeginning();
                         break;
                    }
                    case 2: {
                         deleteAtEnd();
                         break;
                    }
                    case 3: {
                         deletebyname();
                         break;
                    }
                    case 4: {
                         deletebyage();
                         break;
                    }
                    case 5: {
                         deletebycard_No();
                         break;
                    }
                    case 6: {
                         deletebysex();
                         break;
                    }
                    case 7: {
                         deletebydate_added();
                         break;
                    }
                    case 8: {
                         deletebycost();
                         break;
                    }
                    case 9: {
                         deletenthnode();
                         break;
                    }
                    case 10: {
                         deleteminimumcost();
                         break;
                    }
                    case 11: {
                         deletemaximumage();
                         break;
                    }
                    default: {
                         cout << "Invalid input";
                         goto d;
                         break;
                    }
                    }
                           break;
                    
               }
               case 5: {
               e:
                    cout << "Which Task do you want to Perform" << endl;
                    cout << "1,to calculate the Average Age" << endl;
                    cout << "2,to calculate the Average Cost" << endl;
                    cout << "3,to calculate Maximum Age" << endl;
                    cout << "4,to calculate Minimum cost" << endl;
                    cin >> cal;
                    if (cal == 1) {
                         averageage();}
                    else if (cal == 2){
                         averagecost();}
                    else if (cal == 3){
                         searchmaximumage();}
                    else if (cal == 4){
                         searchminimumcost();}
                    else {
                         cout << "Invalid input";
                         goto e;
                    }
                    }
                    break;
               case 6: {
               g:
                    cout << "In what attribute do you want to see the top 10 occurence your information?" << endl;
                    cout << "1 top 10 occurence  name" << endl;
                    cout << "2 top 10 occurence  age" << endl;
                    cout << "3 top 10 occurence  Card Number" << endl;
                    cout << "4 top 10 occurence  Sex" << endl;
                    cout << "5 top 10 occurence  Date of Registration" << endl;
                    cout << "6 top 10 occurence  Cost" << endl;
                    cin >> num;
                    switch (num) {
                    case 1: {
                         toptenname();
                         break;
                    }
                    case 2: {
                         toptenage();
                         break;
                    }
                    case 3: {
                         toptencard_No();
                              break;
                    }
                    case 4: {
                         toptensex();
                         break;
                    }
                    case 5: {
                         toptendate_added();
                         break;
                    }
                    case 6: {
                         toptencost();
                         break;
                    }
                    default: {
                         cout << "Invalid input";
                         goto g;
                         break;
                    }
                    }
                           break;
                
               }
                     case 7:{
                     k:
                     
                          cout << "In what attribute do you want to swap your information?" << endl;
                          cout << "1,sort  name" << endl;
                          cout << "2,sort age" << endl;
                          cout << "3,sort  Card Number" << endl;
                          cout << "4,sort Sex" << endl;
                          cout << "5,sort  Date of Registration" << endl;
                          cout << "6,sort  Cost" << endl;
                          cin >> sp;
                          switch (sp) {
                          case 1: {
                               sortbyname();
                               break;
                          }
                          case 2: {
                               sortbyage();
                               break;
                          }
                          case 3: {
                               sortbycard_No();
                                    break;
                          }
                          case 4: {
                               sortbysex();
                               break;
                          }
                          case 5: {
                               sortbydate_added();
                               break;
                          } 
                          case 6: {
                         cout << "1,In Ascending order" << endl;
                         cout << "2,In Descending order" << endl;
                         cin >> w;
                         if (w == 1) { sortbycost(); }
                         else { sortbycost2(); }
                         break;
                              
                          }
                          default: {
                               cout << "Invalid input";
                               goto k;
                               break;
                          }
                          }
                          break;
                     }
                     case 8: {
                          copylisttofile();
                          break;
                     }
                     case 9:{
                         L:
                         cout << "In what attribute do you want to search your information?" << endl;
                    cout << "1,search  name" << endl;
                    cout << "2,search  age" << endl;
                    cout << "3,search  Card Number" << endl;
                    cout << "4,search  Sex" << endl;
                    cout << "5,search  Date of Registration" << endl;
                    cout << "6,search  Cost" << endl;
                    cin >> sr;
                    switch (sr) {
                    case 1: {
                         searchbyname();
                         break;
                    }
                    case 2: {
                         searchbyage();
                         break;
                    }
                    case 3: {
                         searchbycard_No();
                              break;
                    }
                    case 4: {
                         searchbysex();
                         break;
                    }
                    case 5: {
                         searchbydate_added();
                         break;
                    }
                    case 6:
                    {
                        searchbycost();
                        break;
                    }
                    default: {
                         cout << "Invalid input";
                         goto L;
                         break;
                    }
                    }
                    break;
                         
                     }
                     case 10:{
               for (int i = 1; i <= n; i++) {
                    insertAtMiddle();
               }
               break;
                     }
            case 11:{
               for (int i = 1; i <= n; i++) {
                    insertAtBeginning();
               }
               break;
                     }
                      case 13:{
               for (int i = 1; i <= n; i++) {
                    insertAtEnd();
               }
               break;
                     }
                     default: {
                          cout << "End of the program";
                          break;
                     }

               }
               cout <<endl<< "If you want to go back to the main option press 0" << endl;
               cin >> e;
               goto p;
          } while (choice != 0);
return 0;
     }

     void insertAtBeginning() {
          patient* p = new patient;
          cout << "enter ur name" << endl;
          cin >> p->name;
          string sex;
     bool validsex = false;
	     while(!validsex)
	     {
		    cout<<"Enter sex of patient  ";
		    cin>>p->sex;
		    if(strcmp(p->sex,"M")==0 || strcmp(p->sex,"F")==00)
		    {
			  validsex = true;
		    }
		    else
		    {
			  cout<<"Invalid sex please enter M or F ";
		    } 
	     }
          cout << "enter card_no" << endl;
          cin >> p->card_No;
           patient *a = start;
           while(a != NULL)
        	{
		      if(a->card_No == p->card_No)
		      {
		        cout<<" card number "<<p->card_No<<" already exist. Please enter a new card number  ";
		        cin>>p->card_No;
	          }
	          else
	          {
	          	 a=a->next;
			  }
	        }
          cout << "eneter age" << endl;
          cin >> p->age;
           while(p->age<0)
	         {
		       cout<<"Invalid age. Please enter the valid age  ";
		       cin>>p->age;
	         }
          cout << "enter cost" << endl;
          cin >> p->cost;
           while(p->cost<0)
        	{
		       cout<<"Invalid cost. Please enter the valid cost ";
		       cin>>p->cost;
	        }
          cout << "enter date_added" << endl;
          cin >> p->date_added;
           while(p->date_added<0)
        	{
		       cout<<"    Invalid date_added. Please enter the valid date_added ";
		       cin>>p->date_added;
	        }
          p->next = NULL;
          p->prev = NULL;
          if (start == NULL) {
               start = p;
               last = p;
          }
          else {
               p->next = start;
               start->prev = p;
               start = p;
          }
     }

     void copylisttofile()
     {
          if (start == NULL)
          {
               cout << endl << "list is empty: can not be copied . ";
               return;
          }
          char filename[20];
          cout << "Enter the file name ";
          cin >> filename;
          ofstream file;
          file.open(filename);
          if (!file)
          {
               cout << endl << "Error: failed to open file ";
               return;
          }
          patient* n = start;
          while (n != NULL)
          {
               file << n->name << endl;
               file << n->sex << endl;
               file << n->card_No << endl;
               file << n->age << endl;
               file << n->cost << endl;
               file << n->date_added << endl;
               n = n->next;
          }
          file.close();
          cout << "Successfully copied the linked list data to " << filename;
     }


void insertAtEnd() {
    patient*n= new patient;
    cout<<endl<<"enter the  patient's  name"<<endl;
    cin>>n->name;
    string sex;
     bool validsex = false;
	     while(!validsex)
	     {
		    cout<<"Enter sex of patient  ";
		    cin>>n->sex;
		    if(strcmp(n->sex,"M")==0 || strcmp(n->sex,"F")==00)
		    {
			  validsex = true;
		    }
		    else
		    {
			  cout<<"Invalid sex please enter M or F ";
		    } 
	     }
     cout << "enter card_no" << endl;
          cin >> n->card_No;
           patient *a = start;
           while(a != NULL)
        	{
		      if(a->card_No == n->card_No)
		      {
		        cout<<"card number "<<n->card_No<<" already exist. Please enter a new card number  ";
		        cin>>n->card_No;
	          }
	          else
	          {
	          	 a=a->next;
			  }
	        }
          cout << "eneter age" << endl;
          cin >> n->age;
          while(n->age<0)
	         {
		       cout<<"Invalid age. Please enter the valid age  ";
		       cin>>n->age;
	         }
          cout << "enter cost" << endl;
          cin >> n->cost;
          while(n->cost<0)
        	{
		       cout<<"Invalid cost. Please enter the valid cost ";
		       cin>>n->cost;
	        }
          cout << "enter date_added" << endl;
          cin >> n->date_added;
           while(n->date_added<0)
        	{
		       cout<<"Invalid date_added. Please enter the valid date_added ";
		       cin>>n->date_added;
	        }
          n->next = NULL;
          n->prev = NULL;
          if (start == NULL) {
               start = n;
               last = n;
          }
          else {
               n->prev = last;
            last->next=n;
            last=last->next;
          }
     }
     void insertAtMiddle()
{
    string key;
    cout << "Enter the name after whom you want to insert: ";
    cin >> key;
    int p;
    cout << "How many patients do you want to register at middle? ";
    cin >> p;

    for (int i = 0; i < p; i++)
    {
   patient *h =new patient();

        cout<<"Enter name of patient"<<endl;
        cin>>h->name;
        string sex;
     bool validsex = false;
	     while(!validsex)
	     {
		    cout<<"Enter sex of patient  ";
		    cin>>h->sex;
		    if(strcmp(h->sex,"M")==0 || strcmp(h->sex,"F")==00)
		    {
			  validsex = true;
		    }
		    else
		    {
			  cout<<"Invalid sex please enter M or F ";
		    } 
	     }
     cout << "enter card_no" << endl;
          cin >> h->card_No;
           patient *a = start;
           while(a != NULL)
        	{
		      if(a->card_No == h->card_No)
		      {
		        cout<<" card number "<<h->card_No<<" already exist. Please enter a new card number  ";
		        cin>>h->card_No;
	          }
	          else
	          {
	          	 a=a->next;
			  }
	        }
          cout << "eneter age" << endl;
          cin >> h->age;
          while(h->age<0)
	         {
		       cout<<"Invalid age. Please enter the valid age  ";
		       cin>>h->age;
	         }
          cout << "enter cost" << endl;
          cin >> h->cost;
           while(h->cost<0)
        	{
		       cout<<"Invalid cost. Please enter the valid cost ";
		       cin>>h->cost;
	        }
          cout << "enter date_added" << endl;
          cin >> h->date_added;
          while(h->date_added<0)
        	{
		       cout<<"Invalid date_added. Please enter the valid date_added ";
		       cin>>h->date_added;
	        }
        if (start == NULL && last == NULL) // to check if the dll is empty
        {
            start = h;
            last = h;
        }
        else
        {
            patient  *temp;
            temp = start;
            while (temp != NULL && temp->name !=key)
            {
                temp = temp->next;
            }

            if (temp == NULL) // given name not found
            {
                cout << "Given name not found in the list" << endl;
                return;
            }

            h->prev = temp;
            h->next = temp->next;
            if (temp->next != NULL)
            {
                temp->next->prev = h;
            }
            temp->next = h;

            if (temp == last)
            {
                last = h;
            }
        }
    }
}
void deleteAtEnd() {
     if (start == NULL && last == NULL)
          cout << "There is no registered patient, can not be deleted" << endl;
     else if (start->next == NULL && last->prev == NULL)
     {
          start = NULL;
          last = NULL;
     }
     patient* temp1 = start, * temp2;// temp1 refers to the current node and temp2 refers to the previous node
     while (temp1->next != NULL) {
          temp2 = temp1;
          temp1 = temp1->next;
     }            // Remove the last node from the list
     temp1->prev = NULL;
     temp2->next = NULL;
     last=temp2;
     delete temp1;
}

void deleteAtBeginning() {
     if (start == NULL)       //if there is no node in the list
          cout << "There is no registered patient, can not be deleted" << endl;
     else if (start->next == NULL)     // if the list have only one node
     {
          start = NULL;
     }
     else {               //if the list have morethan one node
          patient* temp = start;
          start = start->next;
          start->prev = NULL;
          temp->next = NULL;
          delete temp;    //delete the temp node that found in the first
     }
}
void deletebyname()
{

     if (start == NULL)
     {
          cout << "the file is empty" << endl;
          return;
     }
     char name[30];
     cout << "Enter name to delete: ";
     cin >> name;
     patient* temp = start;
     while (temp != NULL && strcmp(temp->name, name) != 0)
     {
          temp = temp->next;
     }
     if (temp == NULL)
     {
          cout << "the node with " << name << " not found" << endl;
          return;
     }

     if (temp == start)
     {
          start = temp->next;
     }
     if (temp->prev != NULL)
     {
          temp->prev->next = temp->next;
     }

     if (temp->next != NULL)
     {
          temp->next->prev = temp->prev;
     }
     temp->next = NULL;
     temp->prev = NULL;
     delete temp;

     cout << "the node with name " << name << " deleted successfully" << endl;
}
void deletebysex() {
     if (start == NULL)
     {
          cout << "the file is empty" << endl;
          return;
     }
     char sex[10];
     cout << "Enter sex to delete: ";
     cin >> sex;
     patient* temp = start;
     while (temp != NULL && strcmp(temp->sex, sex) != 0)
     {
          temp = temp->next;
     }
     if (temp == NULL)
     {
          cout << "the node with " << sex << " not found" << endl;
          return;
     }

     if (temp == start)
     {
          start = temp->next;
     }
     if (temp->prev != NULL)
     {
          temp->prev->next = temp->next;
     }

     if (temp->next != NULL)
     {
          temp->next->prev = temp->prev;
     }
     temp->next = NULL;
     temp->prev = NULL;
     delete temp;

     cout << "the node with sex " << sex << " deleted successfully" << endl;
}
void deletebyage()
{
     struct patient* s = start;
     struct patient* temp;
     int a;
     cout << "enter age to delete  " << endl;
     cin >> a;
     while (s != NULL)
     {
          if (s->age == a && s == start)
          {
               temp = s;
               s = s->next;
               start = s;
               s->prev = NULL;
               temp->next = NULL;
               delete temp;

               cout << "the node with age " << a << " deleted successfully" << endl;
          }
          else if (s->age == a && s == last)
          {
               temp = s;
               s = s->prev;
               last = s;
               s->next = NULL;
               temp->prev = NULL;
               delete temp;

               cout << "the node with age " << a << " deleted successfully" << endl;
          }
          else if ((s->age == a) && (s != start || s != last))
          {
               temp = s;
               s = s->next;
               temp->prev->next = s;
               s->prev = temp->prev;
               temp->next = NULL;
               temp->prev = NULL;
               delete temp;

               cout << "the node with age " << a << " deleted successfully" << endl;
          }
          else
          {
               s = s->next;
          }

     }
}
void deletebycard_No() {
     if (start == NULL)
     {
          cout << "the file is empty" << endl;
          return;
     }
     char card_No[10];
     cout << "Enter card_No to delete: ";
     cin >> card_No;
     patient* temp = start;
     while (temp != NULL && strcmp(temp->card_No, card_No) != 0)
     {
          temp = temp->next;
     }
     if (temp == NULL)
     {
          cout << "the node with " << card_No << " not found" << endl;
          return;
     }

     if (temp == start)
     {
          start = temp->next;
     }
     if (temp->prev != NULL)
     {
          temp->prev->next = temp->next;
     }

     if (temp->next != NULL)
     {
          temp->next->prev = temp->prev;
     }
     temp->next = NULL;
     temp->prev = NULL;
     delete temp;

     cout << "the node with card_No " << card_No << " deleted successfully" << endl;
}
void deletebycost() {
     struct patient* s = start;
     struct patient* temp;
     float a;
     cout << "enter the cost to delete" << endl;
     cin >> a;
     while (s != NULL)
     {
          if (s->cost == a && s == start)
          {
               temp = s;
               s = s->next;
               start = s;
               s->prev = NULL;
               temp->next = NULL;
               delete temp;

               cout << "the node with cost " << a << " delted successfully" << endl;
          }
          else if (s->cost == a && s == last)
          {
               temp = s;
               s = s->prev;
               last = s;
               s->next = NULL;
               temp->prev = NULL;
               delete temp;

               cout << "the node with cost " << a << " delted successfully" << endl;
          }
          else if ((s->cost == a) && (s != start || s != last))
          {
               temp = s;
               s = s->next;
               temp->prev->next = s;
               s->prev = temp->prev;
               temp->next = NULL;
               temp->prev = NULL;
               delete temp;

               cout << "the node with  cost" << a << "delted successfully" << endl;;
          }
          else
          {
               s = s->next;
          }

     }
}
void deletebydate_added() {
     struct patient* s = start;
     struct patient* temp;
     int a;
     cout << "enter the date to delete" << endl;
     cin >> a;
     while (s != NULL)
     {
          if (s->date_added == a && s == start)
          {
               temp = s;
               s = s->next;
               start = s;
               s->prev = NULL;
               temp->next = NULL;
               delete temp;

               cout << "the node with date " << a << " delted successfully" << endl;
          }
          else if (s->date_added == a && s == last)
          {
               temp = s;
               s = s->prev;
               last = s;
               s->next = NULL;
               temp->prev = NULL;
               delete temp;

               cout << "the node with  date " << a << " delted successfully" << endl;
          }
          else if ((s->date_added == a) && (s != start || s != last))
          {
               temp = s;
               s = s->next;
               temp->prev->next = s;
               s->prev = temp->prev;
               temp->next = NULL;
               temp->prev = NULL;
               delete temp;

               cout << "the node with date " << a << " delted successfully" << endl;;
          }
          else
          {
               s = s->next;
          }

     }
}


void deletenthnode() {  // this function help us to delete by node that we choose
     patient* p = NULL;
     patient* temp = start;
     int n, j = 1;
     cout << "enter the node to delete\n";
     cin >> n;
     while (temp != NULL)
     {
          if (j == n && n == 1)
          {
               p = temp;
               temp = temp->next;
               temp->prev = NULL;
               p->next = NULL;
               start = temp;
               delete p;
               cout << "the file that found in " << n << " deleted successfully" << endl;
               break;
          }
          if (j == n && temp->next == NULL)
          {
               p = temp;
               temp = temp->prev;
               temp->next = NULL;
               last = temp;
               p->next = NULL;
               p->prev = NULL;
               delete p;
               cout << "the file that found in " << n << " deleted successfully" << endl;
               break;
          }
          if (j == n)
          {
               p = temp;
               temp = temp->next;
               temp->prev = p->prev;
               p->prev->next = temp;
               p->prev = NULL;
               p->next = NULL;
               delete p;
               cout << "the file that found in " << n << " deleted successfully" << endl;
               break;
          }
          j++;
          temp = temp->next;
     }

}
void searchminimumcost() { //to find the minimun cost from the list
     float c = start->cost;
     patient* s = start;
     while (s != NULL) {
          if (s->cost < c) {  //to compare the costs of the patients
               c = s->cost;
          }
          s = s->next;
     }
     cout << "the minimum cost is" << c << endl;
}
void searchmaximumage() { // to find the maximum age from the list
     patient* p = start;
     struct patient* d = NULL;
     int a = 0;
     while (p != NULL) {
          if (p->age > a) {  //to compare the age of the patients
               a = p->age;
          }
          p = p->next;
     }
     cout << "the maximum age is" << a << endl;
}
void deletemaximumage()
{
     patient* p = start;
     int a = 0;
     while (p != NULL) {
          if (p->age > a) {  //to compare the age of the patients
               a = p->age;
          }
          p = p->next;
     }struct patient* d = start;  // after finishing compare we declare a node to compare delete the maximum age
     while (d != NULL) {
          struct patient* temp;
          if (d->age == a && d == start)
          {
               temp = d;
               d = d->next;
               start = d;
               d->prev = NULL;
               temp->next = NULL;
               delete temp;            // it will delete the age if it found in the first node

               cout << "the node with maximum age of" << a << " delted successfully" << endl;
          }
          else if (d->age == a && d == last)
          {
               temp = d;
               d = d->prev;
               last = d;
               d->next = NULL;
               temp->prev = NULL;
               delete temp;           // it will delete the age that found in the end or the last node

               cout << "the node with  maximum age of" << a << " delted successfully" << endl;
          }
          else if ((d->age == a) && (d != start || d != last))
          {
               temp = d;
               d = d->next;
               temp->prev->next = d;
               d->prev = temp->prev;
               temp->next = NULL;
               temp->prev = NULL;
               delete temp;      // it will delete the age that found in the middle

               cout << "the node with maximum age of " << a << " delted successfully" << endl;
          }
          else
          {
               d = d->next;
          }

     }
}
void deleteminimumcost() {
     float c = start->cost; // used to know the minimum cost
     patient* s = start;
     while (s != NULL) {
          if (s->cost < c) {  //to compare the costs of the patients
               c = s->cost;
          }
          s = s->next;
     }
     struct patient* g = start;
     while (g != NULL) {
          struct patient* temp;
          if (g->cost == c && g == start)
          {
               temp = g;
               g = g->next;
               start = g;
               g->prev = NULL;
               temp->next = NULL;
               delete temp;         // delete the node that have minimum cost

               cout << "the node with minimum cost of " << c << " delted successfully" << endl;
          }
          else if (g->cost == c && g == last)
          {
               temp = g;
               g = g->prev;
               last = g;
               g->next = NULL;
               temp->prev = NULL;
               delete temp;

               cout << "the node with  minimum cost of " << c << " delted successfully" << endl;
          }
          else if ((g->cost == c) && (g != start || g != last))
          {
               temp = g;
               g = g->next;
               temp->prev->next = g;
               g->prev = temp->prev;
               temp->next = NULL;
               temp->prev = NULL;
               delete temp;

               cout << "the node with minimum cost of " << c << " delted successfully" << endl;
          }
          else
          {
               g = g->next;
          }

     }
}

int numberofoccurencebyname()
{
     int count = 0;
     char name[10];
     cout << "enter the name u want to know the occurence of: ";
     cin >> name;
     patient* temp = start; //pointer to the first patient in the list
     while (temp != NULL)
     {
          if (strcmp(temp->name, name) == 0) //compare the given name to the name of current patient
          {
               count++; //if the names match, increment count
          }
          temp = temp->next; //go to the next patient in the list
     }
     return count;
}

int numberofoccurencebysex()
{
     char sex[10];
     int count = 0;   //variable to store the count
     cout << "enter the sex u want to know the occurence of: ";
     cin >> sex;
     patient* temp = start;    // Variable for traversing the linked list
     while (temp != NULL)
     {
          if (strcmp(temp->sex, sex) == 0)
          {
               count++;    //Incrementing count if it matches
          }
          temp = temp->next;  //Moving to the next soldier
     }
     return count;    // Returning the count
}

int numberofoccurencebycard_No()
{
     int count = 0; //initialize the counter
     int card_No;
     cout << "enter the card number u want to know the occurece of: ";
     cin >> card_No;
     patient* temp = start; //set the current patient to the first patient in the list
     while (temp != NULL) //iterate through the list until the end00
     {
          if ((temp->card_No, card_No) == 0)//if the card number of the current patient matches the given card number
          {
               count++; //increment the counter
          }

          temp = temp->next; //move to the next patient in the list
     }
     return count; //return the number of patient with the given card_no
}

int numberofoccurencebyage()
{
     int count = 0; //initialize the counter
     int age;
     cout << "enter the age u want to know the occurece of: ";
     cin >> age;
     patient* temp = start; //set the current patient to the first patient in the list
     while (temp != NULL) //iterate through the list until the end00
     {
          if (temp->age == age) //if the age of the current patient matches the given age
          {
               count++; //increment the counter
          }
          temp = temp->next; //move to the next patient in the list
     }
     return count; //return the number of patient with the given age
}

int numberofoccurencebycost()
{
     int count = 0; //initialize the counter
     int cost;
     cout << "enter the cost u want to know the occurece of: ";
     cin >> cost;
     patient* temp = start; //set the current patient to the first patient in the list
     while (temp != NULL) //iterate through the list until the end00
     {
          if (temp->cost == cost) //if the cost of the current patient matches the given cost
          {
               count++; //increment the counter
          }

          temp = temp->next; //move to the next patient in the list
     }
     return count; //return the number of patient with the given cost
}

int numberofoccurencebydate_added()
{
     int count = 0; //initialize the counter
     int date_added;
     cout << "enter the date_added u want to know the occurece of: ";
     cin >> date_added;
     patient* temp = start; //set the current patient to the first patient in the list
     while (temp != NULL) //iterate through the list until the end00
     {
          if (temp->date_added == date_added) //if the date_added of the current patient matches the given date_added
          {
               count++; //increment the counter
          }

          temp = temp->next; //move to the next patient in the list
     }
     return count; //return the number of patient with the given cost
}

// function to know the total number of patients registered into our system
int totalnumberofpatient()
{
     int count = 0;
     patient* temp = start;
     while (temp != NULL)
     {
          count++;
          temp = temp->next;
     }
     return count;
}

void averageage()
{

     float total = 0;
     float frequency = 0;
     struct patient* temp = start;
     do
     {
          total = (total + (temp->age));
          frequency = frequency + 1;
          temp = temp->next;
     } while (temp != NULL);
     float average = (total / frequency);
     cout << "the average age is :  " << average << endl;
}

void averagecost()
{

     float total = 0;
     float frequency = 0;
     struct patient* temp = start;
     do
     {
          total = (total + (temp->cost));
          frequency = frequency + 1;
          temp = temp->next;
     } while (temp != NULL);
     float average = (total / frequency);
     cout << "the average cost is :  " << average << endl;
}

void sortbyname()
{

     bool swapped = true;
     while (swapped) {
          swapped = false;
          patient* curr = start;
          while (curr->next != NULL) {
               if (strcmp(curr->name, curr->next->name) > 0) {
                    // Swap the patient
                    swapped = true;
                    patient* temp = curr->next;
                    curr->next = temp->next;
                    if (temp->next != NULL) {
                         temp->next->prev = curr;
                    }
                    temp->prev = curr->prev;
                    temp->next = curr;
                    if (curr->prev != NULL) {
                         curr->prev->next = temp;
                    }
                    else {
                         start = temp;
                    }
                    curr->prev = temp;
                    curr = temp;
               }
               curr = curr->next;
          }
     }  cout << "Patients have been sorted by their name successfully!!" << endl;
}

void sortbyage()
{
     if (start == NULL && last == NULL)
          cout << endl << " The list is empty therefore sorting can not be done " << endl;
     else
     {
          for (patient* temp1 = start; temp1 != NULL; temp1 = temp1->next)
          {

               for (patient* temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
               {
                    if (temp2->age < temp1->age)
                    {
                         swap(temp2->name, temp1->name);
                         swap(temp2->age, temp1->age);
                         swap(temp2->card_No, temp1->card_No);
                         swap(temp2->sex, temp1->sex);
                         swap(temp2->date_added, temp1->date_added);
                         swap(temp2->cost, temp1->cost);
                    }
               }
          }
          cout << endl << "Sorting is Successfully done!!" << endl;
     }
}
void sortbycard_No()
{
     bool swapped = true;
     while (swapped) {
          swapped = false;
          patient* curr = start;
          while (curr->next != NULL) {
               if (strcmp(curr->card_No, curr->next->card_No) > 0) {
                    // Swap the patient
                    swapped = true;
                    patient* temp = curr->next;
                    curr->next = temp->next;
                    if (temp->next != NULL) {
                         temp->next->prev = curr;
                    }
                    temp->prev = curr->prev;
                    temp->next = curr;
                    if (curr->prev != NULL) {
                         curr->prev->next = temp;
                    }
                    else {
                         start = temp;
                    }
                    curr->prev = temp;
                    curr = temp;
               }
               curr = curr->next;
          }
     }  cout << "Patients have been sorted by their chard_no successfully!!" << endl;

}

void sortbysex()
{
     {
          if (start == NULL)
               cout << endl << "    The list is empty, the sort can't be done." << endl;
          else {
               for (patient* temp1 = start; temp1->next != NULL; temp1 = temp1->next)
               {
                    for (patient* temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
                    {
                         if (strncmp(temp1->sex, temp2->sex,5) > 0)
                         {

                              swap(temp2->name, temp1->name);
                              swap(temp2->age, temp1->age);
                              swap(temp2->card_No, temp1->card_No);
                              swap(temp2->sex, temp1->sex);
                              swap(temp2->date_added, temp1->date_added);
                              swap(temp2->cost, temp1->cost);
                         }
                    }
               }
               cout << endl << "    Successfully sorted.";
          }
     }
}

void sortbydate_added()
{
     if (start == NULL && last == NULL)
          cout << endl << " The list is empty therefore sorting can not be done " << endl;
     else
     {
          patient* temp1 = start;
          patient* temp2;
          while (temp1 != NULL)
          {
               temp2 = temp1->next;
               while (temp2 != NULL)
               {
                    if (temp2->date_added < temp1->date_added)
                    {

                         swap(temp2->name, temp1->name);
                         swap(temp2->age, temp1->age);
                         swap(temp2->card_No, temp1->card_No);
                         swap(temp2->sex, temp1->sex);
                         swap(temp2->date_added, temp1->date_added);
                         swap(temp2->cost, temp1->cost);
                    }
                    temp2 = temp2->next;
               }
               temp1 = temp1->next;
          }

          cout << endl << "Sorting is Successfully done!!" << endl;
     }
}

//sort patient's total cost in ascending order

void sortbycost()
{
     patient* temp1 = start;
     patient* temp2;
     while (temp1 != NULL)
     {
          temp2 = temp1->next;
          while (temp2 != NULL)
          {
               if (temp2->cost < temp1->cost)
               {

                    swap(temp2->name, temp1->name);
                    swap(temp2->age, temp1->age);
                    swap(temp2->card_No, temp1->card_No);
                    swap(temp2->sex, temp1->sex);
                    swap(temp2->date_added, temp1->date_added);
                    swap(temp2->cost, temp1->cost);
               }
               temp2 = temp2->next;
          }
          temp1 = temp1->next;
     }

     cout << "Patients have been sorted by their total cost successfully!!" << endl;
}


//sort patient's total cost in descending order
void sortbycost2()
{
     patient* temp1 = start;
     patient* temp2;
     while (temp1 != NULL)
     {
          temp2 = temp1->next;
          while (temp2 != NULL)
          {
               if (temp2->cost > temp1->cost)
               {

                    swap(temp2->name, temp1->name);
                    swap(temp2->age, temp1->age);
                    swap(temp2->card_No, temp1->card_No);
                    swap(temp2->sex, temp1->sex);
                    swap(temp2->date_added, temp1->date_added);
                    swap(temp2->cost, temp1->cost);
               }
               temp2 = temp2->next;
          }
          temp1 = temp1->next;
     }

     cout << "Patients have been sorted by their total cost successfully!!" << endl;
}

void sortswap(patient* p1, patient* p2)
{
     patient* temp3 = new patient;
     strcpy(temp3->name, p1->name);
     strcpy(temp3->sex, p1->sex);
     strcpy(temp3->card_No, p1->card_No);
     temp3->age = p1->age;
     temp3->date_added = p1->date_added;
     temp3->cost = p1->cost;


     strcpy(p1->name, p2->name);
     strcpy(p1->sex, p2->sex);
     strcpy(p1->card_No, p2->card_No);
     p1->age = p2->age;
     p1->cost = p2->cost;
     p1->date_added = p2->date_added;

     strcpy(p2->name, temp3->name);
     strcpy(p2->sex, temp3->sex);
     strcpy(p2->card_No, temp3->card_No);
     p2->age = temp3->age;
     p2->cost = temp3->cost;
     p2->date_added = temp3->date_added;
}
void updatename()
{
  if(start == NULL&&last==NULL)
  {
cout<<endl<<"    There is no registered patient ";
      return;
    }
  patient *current = start;
  int counter=1;
int key;
  cout<<endl<<"    Which node would you like to update ?  ";
  cin>>key;
  while(current != NULL && counter!=key)
  {
    current=current->next;
    counter++;
  }
  if(counter == key && current !=NULL)
  {
        char temp[90];
cout<<"    Enter the name to update "<<current->name<<"  "; 
cin>>temp;
strcpy(current->name,temp);
cout<<endl<<"    The name is successfully updated to "<<temp<<endl;
    }
    else
cout<<endl<<"    There is no registered patient on "<<key<<"th node. ";
}
void updatesex()
{
  if(start == NULL&&last==NULL)
  {
cout<<endl<<"    There is no registered patient ";
      return;
    }
patient *current = start;
  int counter=1;
int key;
  cout<<endl<<"    Which node would you like to update ?  ";
  cin>>key;
  while(current != NULL && counter!=key)
  {
    current=current->next;
    counter++;
  }
  if(counter == key && current !=NULL)
  {
    bool validsex = false;
       while(!validsex)
       {
        char temp[30];
cout<<"    Enter the sex to update "<<current->sex<<"  "; 
cin>>temp;
        if(strcmp(temp,"M")==0 || strcmp(temp,"F")==00)
        {
    strcpy(current->sex,temp);
cout<<endl<<"    The sex is successfully updated to "<<temp<<endl;
      validsex = true;
        }
        else
        {
      cout<<"    Invalid sex please enter M or F "<<endl;
        } 
       }
    }
    else
    {
cout<<endl<<"    There is no registered patient on "<<key<<"th node. ";
    }
}

void updateage()
{
  if(start == NULL&&last==NULL)
  {
cout<<endl<<"    There is no registered patient ";
      return;
    }
  patient *current = start;
  int counter=1;
int key;
  cout<<endl<<"    Which node would you like to update ?  ";
  cin>>key;
  while(current != NULL && counter!=key)
  {
    current=current->next;
    counter++;
  }
  if(counter == key && current !=NULL)
  {
int temp;
cout<<"    Enter the age to update "<<current->age<<"  "; 
cin>>temp; 
        while(temp<=0)
       {
    cout<<"    Invalid age. Please enter the valid age  ";
    cin>>temp;
   }
        current->age = temp;
cout<<endl<<"    Age is successfully updated to "<<temp<<endl;
    }
    else
cout<<endl<<"    There is no registered age on "<<key<<"th node ";
}
void updatecost()
{
  if(start == NULL&&last==NULL)
  {
cout<<endl<<"    There is no registered patient";
      return;
    }
  patient *current = start;
  int counter=1;
int key;
  cout<<endl<<"    Which node would you like to update ?  ";
  cin>>key;
  while(current != NULL && counter!=key)
  {
    current=current->next;
    counter++;
  }
  if(counter == key && current !=NULL)
  {
int temp;
cout<<"    Enter the new cost to update "<<current->cost<<"  "; 
cin>>temp;
        while(temp<=0)
       {
    cout<<"    Invalid cost. Please enter the valid cost";
    cin>>temp;
   }
        current->cost = temp;
cout<<endl<<"    cost is successfully updated to "<<temp<<endl;
    }
    else
cout<<endl<<"    There is no registered patient on "<<key<<"th node.";
}
void updatedate_added()
{
  if(start == NULL&&last==NULL)
  {
cout<<endl<<"    There is no registered patient ";
      return;
    }
  patient *current = start;
  int counter=1;
int key;
  cout<<endl<<"    Which node would you like to update ?  ";
  cin>>key;
  while(current != NULL && counter!=key)
  {
    current=current->next;
    counter++;
  }
  if(counter == key && current !=NULL)
  {
int temp;
cout<<"    Enter the date_added to update "<<current->date_added<<"  "; 
cin>>temp; 
        while(temp<=0)
       {
    cout<<"    Invalid date. Please enter the valid date ";
    cin>>temp;
   }
        current->date_added = temp;
cout<<endl<<"    date_added is successfully updated to "<<temp<<endl;
    }
    else
cout<<endl<<"    There is no registered date_added on "<<key<<"th node ";
}
void updatecard_No()
{
          char temp[40];
    if(start == NULL&&last==NULL)
  {
cout<<endl<<"    There is no registered patient ";
      return;
    }
  patient *current = start;
  int counter=1;
int key;
  cout<<endl<<"    Which node would you like to update ?  ";
  cin>>key;
  while(current != NULL && counter!=key)
  {
    current=current->next;
    counter++;
  }
  if(counter == key && current !=NULL)
  {
cout<<"    Enter the card_No to update "<<current->card_No<<"  "; 
cin>>temp;
patient *k = start;
         while(k != NULL)
         {
       if(strcmp(k->card_No, temp)==0)
    {
    cout<<"    card_No "<<temp<<" Already exist. Please enter a new card_No ";
    cin>>temp;
          }
          else
      {
        k=k->next;
      }
       }
strcpy(current->card_No,temp);
cout<<endl<<"    The card_No is successfully updated to "<<temp<<endl;
    }else 
{
cout<<endl<<"    There is no registered patient on "<<key<<"th node. ";

    }
  }      
          
 void toptenname()
{
	if(start == NULL)//if the node is empty
	{
	   cout<<endl<<"    There is no registered patient ";
	   return;
    }
    sortbyname();//we call this function to know the sorted nodes by name
    int counter = 0;
    patient *i = start; 
    while(i != NULL && counter < 10)
    {

            cout<<endl<<"___________________________________"<<endl;
            cout<<"NAME : "<<i->name<<endl;
            cout<<"SEX : "<<i->sex<<endl;
            cout<<"Card Number : "<<i->card_No<<endl;
            cout<<"AGE : "<<i->age<<endl;
            cout<<"Cost = "<<i->cost<<endl;
            cout<<"Date of Regisration = "<<i->date_added<<endl;
            cout<<endl<<"____________________________________"<<endl;
            counter++;
            i=i->next;
    }
    if(counter < 10)//it's 10 because we want to display top 10 nodes.
    {
    	cout<<endl<<"    There are only "<<counter<<"patient";
	}  
}
void toptensex()
{
	if(start == NULL)
	{
	   cout<<endl<<"    There is no registered Patient ";
       return;
    }
    sortbysex();//we call this function to know the sorted nodes by sex
    int counter = 0;
    patient *i = start; 
    while(i != NULL && counter < 10)
    {
            cout<<endl<<"___________________________________"<<endl;
            cout<<"NAME : "<<i->name<<endl;
            cout<<"SEX : "<<i->sex<<endl;
            cout<<"Card Number : "<<i->card_No<<endl;
            cout<<"AGE : "<<i->age<<endl;
            cout<<"Cost = "<<i->cost<<endl;
            cout<<"Date of Regisration = "<<i->date_added<<endl;
            cout<<endl<<"____________________________________"<<endl;
            counter++;
            i=i->next;
    }
    if(counter < 10)
    {
    	cout<<"    There are only "<<counter<<" patients";
	}  
}
void toptencard_No()
{
	if(start == NULL)
	{
	   cout<<endl<<"    There is no registered patient ";
       return;
    }
    sortbycard_No();//we call this function to know the sorted nodes by card number
    int counter = 0;
    patient *i = start; 
    while(i != NULL && counter < 10)
    {
            cout<<endl<<"___________________________________"<<endl;
            cout<<"NAME : "<<i->name<<endl;
            cout<<"SEX : "<<i->sex<<endl;
            cout<<"Card Number : "<<i->card_No<<endl;
            cout<<"AGE : "<<i->age<<endl;
            cout<<"Cost = "<<i->cost<<endl;
            cout<<"Date of Regisration = "<<i->date_added<<endl;
            cout<<endl<<"____________________________________"<<endl;
            counter++;
            i=i->next;
    }
    if(counter < 10)
    {
    	cout<<"    There are only "<<counter<<" Patients";
	}  
}
void toptenage()
{
	if(start == NULL)
	{
    	cout<<endl<<"    There is no registered patients ";
        return;
    }
    sortbyage();//we call this function to know the sorted nodes by age
    int counter = 0;
    patient *i = start; 
    while(i != NULL && counter < 10)
    {

            cout<<endl<<"___________________________________"<<endl;
            cout<<"NAME : "<<i->name<<endl;
            cout<<"SEX : "<<i->sex<<endl;
            cout<<"Card Number : "<<i->card_No<<endl;
            cout<<"AGE : "<<i->age<<endl;
            cout<<"Cost = "<<i->cost<<endl;
            cout<<"Date of Regisration = "<<i->date_added<<endl;
            cout<<endl<<"____________________________________"<<endl;
            counter++;
            i=i->next;
    }
    if(counter < 10)
    {
    	cout<<"    There are only "<<counter<<" patients.";
	}  
}
void toptencost()
{
	if(start == NULL)
	{
	   cout<<endl<<"    There is no registered patients. ";
       return;
    }
    sortbycost();//we call this function to know the sorted nodes by cost
    int counter = 0;
    patient *i = start;
    while(i != NULL && counter < 10)
    {

            cout<<endl<<"___________________________________"<<endl;
            cout<<"NAME : "<<i->name<<endl;
            cout<<"SEX : "<<i->sex<<endl;
            cout<<"Card Number : "<<i->card_No<<endl;
            cout<<"AGE : "<<i->age<<endl;
            cout<<"Cost = "<<i->cost<<endl;
            cout<<"Date of Regisration = "<<i->date_added<<endl;
            cout<<endl<<"____________________________________"<<endl;
            counter++;
            i=i->next;
    }
    if(counter < 10)
    {
    	cout<<"    There are only "<<counter<<" patient.";
	}
}  
void toptendate_added()
{
	if(start == NULL)
	{
	   cout<<endl<<"    There is no registered patients. ";
       return;
    }
    sortbydate_added();//we call this function to know the sorted nodes by date
    int counter = 0;
    patient *i = start;
    while(i != NULL && counter < 10)
    {

            cout<<endl<<"___________________________________"<<endl;
            cout<<"NAME : "<<i->name<<endl;
            cout<<"SEX : "<<i->sex<<endl;
            cout<<"Card Number : "<<i->card_No<<endl;
            cout<<"AGE : "<<i->age<<endl;
            cout<<"Cost = "<<i->cost<<endl;
            cout<<"Date of Regisration = "<<i->date_added<<endl;
            cout<<endl<<"____________________________________"<<endl;
            counter++;
            i=i->next;
    }
    if(counter < 10)
    {
    	cout<<"    There are only "<<counter<<" patient.";
	}
}  
void displayforward()
    {
    if( start==NULL&& last==NULL)
    cout<<endl<<"DLL is empty so it can't display \n";
    else
    {
    for(patient *i=start;i!=NULL; i=i->next)
    {
      cout<<endl<<"****************************************************"<<endl;
    cout<<endl<<"The Pactient name is:"<<i->name<<endl;
    cout<<endl<<"The Patient age is :"<<i->age<<"Years old"<<endl;
    cout<<endl<<"Ptient card_no is :"<<i->card_No<<endl;
    cout<<endl<<"The Patient gender is :"<<i->sex<<endl;
    cout<<endl<<"The patient total cost is :"<<i->cost<<"Birr"<<endl;
    cout<<endl<<"The patient registration date :"<<i->date_added<<endl;
    cout<<endl<<"*********************************************************"<<endl;
     }  
    }
  }
void displaybackward()
    {
    if( start==NULL&& last==NULL)
    cout<<endl<<"DLL is empty so it can't display \n";
    else
    {
    for(patient *i=last;i!=NULL; i=i->prev)
    {
      cout<<endl<<"****************************************************"<<endl;
    cout<<endl<<"The Pactient name is:"<<i->name<<endl;
    cout<<endl<<"The Patient age is :"<<i->age<<"Years old"<<endl;
    cout<<endl<<"Ptient card_no is :"<<i->card_No<<endl;
    cout<<endl<<"The Patient gender is :"<<i->sex<<endl;
    cout<<endl<<"The patient total cost is :"<<i->cost<<"Birr"<<endl;
    cout<<endl<<"The patient registration date :"<<i->date_added<<endl;
    cout<<endl<<"*********************************************************"<<endl;


      }  
    }
}
void searchbyname()// this enable the user of this system to search patients by their name
 {
     struct patient *temp=start;
     string name;
     cout<<"enter name to search by name"<<endl;
     cin>>name;


     int i=0;
     while(temp!=NULL)
     {
         if((temp->name)==name)
         {
             i++;

             cout<<"patient"<<i<<endl;
             cout<<"name="<<temp->name<<endl;
     cout<<"card_NO="<<temp->card_No<<endl;
     cout<<"age="<<temp->age<<endl;
     cout<<"sex="<<temp->sex<<endl;
     cout<<"cost="<<temp->cost<<endl;
     cout<<"date_added="<<temp->date_added<<endl;
         }
         temp=temp->next;
     }

 }
void searchbycard_No()
{
    struct patient *temp=start;
     string card_No;
     cout<<"enter card_No number to search by card number"<<endl;
     cin>>card_No;


     int i=0;
     while(temp!=NULL)
     {
         if((temp->card_No)==card_No)
         {
             i++;
             cout<<"patient"<<i<<endl;
             cout<<"name="<<temp->name<<endl;
     cout<<"card_NO="<<temp->card_No<<endl;
     cout<<"age="<<temp->age<<endl;
     cout<<"sex="<<temp->sex<<endl;
     cout<<"cost="<<temp->cost<<endl;
     cout<<"date_added="<<temp->date_added<<endl;
      }
         temp=temp->next;
     }

}
void searchbyage()// this enable the user of this system to search patient by their age

{
struct patient *temp=start;
     int age;
     cout<<"enter age to search by age"<<endl;
     cin>>age;


     int i=0;
     while(temp!=NULL)
     {
         if((temp->age)==age)
         {
             i++;
               cout<<"patient"<<i<<endl;
               cout<<"name="<<temp->name<<endl;
     cout<<"card_NO="<<temp->card_No<<endl;
     cout<<"age="<<temp->age<<endl;
     cout<<"sex="<<temp->sex<<endl;
     cout<<"cost="<<temp->cost<<endl;
     cout<<"date_added="<<temp->date_added<<endl;
         }
         temp=temp->next;
     }
}
void searchbysex()// this enable the user of this system to search patient by their sex
{
    struct patient *temp=start;
     string a;
     cout<<"enter  to search by sex"<<endl;
     cin>>a;
     int i=0;
     while(temp!=NULL)
     {
         if((temp->sex)==a)
         {
             i++;
                 cout<<"patient"<<i<<endl;
                 cout<<"name="<<temp->name<<endl;
     cout<<"card_NO="<<temp->card_No<<endl;
     cout<<"age="<<temp->age<<endl;
     cout<<"sex="<<temp->sex<<endl;
     cout<<"cost="<<temp->cost<<endl;
     cout<<"date_added="<<temp->date_added<<endl;
         }
         temp=temp->next;
     }

}


void searchbycost()
{
    struct patient *temp=start;
     float c;
     cout<<"enter the amount of cost to search by cost"<<endl;
     cin>>c;
     int i=0;
     while(temp!=NULL)
     {
         if((temp->cost)==c)
         {
             i++;
                cout<<"patient"<<i<<endl;
                cout<<"name="<<temp->name<<endl;
     cout<<"card_NO="<<temp->card_No<<endl;
     cout<<"age="<<temp->age<<endl;
     cout<<"sex="<<temp->sex<<endl;
     cout<<"cost="<<temp->cost<<endl;
     cout<<"date_added="<<temp->date_added<<endl;
      }
         temp=temp->next;
     }
     

}
void searchbydate_added()
{
    struct patient *temp=start;
     int c;
    cout<<"enter the date u register"<<endl;
     cin>>c;
     int i=0;
     while(temp!=NULL)
     {
         if((temp->date_added)==c)
         {
             i++;
                cout<<"patient"<<i<<endl;
     cout<<"name="<<temp->name<<endl;
     cout<<"card_NO="<<temp->card_No<<endl;
     cout<<"age="<<temp->age<<endl;
     cout<<"sex="<<temp->sex<<endl;
     cout<<"cost="<<temp->cost<<endl;
     cout<<"date_added="<<temp->date_added<<endl;
         }
         temp=temp->next;
     }
     

}

