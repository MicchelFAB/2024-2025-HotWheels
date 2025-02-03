/*!
 * @file PeripheralController.hpp
 * @brief Definition of the PeripheralController class.
 * @version 0.1
 * @date 2025-01-31
 * @details This file contains the definition of the PeripheralController class,
 * which is responsible for controlling the car's peripherals.
 * @author Félix LE BIHAN (@Fle-bihh)
 * @author Tiago Pereira (@t-pereira06)
 * @author Ricardo Melo (@reomelo)
 * @author Michel Batista (@MicchelFAB)
 *
 * @copyright Copyright (c) 2025
 */

#ifndef PERIPHERALCONTROLLER_HPP
#define PERIPHERALCONTROLLER_HPP

#include "IPeripheralController.hpp"
#include <QDebug>
#include <QObject>
#include <cmath>
#include <fcntl.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <unistd.h>

/*!
 * @class PeripheralController
 * @brief Class that controls the car's peripherals.
 */
class PeripheralController : public IPeripheralController {
private:
  int servo_bus_fd_;
  int motor_bus_fd_;
  int servo_addr_;
  int motor_addr_;

public:
  PeripheralController(int servo_addr, int motor_addr);
  ~PeripheralController() override;
  int i2c_smbus_write_byte_data(int file, uint8_t command,
                                uint8_t value) override;
  int i2c_smbus_read_byte_data(int file, uint8_t command) override;
  virtual void write_byte_data(int fd, int reg, int value) override;
  virtual int read_byte_data(int fd, int reg) override;
  void set_servo_pwm(int channel, int on_value, int off_value) override;
  void set_motor_pwm(int channel, int value) override;
  void init_servo() override;
  void init_motors() override;
};

#endif // PERIPHERALCONTROLLER_HPP
