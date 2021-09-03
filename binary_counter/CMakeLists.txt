add_executable(binary
        binary.c
        )

target_link_libraries(binary pico_stdlib)

# These 2 lines are needed for reading serial output via USB.
pico_enable_stdio_usb(binary 1)
pico_enable_stdio_uart(binary 0)

pico_add_extra_outputs(binary)
