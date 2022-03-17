#pragma once
#include <Windows.h>
#include <cstdint>
#include <TlHelp32.h>
#include <map>
#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <thread>

class process_handler {
public:
	virtual ~process_handler() { };

	virtual bool is_attached() = 0;

	virtual bool attach(const char* proc_name) = 0;

	virtual	uint64_t get_module_base(const std::string& module_name) = 0;

	virtual void read_memory(uintptr_t src, uintptr_t dst, size_t size) = 0;
};
