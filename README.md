# kuyrukveyigin
# 🔍 C Programlama - Arama Algoritmaları ve Kuyruk Yapısı

Bu proje, C programlama dilinde **arama algoritmaları** ve **temel veri yapıları** konularını uygulamalı olarak göstermektedir.  
Her örnek, kullanıcıdan alınan verilerle çalışır ve algoritma mantığını açıklar.

---

## 📂 İçindekiler

1. [Lineer Arama (Linear Search)](#1-lineer-arama---searchc)  
2. [İkili Arama (Binary Search)](#2-ikili-arama---binary_searchc)  
3. [Kuyruk (Queue) Yapısı](#3-kuyruk-yapısı---queuec)

---

## 🔹 1. Lineer Arama - `search.c`

### 📄 Açıklama:
Kullanıcının girdiği dizide, aranan elemanın konumunu bulan **doğrusal arama (linear search)** algoritmasıdır.  
Dizi kullanıcı tarafından girilir ve sonuç ekrana yazdırılır.

### ⚙️ Algoritma:
Her eleman sırayla kontrol edilir, aranan değer bulunursa dizin (index) döndürülür.

### ⏱️ Zaman Karmaşıklığı:
- **En iyi durum:** O(1)  
- **En kötü durum:** O(n)

---

## 🔹 2. İkili Arama - `binary_search.c`

### 📄 Açıklama:
Önce **bubble sort** ile diziyi küçükten büyüğe sıralar,  
ardından **binary search (ikili arama)** algoritmasıyla elemanı arar.

### ⚙️ Adımlar:
1. Dizi sıralanır.  
2. Orta eleman bulunur.  
3. Aranan sayı orta elemandan küçükse sol, büyükse sağ kısım taranır.

### ⏱️ Zaman Karmaşıklığı:
- **Sıralama:** O(n²)  
- **Arama:** O(log n)

---

## 🔹 3. Kuyruk Yapısı - `queue.c`

### 📄 Açıklama:
Bağlı liste (linked list) kullanarak **FIFO (First In – First Out)** mantığında bir **kuyruk (queue)** yapısı oluşturur.  
Kullanıcı menüden işlem seçebilir:
- 1️⃣ Ekleme (enqueue)
- 2️⃣ Silme (dequeue)
- 3️⃣ Görüntüleme (display)
- 4️⃣ Çıkış

### ⚙️ Kullanılan Yapı:
```c
typedef struct KUYRUK {
    int sayi;
    struct kuyruk *siradaki;
} kuyruk;
