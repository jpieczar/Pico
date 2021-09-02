add_executable(binary
        binary.c
        )

target_link_libraries(binary pico_stdlib)

pico_add_extra_outputs(binary)
