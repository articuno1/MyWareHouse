Git 
1. Cấu hình git trên Ubuntu
-git config --global user.name "leducduy"
 git config --global user.email "duyanh.3895@gmail.com"
2. Khởi tạo kho chứa ở local
-git init MyWareHouse
3. Di chuyển đến thư mục vừa tạo
-cd MyWareHouse 
4. Tạo 1 file bất kỳ trong thư mục vừa tạo(cũng vừa để mở file đó lên nếu file đó tồn tại)
-gedit hello.c
5. Code 1 đoạn bất kỳ vào file vừa tạo
6. Kiểm tra trạng thái git hiện tại
- git status
+ Thấy dòng file vừa tạo(hello.c) có màu đỏ có nghĩa là file hello.c chưa dc thêm vào chỉ mục ở trên git. Dùng câu lệnh git add "tên file"("hello.c")
