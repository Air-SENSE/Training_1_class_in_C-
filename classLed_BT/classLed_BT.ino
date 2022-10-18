#include "configs.h"
#include "ledDriver.h"
#include "ButtonDriver.h"
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Khởi tạo bóng đèn led và button
ledDriver led1(LED_GREEN_PIN);
ledDriver led2(LED_RED_PIN);
ledDriver led3(LED_BLUE_PIN);
ButtonDriver bt1(BT_1_PIN);
ButtonDriver bt2(BT_2_PIN);

enum TRANG_THAI_DEN_et
{
  KHOI_DONG_GIA_TRI,
  BAT_TAT_CA_DEN,
  BAT_LAN_LUOT,
  MAX,
};


int trangThai = KHOI_DONG_GIA_TRI;
long long thoi_gian_bau_dau_lap = 0;
bool daAnLapRoi = 0;

// khởi tạo màn hình voi dia chi va kich thuoc
LiquidCrystal_I2C lcd(0x27, 16, 2);


#include "DieuKhienBongDen.h"
#include "CamBienNhietAmDriver.h"
#include "HienThiManHinh.h"

/**
 * @brief cai dat ban dau
 * 
 */
void setup() {
  Serial.begin(9600);   // khoi tao Serial voi baud rate 9600
  CaiDatDriver();       // khoi dong cac led va nut nhan
  CaiDatLCD();          // khoi dong man LCD
}


/**
 * @brief loop
 * 
 */
void loop() {
  KiemTraNutNhan();   // kiem tra nut nhan
  DieuKhienLed();     // dieu khien led
  DieuKhienLCD();     // hien thi ra LCD
}
