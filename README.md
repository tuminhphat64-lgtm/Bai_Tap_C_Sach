# 📚 CHƯƠNG TRÌNH QUẢN LÝ SÁCH SỬ DỤNG STRUCT VÀ FILE TRONG C

## 1. Giới thiệu chung
Trong quá trình học lập trình C, việc kết hợp **kiểu dữ liệu cấu trúc (struct)** với **xử lý file** là một nội dung quan trọng, giúp sinh viên làm quen với cách lưu trữ và quản lý dữ liệu một cách có hệ thống.

Dự án này được xây dựng nhằm minh họa cách:
- Khai báo và sử dụng `struct`
- Ghi dữ liệu cấu trúc vào file nhị phân
- Đọc dữ liệu từ file và xử lý lại trong chương trình

Chương trình mô phỏng một hệ thống **quản lý thông tin sách** đơn giản, phục vụ cho mục đích học tập và thực hành.

---

## 2. Mục tiêu của chương trình
- Hiểu rõ cơ chế hoạt động của kiểu dữ liệu `struct` trong C
- Rèn luyện kỹ năng làm việc với file (`FILE*`, `fopen`, `fread`, `fwrite`, `fclose`)
- Tách riêng chức năng ghi và đọc dữ liệu
- Xây dựng tư duy tổ chức chương trình rõ ràng, dễ mở rộng

---

## 3. Cấu trúc thư mục và tập tin

| Tên tập tin | Chức năng |
|------------|-----------|
| `Struct_N_Sach_Write.c` | Nhập dữ liệu sách và ghi vào file |
| `Struct_N_Sach_Read.c` | Đọc dữ liệu sách từ file và hiển thị |

Mỗi tập tin đảm nhiệm một nhiệm vụ riêng biệt nhằm đảm bảo tính rõ ràng và dễ bảo trì.

---

## 4. Mô tả cấu trúc dữ liệu

Chương trình sử dụng kiểu cấu trúc `Sach` để lưu trữ thông tin của mỗi cuốn sách:

```c
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
```
