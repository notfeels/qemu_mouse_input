#ifndef QEMU_INPUT_QEMU_INPUT_H
#define QEMU_INPUT_QEMU_INPUT_H

#include <cstdint>
#include <string_view>

namespace qemu {
    class qemu_input {
        public:
            qemu_input( );

            bool connect_( std::string_view address, uint32_t port );
            void disconnect_( );
            [[nodiscard]]bool enable_commands( ) const;
            [[nodiscard]]bool move_mouse( int32_t delta_x, int32_t delta_y ) const;

        private:
            bool connected_;
            int32_t socket_;

            [[nodiscard]]bool send_( std::string_view message ) const;
    };
}

#endif //QEMU_INPUT_QEMU_INPUT_H