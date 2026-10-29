__int64 __fastcall sub_F780(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v2 = *(_WORD *)(a2 + 24);
  v5 = __readfsqword(0x28u);
  if ( v2 == 43 )
  {
    if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 1 && get_func() )
      return add_auto_stkpnt();
    return v5 - __readfsqword(0x28u);
  }
  if ( v2 > 0x2Bu )
  {
    if ( v2 == 104 )
    {
LABEL_8:
      if ( *(_BYTE *)(a2 + 41) != 1
        || *(_WORD *)(a2 + 46) != 1
        || *(_BYTE *)(a2 + 81) != 1
        || *(_WORD *)(a2 + 86) != 1
        || sub_F5C0(a1, &v4, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(a2 + 126)) == -1 )
      {
        return v5 - __readfsqword(0x28u);
      }
      if ( *(_WORD *)(a2 + 24) == 104 )
        v4 = -v4;
      goto LABEL_23;
    }
    return v5 - __readfsqword(0x28u);
  }
  if ( v2 == 2 )
    goto LABEL_8;
  if ( (unsigned __int16)(v2 - 3) > 1u
    || *(_BYTE *)(a2 + 41) != 1
    || *(_WORD *)(a2 + 46) != 1
    || *(_BYTE *)(a2 + 81) != 1
    || *(_WORD *)(a2 + 86) != 1 )
  {
    return v5 - __readfsqword(0x28u);
  }
LABEL_23:
  if ( !get_func() )
    return v5 - __readfsqword(0x28u);
  return add_auto_stkpnt();
}

