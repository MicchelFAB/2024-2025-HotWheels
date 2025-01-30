/**
 * @file MockMCP2515Controller.hpp
 * @author Félix LE BIHAN (@Fle-bihh)
 * @author Ricardo Melo (@reomelo)
 * @author Tiago Pereira (@t-pereira06)
 * @author Michel Batista (@MicchelFAB)
 * @brief File containing Mock classes to test the controller of the MCP2515 module.
 * @version 0.1
 * @date 2025-01-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef MOCKMCP2515CONTROLLER_HPP
#define MOCKMCP2515CONTROLLER_HPP

# include <QDebug>
# include "IMCP2515Controller.hpp"
# include <gmock/gmock.h>

/**
 * @class MockMCP2515Controller
 * @brief Class to emulate the behavior of the MCP2515 controller.
 * 
 */
class MockMCP2515Controller : public IMCP2515Controller
{
    Q_OBJECT /// @class MockMCP2515Controller inherits from QObject.

public:
    MOCK_METHOD(bool, init, (), (override)); /// Mocked method to initialize the MCP2515 controller.
    MOCK_METHOD(void, processReading, (), (override)); /// Mocked method to process the reading of the MCP2515 controller.
    MOCK_METHOD(void, stopReading, (), (override)); /// Mocked method to stop the reading of the MCP2515 controller.
    MOCK_METHOD(bool, isStopReadingFlagSet, (), (const, override)); /// Mocked method to check if the stop reading flag is set.


signals:
    /**
     * @brief Speed updated signal.
     * @param newSpeed 
     */
    void speedUpdated(float newSpeed);
    /**
     * @brief Rotation per minute updated signal.
     * @param newRpm 
     */
    void rpmUpdated(int newRpm);
};

#endif // MOCKMCP2515CONTROLLER_HPP
