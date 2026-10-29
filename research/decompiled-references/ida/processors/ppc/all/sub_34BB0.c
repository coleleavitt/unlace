__int64 __fastcall sub_34BB0(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 result; // rax
  char v5; // cl

  v3 = *(_WORD *)(a3 + 24);
  if ( v3 == 1191 )
  {
    v5 = *(_BYTE *)(a3 + 121);
  }
  else
  {
    if ( v3 > 0x4A7u )
    {
      if ( v3 != 1195 )
        return 0;
LABEL_7:
      result = 0;
      if ( *(_BYTE *)(a3 + 121) != 10 )
        return result;
      *a1 = 1;
      *a2 = *(char *)(a3 + 152);
      return 1;
    }
    if ( v3 != 344 )
    {
      if ( v3 != 348 )
        return 0;
      goto LABEL_7;
    }
    v5 = *(_BYTE *)(a3 + 121);
    if ( v5 == 5 )
    {
      *a1 = 1;
      *a2 = *(_QWORD *)(a3 + 128);
      return 1;
    }
    if ( *(_BYTE *)(a3 + 81) == 5 && !v5 )
    {
      *a1 = 0;
      *a2 = *(_QWORD *)(a3 + 88);
      return 1;
    }
  }
  result = 0;
  if ( v5 == 10 )
  {
    *a1 = 1;
    *a2 = *(unsigned __int16 *)(a3 + 126);
    return 1;
  }
  return result;
}

