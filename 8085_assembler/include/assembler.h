#pragma once

#include <string>
#include <vector>

#include "source_file.h"

void Error(std::string err, SourceFile* source);

std::vector<std::pair<std::string, uint16_t>> GetLabels();

uint8_t StringToUInt8(std::string str);
uint16_t StringToUInt16(std::string str);

std::string IntToHex(int num, int c = 4);

void ScanForLabels(SourceFile* source);

uint8_t* parse(SourceFile* source);

namespace Assembler
{
	SourceFile* ReadSourceFile(std::string fileName);

	uint8_t* GetAssembledMemory(SourceFile* source);
	uint8_t* GetAssembledMemory(std::string file);

	void SaveAssembledMemory(uint8_t* memory, std::string outFileName);
	void SaveAssembledMemory(SourceFile* source, std::string outfile);
	void SaveAssembledMemory(std::string inFileName, std::string outFileName);
}