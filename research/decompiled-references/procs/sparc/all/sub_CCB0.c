__int64 __fastcall sub_CCB0(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v9; // al
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 *func; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int16 v16; // ax
  unsigned int v17; // eax
  unsigned int v18; // ebp
  __int64 flags; // rax
  __int64 v20; // rbx
  unsigned int v21; // ebp
  unsigned __int8 default_reftype; // al
  unsigned __int16 v23; // [rsp+16h] [rbp-82h]
  __int64 v24; // [rsp+18h] [rbp-80h] BYREF
  char v25; // [rsp+27h] [rbp-71h] BYREF
  __int64 v26; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+50h] [rbp-48h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v24 = a5;
  v30 = __readfsqword(0x28u);
  v26 = 0;
  copy_tinfo_t(&v26, a4);
  v9 = a3[1];
  if ( v9 == 4 )
  {
    v10 = apply_tinfo_to_stkarg(a2, a3, *((_QWORD *)a3 + 2), &v26, v24);
    goto LABEL_6;
  }
  if ( v9 > 4u )
  {
    if ( v9 == 5 && (get_tinfo_property(v26, 2) & 0xF) == 0xA )
    {
      if ( *((_QWORD *)a3 + 1) )
      {
        v18 = *a3;
        flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
        if ( !(unsigned __int8)is_defarg(flags, v18) )
        {
          v20 = *(_QWORD *)(a2 + 16);
          v21 = *a3;
          default_reftype = get_default_reftype(v20);
          op_offset(v20, v21, default_reftype, -1, 0, 0);
          v11 = 1;
          goto LABEL_7;
        }
      }
    }
    goto LABEL_11;
  }
  if ( v9 == 1 )
  {
    v23 = *((_WORD *)a3 + 3);
    func = (__int64 *)get_func(*(_QWORD *)(a2 + 16));
    if ( !func )
      goto LABEL_11;
    v14 = *(_QWORD *)(a2 + 16);
    v27[0] = 0;
    v27[1] = 0xFFFFFFFFLL;
    v29 = -1;
    v15 = v14;
    v28 = 0;
    if ( v14 == -1 )
      v15 = *func;
    v29 = v15;
    if ( !(unsigned __int8)func_tail_iterator_set(v27, func) )
    {
LABEL_30:
      if ( *func == v29 )
      {
        if ( (v23 & 0xFFEF) != 0xE )
          add_regarg(func, v23, &v26, v24);
        if ( v27[0] )
        {
          v11 = 0;
          lock_func_range(v27[0], 0);
          goto LABEL_7;
        }
      }
      else
      {
LABEL_31:
        if ( v27[0] )
        {
          v11 = 0;
          lock_func_range(v27[0], 0);
          goto LABEL_7;
        }
      }
      goto LABEL_11;
    }
    while ( 1 )
    {
      do
      {
        if ( !(unsigned __int8)func_item_iterator_decode_preceding_insn(v27, a6, &v25, a2) )
          goto LABEL_30;
        if ( *(_QWORD *)(a6 + 8) > 0x1000u )
          goto LABEL_31;
      }
      while ( v25 );
      v16 = *(_WORD *)(a2 + 24);
      if ( v16 > 0x3Du )
        break;
      if ( v16 > 0x37u )
      {
LABEL_34:
        if ( v23 == *(_WORD *)(a2 + 86) )
        {
          v17 = sub_CCB0(a1, a2, a2 + 40, &v26, v24, a6);
LABEL_28:
          v11 = v17;
          if ( v27[0] )
            lock_func_range(v27[0], 0);
          goto LABEL_7;
        }
      }
      else
      {
        if ( v16 != 1 )
          goto LABEL_31;
        if ( v23 == *(_WORD *)(a2 + 126) )
        {
          if ( *(_WORD *)(a2 + 46) != 30
            || *(_BYTE *)(a2 + 81) != 5
            || !(unsigned __int8)remove_tinfo_pointer(&v26, &v24, 0) )
          {
            goto LABEL_31;
          }
          v17 = apply_tinfo_to_stkarg(a2, a2 + 80, *(_QWORD *)(a2 + 88), &v26, a5);
          goto LABEL_28;
        }
      }
    }
    if ( (unsigned __int16)(v16 - 63) > 0x11u )
      goto LABEL_31;
    goto LABEL_34;
  }
  if ( v9 != 2 )
  {
LABEL_11:
    v11 = 0;
    goto LABEL_7;
  }
  v10 = apply_once_tinfo_and_name(*((_QWORD *)a3 + 2) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL), &v26, v24);
LABEL_6:
  v11 = v10;
LABEL_7:
  clear_tinfo_t(&v26);
  return v11;
}
