# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/SleepTimer_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SleepTimer_autogen.dir/ParseCache.txt"
  "SleepTimer_autogen"
  )
endif()
