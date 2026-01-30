#include <stdio.h>
#include <string.h>

struct SACH{
	char masach[21];
	char tieude[100];
	char tacgia[50];
	int namxuatban;
	long long giaban;
	int sotrang;
	char nhaxuatban[100];
	char loaisach[50];
};
typedef struct SACH S;

void nhap1sach(S *a);
void xuat1sach(S a);
void nhapnsach(S a[], int n);
void xuatnsach(S a[], int n);

int main(){
	S a[100];
	int n;
	
	printf("\nNhap So Luong Sach: ");
	scanf("%d", &n);
	
	nhapnsach(a, n);
	xuatnsach(a, n);
		
	return 0;
}
void nhapnsach(S a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nNhap Sach thu %d\n", i+1);
		nhap1sach(&a[i]);
	}
}
void xuatnsach(S a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nSach thu %d: ", i+1);
		xuat1sach(a[i]);
	}
}

void nhap1sach(S *a){
	
	printf("\nNhap Ma Sach: ");
	scanf("%s", a->masach);
	
	fflush(stdin);
	printf("\nNhap Tieu De: ");
	fgets(a->tieude, sizeof(a->tieude), stdin);
	a->tieude[strcspn(a->tieude, "\n")] = '\0';
	
	printf("\nNhap Tac Gia: ");
	fgets(a->tacgia, sizeof(a->tacgia), stdin);
	a->tacgia[strcspn(a->tacgia, "\n")] = '\0';
	
	printf("\nNhap Nam Xuat Ban: ");
	scanf("%d", &a->namxuatban);
	
	fflush(stdin);
	printf("\nNhap Gia Ban: ");
	scanf("%lld", &a->giaban);
	
	fflush(stdin);
	printf("\nNhap So Trang: ");
	scanf("%d", &a->sotrang);
	
	fflush(stdin);
	printf("\nNhap Nha Xuat Ban: ");
	fgets(a->nhaxuatban, sizeof(a->nhaxuatban), stdin);
	a->nhaxuatban[strcspn(a->nhaxuatban, "\n")] = '\0';
	
	printf("\nNhap Loai Sach: ");
	fgets(a->loaisach, sizeof(a->loaisach), stdin);
	a->loaisach[strcspn(a->loaisach, "\n")] = '\0';
}

void xuat1sach(S a){
	printf("\n");
	printf("%s\t\t%s\t\t%s\t\t%lld\t\t%d\t\t%d\t\t%s\t\t%s\n", a.masach,a.tieude, a.tacgia, a.giaban, a.namxuatban, a.sotrang, a.nhaxuatban, a.loaisach);
}