# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yuzu/Advanced_Robotics/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yuzu/Advanced_Robotics/src/build

# Include any dependencies generated for this target.
include CMakeFiles/binarization.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/binarization.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/binarization.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/binarization.dir/flags.make

CMakeFiles/binarization.dir/mean_filter.cpp.o: CMakeFiles/binarization.dir/flags.make
CMakeFiles/binarization.dir/mean_filter.cpp.o: /Users/yuzu/Advanced_Robotics/src/mean_filter.cpp
CMakeFiles/binarization.dir/mean_filter.cpp.o: CMakeFiles/binarization.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/yuzu/Advanced_Robotics/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/binarization.dir/mean_filter.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/binarization.dir/mean_filter.cpp.o -MF CMakeFiles/binarization.dir/mean_filter.cpp.o.d -o CMakeFiles/binarization.dir/mean_filter.cpp.o -c /Users/yuzu/Advanced_Robotics/src/mean_filter.cpp

CMakeFiles/binarization.dir/mean_filter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/binarization.dir/mean_filter.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzu/Advanced_Robotics/src/mean_filter.cpp > CMakeFiles/binarization.dir/mean_filter.cpp.i

CMakeFiles/binarization.dir/mean_filter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/binarization.dir/mean_filter.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzu/Advanced_Robotics/src/mean_filter.cpp -o CMakeFiles/binarization.dir/mean_filter.cpp.s

CMakeFiles/binarization.dir/binarization.cpp.o: CMakeFiles/binarization.dir/flags.make
CMakeFiles/binarization.dir/binarization.cpp.o: /Users/yuzu/Advanced_Robotics/src/binarization.cpp
CMakeFiles/binarization.dir/binarization.cpp.o: CMakeFiles/binarization.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/yuzu/Advanced_Robotics/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/binarization.dir/binarization.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/binarization.dir/binarization.cpp.o -MF CMakeFiles/binarization.dir/binarization.cpp.o.d -o CMakeFiles/binarization.dir/binarization.cpp.o -c /Users/yuzu/Advanced_Robotics/src/binarization.cpp

CMakeFiles/binarization.dir/binarization.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/binarization.dir/binarization.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzu/Advanced_Robotics/src/binarization.cpp > CMakeFiles/binarization.dir/binarization.cpp.i

CMakeFiles/binarization.dir/binarization.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/binarization.dir/binarization.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzu/Advanced_Robotics/src/binarization.cpp -o CMakeFiles/binarization.dir/binarization.cpp.s

CMakeFiles/binarization.dir/gray_scale.cpp.o: CMakeFiles/binarization.dir/flags.make
CMakeFiles/binarization.dir/gray_scale.cpp.o: /Users/yuzu/Advanced_Robotics/src/gray_scale.cpp
CMakeFiles/binarization.dir/gray_scale.cpp.o: CMakeFiles/binarization.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/yuzu/Advanced_Robotics/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/binarization.dir/gray_scale.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/binarization.dir/gray_scale.cpp.o -MF CMakeFiles/binarization.dir/gray_scale.cpp.o.d -o CMakeFiles/binarization.dir/gray_scale.cpp.o -c /Users/yuzu/Advanced_Robotics/src/gray_scale.cpp

CMakeFiles/binarization.dir/gray_scale.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/binarization.dir/gray_scale.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzu/Advanced_Robotics/src/gray_scale.cpp > CMakeFiles/binarization.dir/gray_scale.cpp.i

CMakeFiles/binarization.dir/gray_scale.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/binarization.dir/gray_scale.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzu/Advanced_Robotics/src/gray_scale.cpp -o CMakeFiles/binarization.dir/gray_scale.cpp.s

CMakeFiles/binarization.dir/read_pixel_values.cpp.o: CMakeFiles/binarization.dir/flags.make
CMakeFiles/binarization.dir/read_pixel_values.cpp.o: /Users/yuzu/Advanced_Robotics/src/read_pixel_values.cpp
CMakeFiles/binarization.dir/read_pixel_values.cpp.o: CMakeFiles/binarization.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/yuzu/Advanced_Robotics/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/binarization.dir/read_pixel_values.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/binarization.dir/read_pixel_values.cpp.o -MF CMakeFiles/binarization.dir/read_pixel_values.cpp.o.d -o CMakeFiles/binarization.dir/read_pixel_values.cpp.o -c /Users/yuzu/Advanced_Robotics/src/read_pixel_values.cpp

