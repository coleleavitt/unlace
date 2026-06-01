__int64 __fastcall sub_F5A0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  unsigned __int16 v3; // ax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v2 = *(_BYTE *)(a2 + 41) == 3;
  v6 = __readfsqword(0x28u);
  if ( v2 && (*(_WORD *)(a2 + 46) & 0xFFDF) == 7 && *(_BYTE *)(a2 + 72) == 19 )
  {
    get_dtype_size();
    if ( get_func() )
      return add_auto_stkpnt();
    return v6 - __readfsqword(0x28u);
  }
  if ( *(_BYTE *)(a2 + 81) == 3 )
  {
    if ( (*(_WORD *)(a2 + 86) & 0xFFDF) == 7 )
    {
      if ( *(_BYTE *)(a2 + 112) != 16 )
      {
        v3 = *(_WORD *)(a2 + 24);
        if ( v3 != 65 )
        {
          if ( v3 <= 0x41u )
          {
            if ( v3 > 2u )
              goto LABEL_6;
            if ( !v3 )
              return v6 - __readfsqword(0x28u);
            goto LABEL_23;
          }
          if ( (unsigned __int16)(v3 - 80) > 1u )
            return v6 - __readfsqword(0x28u);
          goto LABEL_27;
        }
      }
    }
    else
    {
      v3 = *(_WORD *)(a2 + 24);
      if ( v3 != 65 )
      {
        if ( v3 > 0x41u )
          return v6 - __readfsqword(0x28u);
        goto LABEL_6;
      }
    }
LABEL_36:
    get_dtype_size();
LABEL_28:
    if ( get_func() )
      return add_auto_stkpnt();
    return v6 - __readfsqword(0x28u);
  }
  v3 = *(_WORD *)(a2 + 24);
  if ( v3 == 65 )
    goto LABEL_36;
  if ( v3 > 0x41u )
  {
    if ( (unsigned __int16)(v3 - 80) > 1u || (*(_WORD *)(a2 + 86) & 0xFFDF) != 7 )
      return v6 - __readfsqword(0x28u);
LABEL_27:
    if ( !(unsigned __int8)sub_F340(a1, &v5, a2, a2 + 40) )
      return v6 - __readfsqword(0x28u);
    goto LABEL_28;
  }
  if ( v3 > 2u )
  {
LABEL_6:
    if ( v3 != 64 )
      return v6 - __readfsqword(0x28u);
    get_dtype_size();
    goto LABEL_8;
  }
  if ( !v3 || (*(_WORD *)(a2 + 86) & 0xFFDF) != 7 )
    return v6 - __readfsqword(0x28u);
LABEL_23:
  if ( !(unsigned __int8)sub_F340(a1, &v5, a2, a2 + 40) )
    return v6 - __readfsqword(0x28u);
LABEL_8:
  if ( get_func() )
    return add_auto_stkpnt();
  return v6 - __readfsqword(0x28u);
}

