#include<stdio.h>


struct SinhVien{
	char name[50];
	char age[50];
	char phoneNumber[50];
};
typedef struct SinhVien SinhVien;
int main(){
	SinhVien s;
	strcpy(s. name,"La The Phong");
	strcpy(s.age,"18");
	strcpy(s.phoneNumber,"0987383085");
	
	printf("Thong tin sinh vien:\n");
	printf("Name: %s\n",s.name);
	printf("Age: %s\n",s.age);
	printf("PhoneNumber: %s\n",s.phoneNumber);
	
	return 0;
}
