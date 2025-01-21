#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "MockSPI.hpp"

using ::testing::_;
using ::testing::Return;
using ::testing::Throw;

class SPIControllerTest : public ::testing::Test {
protected:
    MockSPI mockSPI;
};

TEST_F(SPIControllerTest, OpenDeviceSuccess) {
    EXPECT_CALL(mockSPI, openDevice("/dev/spidev0.0")).WillOnce(Return(true));
    ASSERT_TRUE(mockSPI.openDevice("/dev/spidev0.0"));
}

TEST_F(SPIControllerTest, OpenDeviceFailure) {
    EXPECT_CALL(mockSPI, openDevice("/nonexistent/spidev0.0")).WillOnce(Return(false));
    ASSERT_FALSE(mockSPI.openDevice("/nonexistent/spidev0.0"));
}

TEST_F(SPIControllerTest, ConfigureSPI) {
    EXPECT_CALL(mockSPI, configure(0, 8, 500000)).Times(1);
    ASSERT_NO_THROW(mockSPI.configure(0, 8, 500000));
}

TEST_F(SPIControllerTest, WriteByteSuccess) {
    EXPECT_CALL(mockSPI, writeByte(0x01, 0xFF)).Times(1);
    ASSERT_NO_THROW(mockSPI.writeByte(0x01, 0xFF));
}

TEST_F(SPIControllerTest, ReadByteSuccess) {
    EXPECT_CALL(mockSPI, readByte(0x01)).WillOnce(Return(0xFF));
    uint8_t value = mockSPI.readByte(0x01);
    ASSERT_EQ(value, 0xFF);
}

TEST_F(SPIControllerTest, SpiTransferSuccess) {
    uint8_t tx[] = {0x02, 0x01, 0xFF};
    uint8_t rx[sizeof(tx)] = {0};

    EXPECT_CALL(mockSPI, spiTransfer(tx, rx, sizeof(tx))).Times(1);
    ASSERT_NO_THROW(mockSPI.spiTransfer(tx, rx, sizeof(tx)));
}
