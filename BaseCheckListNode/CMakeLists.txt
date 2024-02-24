# CMakeList.txt: проект CMake для BaseCheckListNode; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project("Catch2CheckListNode")
add_subdirectory(../DemoCatch2Vendoring/catch2 Catch2_build)
add_executable(Catch2CheckListNode "BaseCheckListNode.cpp" "BaseCheckListNode.h")
target_link_libraries(Catch2CheckListNode PRIVATE Catch2::Catch2)