__int64 __fastcall sub_D9CE0(__int64 a1, unsigned __int8 a2, double a3, __int64 a4, int a5, int a6, int a7)
{
  __int16 v7; // dx
  __int64 result; // rax
  __int64 v9; // rdx

  v7 = *(_WORD *)(a1 + 20);
  if ( (v7 & 2) != 0 && *(_BYTE *)(a1 + 22) == a2 )
    return *(unsigned int *)(a1 + 16);
  if ( (v7 & 0x10) != 0 )
  {
    result = *(unsigned int *)(a1 + 16);
    if ( (v7 & 0x400) != 0 )
      return (unsigned int)(*(_DWORD *)a1 + result);
  }
  else
  {
    result = 0;
    v9 = v7 & 1;
    if ( !(_DWORD)v9 )
      return sub_D9CC0(a1, a2, v9, a5, a6, a7, a3);
  }
  return result;
}