CMakeFiles/binarization.dir/read_pixel_values.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/binarization.dir/read_pixel_values.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzu/Advanced_Robotics/src/read_pixel_values.cpp > CMakeFiles/binarization.dir/read_pixel_values.cpp.i

CMakeFiles/binarization.dir/read_pixel_values.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/binarization.dir/read_pixel_values.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzu/Advanced_Robotics/src/read_pixel_values.cpp -o CMakeFiles/binarization.dir/read_pixel_values.cpp.s

CMakeFiles/binarization.dir/main.cpp.o: CMakeFiles/binarization.dir/flags.make
CMakeFiles/binarization.dir/main.cpp.o: /Users/yuzu/Advanced_Robotics/src/main.cpp
CMakeFiles/binarization.dir/main.cpp.o: CMakeFiles/binarization.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/yuzu/Advanced_Robotics/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/binarization.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/binarization.dir/main.cpp.o -MF CMakeFiles/binarization.dir/main.cpp.o.d -o CMakeFiles/binarization.dir/main.cpp.o -c /Users/yuzu/Advanced_Robotics/src/main.cpp

CMakeFiles/binarization.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/binarization.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzu/Advanced_Robotics/src/main.cpp > CMakeFiles/binarization.dir/main.cpp.i

CMakeFiles/binarization.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/binarization.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzu/Advanced_Robotics/src/main.cpp -o CMakeFiles/binarization.dir/main.cpp.s

# Object files for target binarization
binarization_OBJECTS = \
"CMakeFiles/binarization.dir/mean_filter.cpp.o" \
"CMakeFiles/binarization.dir/binarization.cpp.o" \
"CMakeFiles/binarization.dir/gray_scale.cpp.o" \
"CMakeFiles/binarization.dir/read_pixel_values.cpp.o" \
"CMakeFiles/binarization.dir/main.cpp.o"

# External object files for target binarization
binarization_EXTERNAL_OBJECTS =

binarization: CMakeFiles/binarization.dir/mean_filter.cpp.o
binarization: CMakeFiles/binarization.dir/binarization.cpp.o
binarization: CMakeFiles/binarization.dir/gray_scale.cpp.o
binarization: CMakeFiles/binarization.dir/read_pixel_values.cpp.o
binarization: CMakeFiles/binarization.dir/main.cpp.o
binarization: CMakeFiles/binarization.dir/build.make
binarization: /opt/homebrew/lib/libopencv_gapi.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_stitching.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_alphamat.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_aruco.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_bgsegm.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_bioinspired.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_ccalib.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_dnn_objdetect.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_dnn_superres.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_dpm.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_face.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_freetype.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_fuzzy.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_hfs.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_img_hash.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_intensity_transform.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_line_descriptor.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_mcc.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_quality.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_rapid.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_reg.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_rgbd.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_saliency.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_sfm.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_signal.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_stereo.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_structured_light.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_superres.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_surface_matching.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_tracking.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_videostab.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_viz.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_wechat_qrcode.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_xfeatures2d.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_xobjdetect.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_xphoto.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_shape.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_highgui.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_datasets.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_plot.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_text.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_ml.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_phase_unwrapping.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_optflow.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_ximgproc.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_video.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_videoio.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_imgcodecs.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_objdetect.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_calib3d.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_dnn.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_features2d.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_flann.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_photo.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_imgproc.4.10.0.dylib
binarization: /opt/homebrew/lib/libopencv_core.4.10.0.dylib
binarization: CMakeFiles/binarization.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/yuzu/Advanced_Robotics/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable binarization"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/binarization.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/binarization.dir/build: binarization
.PHONY : CMakeFiles/binarization.dir/build

CMakeFiles/binarization.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/binarization.dir/cmake_clean.cmake
.PHONY : CMakeFiles/binarization.dir/clean

CMakeFiles/binarization.dir/depend:
	cd /Users/yuzu/Advanced_Robotics/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yuzu/Advanced_Robotics/src /Users/yuzu/Advanced_Robotics/src /Users/yuzu/Advanced_Robotics/src/build /Users/yuzu/Advanced_Robotics/src/build /Users/yuzu/Advanced_Robotics/src/build/CMakeFiles/binarization.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/binarization.dir/depend

