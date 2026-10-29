char __fastcall sub_4CA50(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  char result; // al

  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a2 != *(_DWORD *)a3 )
      goto LABEL_3;
    goto LABEL_8;
  }
  result = 1;
  if ( *(_WORD *)(a3 + 4) )
  {
    if ( *(_DWORD *)a2 != *(_DWORD *)a3 )
      goto LABEL_3;
LABEL_8:
    if ( *(_WORD *)(a2 + 4) == *(_WORD *)(a3 + 4) )
    {
      v3 = 0;
      return v3 == 0;
    }
LABEL_3:
    v3 = 1;
    return v3 == 0;
  }
  return result;
}
