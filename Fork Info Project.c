#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

struct S_ADD {
	int ID;
	char Name[30];
	char Number[12];
	char City[30];
	int Courses;
	int Total;
	int Paid;
	int Rem;
	struct S_ADD* SNEXT;
};
struct C_ADD {
	int C_ID;
	char Course_Name[20];
	int Fee;
	char Description[50];
	float Course_Duration;
	struct C_ADD* CNEXT;
};

typedef struct S_ADD* PS_ADD;
typedef struct S_ADD** PPS_ADD;
typedef struct C_ADD* PC_ADD;
typedef struct C_ADD** PPC_ADD;

PS_ADD S_Head = NULL;
PC_ADD C_Head = NULL;

static int Std_ID = 1;
static int Course_ID = 1;

int Login();
void AdminMenu();
void ForkMenu();
void Student_Add(int);
void Student_Update(int);
void Student_Fees(int);
void Student_Search(int);
void Course_Add(int);
void Course_Update(int);
void Course_View(int);
void Course_Search(int);
int Select_Courses();
void View_Courses(int);
int Student_Total_Fees(int);
void Guruji_Details(int);
void Project_Details();

int main()
{
	system("cls");
	int i = 0;

	printf("\n\t ***^^^^^*** FORK INFOSYSTEM ***^^^^^***\n");

	printf("\n\t 1. LOGIN \n\t 2. PROJECT DETAILS \n\t 3. EXIT\n\nYOUR CHOICE => ");
	scanf("%d", &i);
	while (i < 1 || i > 3)
	{
		printf("\n\n\tEnter Valid Option => ");
		scanf("%d", &i);
	}
	if (i == 1)
	{
		i = Login();
		(i == 1) ? AdminMenu() : (i == 2) ? ForkMenu() : printf("ERROR !!!");
	}
	else if (i == 2)
	{
		Project_Details();
		main();
	}
	printf("\n\t Thank You For Using Fork Application \n\n");
	exit(0);
	return 0;
}
int Login()
{
	system("cls");
	char UserName[30] = " ";
	char Password[30] = " ";

	printf("\n\t ***^^^^^*** FORK LOGIN PAGE ***^^^^^***\n");

	while (1)
	{
		printf("\n\tEnter USERNAME => ");
		scanf(" %[^\n]s", UserName);
		if(strcmp(UserName, "Admin") == 0)
		{
			while (1)
			{
				printf("\n\tEnter PASSWORD => ");
				scanf(" %[^\n]s", Password);
				if (strcmp(Password, "Admin123") == 0)
				{
					return 1;
				}
				printf("\n\tInvalid Password !. Please Enter Valid PASSWORD\n");
			}
		}
		else if (strcmp(UserName, "Fork") == 0)
		{
			while (1)
			{
				printf("\n\tEnter PASSWORD => ");
				scanf(" %[^\n]s", Password);
				if (strcmp(Password, "Fork123") == 0)
				{
					printf("\n\t LOGIN SUCCESSFUL ... \n\n");
					system("pause");
					return 2;
				}
				printf("\n\tInvalid Password !. Please Enter Valid PASSWORD\n");
			}
		}
		printf("\n\tInvalid Username !. Please Enter Valid USERNAME\n");
	}
	return 0;
}
void AdminMenu()
{
	system("cls");

	int Opt = 0;

	while(1)
	{
		system("cls");
		printf("\n\t********** ADMIN MENU **********\n");

		printf("\n\t 1 STUDENT \n\t 2 COURSE \n\t 3 LOG OUT \n\n Enter Your Choice => ");
		scanf("%d", &Opt);

		if (Opt == 1)
		{
		    AdminMenu2(Opt);
		}
		else if (Opt == 2)
		{
		    AdminMenu2(Opt);
		}
		else
		{
			main();
		}
	}
}
void AdminMenu2(int Opt)
{
    void (*Option[9])(int);
	Option[0] = Student_Add;
	Option[1] = Student_Update;
	Option[2] = Student_Fees;
	Option[3] = Student_Search;
	Option[4] = Course_Add;
	Option[5] = Course_Update;
	Option[6] = Course_View;
	Option[7] = Course_Search;

	int Opt2 = 0;

	while(1)
    {
        if (Opt == 1)
		{
			system("cls");
			printf("\n\t INSIDE STUDENT OPTION \n");
			printf("\n\t 1 ADD ");
			printf("\n\t 2 UPDATE ");
			printf("\n\t 3 FEES ");
			printf("\n\t 4 SEARCH ");
			printf("\n\t 5 Back ");
			printf("\n\t 6 LOG OUT \n");
		}
		else if (Opt == 2)
		{
			system("cls");
			printf("\n\t INSIDE COURSE OPTION \n");
			printf("\n\t 1 ADD ");
			printf("\n\t 2 UPDATE ");
			printf("\n\t 3 View Courses ");
			printf("\n\t 4 SEARCH ");
			printf("\n\t 5 Back ");
			printf("\n\t 6 LOG OUT \n");
		}
		else
		{
			main();
		}
		printf("\n Please Enter Your Choice => ");
		scanf("%d", &Opt2);

		if (Opt2 == 5)
		{
			AdminMenu();
		}
		else if (Opt2 >= 6)
		{
			main();
		}
		Opt2 = (Opt == 1) ? Opt2 - 1 : Opt2 + 3;

		Option[Opt2](1);
    }
}
void ForkMenu()
{
	system("cls");
	int Option = 0, Option2 = 0;
	void (*GuestOption[5])(int);

	GuestOption[0] = Student_Add;
	GuestOption[1] = Student_Search;
	GuestOption[2] = Course_Search;
	GuestOption[3] = Guruji_Details;
	while (1)
	{
		system("cls");
		printf("\n\t********** GUEST LOGIN **********\n");

		printf("\n\t 1 STUDENT \n\t 2 COURSE \n\t 3 LOG OUT\n\n Enter Your Choice => ");
		scanf("%d", &Option);

		if (Option == 1)
		{
			system("cls");
			printf("\n\t INSIDE STUDENT OPTION \n");
			printf("\n\t 1 ADD ");
			printf("\n\t 2 VIEW STUDENTS ");
			printf("\n\t 3 BACK ");
			printf("\n\t 4 LOG OUT \n");
		}
		else if (Option == 2)
		{
			system("cls");
			printf("\n\t INSIDE COURSE OPTION \n");
			printf("\n\t 1 VIEW COURSES ");
			printf("\n\t 2 GURUJI DETAILS ");
			printf("\n\t 3 BACK ");
			printf("\n\t 4 LOG OUT \n");
		}
		else
		{
			main();
		}

		printf("\n\n Please Enter Your Choice => ");
		scanf("%d", &Option2);

		if (Option2 == 3)
		{
			ForkMenu();
		}
		else if (Option2 == 4)
		{
			main();
		}
		Option2 = (Option == 1) ? Option2 - 1 : Option2 + 1;

		GuestOption[Option2](2);
		if (Option == 2 && Option2 == 1)
		{
			system("pause");
		}
	}
}
void Student_Add(int Menu)
{
	system("cls");

	while(1)
	{
		PPS_ADD First = &S_Head;
		PS_ADD NewStudent = NULL;

		NewStudent = (PS_ADD)malloc(sizeof(struct S_ADD));

		printf("\n\n\t*****^^^ Admission Form ^^^***** \n");
		printf("\n\tEnter The Full Name => ");
		scanf(" %[^\n]s", NewStudent->Name);

		printf("\n\tEnter Mobile Number => ");
		int i = 0;
		char ch = '\0';
		while (i <= 9)
		{
			ch = _getche();
			if (ch >= 48 && ch <= 57)
			{
				NewStudent->Number[i] = ch;
				i++;
				continue;
			}
			printf("\b \b");
		}
		NewStudent->Number[i] = '\0';

		printf("\n\n\tEnter Your City => ");
		scanf(" %[^\n]s", NewStudent->City);

		NewStudent->Courses = Select_Courses();

		NewStudent->Total = Student_Total_Fees(NewStudent->Courses);

		printf("\n\tTotal Fees => %d \n", NewStudent->Total);

		printf("\n Enter Total Amount Of Fee(s) You Want To Paid => ");
		scanf("%d", &NewStudent->Paid);

		while (NewStudent->Paid > NewStudent->Total || NewStudent->Paid == 0)
		{
			printf("\n\t INVALID AMOUNT \n");
			printf("\n Enter Total Amount Of Fee(s) You Want To Paid => ");
			scanf("%d", &NewStudent->Paid);
		}
		NewStudent->Rem = NewStudent->Total - NewStudent->Paid;
		NewStudent->Rem = (NewStudent->Rem < 0) ? -(NewStudent->Rem) : NewStudent->Rem;


		NewStudent->SNEXT = NULL;
		NewStudent->ID = Std_ID++;

		if (*First == NULL)
		{
			*First = NewStudent;
		}
		else
		{
			PS_ADD Temp = S_Head;
			while (Temp->SNEXT != NULL)
			{
				Temp = Temp->SNEXT;
			}
			Temp->SNEXT = NewStudent;
		}
		int Choice1 = 0;
		printf("\n\t==*== Addmission Succesfull ==*==\n");
		printf("\n\t1. ADD Another Student \n\t2. Back\n \n\nEnter Your Choice => ");
		scanf("%d", &Choice1);

		if (Choice1 != 1)
		{
			(Menu == 1) ? AdminMenu2(1) : ForkMenu();
		}
		system("cls");
	}
	system("cls");
	(Menu == 1) ? AdminMenu2(1) : ForkMenu();
}
void Student_Update(int Menu)
{
	int iNo = 0;
	while (1)
	{
		system("cls");
		printf("\n\t*****^^^^^ UPDATE STUDENT DETAILS ^^^^^*****\n");
		printf("\n\t 1. SEARCH BY ID \n\t 2. SEARCH BY NAME \n\t 3. BACK \n\t 4. LOGOUT \n\n Please Enter Your Choice => ");
		scanf("%d", &iNo);

		PS_ADD Temp = S_Head;
		int Update = 0;
		if (iNo == 1)
		{
			while (1)
			{
				int SID = 0;
				printf("Enter Student ID =>");
				scanf("%d", &SID);
				if (SID > Std_ID || SID <= 0)
				{
					printf("\n\tInvalid ID\n");
					continue;
				}
				while (SID != Temp->ID)
				{
					Temp = Temp->SNEXT;
				}
				while (1)
				{
					printf("\n STUDENT ID => %d \n\t1. Student Name :- %s.\n\t2. Mobile Number :- %s\n\t3. City :- %s\n\t4. Course(s) :- ", Temp->ID, Temp->Name, Temp->Number, Temp->City);
					View_Courses(Temp->Courses);
					printf("\n\t5. Paid Fees :- %d \n\n", Temp->Paid);

					printf("\nWhat Do You Want To Update(Press 0 To Cancel) => ");
					scanf("%d", &Update);

					if (Update >= 1 && Update <= 5)
					{
						int i = 0;
						if (Update == 1)
						{
							printf("\n\tEnter Updated Name => ");
							scanf(" %[^\n]s", Temp->Name);
						}
						else if (Update == 2)
						{
							printf("\n\tEnter Updated Number => ");
							int i = 0;
							char ch = '\0';
							while (i <= 9)
							{
								ch = _getche();
								if (ch >= 48 && ch <= 57)
								{
									Temp->Number[i] = ch;
									i++;
									continue;
								}
								printf("\b \b");
							}
							Temp->Number[i] = '\0';
						}
						else if (Update == 3)
						{
							printf("\n\tSelect Updated City => ");
							scanf(" %[^\n]s", Temp->City);
						}
						else if (Update == 4)
						{
							Temp->Courses = Select_Courses();
						}
						else
						{
							printf("\n\tUpdate Paid Fees => \n");
							scanf("%d", &Temp->Paid);
							i = Student_Total_Fees(Temp->Courses);
							while (i < Temp->Paid || Temp->Paid == 0)
							{
								printf("\n\t TOTAL FEES = %d", i);
								printf("\n\tEnter Valid Paid Fees => \n");
								scanf("%d", &Temp->Paid);
							}
						}
						printf("\n\t UPDATED SUCCESSFULLY\n\n");

						printf("\n\t 1. Update More Details Of Same Student \n\t 2. Back \n\n Enter Your Choice => ");
						scanf("%d", &i);

						if (i == 1)
						{
							system("cls");
							continue;
						}
						break;
					}
					else
					{
						break;
					}
				}
				break;
			}
		}
		else if (iNo == 2)
		{
			while (1)
			{
				char SName[30] = "\0";
				printf("Enter Full Name =>");
				scanf(" %[^\n]s", SName);

				while (Temp != NULL)
				{
					if (strcmp(SName, Temp->Name) == 0)
					{
						while (1)
						{
							printf("\n STUDENT ID => %d \n\t1. Student Name :- %s.\n\t2. Mobile Number :- %s\n\t3. City :- %s\n\t4. Course(s) :- ", Temp->ID, Temp->Name, Temp->Number, Temp->City);
							View_Courses(Temp->Courses);
							printf("\n\t5. Paid Fees :- %d \n\n", Temp->Paid);

							printf("\nWhat Do You Want To Update(Press 0 To Go Back) => ");
							scanf("%d", &Update);

							if (Update >= 1 && Update <= 5)
							{
								int i = 0;
								if (Update == 1)
								{
									printf("\n\tEnter Updated Name => ");
									scanf(" %[^\n]s", Temp->Name);
								}
								else if (Update == 2)
								{
									printf("\n\tEnter Updated Number => ");
									int i = 0;
									char ch = '\0';
									while (i <= 9)
									{
										ch = _getche();
										if (ch >= 48 && ch <= 57)
										{
											Temp->Number[i] = ch;
											i++;
											continue;
										}
										printf("\b \b");
									}
									Temp->Number[i] = '\0';
								}
								else if (Update == 3)
								{
									printf("\n\tSelect Updated City => ");
									scanf(" %[^\n]s", Temp->City);
								}
								else if (Update == 4)
								{
									Temp->Courses = Select_Courses();
									Temp->Total = Student_Total_Fees(Temp->Courses);

									printf("\n\tTotal Fees => %d \n", Temp->Total);

									printf("\n Enter Total Amount Of Fee(s) You Want To Paid => ");
									scanf("%d", &Temp->Paid);

									while (Temp->Paid > Temp->Total || Temp->Paid == 0)
									{
										printf("\n\t INVALID AMOUNT \n");
										printf("\n Enter Total Amount Of Fee(s) You Want To Paid => ");
										scanf("%d", &Temp->Paid);
									}
									Temp->Rem = Temp->Total - Temp->Paid;
									Temp->Rem = (Temp->Rem < 0) ? -(Temp->Rem) : Temp->Rem;
								}
								else
								{
									printf("\n\tUpdate Paid Fees => \n");
									scanf("%d", &Temp->Paid);
									i = Student_Total_Fees(Temp->Courses);
									while (i < Temp->Paid || Temp->Paid == 0)
									{
										printf("\n\t TOTAL FEES = %d", i);
										printf("\n\tEnter Valid Paid Fees => \n");
										scanf("%d", &Temp->Paid);
									}
								}
								printf("\n\t UPDATED SUCCESSFULLY\n\n");

								printf("\n\t 1. Update More Details Of Same Student \n\t 2. Back \n\n Enter Your Choice => ");
								scanf("%d", &i);

								if (i == 1)
								{
									system("cls");
									continue;
								}
								Student_Update(Menu);
							}
							else
							{
								Student_Update(Menu);
							}
						}
					}
					Temp = Temp->SNEXT;
				}
				printf("\n\t INVALID NAME \n");
			}
		}
		else if (iNo == 4)
		{
			main();
		}
		else
		{
			AdminMenu2(1);
		}
	}

}
void Student_Fees(int Menu)
{
	system("cls");
	int Total_Fees = 0;
	int Rem_Fees = 0;
	PS_ADD First = S_Head;

	while (First != NULL)
	{
		Total_Fees = Total_Fees + First->Total;
		Rem_Fees = Rem_Fees + First->Rem;
		First = First->SNEXT;
	}

	printf("\n\n\t=========*** FEES TABLE ***=========\n");
	printf("\n\t TOTAL FEES => %d\n\n\t FEES RECIEVED => %d \n\n\t FEES REMAINING => %d\n\n", Total_Fees,Total_Fees-Rem_Fees,Rem_Fees);
	system("pause");
}
void Student_Search(int Menu)
{
	system("cls");
	int Search = 0;

	printf("\n\n\t *****^^^^^===== VIEW STUDENT DETAILS =====^^^^^*****\n");
	printf("\n\t1. VIEW ALL STUDENTS \n\t2. SEARCH STUDENT \n\t3. BACK \n\t4.LOG OUT\n\n ENTER YOUR CHOICE =>");
	scanf("%d", &Search);

	PS_ADD Temp = S_Head;

	if (Search == 1)
	{
		int Std = 1;
		PS_ADD Temp = S_Head;
		while (Temp != NULL)
		{
			printf("\n\t ====*** Student %d ***====\n", Std++);
			printf("\n\tRoll No        :- %d \n\tStudent Name   :- %s.\n\tMobile Number  :- %s\n\tCity           :- %s\n\tCourse(s)      :- \n\t\\tt==============",Temp->ID,Temp->Name,Temp->Number,Temp->City);
			View_Courses(Temp->Courses);
			printf("\n\t\t\t============== \n\tTotal Fees     :-  %d\n\tRemaining Fees :-  %d \n\n",Temp->Total, Temp->Rem);
			Temp = Temp->SNEXT;
		}
		system("pause");
	}
	else if (Search == 2)
	{
		int iNo = 0;
		while (1)
		{
			system("cls");
			printf("\n\t*****^^^^^ SEARCH STUDENT BY NAME OR ID ^^^^^*****\n");
			printf("\n\t 1. SEARCH BY ID \n\t 2. SEARCH BY NAME \n\t 3. BACK \n\n\n Please Enter Your Choice => ");
			scanf("%d", &iNo);

			if (iNo == 1)
			{
				while (1)
				{
					int SID = 0;
					printf("Enter Student ID =>");
					scanf("%d", &SID);
					if (SID > Std_ID || SID <= 0)
					{
						printf("\n\tInvalid ID\n");
						continue;
					}
					PS_ADD Temp = S_Head;
					while (SID != Temp->ID)
					{
						Temp = Temp->SNEXT;
					}
					printf("\n\tRoll No        :- %d \n\tStudent Name   :- %s.\n\tMobile Number  :- %s\n\tCity           :- %s\n\tCourse(s)      :- \n\t\t==============", Temp->ID, Temp->Name, Temp->Number, Temp->City);
					View_Courses(Temp->Courses);
					printf("\n\t\t============== \n\tTotal Fees     :-  %d\n\tRemaining Fees :-  %d \n\n", Temp->Total, Temp->Rem);
					system("pause");
					break;
				}
			}
			else if (iNo == 2)
			{
				while (1)
				{
					char SName[30] = "\0";
					printf("Enter Full Name =>");
					scanf(" %[^\n]s", SName);

					PS_ADD Temp = S_Head;
					while (Temp != NULL)
					{
						if (strcmp(SName, Temp->Name) == 0)
						{
							printf("\n\tRoll No        :- %d \n\tStudent Name   :- %s.\n\tMobile Number  :- %s\n\tCity           :- %s\n\tCourse(s)      :- \n\t\t==============", Temp->ID, Temp->Name, Temp->Number, Temp->City);
							View_Courses(Temp->Courses);
							printf("\n\t\t============== \n\tTotal Fees     :-  %d\n\tRemaining Fees :-  %d \n\n", Temp->Total, Temp->Rem);
							system("pause");
							Student_Search(Menu);
						}
						Temp = Temp->SNEXT;
					}
					printf("\n\t INVALID NAME\n");
					break;
				}
			}
			else
			{
				continue;
			}
		}
		Student_Search(Menu);
	}
	(Search == 4) ? main() : (Menu == 1) ? AdminMenu2(1) : ForkMenu();
}
void Course_Add(int Menu)
{
	system("cls");

	while (1)
	{
		PPC_ADD First = &C_Head;
		PC_ADD NewCourse = NULL;

		NewCourse = (PC_ADD)malloc(sizeof(struct C_ADD));

		printf("\n\n\t*****^^^ ADD COURSE ^^^***** \n");
		printf("\n\tEnter The Course Name => ");
		scanf(" %[^\n]s", NewCourse->Course_Name);

		printf("\n\tEnter Fees For This Course => ");
		scanf("%d", &NewCourse->Fee);

		printf("\n\tEnter Short Description Of This Course => ");
		scanf(" %[^\n]s", NewCourse->Description);

		printf("\n\tEnter Duration Of This Course(In Months) => ");
		scanf("%f", &NewCourse->Course_Duration);

		NewCourse->CNEXT = NULL;
		NewCourse->C_ID = Course_ID++;

		if (*First == NULL)
		{
			*First = NewCourse;
		}
		else
		{
			PC_ADD Temp = C_Head;
			while (Temp->CNEXT != NULL)
			{
				Temp = Temp->CNEXT;
			}
			Temp->CNEXT = NewCourse;
		}
		int Choice1 = 0;
		printf("\n\t==*== Course Added Succesfully ==*==\n");
		printf("\n\t1. ADD Another Course \n\t2. Back\n \n\nEnter Your Choice => ");
		scanf("%d", &Choice1);

		if (Choice1 != 1)
		{
			break;
		}
		system("cls");
	}
	system("cls");
	(Menu == 1) ? AdminMenu2(2) : ForkMenu();
}
void Course_Update(int Menu)
{
	int iNo = 0;
	while (1)
	{
		system("cls");
		printf("\n\t*****^^^^^ UPDATE COURSE DETAILS ^^^^^*****\n");
		printf("\n\t 1. SEARCH BY ID \n\t 2. SEARCH BY NAME \n\t 3. BACK \n\t 4. LOG OUT \n\n Please Enter Your Choice => ");
		scanf("%d", &iNo);

		PC_ADD Temp = C_Head;
		int Update = 0;
		if (iNo == 1)
		{
			while (1)
			{
				int CID = 0;
				printf("Enter Course ID =>");
				scanf("%d", &CID);
				if (CID > Course_ID || CID <= 0)
				{
					printf("\n\tInvalid ID\n");
					continue;
				}
				PC_ADD Temp = C_Head;
				while (CID != Temp->C_ID)
				{
					Temp = Temp->CNEXT;
				}
				while (1)
				{
					printf("\n Course ID => %d \n\t1. Course Name        :- %s.\n\t2. Course Description :- %s\n\t3. Fees               :- %d\n\t4. Duration           :- %0.1f Months\n\n", Temp->C_ID, Temp->Course_Name, Temp->Description, Temp->Fee, Temp->Course_Duration);
					printf("\nWhat Do You Want To Update(Press 0 To Cancel) => ");
					scanf("%d", &Update);

					if (Update >= 1 && Update <= 4)
					{
						int i = 0;
						if (Update == 1)
						{
							printf("\n\tEnter Updated Name => ");
							scanf(" %[^\n]s", Temp->Course_Name);
						}
						else if (Update == 2)
						{
							printf("\n\tEnter Description => ");
							scanf(" %[^\n]s", Temp->Description);
						}
						else if (Update == 3)
						{
							printf("\n\tEnter New Fees => ");
							scanf("%d", &Temp->Fee);
						}
						else
						{
							printf("\n\tEnter Course Duration(In Months) => ");
							scanf("%f", &Temp->Course_Duration);
						}

						printf("\n\t UPDATED SUCCESSFULLY\n\n");

						printf("\n\t 1. Update More Details Of Same Course \n\t 2. Back \n\n Enter Your Choice => ");
						scanf("%d", &i);

						if (i == 1)
						{
							system("cls");
							continue;
						}
						Course_Update(Menu);
					}
					else
					{
						Course_Update(Menu);
					}
				}
			}
		}
		else if (iNo == 2)
		{
			while (1)
			{
				PC_ADD Temp = C_Head;
				char CName[30] = "\0";
				printf("Enter Course Name =>");
				scanf(" %[^\n]s", CName);

				while (Temp != NULL)
				{
					if (strcmp(CName, Temp->Course_Name) == 0)
					{
						while (1)
						{
							printf("\n Course ID => %d \n\t1. Course Name        :- %s.\n\t2. Course Description :- %s\n\t3. Fees               :- %d\n\t4. Duration           :- %0.1f Months\n\n", Temp->C_ID, Temp->Course_Name, Temp->Description, Temp->Fee, Temp->Course_Duration);

							printf("\nWhat Do You Want To Update(Press 0 To Cancel) => ");
							scanf("%d", &Update);

							if (Update >= 1 && Update <= 4)
							{
								int i = 0;
								if (Update == 1)
								{
									printf("\n\tEnter Updated Name => ");
									scanf(" %[^\n]s", Temp->Course_Name);
								}
								else if (Update == 2)
								{
									printf("\n\tEnter Description => ");
									scanf(" %[^\n]s", Temp->Description);
								}
								else if (Update == 3)
								{
									printf("\n\tEnter New Fees => ");
									scanf(" %d", &Temp->Fee);
								}
								else
								{
									printf("\n\tEnter Course Duration(In Months) => ");
									scanf("%f", &Temp->Course_Duration);
								}

								printf("\n\t UPDATED SUCCESSFULLY\n\n");

								printf("\n\t 1. Update More Details Of Same Course \n\t 2. Back \n\n Enter Your Choice => ");
								scanf("%d", &i);

								if (i == 1)
								{
									system("cls");
									continue;
								}
								Course_Update(Menu);
							}
							else
							{
								Course_Update(Menu);
							}
						}
					}
					Temp = Temp->CNEXT;
				}
				printf("\n\t INVALID NAME \n");
			}
		}
		else if (iNo == 4)
		{
			main();
		}
		else
		{
			(Menu == 1) ? AdminMenu2(2) : ForkMenu();
		}
	}
}
void Course_View(int Menu)
{
	printf("\n\t=====***=== ALL COURSES ===***=====");
	int Std = 1;
	PC_ADD Temp = C_Head;
	while (Temp != NULL)
	{
		printf("\nCourse %d", Std++);
		printf("\n\t   Course ID   :- %d \n\t   Course Name :- %s.\n", Temp->C_ID, Temp->Course_Name);
		Temp = Temp->CNEXT;
	}
	return;
}
void Course_Search(int Menu)
{
	system("cls");
	int Search = 0;

	printf("\n\n\t *****^^^^^===== VIEW COURSE DETAILS =====^^^^^*****\n");
	printf("\n\t1. VIEW ALL COURSES \n\t2. SEARCH COURSE \n\t3. BACK \n\t4. LOG OUT \n\n ENTER YOUR CHOICE =>");
	scanf("%d", &Search);

	if (Search == 1)
	{
		int Std = 1;
		PC_ADD Temp = C_Head;
		while (Temp != NULL)
		{
			printf("\n\t ====*** Course %d ***====\n", Std++);
			printf("\n\tCourse ID       :- %d \n\tCourse Name     :- %s.\n\tCourse Details  :- %s. \n\tCourse Fee      :- %d. \n\tCourse Duration :- %0.1f Months\n\n", Temp->C_ID, Temp->Course_Name, Temp->Description, Temp->Fee,Temp->Course_Duration);
			Temp = Temp->CNEXT;
		}
		system("pause");
	}
	else if (Search == 2)
	{
		int iNo = 0;
		PC_ADD Temp = C_Head;
		while (1)
		{
			system("cls");
			printf("\n\t*****^^^^^ SEARCH COURSE BY NAME OR ID ^^^^^*****\n");
			printf("\n\t 1. SEARCH BY ID \n\t 2. SEARCH BY NAME \n\t 3. BACK \n\n Please Enter Your Choice => ");
			scanf("%d", &iNo);

			if (iNo == 1)
			{
				while (1)
				{
					int SID = 0;
					printf("Enter COURSE ID =>");
					scanf("%d", &SID);
					if (SID > Course_ID || SID <= 0)
					{
						printf("\n\tInvalid ID\n");
						continue;
					}
					PC_ADD Temp = C_Head;
					while (SID != Temp->C_ID)
					{
						Temp = Temp->CNEXT;
					}
					printf("\n\tCourse ID       :- %d \n\tCourse Name     :- %s.\n\tCourse Details  :- %s. \n\tCourse Fee      :- %d. \n\tCourse Duration :- %0.1f Months\n\n", Temp->C_ID, Temp->Course_Name, Temp->Description, Temp->Fee, Temp->Course_Duration);
					system("pause");
					break;
				}
			}
			else if (iNo == 2)
			{
				while (1)
				{
					char SName[30] = "\0";
					printf("Enter Course Name =>");
					scanf(" %[^\n]s", SName, sizeof(SName));

					PC_ADD Temp = C_Head;

					while (Temp != NULL)
					{
						if (strcmp(SName, Temp->Course_Name) == 0)
						{
							printf("\n\tCourse ID       :- %d \n\tCourse Name     :- %s.\n\tCourse Details  :- %s. \n\tCourse Fee      :- %d. \n\tCourse Duration :- %0.1f Months\n\n", Temp->C_ID, Temp->Course_Name, Temp->Description, Temp->Fee, Temp->Course_Duration);
							PC_ADD Temp = C_Head;
							system("pause");
							Course_Search(Menu);
						}
						Temp = Temp->CNEXT;
					}
					printf("\n\t INVALID NAME\n");
				}
			}
			else
			{
				break;
			}
		}
		Course_Search(Menu);
	}
	(Search == 4) ? main() : (Menu == 1) ? AdminMenu2(2) : ForkMenu();
}
int Select_Courses()
{
	int Choice = 0, FChoice = 0;
	printf("\n\n\tSelect One Or More Course(s) \n");
	Course_View(1);

	while (1)
	{
		printf("\nEnter Your Choice(PRESS 0 TO STOP) => ");
		scanf("%d", &Choice);
		if (Choice == 0)
		{
			break;
		}
		else if (Choice > 0 && Choice <= Course_ID)
		{
			FChoice = (FChoice * 10) + Choice;
		}
	}
	return FChoice;
}
int Student_Total_Fees(int Total_Fees)
{

	int Total = 0;
	while (Total_Fees > 0)
	{
		PC_ADD First = C_Head;
		while (First->C_ID != (Total_Fees % 10))
		{
			First = First->CNEXT;
		}
		Total = Total + (First->Fee);
		Total_Fees /= 10;
	}
	return Total;
}
void View_Courses(int Course_Id)
{
	int i = 1;
	while(Course_Id > 0)
	{
		PC_ADD First = C_Head;
		while (First->C_ID != Course_Id % 10)
		{
			First = First->CNEXT;
		}
		printf("\n\t\t\t %d. %s", i, First->Course_Name);
		i++;
		Course_Id /= 10;
	}
	return;
}
void Guruji_Details(int Menu)
{
	system("cls");
	FILE* fptr = NULL;
	char ch = '\0';

	fptr = fopen("guruji.txt", "r");

	ch = fgetc(fptr);

	while (ch != EOF)
	{
		printf("%c", ch);
		ch = fgetc(fptr);
	}
	printf("\n\n");
	system("pause");
	return;
}
void Project_Details()
{
	system("cls");
	FILE* fptr = NULL;
	char ch = '\0';

	fptr = fopen("info.txt", "r");

	ch = fgetc(fptr);

	while (ch != EOF)
	{
		printf("%c", ch);
		ch = fgetc(fptr);
	}
	printf("\n\n");
	system("pause");
	return;
}
