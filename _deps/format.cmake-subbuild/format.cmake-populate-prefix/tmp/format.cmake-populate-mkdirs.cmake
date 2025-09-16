# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/susan/Documents/csi281/_deps/format.cmake-src"
  "/home/susan/Documents/csi281/_deps/format.cmake-build"
  "/home/susan/Documents/csi281/_deps/format.cmake-subbuild/format.cmake-populate-prefix"
  "/home/susan/Documents/csi281/_deps/format.cmake-subbuild/format.cmake-populate-prefix/tmp"
  "/home/susan/Documents/csi281/_deps/format.cmake-subbuild/format.cmake-populate-prefix/src/format.cmake-populate-stamp"
  "/home/susan/Documents/csi281/_deps/format.cmake-subbuild/format.cmake-populate-prefix/src"
  "/home/susan/Documents/csi281/_deps/format.cmake-subbuild/format.cmake-populate-prefix/src/format.cmake-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/susan/Documents/csi281/_deps/format.cmake-subbuild/format.cmake-populate-prefix/src/format.cmake-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/susan/Documents/csi281/_deps/format.cmake-subbuild/format.cmake-populate-prefix/src/format.cmake-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
