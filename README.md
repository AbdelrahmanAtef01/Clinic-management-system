# 🏥 Clinical Management System

This project is a clinical management system implemented in C, featuring both admin and doctor modes. It serves as a practical application for managing healthcare data and appointments in a simple, console-based system.

---

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Modes](#modes)
  - [Admin Mode](#admin-mode)
  - [Doctor Mode](#doctor-mode)
- [Installation](#installation)
- [Usage](#usage)

---

## 📝 Overview

The Clinical Management System in C provides a structured approach to managing patient records and appointment scheduling. This program offers functionality for both admins and doctors, allowing for secure data access and management.

- **Admin Mode**: Enables admins to manage patient records, schedule appointments, and cancel bookings.
- **Doctor Mode**: Allows doctors to view patient records and see scheduled appointments for the day.

---

## ✨ Features

- 🔒 **Admin Authentication**: Access to admin functions requires a password, with limited login attempts.
- 📋 **Patient Record Management**: Admins can add, edit, or view patient records, using a unique ID to access specific details.
- ⏰ **Appointment Scheduling**: Reserve or cancel doctor appointments, manage time slots, and view scheduled reservations.
- 👩‍⚕️ **Doctor Mode**: Doctors can quickly view patient information and check all reservations for the day.

---

## ⚙️ Modes

### 🛠️ Admin Mode

To access admin features, the user must enter the correct password within three attempts; failure to do so blocks access. Admin mode provides the following options:

1. **Add New Patient**: Register a new patient by entering their data and assigning a unique ID.
2. **Edit Patient Record**: Modify or update patient information using their unique ID.
3. **Reserve a Slot with the Doctor**: View available time slots and reserve a slot for a patient based on their ID.
4. **Cancel Reservation**: Cancel an existing reservation and return the slot to availability.

### 🩺 Doctor Mode

In doctor mode, patient records and daily reservations can be accessed without requiring password verification. Available options include:

1. **View Patient Record**: Access stored data for a patient using their unique ID.
2. **View Today’s Reservations**: See all scheduled appointments for the current day.

---

## 🔧 Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/AbdelrahmanAtef01/Clinic-management-system.git
   ```

2. Ensure you have a C compiler installed (such as **GCC** or **Clang**).

3. Compile the program:

   ```bash
   gcc clinical_management_system.c -o clinical_management_system
   ```

4. Run the program:

   ```bash
   ./clinical_management_system
   ```

---

## 🚀 Usage

1. Start the program in your terminal.
2. Follow the prompts to select **Admin Mode** or **Doctor Mode**.
3. In **Admin Mode**, enter the password correctly within the first three attempts to access admin functionalities.
4. Use unique patient IDs to add, view, edit, or delete records as needed.
5. In **Doctor Mode**, view patient records and today's reservations directly.

