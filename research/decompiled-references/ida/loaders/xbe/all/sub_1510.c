__int64 __fastcall sub_1510(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int dword; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax

  v1 = ((__int64 (*)(void))get_dword)();
  set_name(v1, "TlsStart", 257);
  dword = get_dword(a1 + 4);
  set_name(dword, "TlsEnd", 257);
  v3 = get_dword(a1 + 8);
  set_name(v3, "TlsIndex", 257);
  v4 = get_dword(a1 + 12);
  return set_name(v4, "TlsCallbacks", 257);
}

