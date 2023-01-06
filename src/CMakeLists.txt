# Install headers
file(GLOB helper_headers "*.h")
install(FILES ${helper_headers} DESTINATION include/helpers/src)