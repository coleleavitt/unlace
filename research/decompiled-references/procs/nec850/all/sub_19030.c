__int64 __fastcall sub_19030(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, _QWORD *a5, __int64 a6)
{
  unsigned __int8 v9; // al
  __int64 result; // rax
  char tinfo_property; // al
  unsigned int v12; // ebp
  __int64 flags; // rax
  __int64 *func; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int16 v18; // ax
  __int64 v19; // rsi
  __int64 tinfo_size; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r12
  char v25; // bp
  char v26; // al
  __int64 v27; // rbx
  unsigned int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned int v31; // r13d
  unsigned __int8 default_reftype; // al
  __int64 v33; // rax
  unsigned __int16 v34; // [rsp+Eh] [rbp-8Ah]
  unsigned __int8 v35; // [rsp+Eh] [rbp-8Ah]
  unsigned __int8 v36; // [rsp+Eh] [rbp-8Ah]
  unsigned __int8 v37; // [rsp+Eh] [rbp-8Ah]
  __int64 v38; // [rsp+18h] [rbp-80h] BYREF
  char v39; // [rsp+27h] [rbp-71h] BYREF
  __int64 v40; // [rsp+28h] [rbp-70h] BYREF
  __int64 v41; // [rsp+30h] [rbp-68h] BYREF
  __int64 v42; // [rsp+38h] [rbp-60h]
  __int128 v43; // [rsp+40h] [rbp-58h]
  __int64 v44; // [rsp+50h] [rbp-48h]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v38 = a6;
  v45 = __readfsqword(0x28u);
  v9 = a4[1];
  if ( v9 == 4 )
  {
    if ( *((_WORD *)a4 + 3) == 3 )
      return apply_tinfo_to_stkarg(a2, a4, *((_QWORD *)a4 + 2), a5, v38);
    v12 = *a4;
    flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
    if ( (unsigned __int8)is_off(flags, v12)
      && (unsigned __int8)get_refinfo(&v41, *(_QWORD *)(a2 + 16), *a4)
      && (unsigned __int8)calc_reference_data(&v40, 0, *(_QWORD *)(a2 + 16) + (char)a4[2], &v41, *((_QWORD *)a4 + 2)) )
    {
      return apply_once_tinfo_and_name(v40, a5, v38);
    }
    return 0;
  }
  if ( v9 > 4u )
  {
    if ( v9 != 5 )
      return 0;
    if ( (get_tinfo_property(*a5, 2) & 0xF) == 0xA && *((_QWORD *)a4 + 1) )
    {
      v28 = *a4;
      v29 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( !(unsigned __int8)is_defarg(v29, v28) )
      {
        v30 = *(_QWORD *)(a2 + 16);
        v31 = *a4;
        default_reftype = get_default_reftype(v30);
        op_offset(v30, v31, default_reftype, -1, 0, 0);
      }
      v41 = 0;
      copy_tinfo_t(&v41, a5);
      if ( (unsigned __int8)remove_tinfo_pointer(&v41, &v38, 0) )
      {
        v37 = apply_once_tinfo_and_name(*((_QWORD *)a4 + 1) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL), &v41, v38);
        clear_tinfo_t(&v41);
        return v37;
      }
      else
      {
        clear_tinfo_t(&v41);
        return 0;
      }
    }
    else
    {
      tinfo_property = get_tinfo_property(*a5, 2);
      if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
        return 0;
      if ( *(_WORD *)(a2 + 24) != 38 )
        return 0;
      if ( *a4 )
        return 0;
      v19 = *a5;
      tinfo_size = get_tinfo_size(0, *a5, 0);
      if ( get_dtype_size(a4[5], v19, v21, v22) != tinfo_size )
        return 0;
      v23 = get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0xF00000;
      if ( v23 )
      {
        if ( v23 != 5242880 )
          return 0;
        v24 = *(_QWORD *)(a2 + 16);
        if ( !(unsigned __int8)get_refinfo(&v41, v24, 0) )
          return 0;
        if ( v41 != -1 )
          return 0;
        if ( v42 )
          return 0;
        v25 = BYTE8(v43);
        if ( SBYTE8(v43) < 0 || (_QWORD)v43 || (v25 & 0x4F) != (unsigned __int8)get_default_reftype(v24) )
          return 0;
      }
      v26 = get_tinfo_property(*a5, 2);
      v27 = *(_QWORD *)(a2 + 16);
      if ( (v26 & 0xF) == 9 )
      {
        set_op_type(*(_QWORD *)(a2 + 16), 0xCCCCCC0CC00000LL, 0);
      }
      else
      {
        v33 = num_flag();
        set_op_type(v27, v33, 0);
      }
      return 1;
    }
  }
  if ( v9 == 1 )
  {
    v34 = *((_WORD *)a4 + 3);
    func = (__int64 *)get_func(*(_QWORD *)(a2 + 16));
    if ( !func )
      return 0;
    v16 = *(_QWORD *)(a2 + 16);
    v41 = 0;
    v42 = 0xFFFFFFFFLL;
    v44 = -1;
    v17 = v16;
    v43 = 0;
    if ( v16 == -1 )
      v17 = *func;
    v44 = v17;
    if ( !(unsigned __int8)func_tail_iterator_set(&v41, func) )
    {
LABEL_51:
      if ( *func != v44 )
        goto LABEL_52;
      add_regarg(func, v34, a5, v38);
      if ( !v41 )
        return 0;
      lock_func_range(v41, 0);
      return 0;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !(unsigned __int8)func_item_iterator_decode_preceding_insn(&v41, a3, &v39, a2) )
            goto LABEL_51;
          if ( *(_QWORD *)(a3 + 8) > 0x1000u )
            goto LABEL_52;
        }
        while ( v39 );
        v18 = *(_WORD *)(a2 + 24);
        if ( v18 == 38 )
          goto LABEL_61;
        if ( v18 > 0x26u )
          break;
        if ( v18 != 37 )
          goto LABEL_57;
        if ( v34 == *(_WORD *)(a2 + 126) )
        {
          if ( *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 3 && *(_BYTE *)(a2 + 41) == 5 )
          {
            v40 = 0;
            copy_tinfo_t(&v40, a5);
            if ( !(unsigned __int8)remove_tinfo_pointer(&v40, &v38, 0) )
            {
              clear_tinfo_t(&v40);
              goto LABEL_52;
            }
            v35 = apply_tinfo_to_stkarg(a2, a2 + 40, *(_QWORD *)(a2 + 48), &v40, v38);
            clear_tinfo_t(&v40);
            result = v35;
            goto LABEL_34;
          }
LABEL_52:
          if ( v41 )
          {
            lock_func_range(v41, 0);
            return 0;
          }
          return 0;
        }
      }
      if ( v18 > 0x63u )
      {
        if ( v18 == 207 )
          goto LABEL_61;
LABEL_57:
        v40 = 0;
        sub_10260(a1, &v40, a2);
        if ( v34 <= 0x1Fu && (v40 & (1LL << v34)) != 0 )
          goto LABEL_52;
      }
      else
      {
        if ( v18 <= 0x61u && (unsigned __int16)(v18 - 40) > 2u )
          goto LABEL_57;
LABEL_61:
        if ( v34 == *(_WORD *)(a2 + 86) )
        {
          result = sub_19030(a1, a2, a3, (int)a2 + 40, (_DWORD)a5, v38);
LABEL_34:
          if ( v41 )
          {
            v36 = result;
            lock_func_range(v41, 0);
            return v36;
          }
          return result;
        }
      }
    }
  }
  if ( v9 != 2 )
    return 0;
  return apply_once_tinfo_and_name(*((_QWORD *)a4 + 2), a5, v38);
}
