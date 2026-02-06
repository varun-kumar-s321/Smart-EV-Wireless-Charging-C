# ⚡ Smart EV Wireless Charging System using C

## 📌 Description
This project simulates a smart wireless electric vehicle (EV) charging system using C.
An IR sensor detects the presence of an EV near the charging station.
Wireless charging starts automatically when an EV is detected and stops when the battery is full or the EV moves away.

A RED LED indicates the charging zone is occupied, while a GREEN LED indicates the charging station is free.

---

## 🎯 Objectives
- Detect EV presence using IR sensor logic
- Automatically control wireless EV charging
- Indicate charging status using RED and GREEN LEDs
- Demonstrate EV charging logic using C

---

## ⚙️ Working Logic
- **EV Detected & Battery < 80%**
  - Wireless Charging ON
  - RED LED ON
  - GREEN LED OFF

- **Battery ≥ 80% OR No EV**
  - Wireless Charging OFF
  - RED LED OFF
  - GREEN LED ON

---

## 🧠 Algorithm
1. Read IR sensor input
2. Read battery level
3. Check charging conditions
4. Turn charging ON or OFF
5. Control RED and GREEN LEDs
6. Display system status

---

## 💻 Source Code
- Language: **C**
- File: `smart_ev_wireless_charging.c`

---

## 📸 Sample Output Screenshot

The following screenshot shows EV detection, wireless charging status,
and RED/GREEN LED indication.

![Smart EV Wireless Charging Output](output.png)

---

## 🛠 Technologies Used
- C Programming
- Conditional statements
- Loops
- Embedded system logic

---

## 🚗 Applications
- Smart EV charging stations
- Wireless charging systems
- EV infrastructure
- Embedded controller design

---

## 🚀 Future Enhancements
- Hardware implementation using ESP32/Arduino
- IoT-based remote monitoring
- Multiple EV detection
- Fast and slow charging modes

---

## 🎤 Interview Explanation
This project demonstrates how IR sensor-based detection can be used to control a wireless EV charging system with clear visual indicators using RED and GREEN LEDs.
