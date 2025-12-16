# 🗽 C++ OOP Lab — **The NYC Street Vendor**

Model real NYC street carts using **classes, objects, constructors, methods, and encapsulation.**


Hessvacio Hassan

Student ID: 12344567690



```
=========================================
        NYC Street Vendor – C++ OOP Lab
      Classes • Objects • Encapsulation
=========================================
```

---

# 📌 Overview

This lab introduces students to key Object-Oriented Programming (OOP) concepts in C++:

* **Classes** (blueprints for objects)
* **Objects** (real instances created from a class)
* **Attributes** (data stored inside objects)
* **Methods** (actions objects can perform)
* **Constructors** (initializing objects)
* **Encapsulation** (private data + public methods)

We model these ideas through something familiar:
**NYC street vendors (halal carts, flower stands, pretzel vendors).**

---

# 🧠 Visual: What Is a Class?

```
           CLASS (Blueprint)
        ------------------------
        |  Attributes (Data)   |
        |  - Name              |
        |  - Goods             |
        |  - Location          |
        |  - DailyGoal         |
        |                      |
        |  Methods (Actions)   |
        |  - DisplayInfo()     |
        |  - Relocate()        |
        ------------------------

                ⬇️ creates

       OBJECT = actual street vendor cart
       --------------------------------
       | Name: "53rd St. Halal"        |
       | Goods: Chicken & Rice         |
       | Location: Midtown             |
       | DailyGoal: 1500               |
       --------------------------------
```

---

# 🗂️ Repository Structure

Recommended folder layout:

```
/ (repo root)
  ├── src/
  │   ├── main.cpp
  │   ├── StreetVendor.h
  │   └── StreetVendor.cpp
  ├── .gitignore
  └── README.md
```

---

# 🧵 Phase 1 — Defining the Class

### ✔️ Task 1.1 Define the class

```cpp
class StreetVendor {
}; // Don't forget the semicolon!
```

### ✔️ Task 1.2 Add private attributes

```cpp
private:
    std::string Name;
    std::string Goods;
    std::string Location;
    int DailyGoal;
```

---

# 🚦 Phase 2 — Constructor (Object Initialization)

A constructor runs automatically when an object is created:

```cpp
StreetVendor(std::string name,
             std::string goods,
             std::string location,
             int goal)
{
    Name = name;
    Goods = goods;
    Location = location;
    DailyGoal = goal;
}
```

---

# 🛠️ Phase 3 — Methods (Vendor Behaviors)

### ✔️ Display vendor information

```cpp
void DisplayInfo() {
    std::cout << Name << " sells " << Goods
              << " and is located at: " << Location << std::endl;
    std::cout << "Current daily goal is: $" << DailyGoal << std::endl;
}
```

### ✔️ Encapsulation: Controlled relocation

Vendors can only move **within Manhattan**:

```cpp
void Relocate(std::string new_location) {
    if (new_location.find("Manhattan") != std::string::npos) {
        Location = new_location;
        std::cout << Name << " has successfully moved to: "
                  << Location << std::endl;
    } else {
        std::cout << "Vendor relocation denied: Must stay in Manhattan!"
                  << std::endl;
    }
}
```

---

# 🏙️ Phase 4 — Creating Objects in `main()`

```cpp
StreetVendor HalalGuys("53rd St. Halal", "Chicken & Rice",
                       "Midtown, 53rd & 6th", 1500);

StreetVendor FlowerShop("Union Sq Blooms", "Fresh Flowers",
                        "Union Square Park entrance", 750);
```

---

# 🗺️ NYC Location Visual

```
              NYC BORO MAP (simple sketch)

                    🗽 MANHATTAN
            ┌────────────────────────┐
            │ Midtown                │
            │  • 53rd & 6th          │ <= halal cart
            │  • Times Square        │ <= allowed move
            └────────────────────────┘
                     |
  ┌──────────────────┼───────────────────┐
  ▼                  ▼                   ▼
BRONX             QUEENS              BROOKLYN
(allowed?)        ❌ relocation        ❌ relocation
                   denied               denied

STATEN ISLAND – requires ferry, also denied 🙂
```

---

# 🛒 Pixel Art Food Cart (ASCII)

```
      _______________________
     /  NYC STREET VENDOR    \
    /_________________________\
    |   [  HOT FOOD  🔥 ]     |
    |  ┌───────────────┐      |
    |  |  CHICKEN &    |      |
    |  |   RICE $10    |      |
    |  └───────────────┘      |
    |                         |
    |   ☕   🌭   🥤           |
    |                         |
   /---------------------------\
  /   O                 O       \
 /_______________________________\
```

---

# 🎫 Pixel Art MetroCard (ASCII)

```
   ┌──────────────────────────┐
   │  ███  METROCARD  ███     │
   │                          │
   │   NYC TRANSIT      🗽    │
   │   TAP ➜ RIDE            │
   │                          │
   └──────────────────────────┘
```

