__int64 __fastcall sub_3EE110(__int64 a1, __int64 a2, double a3)
{
  char v3; // al
  int v4; // r8d
  int v5; // r8d
  char dtype_size; // dl
  char v7; // al

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    return *(unsigned __int8 *)(a2 + 5);
  v3 = *(_BYTE *)(a2 + 1);
  v4 = *(unsigned __int16 *)(a2 + 6);
  if ( v3 == 12 || v3 == 1 )
  {
    if ( (unsigned int)(v4 - 61) > 0x1F )
    {
      if ( (unsigned int)(v4 - 45) <= 0xF && (*(_QWORD *)(a2 + 8) || *(char *)(a2 + 34) <= 0)
        || (unsigned __int8)sub_3EE030(a1, a2) )
      {
        goto LABEL_17;
      }
    }
    else if ( *(_QWORD *)(a2 + 8) || *(char *)(a2 + 34) <= 0 || (unsigned __int8)sub_3EE030(a1, a2) )
    {
      goto LABEL_6;
    }
    return *(unsigned __int8 *)(a2 + 5);
  }
  if ( !(unsigned __int8)sub_3EE030(a1, a2) )
    return *(unsigned __int8 *)(a2 + 5);
  if ( (unsigned int)(v5 - 61) <= 0x1F )
  {
LABEL_6:
    dtype_size = get_dtype_size();
    if ( dtype_size > 7 )
    {
      v7 = 8;
      goto LABEL_8;
    }
    return 7;
  }
LABEL_17:
  dtype_size = get_dtype_size();
  if ( dtype_size > 15 )
  {
    v7 = 16;
LABEL_8:
    if ( v7 != dtype_size )
    {
      if ( !under_debugger )
        sub_3835A0(0xC8DDu, a3);
      BUG();
    }
    return *(unsigned __int8 *)(a2 + 5);
  }
  return 8;
}

