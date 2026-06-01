__int64 __fastcall sub_1EC40(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 dword; // ax

  dword = get_dword(a2);
  put_dword(
    a2,
    dword & 0xFFF
  | (unsigned __int64)(((unsigned int)*(_QWORD *)(a3 + 24) + (unsigned int)*(_QWORD *)(a3 + 32) + 2048) & 0xFFFFF000));
  return 1;
}