---

# 🧪 Sample Output

```
53rd St. Halal sells Chicken & Rice and is located at: Midtown, 53rd & 6th
Current daily goal is: $1500

Union Sq Blooms sells Fresh Flowers and is located at: Union Square Park entrance
Current daily goal is: $750

53rd St. Halal has successfully moved to: Manhattan, Times Square Plaza
Vendor relocation denied: Must stay in Manhattan!
```

---

# 🧩 Starter Code (Full Files)

### 📄 `StreetVendor.h`

*(Included in this README earlier — unchanged)*

### 📄 `StreetVendor.cpp`

*(Included earlier — unchanged)*

### 📄 `main.cpp`

*(Included earlier — unchanged)*

---

# 🎒 Student Checklist

| Task                            | Done? |
| ------------------------------- | ----- |
| Create `StreetVendor` class     | ⬜     |
| Add private attributes          | ⬜     |
| Add a constructor               | ⬜     |
| Create `DisplayInfo()`          | ⬜     |
| Create `Relocate()`             | ⬜     |
| Create objects in `main()`      | ⬜     |
| Test relocation success/failure | ⬜     |

---

# 🎉 End of GitHub README

If you'd like, I can add screenshots, a rendered banner, or GitHub badges.

---

# ✅ **DOCUMENT 2 — Student Handout (Simple, Classroom-Friendly, Step-by-Step)**

Use this as a PDF for students or share in class.

---

# 🗽 MAC101 – C++ Intro Lab

## **OOP with NYC Street Vendors**

### **What you will learn**

* What a **class** is
* What an **object** is
* How to use **constructors**
* How to write **methods**
* How **encapsulation** protects data

---

# 1️⃣ Step 1 — Create the Class

### A class is a blueprint:

```
Street Vendor Blueprint
-----------------------
Name
Goods Sold
Location
Daily Goal
```

### Code:

```cpp
class StreetVendor {
private:
    std::string Name;
    std::string Goods;
    std::string Location;
    int DailyGoal;
};
```

---

# 2️⃣ Step 2 — Add a Constructor

A constructor sets the starting values of your vendor:

```cpp
StreetVendor(std::string name,
             std::string goods,
             std::string location,
             int goal)
{
    Name = name;
    Goods = goods;
    Location = location;
    DailyGoal = goal;
}
```

---

# 3️⃣ Step 3 — Add Methods

### **Method 1: Display vendor info**

```cpp
void DisplayInfo() {
    std::cout << Name << " sells " << Goods
              << " and is located at: " << Location << std::endl;
}
```

### **Method 2: Relocate the vendor**

Only Manhattan is allowed:

```cpp
void Relocate(std::string new_location) {
    if (new_location.find("Manhattan") != std::string::npos) {
        Location = new_location;
    } else {
        std::cout << "Relocation denied: Must stay in Manhattan!" << std::endl;
    }
}
```

---

# 4️⃣ Step 4 — Create Vendors in `main()`

```cpp
StreetVendor HalalGuys("53rd St. Halal",
                       "Chicken & Rice",
                       "Midtown", 1500);

StreetVendor FlowerShop("Union Sq Blooms",
                        "Fresh Flowers",
                        "Union Square", 750);
```

---

# 5️⃣ Step 5 — Call Methods

```cpp
HalalGuys.DisplayInfo();
HalalGuys.Relocate("Manhattan, Times Square");

FlowerShop.DisplayInfo();
FlowerShop.Relocate("Queens");
```

---

# 🌆 Visual: Where Vendors Can Move

```
Allowed:
✔ Manhattan
  ✔ Midtown
  ✔ Union Square
  ✔ Times Square

Not Allowed:
❌ Queens
❌ Brooklyn
❌ Bronx
❌ Staten Island
```

---

# 🔄 Full Workflow Diagram

```
CLASS
  ↓
CONSTRUCTOR
  ↓
OBJECT CREATED
  ↓
OBJECT METHODS RUN
```

---

# 🎨 Fun NYC ASCII Art

### Food Cart

```
      _______________________
     /  NYC STREET VENDOR    \
    |   [ HOT FOOD 🔥 ]      |
    |   ☕  🌭  🥤             |
   /---------------------------\
```

### MetroCard

```
 ┌──────────────────────────┐
 │     METROCARD    🗽      │
 └──────────────────────────┘
```

---

# 📝 What You Must Submit

✔ `StreetVendor.h`
✔ `StreetVendor.cpp`
✔ `main.cpp`
✔ Output screenshot or copy/paste
✔ Reflection:

> “What real-life object would you model using a class and why?”

---

# 🎯 Learning Outcome

You now understand:

* How real-life objects can be modeled in code
* How to build a class
* How to create objects
* How data hiding works (encapsulation)
* How constructors simplify initialization

