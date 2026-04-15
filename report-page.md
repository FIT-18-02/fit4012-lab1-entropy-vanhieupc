# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tìm hiểu cách tính entropy và redundancy của chuỗi dữ liệu, đồng thời cài đặt và kiểm tra thuật toán modulo inverse trong lập trình.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0 | 1.00 | Chuỗi lặp hoàn toàn → không có thông tin mới |
| abcd | 2.00 | 0.00 | Phân bố đều → thông tin tối đa |
| hello world | ≈ 2.85 | ≈ 0.05 | Có lặp lại nhưng vẫn khá đa dạng |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại |

## 4. Kết luận

Qua bài lab, em đã hiểu cách áp dụng lý thuyết entropy để đánh giá mức độ thông tin trong chuỗi ký tự và cách cài đặt hàm nghịch đảo modulo bằng Euclid mở rộng.

Bài lab giúp em nhận ra tầm quan trọng của việc kiểm thử nhiều trường hợp khác nhau để đảm bảo kết quả chính xác. Đồng thời, em cũng cải thiện được kỹ năng lập trình và tư duy xử lý các bài toán số học cơ bản.
