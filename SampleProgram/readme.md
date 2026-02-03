    # C ile ATM Yönetim Sistemi (ATM System in C)

Bu proje, C programlama dili kullanılarak geliştirilmiş, temel bankacılık işlemlerini simüle eden bir konsol uygulamasıdır. `Struct` yapıları ve diziler kullanılarak birden fazla kullanıcı yönetimi ve güvenli giriş mekanizması hedeflenmiştir.

## 🚀 Özellikler

* **Çoklu Kullanıcı Desteği:** `#define` ile kolayca artırılabilen dinamik kullanıcı yapısı.
* **Güvenli Giriş:** Kullanıcı ID kontrolü ve 3 hatalı deneme hakkı sunan şifre doğrulama sistemi.
* **Hesap İşlemleri:**
    * Para Çekme (Bakiye kontrolü dahil)
    * Para Yatırma
    * EFT (Hesaplar arası transfer - Dinamik hedef arama altyapısı)
* **Oturum Yönetimi:** İşlem sonrası güvenli çıkış ve yeni kullanıcı girişi için ana menüye dönme.

## 🛠️ Teknik Detaylar

Programda aşağıdaki C programlama kavramları aktif olarak kullanılmıştır:
- **Structs (Yapılar):** Müşteri bilgilerini (ad, şifre, bakiye, hesap no) gruplandırmak için.
- **Arrays (Diziler):** Veritabanı mantığında kullanıcı listesi tutmak için.
- **Loops (Döngüler):** Sürekli işlem akışı ve arama algoritmaları için.
- **Conditional Logic:** Hata yönetimi ve işlem kontrolleri için.

## 📂 Kurulum ve Çalıştırma

1. Bir C derleyicisinin (GCC, Clang vb.) kurulu olduğundan emin olun.
2. Dosyayı indirin: `ATM.c`
3. Terminalde derleyin:
   ```bash
   gcc atm_project.c -o ATM.c
Çalıştırın:

Bash
./ATM.c
📝 Gelecek Planlamaları
[ ] Verilerin .txt dosyasında kalıcı olarak tutulması (File I/O).

[ ] Fonksiyon tabanlı (Modular) kod yapısına geçiş.

[ ] Admin paneli eklenerek yeni kullanıcı tanımlama özelliği.

Geliştirici: @llbberat

Eğitim: Karabük Üniversitesi - Yazılım Mühendisliği
