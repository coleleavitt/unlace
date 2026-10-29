__int64 __fastcall sub_11640(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned __int8 v4; // al
  __int64 result; // rax
  char v7; // dl
  __int64 flags; // rax

  v4 = a3[1];
  if ( v4 == 5 )
  {
    v7 = a3[32];
    result = 33;
    if ( v7 == 1 )
      return result;
    if ( v7 > 1 )
    {
      result = 17;
      if ( (unsigned __int8)(v7 - 4) <= 1u )
        return result;
    }
    else if ( !v7 )
    {
      return 4 * (unsigned int)((*(_WORD *)(a1 + 184) & 1) == 0);
    }
    goto LABEL_7;
  }
  if ( v4 > 5u )
  {
    if ( v4 != 7 )
    {
LABEL_7:
      result = 0;
      if ( (a3[4] & 0x20) != 0 )
        return (4 * ((*(_WORD *)(a1 + 184) & 1) == 0)) | 0x10u;
      return result;
    }
    result = 193;
    if ( *a3 )
      return 161;
  }
  else
  {
    if ( v4 == 2 )
    {
      flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0, a3, a4);
      is_defarg(flags, *a3);
      return 192;
    }
    if ( v4 != 4 )
      goto LABEL_7;
    result = 324;
    if ( !(_BYTE)a4 )
    {
      result = 196;
      if ( (a3[33] & 0x80u) != 0 )
        goto LABEL_7;
    }
  }
  return result;
}
