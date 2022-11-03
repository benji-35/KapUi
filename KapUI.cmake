
option(KAPUI_BETA_OPT "Active or not beta version of KapUI" OFF)

if (${KAPUI_BETA_OPT})
    set(KAPUI_BETA_FLAG "-DKAPUI_BETA_OW=true")
else()
    set(KAPUI_BETA_FLAG "-DKAPUI_BETA_OW=true")
endif()

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${KAPUI_BETA_FLAG}")

include_directories(Packages/KapUI)
