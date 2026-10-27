# Практична робота №2

**Виконав:** студент групи 4СОМ Кланцатий Костянтин (Варіант №3)

**Тема: Реалізація черги**

**Мета:** *ознайомитися з основами роботи з чергою у C++ за допомогою стандартного контейнерного std::queue, вивчити основні операції черги.*

---

## Завдання

| № | Тип завдання | Умова завдання |
| :-: | :--- | :--- |
| **1** | Опрацювання чисел | Створіть чергу з 12 цілих чисел. Знайдіть найбільший і найменший елементи, не змінюючи початкової черги остаточно. |
| **2** | Фільтрування елементів | Сформуйте чергу чисел від 1 до 80. Створіть нову чергу, що містить лише непарні числа, більші за 25. |
| **3** | Опрацювання символів | Запишіть символи англійського слова в чергу. Визначте кількість великих літер у черзі. |
| **4** | Опрацювання записів | Створіть чергу товарів, що містить назву товару та його ціну. Виведіть назви товарів, ціна яких менша за 200 грн. |
| **5** | Моделювання процесу | Змоделюйте чергу пасажирів на посадку. Для кожного пасажира збережіть номер квитка. Додайте 6 пасажирів і змоделюйте посадку трьох із них у порядку надходження. |

---

### Завдання №1.

**Код:**
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> numbers;

    numbers.push(15);
    numbers.push(-4);
    numbers.push(42);
    numbers.push(8);
    numbers.push(0);
    numbers.push(99);
    numbers.push(-15);
    numbers.push(23);
    numbers.push(67);
    numbers.push(4);
    numbers.push(12);
    numbers.push(88);

    int first = numbers.front();
    int minVal = first;
    int maxVal = first;

    queue<int> tempQueue;

    while (!numbers.empty()) {
        int x = numbers.front();
        numbers.pop();

        if (x < minVal) {
            minVal = x;
        }
        if (x > maxVal) {
            maxVal = x;
        }

        tempQueue.push(x);
    }

    numbers = tempQueue;

    cout << "Найменший елемент: " << minVal << endl;
    cout << "Найбільший елемент: " << maxVal << endl;

    return 0;
}
```

**Результат:**
```text
Найменший елемент: -15
Найбільший елемент: 99
```

<img width="1895" height="905" alt="image" src="https://github.com/user-attachments/assets/66a7106f-8346-4935-a0f2-bb4dccb43b34" />

---

### Завдання №2.

**Код:**
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> source;
    queue<int> result;

    for (int i = 1; i <= 80; i++) {
        source.push(i);
    }

    while (!source.empty()) {
        int x = source.front();
        source.pop();

        if (x > 25 && x % 2 != 0) {
            result.push(x);
        }
    }

    cout << "Непарні числа, більші за 25: ";
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;

    return 0;
}
```

**Результат:**
```text
Непарні числа, більші за 25: 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79
```

<img width="1902" height="757" alt="image" src="https://github.com/user-attachments/assets/ae56d42e-fa59-4487-8bab-3ce6b0a8d2da" />

---

### Завдання №3.

**Код:**
```cpp
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<char> letters;
    string word = "ProgRAMming";

    for (int i = 0; i < word.length(); i++) {
        letters.push(word[i]);
    }

    int upperCount = 0;

    while (!letters.empty()) {
        char ch = letters.front();
        letters.pop();

        if (ch >= 'A' && ch <= 'Z') {
            upperCount++;
        }
    }

    cout << "Кількість великих літер у черзі: " << upperCount << endl;

    return 0;
}
```

**Результат:**
```text
Кількість великих літер у черзі: 4
```

<img width="1896" height="735" alt="image" src="https://github.com/user-attachments/assets/2885ad55-af4a-443e-b7ec-e284e7f4dfe3" />

---

### Завдання №4.

**Код:**
```cpp

```

**Результат:**
```text

```

photo - 

---

### Завдання №5.

**Код:**
```cpp

```

**Результат:**
```text

```

photo - 

---

## Висновки
