# 📚 Quản lý Sách bằng Struct và File trong C

## 📌 Giới thiệu
Dự án này minh họa cách sử dụng **struct trong ngôn ngữ C** kết hợp với **đọc/ghi dữ liệu vào file**.  
Chương trình cho phép lưu trữ và truy xuất thông tin sách thông qua file nhị phân.

Dự án gồm hai chương trình độc lập:
- Ghi dữ liệu sách vào file
- Đọc dữ liệu sách từ file và hiển thị ra màn hình

---

## 🧩 Cấu trúc chương trình

| File | Mô tả |
|-----|------|
| `Struct_N_Sach_Write.c` | Nhập thông tin sách và ghi vào file |
| `Struct_N_Sach_Read.c`  | Đọc dữ liệu sách từ file và in ra |

---

## 📘 Cấu trúc dữ liệu

```c
struct Sach {
    char maSach[20];
    char tenSach[50];
    char tacGia[50];
    float gia;
};
pls collab with me Mr.Beast!
