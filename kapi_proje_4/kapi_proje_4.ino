#include "kapi_proje_4.h"

void setup() {
  SPI.begin();
  rfid.PCD_Init();
  lcd.init();
  lcd.backlight();
  pinMode(buzzer, OUTPUT);
  motor.attach(servoPin);
  motor.write(0);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("LUTFEN KARTINIZI");
  lcd.setCursor(0,1);
  lcd.print("CIHAZA OKUTUNUZ");

  if (!rfid.PICC_IsNewCardPresent())  // bu komut okutulan karttan başka yeni kart gelmediğinde başa dönmesini sağlar (bir kart okulduktan sonra yeni bir kartın beklenmesine yarar)
    return;

  if (!rfid.PICC_ReadCardSerial())  // kart okutmadığında değer okuma bekle
    return;

  if (rfid.uid.uidByte[0] == ID[0] && rfid.uid.uidByte[1] == ID[1] && rfid.uid.uidByte[2] == ID[2] && rfid.uid.uidByte[3] == ID[3]
      || rfid.uid.uidByte[0] == ID_2[0] && rfid.uid.uidByte[1] == ID_2[1] && rfid.uid.uidByte[2] == ID_2[2] && rfid.uid.uidByte[3] == ID_2[3]
      || rfid.uid.uidByte[0] == Mavis_ID[0] && rfid.uid.uidByte[1] == Mavis_ID[1] && rfid.uid.uidByte[2] == Mavis_ID[2] && rfid.uid.uidByte[3] == Mavis_ID[3]
      || rfid.uid.uidByte[0] == SAMET_OZKOC_ID[0] && rfid.uid.uidByte[1] == SAMET_OZKOC_ID[1] && rfid.uid.uidByte[2] == SAMET_OZKOC_ID[2] && rfid.uid.uidByte[3] == SAMET_OZKOC_ID[3]
      || rfid.uid.uidByte[0] == Mehmet_Ali_Bagis_Id[0] && rfid.uid.uidByte[1] == Mehmet_Ali_Bagis_Id[1] && rfid.uid.uidByte[2] == Mehmet_Ali_Bagis_Id[2] && rfid.uid.uidByte[3] == Mehmet_Ali_Bagis_Id[3]
      || rfid.uid.uidByte[0] == Kazim_Agrali_Id[0] && rfid.uid.uidByte[1] == Kazim_Agrali_Id[1] && rfid.uid.uidByte[2] == Kazim_Agrali_Id[2] && rfid.uid.uidByte[3] == Kazim_Agrali_Id[3]
      || rfid.uid.uidByte[0] == Yunus_Emre_Cesur_ID[0] && rfid.uid.uidByte[1] == Yunus_Emre_Cesur_ID[1] && rfid.uid.uidByte[2] == Yunus_Emre_Cesur_ID[2] && rfid.uid.uidByte[3] == Yunus_Emre_Cesur_ID[3]
      || rfid.uid.uidByte[0] == Tashin_ID[0] && rfid.uid.uidByte[1] == Tashin_ID[1] && rfid.uid.uidByte[2] == Tashin_ID[2] && rfid.uid.uidByte[3] == Tashin_ID[3]
      || rfid.uid.uidByte[0] == Yakup_E_Kaymaz_ID[0] && rfid.uid.uidByte[1] == Yakup_E_Kaymaz_ID[1] && rfid.uid.uidByte[2] == Yakup_E_Kaymaz_ID[2] && rfid.uid.uidByte[3] == Yakup_E_Kaymaz_ID[3]
      || rfid.uid.uidByte[0] == Merve_Ozer_ID[0] && rfid.uid.uidByte[1] == Merve_Ozer_ID[1] && rfid.uid.uidByte[2] == Merve_Ozer_ID[2] && rfid.uid.uidByte[3] == Merve_Ozer_ID[3]
      || rfid.uid.uidByte[0] == Safa_Aslan_ID[0] && rfid.uid.uidByte[1] == Safa_Aslan_ID[1] && rfid.uid.uidByte[2] == Safa_Aslan_ID[2] && rfid.uid.uidByte[3] == Safa_Aslan_ID[3]
      || rfid.uid.uidByte[0] == Mehmet_Cam_tel_ID[0] && rfid.uid.uidByte[1] == Mehmet_Cam_tel_ID[1] && rfid.uid.uidByte[2] == Mehmet_Cam_tel_ID[2] && rfid.uid.uidByte[3] == Mehmet_Cam_tel_ID[3]
      || rfid.uid.uidByte[0] == Muhammed_Said_Ozdemir_ID[0] && rfid.uid.uidByte[1] == Muhammed_Said_Ozdemir_ID[1] && rfid.uid.uidByte[2] == Muhammed_Said_Ozdemir_ID[2] && rfid.uid.uidByte[3] == Muhammed_Said_Ozdemir_ID[3]
      || rfid.uid.uidByte[0] == Ali_Tarik_Ozbey_ID[0] && rfid.uid.uidByte[1] == Ali_Tarik_Ozbey_ID[1] && rfid.uid.uidByte[2] == Ali_Tarik_Ozbey_ID[2] && rfid.uid.uidByte[3] == Ali_Tarik_Ozbey_ID[3]
      || rfid.uid.uidByte[0] == Sunullah_Karadas_ID[0] && rfid.uid.uidByte[1] == Sunullah_Karadas_ID[1] && rfid.uid.uidByte[2] == Sunullah_Karadas_ID[2] && rfid.uid.uidByte[3] == Sunullah_Karadas_ID[3]
      || rfid.uid.uidByte[0] == Kenan_Said_ID[0] && rfid.uid.uidByte[1] == Kenan_Said_ID[1] && rfid.uid.uidByte[2] == Kenan_Said_ID[2] && rfid.uid.uidByte[3] == Kenan_Said_ID[3]
      || rfid.uid.uidByte[0] == Tayyip_Efe_Toprak_ID[0] && rfid.uid.uidByte[1] == Tayyip_Efe_Toprak_ID[1] && rfid.uid.uidByte[2] == Tayyip_Efe_Toprak_ID[2] && rfid.uid.uidByte[3] == Tayyip_Efe_Toprak_ID[3]
      || rfid.uid.uidByte[0] == Yilmaz_Menefse_ID[0] && rfid.uid.uidByte[1] == Yilmaz_Menefse_ID[1] && rfid.uid.uidByte[2] == Yilmaz_Menefse_ID[2] && rfid.uid.uidByte[3] == Yilmaz_Menefse_ID[3]
      || rfid.uid.uidByte[0] == Enes_Kaya_ID[0] && rfid.uid.uidByte[1] == Enes_Kaya_ID[1] && rfid.uid.uidByte[2] == Enes_Kaya_ID[2] && rfid.uid.uidByte[3] == Enes_Kaya_ID[3]
      || rfid.uid.uidByte[0] == Muhammet_Demirkol_ID[0] && rfid.uid.uidByte[1] == Muhammet_Demirkol_ID[1] && rfid.uid.uidByte[2] == Muhammet_Demirkol_ID[2] && rfid.uid.uidByte[3] == Muhammet_Demirkol_ID[3]) {
    
      kartin_dogru_olmasi_durumu();
}
    else {
      kartin_yanlis_olmasi_durumu();
    }
    rfid.PICC_HaltA();  //bu komutla rfıd yeni kart okuyana kadar tutulan kartın ıd sini yalnızca 1 kere gösterir (okur)
  }

  void kartin_dogru_olmasi_durumu() {
    lcdYaz("HOSGELDINIZ     ","KAPI ACILDI     ");
    buzzerCal(2000, 0);
    motor.write(90);
    delay(3000);
    motor.write(0);
    lcd.clear();
  }

  void kartin_yanlis_olmasi_durumu() {
    motor.write(0);
    lcdYaz("GIRIS REDEDILDI ","ANAHTARI DENEYIN");
    buzzerCal(500, 300);
    buzzerCal(500, 300);
    buzzerCal(500, 300);
    lcd.clear();
  }

  void buzzerCal(int saniye1, int saniye2) {
    digitalWrite(buzzer, HIGH);
    delay(saniye1);
    digitalWrite(buzzer, LOW);
    delay(saniye2);
  }

  void lcdYaz(String yazi1,String yazi2){
    lcd.setCursor(0, 0);
    lcd.print(yazi1);
    lcd.setCursor(0, 1);
    lcd.print(yazi2);
  }

  // designed by Samet Özkoç, Maviş ,Ahmet Tahsin Günaydın
