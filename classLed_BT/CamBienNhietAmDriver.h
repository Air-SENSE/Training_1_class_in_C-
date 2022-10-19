/* ý nghĩa: Điều hiển thị trên màn hình lcd 16x2 i2c
 * Người viết: Tuyền
 * cập nhật cuối: 07/07/2022
 *
 */
#include <DHT.h>

#ifdef DHT_SENSOR
DHT CamBienNhietAm(DHT_PIN, DHT11);
#endif
#ifdef SHT_SENSOR
//
#endif

/**
 * @brief Khoi tao cam bien nhiet do, do am
 * @paramin None
 * @paramout None
 * @return None
 */
void KhoiTaoNhietAm_KhoiTao();

/**
 * @brief Doc gia tri nhiet do
 * @paramin None
 * @paramout None
 * @return gia tri nhiet do
 */
int DocNhietDo_Doc();

/**
 * @brief Doc gia tri do am
 * @paramin None
 * @paramout None
 * @return gia tri do am
 */
int DocDoAm_Doc();

void KhoiTaoNhietAm_KhoiTao()
{
  CamBienNhietAm.begin();
}
int DocNhietDo_Doc()
{
  return (int)CamBienNhietAm.readTemperature();
}
int DocDoAm_Doc()
{
  return (int)CamBienNhietAm.readHumidity();
}
