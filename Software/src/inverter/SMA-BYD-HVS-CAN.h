#ifndef SMA_BYD_HVS_CAN_H
#define SMA_BYD_HVS_CAN_H
#include "../include.h"

#define CAN_INVERTER_SELECTED

#define READY_STATE 0x03
#define STOP_STATE 0x02

class SmaBydHvsCanInverter : public InverterProtocol {
 public:
  virtual void setup();
  virtual void transmit_can();
  virtual void update_values_can_inverter();
  virtual void map_can_frame_to_variable_inverter(CAN_frame rx_frame);

  virtual const char* name() { return Name; };
  static constexpr const char* Name = "BYD Battery-Box HVS over SMA CAN";
};

#endif
