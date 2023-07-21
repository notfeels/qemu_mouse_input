#include <iostream>
#include <thread>
#include "qemu_input.hh"

int main( ) {
    qemu::qemu_input qemu_input;

    qemu_input.connect_( "127.0.0.1", 6448 );
    qemu_input.enable_commands( );

    qemu_input.move_mouse(10, 10);

    for ( int i = 0; i < 32; i++ )
    {
        std::cout << "moving... " << std::endl;
        qemu_input.move_mouse(-10, 0 );
        std::this_thread::sleep_for( std::chrono::milliseconds( 30 ) );
    }

    return 0;
}