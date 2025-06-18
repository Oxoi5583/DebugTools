#pragma once

#include <DebugTools/tools/messenger.h>

#define DEBUG_MSG(P_ARGS) DebugTools::debug_messenger << DebugTools::GetCallerInfo(std::source_location::current())  << P_ARGS << DebugTools::Flag::FLAG__END
#define INFO_MSG(P_ARGS) DebugTools::info_messenger << DebugTools::GetCallerInfo(std::source_location::current())  << P_ARGS << DebugTools::Flag::FLAG__END
#define ERROR_MSG(P_ARGS) DebugTools::error_messenger << DebugTools::GetCallerInfo(std::source_location::current())  << P_ARGS << DebugTools::Flag::FLAG__END