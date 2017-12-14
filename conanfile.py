from conans import ConanFile, CMake

class BuildPackage(ConanFile):
	name = "Pulsr"
	version = "1.0"
	license = "MPL-2.0"
	description = "Pulsr Game Engine - Main Module"
	url = "https://github.com/strootje/pulsr"

	generators = "cmake"
	exports_sources = "*"

	settings = (
		"os",
		"compiler",
		"build_type",
		"arch"
	)

	options = {
		"shared": [True, False],
		"build_tests": [True, False]
	}

	default_options = (
		"shared=False",
		"build_tests=False"
	)

	requires = (
		"gtest/1.8.0@conan/stable",
		"Grawlog/1.0@strootje/stable",
		"Guardog/1.0@strootje/stable",
		"Hypodermic/2.4@strootje/stable",
		"Pulsr.Core/1.0@strootje/stable",
		"Pulsr.Kernel/1.0@strootje/stable",
		"Pulsr.Drawing/1.0@strootje/stable"
	)

	def configure(self):
		self.options["gtest"].shared = self.options.shared
		self.options["Grawlog"].shared = self.options.shared
		self.options["Guardog"].shared = self.options.shared
		self.options["Pulsr.Kernel"].shared = self.options.shared
		self.options["Pulsr.Drawing"].shared = self.options.shared

	def build(self):
		cmake = CMake(self)
		cmake.definitions["BUILD_SHARED_LIBS"] = 'ON' if self.options["shared"] == True else 'OFF'
		cmake.definitions["BUILD_TESTS"] = 'ON' if self.options["build_tests"] == True else 'OFF'
		cmake.configure()
		cmake.build()
		cmake.test()

	def package(self):
		self.copy("*.hpp", dst="include/Pulsr", src="include")
		self.copy("*.lib", dst="lib", keep_path=False)
		self.copy("*.so", dst="lib", keep_path=False)
		self.copy("*.dylib", dst="lib", keep_path=False)
		self.copy("*.dll", dst="bin", keep_path=False)
		self.copy("*.a", dst="lib", keep_path=False)

	def package_info(self):
		self.cpp_info.libs = ["Pulsr"]
