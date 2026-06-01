__int64 __fastcall sub_2BB70(__int64 a1, const char *a2, __int64 a3)
{
  int v4; // eax

  if ( !strstr(a2, "Bochs x86 Emulator ") )
    return 2;
  *(_OWORD *)(a3 + 16) = 0;
  *(_OWORD *)a3 = 0;
  *(_OWORD *)(a3 + 28) = 0;
  v4 = qsscanf();
  if ( v4 <= 2 )
    return 2 * (unsigned int)(v4 != 2);
  *(_DWORD *)(a3 + 8) = strtol((const char *)(a3 + 12), nullptr, 10);
  return 0;
}

