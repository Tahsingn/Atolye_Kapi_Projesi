#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <MFRC522.h>  //kütüphaneler tamam
#include <MFRC522Extended.h>
#include <SPI.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x3f, 16, 2);

int RST_PIN = 9;
int SS_PIN = 10;  //tanımlamalar tamam
int servoPin = 8;
int buzzer = 2;
Servo motor;
MFRC522 rfid(SS_PIN, RST_PIN);

byte ID[4] = { 51, 165, 230, 246 };
byte ID_2[4] = { 163, 152, 172, 252 };           //buraya kartları aynen bu şekilde tanımlayacaz idleri değiştirip
byte Tashin_ID[4] = { 79, 126, 40, 81 };
byte Mavis_ID[4] = { 175, 132, 129, 241 };
byte SAMET_OZKOC_ID[4] = { 5, 128, 143, 32 };
byte Mehmet_Ali_Bagis_Id[4] = { 143, 168, 42, 81 };
byte Kazim_Agrali_Id[4] = { 143, 67, 3, 81 };
byte Yunus_Emre_Cesur_ID[4] = { 239, 137, 41, 81 };
byte Yakup_E_Kaymaz_ID[4] = { 143, 165, 3, 81 };
byte Merve_Ozer_ID[4] = { 239, 218, 109, 81 };
byte Safa_Aslan_ID[4] = { 143, 74, 44, 81 };
byte Mehmet_Cam_tel_ID[4] = { 8, 23, 197, 101 };
byte Muhammed_Said_Ozdemir_ID[4] = { 207, 75, 41, 81 };
byte Ali_Tarik_Ozbey_ID[4] = { 4, 30, 79, 18 };
byte Sunullah_Karadas_ID[4] = { 4, 119, 133, 202 };
byte Kenan_Said_ID[4] = { 15, 69, 156, 80 };
byte Tayyip_Efe_Toprak_ID[4] = { 15, 133, 3, 81 };
byte Yilmaz_Menefse_ID[4] = { 175, 130, 39, 81 };
byte Enes_Kaya_ID[4] = { 47, 67, 3, 81 };
byte Muhammet_Demirkol_ID[4] = {79,187,159,80,
};