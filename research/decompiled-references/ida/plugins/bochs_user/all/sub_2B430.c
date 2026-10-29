__int64 __fastcall sub_2B430(__int64 a1, const char *a2)
{
  return strstr(a2, "Error: setpmem: could not set memory, out of physical bounds?") != nullptr ? 0xE : 0;
}

