__int64 __fastcall sub_CB00(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 flags; // r13
  __int64 result; // rax
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  __int16 v18; // dx

  flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0, a3, a4);
  set_immd(*(_QWORD *)(a2 + 16));
  result = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)result == 3 )
  {
    if ( *(_WORD *)a3 != 1280 )
      return result;
    result = is_defarg(flags, *a3);
    if ( (_BYTE)result || *(_BYTE *)(a2 + 81) != 1 )
      return result;
    v18 = *(_WORD *)(a2 + 86);
    v16 = *(_QWORD *)(a2 + 16);
    if ( v18 == 13 )
    {
      v17 = *(_QWORD *)(a1 + 192);
      if ( v17 != -1 )
        goto LABEL_18;
    }
    else if ( v18 == 12 )
    {
      v17 = *(_QWORD *)(a1 + 200);
      if ( v17 != -1 )
        goto LABEL_18;
    }
    result = sub_B740(a1, v18, *(_QWORD *)(a2 + 16));
    v17 = result;
    if ( result == -1 )
      return result;
    v16 = *(_QWORD *)(a2 + 16);
LABEL_18:
    v15 = *a3;
    return op_offset(v16, v15, 130, -1, v17, 0, a7, a8);
  }
  if ( (_WORD)result != 4 )
    return result;
  result = is_defarg(flags, *a3);
  if ( (_BYTE)result || a3[1] != 5 )
    return result;
  if ( *a3 )
    goto LABEL_21;
  v13 = *(_BYTE *)(a2 + 81);
  if ( v13 == 3 )
  {
    if ( (*(_WORD *)(a2 + 86) & 7 | 8) == 0xF )
      goto LABEL_10;
  }
  else if ( v13 == 4 && *(_WORD *)(a2 + 86) == 15 )
  {
LABEL_10:
    v14 = sub_B740(a1, 95, *(_QWORD *)(a2 + 16));
    if ( v14 != -1 )
    {
      v15 = *a3;
      v16 = *(_QWORD *)(a2 + 16);
      v17 = v14;
      return op_offset(v16, v15, 130, -1, v17, 0, a7, a8);
    }
  }
LABEL_21:
  result = *((unsigned int *)a3 + 2);
  if ( (int)result < 0 )
  {
    result = is_invsign(*(_QWORD *)(a2 + 16), flags, *a3);
    if ( !(_BYTE)result )
      return toggle_sign(*(_QWORD *)(a2 + 16), *a3);
  }
  return result;
}

