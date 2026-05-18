_BOOL8 __fastcall sub_D0CF0(__int64 *a1, __int64 a2, char a3, int a4, __int64 a5)
{
  _BOOL8 result; // rax
  __int16 v6; // ax
  __int64 v7; // rax
  char v8; // bl
  char v9; // dl

  if ( *((_DWORD *)a1 + 7) != a4 )
    return 0;
  v6 = *((_WORD *)a1 + 10);
  if ( (v6 & 0x82) == 0 || (a3 & 0x48) != 0 && (*(_BYTE *)(*a1 + 4) & 1) == 0 && (v6 & 0x80u) != 0 )
    return 0;
  if ( (a5 & a1[5]) != 0 )
    return 0;
  v7 = *((int *)a1 + 8);
  if ( (int)v7 < 0 )
    return 0;
  v8 = *(_BYTE *)(*(_QWORD *)(a2 + 8) + 16 * v7 + 9);
  v9 = sub_C6930(*a1);
  result = 1;
  if ( v9 > 65 )
  {
    result = v8 > 66;
    if ( v9 == 66 )
      result = v8 == 66;
    if ( !result )
      return 0;
  }
  return result;
}
