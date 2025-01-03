# Wearable Glove-Controlled Soft Robotic Gripper

This repository contains the code, designs, and resources for a **soft robotic gripper** controlled via a wearable glove with embedded flex sensors. The project demonstrates the integration of wearable technology, soft robotics, and wireless communication to achieve precise control of a pneumatically operated gripper.

---

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Design and Materials](#design-and-materials)
- [Hardware and Software](#hardware-and-software)
- [Code Overview](#code-overview)
- [How It Works](#how-it-works)
- [Setup Instructions](#setup-instructions)
- [Working Demonstration](#working-demonstration)
- [Credits](#credits)

---

## Introduction

The **Wearable Glove-Controlled Soft Robotic Gripper** is designed to mimic human hand movements and manipulate objects effectively. This project integrates:
- **Wearable technology**: A glove embedded with flex sensors to capture finger movements.
- **Wireless communication**: Data transmission via Wi-Fi to control the gripper.
- **Soft robotics**: A five-fingered gripper made of Polydimethylsiloxane (PDMS), actuated pneumatically for flexible and adaptive grasping.

---

## Features

- **Wearable Glove**: Equipped with flex sensors to capture finger positions in real time.
- **Wi-Fi Signal Transmission**: Sends data from the glove to the gripper using ESP32 modules.
- **Soft Robotic Gripper**:
  - Five pneumatically actuated fingers.
  - Molded using **Polydimethylsiloxane (PDMS)**.
  - 3D-printed molds and SolidWorks modeling.
- **Wireless Control**: Seamless operation without physical connections between the glove and the gripper.

---

## Design and Materials

### Glove:
- **Flex Sensors**: Embedded into the glove to measure finger bending.
- **ESP32 Module**: Sends data to the gripper via Wi-Fi.

### Gripper:
- **Material**: Polydimethylsiloxane (PDMS).
- **Design**: Five-fingered structure modeled in SolidWorks.
- **Molding**: 3D-printed molds were used to shape the gripper fingers.
- **Actuation**: Pneumatically operated fingers for adaptable grasping.

---

## Hardware and Software

### Hardware:
- ESP32 modules (2 units)
- Flex sensors (5 units)
- Pneumatic valves
- PDMS for gripper fabrication
- 3D printer for mold creation
- Compressor for pneumatic actuation

### Software:
- Arduino IDE for ESP32 programming
- SolidWorks for gripper design
- Canva for presentation and documentation

---

## Code Overview

### Glove Code:
- Reads flex sensor data.
- Maps sensor values.
- Transmits data via Wi-Fi.

### Gripper Code:
- Receives Wi-Fi data from the glove.
- Controls pneumatic valves based on sensor inputs.

---

## How It Works

1. The **flex sensors** on the wearable glove capture finger bending positions.
2. The sensor readings are mapped and sent to the gripper via **Wi-Fi** using ESP32 modules.
3. The gripper ESP32 receives the data and actuates pneumatic valves to move the corresponding soft robotic fingers.
4. The gripper mimics the hand movements of the glove in real time.

---

## Setup Instructions

### Prerequisites:
- Install the **Arduino IDE**.
- Configure the ESP32 in the Arduino IDE:
  - Add the ESP32 board URL to Arduino preferences: `https://dl.espressif.com/dl/package_esp32_index.json`.
  - Install the ESP32 board from the Board Manager.

### Steps:
 *   Clone this repository:

        ```bash
        git clone https://github.com/AdvaitChandorkar07/Soft_robotic_gripper.git
        cd soft-robotic-gripper
        ```

    *   Open the glove code in the Arduino IDE.
    *   Replace the Wi-Fi credentials (SSID and password) in the glove code.
    *   Flash the glove code onto the first ESP32.
    *   Open the gripper code in the Arduino IDE.
    *   Replace the Wi-Fi credentials in the gripper code and set the IP address of the glove ESP32.
    *   Flash the gripper code onto the second ESP32.
    *   Assemble the glove with flex sensors and the gripper with the pneumatic setup.

**Working Demonstration:**

To see the project in action, check out the following:

*   **Presentation:** [Link to your Canva presentation](https://www.canva.com/design/DAFeYm2tBqI/btm3zuLHu0Qxaz4AQwvGiw/edit?utm_content=DAFeYm2tBqI&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton&st=u1kfheeb) 
*   **Video Demonstration:** [./images/VIDEO-2023-04-27-15-38-37.mp4](./images/VIDEO-2023-04-27-15-38-37.mp4)
*   **Sample Finger Image:** [./images/PHOTO-2023-04-27-14-50-55.jpg](./images/PHOTO-2023-04-27-14-50-55.jpg)

**Credits:**

Developed by: Advait Chandorkar

*   Design and Modeling: SolidWorks and 3D printing.
*   Material Fabrication: PDMS for soft robotic fingers.
*   Wireless Communication: ESP32 modules.

