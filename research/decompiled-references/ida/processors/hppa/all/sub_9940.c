__int64 __fastcall sub_9940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 v6; // al
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 *func; // r13
  unsigned __int64 *v11; // rax
  __int64 v12; // rax
  __int16 v13; // ax
  char v15; // [rsp+23h] [rbp-1E5h]
  unsigned int v16; // [rsp+24h] [rbp-1E4h]
  __int64 v17; // [rsp+28h] [rbp-1E0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-1D8h]
  __int64 v19; // [rsp+38h] [rbp-1D0h]
  __int128 v20; // [rsp+40h] [rbp-1C8h]
  __int64 v21; // [rsp+50h] [rbp-1B8h]
  __int128 v22; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v23; // [rsp+70h] [rbp-198h]
  __int64 v24; // [rsp+78h] [rbp-190h]
  __int64 v25; // [rsp+80h] [rbp-188h]
  _BYTE v26[46]; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int16 v27; // [rsp+B6h] [rbp-152h]
  unsigned __int64 v28; // [rsp+1C8h] [rbp-40h] BYREF

  v28 = __readfsqword(0x28u);
  v17 = 0;
  copy_tinfo_t();
  v6 = *(_BYTE *)(a2 + 1);
  if ( v6 == 4 )
  {
    v7 = apply_tinfo_to_stkarg();
    goto LABEL_6;
  }
  if ( v6 > 4u )
  {
    if ( v6 == 5 && (get_tinfo_property() & 0xF) == 0xA )
    {
      if ( *(_QWORD *)(a2 + 8) )
      {
        get_flags_ex();
        if ( !(unsigned __int8)is_defarg() )
        {
          get_default_reftype();
          v7 = op_offset();
          goto LABEL_6;
        }
      }
    }
LABEL_11:
    v8 = 0;
    goto LABEL_7;
  }
  if ( v6 == 1 )
  {
    v16 = *(unsigned __int16 *)(a2 + 6);
    func = (__int64 *)get_func();
    if ( !func )
      goto LABEL_11;
    v18 = 0;
    v19 = 0xFFFFFFFFLL;
    v11 = (unsigned __int64 *)v26;
    v21 = -1;
    v23 = -1;
    v24 = 0;
    v25 = 0;
    v20 = 0;
    v22 = -1;
    do
    {
      *(_WORD *)v11 = 0;
      v11 += 5;
      *((_WORD *)v11 - 19) = 0;
      *((_WORD *)v11 - 18) = 0;
      *((_DWORD *)v11 - 2) = 0;
      *((_WORD *)v11 - 17) = 0;
      *((_OWORD *)v11 - 2) = 0;
      *(v11 - 2) = 0;
    }
    while ( &v28 != v11 );
    v12 = *(_QWORD *)(a1 + 16);
    if ( v12 == -1 )
      v12 = *func;
    v21 = v12;
    if ( !(unsigned __int8)func_tail_iterator_set() )
    {
LABEL_39:
      if ( v23 == *func )
      {
        add_regarg();
        if ( !v18 )
          goto LABEL_11;
      }
      else
      {
LABEL_35:
        if ( !v18 )
          goto LABEL_11;
      }
      v8 = 0;
      lock_func_range();
      goto LABEL_7;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !(unsigned __int8)func_item_iterator_decode_preceding_insn() )
            goto LABEL_39;
          if ( *(_QWORD *)(a5 + 8) > 0x1000u )
            goto LABEL_35;
        }
        while ( v15 );
        if ( (_WORD)v24 == 55 )
          break;
        if ( (unsigned __int16)v24 <= 0x37u )
        {
          if ( (_WORD)v24 != 54 )
            goto LABEL_30;
LABEL_26:
          if ( v27 == v16 )
          {
            v8 = sub_9940(&v22, v26, &v17, a4, a5, 0.0);
            if ( v18 )
              lock_func_range();
            goto LABEL_7;
          }
        }
        else
        {
          if ( (_WORD)v24 == 57 || (unsigned __int16)(v24 - 140) <= 1u )
            goto LABEL_26;
LABEL_30:
          v13 = *(_WORD *)(a1 + 24);
          if ( (v13 == 11 || v13 == 134) && v16 > 0x16 && v16 != 27 || (unsigned int)get_spoiled_reg() != -1 )
            goto LABEL_35;
        }
      }
      if ( v27 == v16 )
      {
        remove_tinfo_pointer();
        goto LABEL_26;
      }
    }
  }
  if ( v6 != 2 )
    goto LABEL_11;
  v7 = apply_once_tinfo_and_name();
LABEL_6:
  v8 = v7;
LABEL_7:
  clear_tinfo_t();
  return v8;
}

