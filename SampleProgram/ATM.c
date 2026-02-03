#include <stdio.h>
#include <string.h>
#define MAX_USERS 2
struct veri {
    char name[15];
    int cardkey;
    int hesapno;
    int bakiye;
};

int main() {
    // 1. Kullanıcıları diziye alıyoruz. Bu sayede her şeyi döngüyle yapabiliriz.
    struct veri musteriler[MAX_USERS] = {
        {"Ahmet", 1967, 1, 1000},
        {"Ayse", 1256, 2, 4500}
    };

    int id, key, i, check, amount, targetNo;
    int userIndex = -1; // Giriş yapan kullanıcının dizideki yerini tutacak

    while (1) {
        printf("\n--- ATM SYSTEM ---\nPlease enter account id: ");
        scanf("%d", &id);

        // 2. ID Kontrolü: Girilen ID hangi kullanıcıya ait?
        userIndex = -1;
        for (int j = 0; j < MAX_USERS; j++) {
            if (musteriler[j].hesapno == id) {
                userIndex = j; // Kullanıcı bulundu!
                break;
            }
        }

        if (userIndex == -1) {
            printf("Wrong account id!\n");
            continue;
        }

        // 3. Şifre Kontrolü: Bulunan kullanıcının şifresini kontrol et
        int loginSuccess = 0;
        for (i = 0; i < 3; i++) {
            printf("Enter key for %s: ", musteriler[userIndex].name);
            scanf("%d", &key);
            if (key == musteriler[userIndex].cardkey) {
                printf("Login Successful!\n");
                loginSuccess = 1;
                break;
            } else {
                printf("Wrong password! %d attempts left.\n", 2 - i);
            }
        }

        if (!loginSuccess) continue;

        // 4. İşlem Menüsü
        while (1) {
            printf("\nWelcome %s | Balance: %d\n", musteriler[userIndex].name, musteriler[userIndex].bakiye);
            printf("1:Withdraw 2:Deposit 3:EFT 4:Logout\nChoice: ");
            scanf("%d", &check);

            if (check == 1) {
                printf("Amount to withdraw: ");
                scanf("%d", &amount);
                if (amount <= musteriler[userIndex].bakiye) {
                    musteriler[userIndex].bakiye -= amount;
                    printf("Success! New balance: %d\n", musteriler[userIndex].bakiye);
                } else printf("Insufficient funds!\n");
            }
            else if (check == 2) {
                printf("Amount to deposit: ");
                scanf("%d", &amount);
                musteriler[userIndex].bakiye += amount;
                printf("Success! New balance: %d\n", musteriler[userIndex].bakiye);
            }
            else if (check == 3) {
                printf("Enter target account number: ");
                scanf("%d", &targetNo);

                int targetIndex = -1;
                // Tüm kullanıcıları tara ve hedef hesap nosuna sahip olanı bul
                for (int j = 0; j < MAX_USERS; j++) {
                    if (musteriler[j].hesapno == targetNo) {
                        targetIndex = j;
                        break;
                    }
                }

                // Hedef bulundu mu ve kendime mi göndermeye çalışıyorum?
                if (targetIndex != -1 && targetIndex != userIndex) {
                    printf("Amount to send: ");
                    scanf("%d", &amount);
                    if (amount <= musteriler[userIndex].bakiye) {
                        musteriler[userIndex].bakiye -= amount;
                        musteriler[targetIndex].bakiye += amount;
                        printf("Transfer successful to %s!\n", musteriler[targetIndex].name);
                    } else {
                        printf("Insufficient funds!\n");
                    }
                } else {
                    printf("Invalid target account or same account!\n");
                }
            }
            else if (check == 4) {
                printf("Logging out...\n");
                break; // İçteki while döngüsünden çıkar, en başa (ID sorma ekranına) döner
            }
        }
    }
    return 0;
}
