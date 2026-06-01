__int64 __fastcall sub_5B980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 *a7)
{
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *func; // r15
  __int64 v17; // rax
  int v18; // r10d
  int v19; // ebx
  char fixups; // al
  __int64 v21; // rax
  __int16 v22; // [rsp+1Eh] [rbp-212h]
  __int64 v24; // [rsp+30h] [rbp-200h]
  char v26; // [rsp+47h] [rbp-1E9h]
  __int64 v27; // [rsp+48h] [rbp-1E8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-1E0h]
  __int64 v29; // [rsp+58h] [rbp-1D8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-1D0h]
  __int64 v31; // [rsp+68h] [rbp-1C8h]
  __int128 v32; // [rsp+70h] [rbp-1C0h]
  __int64 v33; // [rsp+80h] [rbp-1B0h]
  _QWORD v34[52]; // [rsp+90h] [rbp-1A0h] BYREF

  v34[45] = __readfsqword(0x28u);
  v27 = 0;
  copy_tinfo_t();
  v8 = *(_BYTE *)(a3 + 1);
  if ( v8 > 4u )
  {
    if ( v8 != 5 )
      goto LABEL_22;
    v14 = *(_QWORD *)(a3 + 8);
    if ( v14 == -1 )
      goto LABEL_22;
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v14;
    if ( (*(_BYTE *)(a2 + 28) & 0x18) == 0 || !(unsigned __int8)is_mapped() || (get_tinfo_property() & 0xF) != 0xA )
      goto LABEL_21;
    get_flags_ex();
    fixups = is_defarg() ^ 1;
    if ( !v24 )
    {
      if ( !fixups )
      {
LABEL_21:
        get_flags_ex();
        if ( !(unsigned __int8)is_off() || !(unsigned __int8)remove_tinfo_pointer() )
          goto LABEL_22;
        v10 = -1;
        if ( (unsigned __int8)get_refinfo() && (unsigned __int8)calc_reference_data() )
          v10 = v29;
LABEL_7:
        v11 = getinf();
        if ( v11 != 176 && v11 != 256 )
          goto LABEL_9;
        if ( !a7 || !(unsigned __int8)sub_59FA0(&v27) )
        {
          if ( (get_tinfo_property() & 0x2F) != 0xD
            || (v19 = (unsigned __int8)getinf_flag() == 0 ? 4 : 8, v19 >= (unsigned __int64)get_tinfo_size())
            || (unsigned __int8)can_define_item() )
          {
LABEL_9:
            v12 = apply_once_tinfo_and_name();
            goto LABEL_23;
          }
LABEL_22:
          v12 = 0;
          goto LABEL_23;
        }
        *a7 = v10;
LABEL_62:
        v12 = 1;
        goto LABEL_23;
      }
      fixups = get_fixups();
    }
    if ( fixups )
    {
      get_default_reftype();
      op_offset();
    }
    goto LABEL_21;
  }
  if ( v8 <= 2u )
  {
    if ( v8 != 1 )
    {
      if ( v8 != 2 )
        goto LABEL_22;
      v9 = sub_80350(a1, a2, a3);
      v10 = v9;
      if ( *(_BYTE *)(a3 + 32) )
      {
        if ( v9 <= 0xFFF )
          goto LABEL_22;
      }
      goto LABEL_7;
    }
    v22 = *(_WORD *)(a3 + 6);
    func = (__int64 *)get_func();
    if ( !func )
      goto LABEL_22;
    qmemcpy(v34, (const void *)a2, 0x168u);
    v31 = 0xFFFFFFFFLL;
    v30 = 0;
    v32 = 0;
    v33 = -1;
    v17 = v34[2];
    if ( v34[2] == -1 )
      v17 = *func;
    v33 = v17;
    if ( !(unsigned __int8)func_tail_iterator_set() )
    {
LABEL_45:
      if ( v34[2] == *func )
      {
        if ( v22 != 4 && (get_tinfo_property() & 0xF) != 9 )
          add_regarg();
        if ( !v30 )
          goto LABEL_22;
      }
      else
      {
LABEL_43:
        if ( !v30 )
          goto LABEL_22;
      }
      lock_func_range();
      goto LABEL_22;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !(unsigned __int8)func_item_iterator_decode_preceding_insn() )
            goto LABEL_45;
          if ( *(_QWORD *)(a6 + 8) > 0x1000u )
            goto LABEL_43;
        }
        while ( v26 );
        if ( LOWORD(v34[3]) <= 0x66u )
          break;
        if ( LOWORD(v34[3]) != 143 )
          goto LABEL_39;
      }
      if ( LOWORD(v34[3]) > 0x64u )
        goto LABEL_40;
      if ( LOWORD(v34[3]) != 92 )
      {
LABEL_39:
        if ( !(unsigned __int8)sub_6C2B0(v34, 2) )
        {
          v18 = v22;
          goto LABEL_42;
        }
LABEL_40:
        v18 = v22;
        goto LABEL_41;
      }
      if ( HIWORD(v34[5]) == v22 )
      {
        if ( (get_tinfo_property() & 0x2F) == 0xD && BYTE1(v34[10]) == 2 )
        {
          v28 = 0;
          tinfo_get_innermost_udm();
          if ( (get_tinfo_property() & 0xF) == 0xA )
          {
            v21 = v27;
            v27 = v28;
            v28 = v21;
            remove_tinfo_pointer();
          }
          else
          {
            v29 = 0;
            copy_tinfo_t();
            clear_tinfo_t();
          }
          clear_tinfo_t();
          v18 = v22;
        }
        else
        {
          remove_tinfo_pointer();
          v18 = v22;
        }
LABEL_41:
        if ( BYTE1(v34[5]) == 1 && HIWORD(v34[5]) == v18 )
        {
          v12 = sub_5B980(a1, (unsigned int)v34, (unsigned int)&v34[10], (unsigned int)&v27, a5, a6, (__int64)a7);
          if ( v30 )
            lock_func_range();
          goto LABEL_23;
        }
LABEL_42:
        LODWORD(v29) = v18;
        if ( (unsigned int)sub_73130(a1, v34, &v29, 1) != -1 )
          goto LABEL_43;
      }
    }
  }
  v13 = get_func();
  if ( !v13 || !(unsigned __int8)sub_26F10(a2, a3, (*(_QWORD *)(v13 + 16) & 0x10LL) == 0 ? -1 : 5) )
    goto LABEL_22;
  if ( (unsigned __int8)apply_tinfo_to_stkarg() )
    goto LABEL_62;
  if ( *(_WORD *)(a2 + 24) != 92 )
    goto LABEL_22;
  if ( (unsigned __int8)insn_create_stkvar() )
    op_stkvar();
  v12 = apply_tinfo_to_stkarg();
LABEL_23:
  clear_tinfo_t();
  return v12;
}

