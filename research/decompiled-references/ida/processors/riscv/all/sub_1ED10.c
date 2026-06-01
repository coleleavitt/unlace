__int64 __fastcall sub_1ED10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 dword; // rax

  dword = get_dword(a2);
  put_dword(a2, dword & 0xFFFFF | (unsigned int)((*(_DWORD *)(a3 + 24) + *(_DWORD *)(a3 + 32)) << 20));
  return 1;
}

