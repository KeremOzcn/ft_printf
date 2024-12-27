<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_ft_printf.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/badge/evaluated-10%20%2F%2012%20%2F%202024-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/badge/score-100%20%2F%20100-success?color=%2312bab9&style=flat-square" />
	<a href='https://www.linkedin.com/in/kerem0zcn' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
</p>

## Proje Açıklaması

`ft_printf` projesi, C dilindeki standart `printf` fonksiyonunun yeniden implementasyonunu amaçlayan bir çalışmadır. Proje, `printf` fonksiyonunun çeşitli formatlama seçeneklerini ve davranışlarını simüle ederek, özelleştirilebilir ve daha derinlemesine anlaşılabilecek bir versiyonunu geliştirmeyi hedefler.

[Click here for the English version](README_EN.md)

## Dosya Yapısı

- `ft_printf.c`: `ft_printf` fonksiyonunun temel implementasyonunu içerir.
- `ft_printf_utils.c`: Yardımcı fonksiyonların implementasyonlarını içerir.
- `ft_printf.h`: Temel fonksiyon prototiplerini ve makro tanımlamalarını içerir.

## Kullanım

### Derleme

Projeyi derlemek için aşağıdaki komutları kullanabilirsiniz:

```bash
gcc -Wall -Wextra -Werror -c ft_printf.c ft_printf_utils.c
gcc -o ft_printf ft_printf.o ft_printf_utils.o
```

### Kullanım Örneği

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! You have %d new messages.\n", "Kerem", 5);
    return (0);
}
```

Bu kod, konsola şu sonucu yazdırır:

```
Hello, Kerem! You have 5 new messages.
```

## Fonksiyon Prototipi

```c
int ft_printf(const char *format, ...);
```

### Parametreler
- `format`: Formatlama dizesi, yazı ve formatlama seçeneklerini tanımlar.
- `...`: Değişken sayıda argüman, formatlama seçeneklerine uygun değerleri belirtir.

### Dönüş Değeri
- Yazılan karakter sayısını döner.
- Bir hata durumunda negatif bir değer döner.

## Desteklenen Formatlar

`ft_printf` şunları destekler:
- `%c`: Tek bir karakter.
- `%s`: Null-terminated bir dizgi.
- `%d` veya `%i`: Onluk tam sayı.
- `%u`: Pozitif onluk tam sayı.
- `%x` veya `%X`: Onaltılık tam sayı (küçük/büyük harflerle).
- `%%`: Yüzde işareti.

## Katkı

Katkıda bulunmak için lütfen bir "pull request" oluşturup projenizi paylaşın. Her türlü katkı ve geribildirim memnuniyetle karşılanır.

