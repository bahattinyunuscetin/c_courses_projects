# C Dili Kurs Projeleri

Bu repo, C programlama dili üzerine aldığım kurslar boyunca geliştirdiğim örnek projeleri içermektedir. Projeler, temel seviyeden orta seviyeye kadar farklı konularda yazılmış olup, C dilinin mantığını ve kullanımını pekiştirmeye yöneliktir.

## 💻 İçerik

Projeler genel olarak şu konuları kapsamaktadır:

- Değişkenler ve Veri Tipleri
- Koşullu İfadeler (if-else, switch-case)
- Döngüler (for, while, do-while)
- Diziler
- Fonksiyonlar
- Göstergeler (Pointers)
- Dosya İşlemleri
- Yapılar (struct)
- Dinamik Bellek Yönetimi (malloc, free)

## 📁 Proje Yapısı

```bash
📁 c-dili-kurs-projeleri
├── 01-degiskenler.c
├── 02-kosullu-ifadeler.c
├── 03-donguler.c
├── 04-diziler.c
├── 05-fonksiyonlar.c
├── 06-pointerlar.c
├── 07-dosya-islemleri.c
├── 08-struct-yapisi.c
└── 09-dinamik-bellek.c
```

## 🚀 Nasıl Çalıştırılır?

Projeleri çalıştırmak için aşağıdaki adımları takip edebilirsiniz:

1. [GCC](https://gcc.gnu.org/) derleyicisinin yüklü olduğundan emin olun.
2. Terminal veya komut satırından proje dosyasını derleyin:

```bash
gcc proje-adi.c -o proje-adi
./proje-adi
```

## 🎯 Amaç

Bu repo sayesinde:
- C dilinde kod yazma yeteneğimi geliştirmeyi,
- Temel algoritma mantığını kavramayı,
- Hafıza yönetimi, dosya işlemleri gibi ileri konulara aşinalık kazanmayı hedefliyorum.

## 📚 C Dili Hakkında 

### 📌 C Nedir?
C, 1972 yılında Dennis Ritchie tarafından Bell Labs'de geliştirilmiş, sistem programlama için tasarlanmış, genel amaçlı, prosedürel bir programlama dilidir. UNIX işletim sisteminin büyük bir bölümü bu dille yazılmıştır. Bugün hâlâ gömülü sistemlerden oyun motorlarına, işletim sistemlerinden sürücü yazılımlarına kadar geniş bir kullanım alanı vardır.

### 💡 Özellikleri
- **Düşük seviyeli programlamaya yakınlık:** Donanıma yakın kod yazmayı mümkün kılar.
- **Yüksek performans:** Minimal soyutlamalarla, hızlı ve etkili programlar yazılabilir.
- **Portatiflik:** Standart C kütüphanesi kullanılarak yazılan kodlar farklı platformlarda çalıştırılabilir.
- **Zengin operatör seti:** Aritmetik, mantıksal, bit düzeyinde operatörler.
- **Modülerlik:** Kodları fonksiyonlara ayırarak yapılandırma imkanı sunar.

### 🔧 Derleyiciler
C kodları çalıştırılmadan önce derlenir. Yaygın kullanılan C derleyicileri:
- GCC (GNU Compiler Collection)
- Clang
- Microsoft Visual C
- Turbo C (nostaljik ama öğretici)

### 🔄 Bellek Yönetimi
C dilinde bellek yönetimi doğrudan programcıya bırakılmıştır. Bu durum hem büyük bir esneklik sağlar hem de büyük bir sorumluluk getirir. Bellek yönetimi için kullanılan temel fonksiyonlar:

- `malloc()`
- `calloc()`
- `realloc()`
- `free()`

### 📂 Dosya İşlemleri
C, dosya işlemleri için `stdio.h` başlık dosyasını kullanır. Dosya açma, okuma, yazma, kapatma gibi temel işlemler şu fonksiyonlarla yapılır:
- `fopen()` / `fclose()`
- `fread()` / `fwrite()`
- `fprintf()` / `fscanf()`
- `fgets()` / `fputs()`

### 🧠 Hafıza Alanları
C'de değişkenler aşağıdaki dört hafıza alanından birinde tutulur:
- **Stack:** Otomatik yerel değişkenler.
- **Heap:** `malloc()` ile ayrılan dinamik bellek.
- **Global/Static:** Dosya başında tanımlı global değişkenler.
- **Text Segment:** Kodların tutulduğu alan.

### ⚠️ Riskli Yanlar
- **Pointer hataları**
- **Bellek sızıntısı**
- **Buffer overflow**

### 👨‍🔬 Kullanım Alanları
- Gömülü sistemler (Arduino, STM32, Raspberry Pi)
- İşletim sistemleri (Linux çekirdeği)
- Oyun motorları
- Donanım sürücüleri
- Ağ programlama

### 🔍 C'yi Öğrenmek İçin En İyi Kaynaklar
- *"The C Programming Language" - Brian W. Kernighan & Dennis M. Ritchie*
- *Learn-C.org*
- *CS50 (Harvard)*
- *BTK Akademi C Kursu*

## 🤝 Katkı

Repo açık kaynak olup, isteyen herkes katkıda bulunabilir. Hataları bildirebilir veya yeni örnekler ekleyebilirsiniz ✨

## 📬 İletişim

Herhangi bir soru veya öneriniz için benimle iletişime geçebilirsiniz:



---

> "Kod yazmak sadece makinelerle değil, aynı zamanda mantıkla konuşmaktır."

---

C ile bol bol kodlamalı günler dilerim! 🧠💻
