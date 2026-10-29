__int64 __fastcall sub_1ED60(__int64 a1, __int64 a2, __int64 a3)
{
  int dword; // eax

  dword = get_dword(a2);
  put_dword(
    a2,
    dword & 0x1FFF07F
  | (((*(_WORD *)(a3 + 24) + *(_WORD *)(a3 + 32)) & 0xFFF) << 7) & 0xF80
  | (unsigned __int64)(((*(_DWORD *)(a3 + 24) + *(_DWORD *)(a3 + 32)) << 20) & 0xFE000000));
  return 1;
}

