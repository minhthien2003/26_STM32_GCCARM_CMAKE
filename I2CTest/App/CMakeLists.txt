# Tạo một library từ các file trong thư mục này
add_library(App STATIC
    AppComm.c
)

# Include path cho chính library này và ai dùng nó (PUBLIC)
target_include_directories(App PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Link HAL/CMSIS từ project CubeMX nếu cần
target_link_libraries(App PUBLIC
    stm32cubemx          # tên target CubeMX tạo ra
)
