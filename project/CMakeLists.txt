add_executable(project
        project.c
        )

target_link_libraries(project pico_stdlib)

pico_add_extra_outputs(project)
