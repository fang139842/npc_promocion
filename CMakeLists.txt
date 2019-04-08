AC_ADD_SCRIPT("${CMAKE_CURRENT_LIST_DIR}/src/NpcPromotion.cpp")
AC_ADD_SCRIPT_LOADER("NpcPromocionPlayer" "${CMAKE_CURRENT_LIST_DIR}/src/loader.h")

AC_ADD_CONFIG_FILE("${CMAKE_CURRENT_LIST_DIR}/conf/myNpcPromotion.conf.dist")