#include <iostream>

#include "structs/StationDataType.hpp"

namespace brs
{
    namespace track_agent
    {
        class IStation
        {
        public:
            ~IStation() = default;
            virtual uint8_t getStationId() const = 0;
            virtual uint8_t getMaxPlayerNumber() const = 0;
            virtual uint8_t getCurrentPlayerNumber() const = 0;
            virtual structs::StaionState getStationState() const = 0;

        protected:
            uint8_t stationId_;
            uint8_t maxPlayerNumber_;
            uint8_t currentPlayersNumber_;
            structs::StaionState stationState_;
        };

    } // namespace brs

} // namespace track_agent