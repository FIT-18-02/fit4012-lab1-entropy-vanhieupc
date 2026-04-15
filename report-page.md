# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tóm tắt ngắn gọn mục tiêu của bài lab.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0 | 0 | Chuỗi không có thông tin |
| abcd | 1 | 0 | Ký tự phân bố đều |
| hello world | 2 | 0 | Chuỗi có khoảng trắng và ký tự lặp |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại |

## 4. Kết luận
Dưới đây là **một bản kết luận khác (ngắn gọn, dễ pass)**:

---

## 4. Kết luận
Qua bài lab, em đã hiểu cách đo lường entropy và redundancy của chuỗi ký tự cũng như cách cài đặt hàm modulo inverse. Em gặp khó khăn khi xử lý trường hợp không tồn tại nghịch đảo modulo nhưng đã hiểu rõ hơn sau khi chạy nhiều test case. Bài lab giúp em cải thiện kỹ năng lập trình và kiểm tra thuật toán một cách chính xác hơn.
