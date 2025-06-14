//Plugin Preloader Export
extern "C" void DLLEXPORT APIENTRY Initialize() {
	Util::Win32::AllocateConsole();
}

SKSEPluginLoad(const LoadInterface * a_SKSE) {
	Init(a_SKSE);
	logger::info("SKSEPluginLoad OK");
	return true;
}

SKSEPluginInfo(
	.Version = REL::Version { 1, 0, 0, 0 },
	.Name = "ConsolePreAlloc",
	.Author = "BingusEx",
	.StructCompatibility = SKSE::StructCompatibility::Independent,
	.RuntimeCompatibility = SKSE::VersionIndependence::AddressLibrary
);