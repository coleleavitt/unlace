__int64 __fastcall sub_ECC0(__int64 a1, _QWORD *a2, unsigned __int8 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v9; // al
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned __int16 v14; // r15
  __int64 *func; // rsi
  char *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // ebp
  __int64 flags; // rax
  __int64 v21; // rbx
  unsigned int v22; // r13d
  __int64 v23; // rbp
  unsigned __int8 default_reftype; // al
  unsigned int v25; // eax
  __int64 v26; // [rsp+18h] [rbp-1F0h] BYREF
  char v27; // [rsp+27h] [rbp-1E1h] BYREF
  __int64 v28; // [rsp+28h] [rbp-1E0h] BYREF
  _QWORD v29[2]; // [rsp+30h] [rbp-1D8h] BYREF
  __int128 v30; // [rsp+40h] [rbp-1C8h]
  __int64 v31; // [rsp+50h] [rbp-1B8h]
  __int128 v32; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v33; // [rsp+70h] [rbp-198h]
  __int64 v34; // [rsp+78h] [rbp-190h]
  __int64 v35; // [rsp+80h] [rbp-188h]
  char v36; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int16 v37; // [rsp+8Eh] [rbp-17Ah]
  _BYTE v38[6]; // [rsp+B0h] [rbp-158h] BYREF
  __int16 v39; // [rsp+B6h] [rbp-152h]
  _BYTE v40[8]; // [rsp+D8h] [rbp-130h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-128h]
  _QWORD v42[8]; // [rsp+1C8h] [rbp-40h] BYREF

  v26 = a5;
  v42[0] = __readfsqword(0x28u);
  v28 = 0;
  copy_tinfo_t(&v28, a4);
  v9 = a3[1];
  if ( v9 == 4 )
  {
    v12 = apply_tinfo_to_stkarg(a2, a3, *((_QWORD *)a3 + 2), &v28, v26);
    goto LABEL_12;
  }
  if ( v9 > 4u )
  {
    if ( v9 == 5 && (get_tinfo_property(v28, 2) & 0xF) == 0xA )
    {
      if ( *((_QWORD *)a3 + 1) )
      {
        v19 = *a3;
        flags = get_flags_ex(a2[2], 0);
        if ( !(unsigned __int8)is_defarg(flags, v19) )
        {
          v21 = a2[2];
          v22 = *a3;
          v23 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (16LL * *a2);
          default_reftype = get_default_reftype(v21);
          op_offset(v21, v22, default_reftype, -1, v23, 0);
          v12 = 1;
          goto LABEL_12;
        }
      }
    }
    goto LABEL_11;
  }
  if ( v9 == 1 )
  {
    v14 = *((_WORD *)a3 + 3);
    func = (__int64 *)get_func(a2[2]);
    if ( !func )
      goto LABEL_11;
    v29[0] = 0;
    v16 = &v36;
    v29[1] = 0xFFFFFFFFLL;
    v31 = -1;
    v33 = -1;
    v34 = 0;
    v35 = 0;
    v30 = 0;
    v32 = -1;
    do
    {
      *(_WORD *)v16 = 0;
      v16 += 40;
      *((_WORD *)v16 - 19) = 0;
      *((_WORD *)v16 - 18) = 0;
      *((_DWORD *)v16 - 2) = 0;
      *((_WORD *)v16 - 17) = 0;
      *((_OWORD *)v16 - 2) = 0;
      *((_QWORD *)v16 - 2) = 0;
    }
    while ( v42 != (_QWORD *)v16 );
    v17 = a2[2];
    v18 = v17;
    if ( v17 == -1 )
      v18 = *func;
    v31 = v18;
    if ( !(unsigned __int8)func_tail_iterator_set(v29, func, v17, v42, 0.0) )
    {
LABEL_29:
      if ( v29[0] )
        lock_func_range(v29[0], 0);
      goto LABEL_11;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !(unsigned __int8)func_item_iterator_decode_preceding_insn(v29, a6, &v27, &v32)
            || *(_QWORD *)(a6 + 8) > 0x1000u )
          {
            goto LABEL_29;
          }
        }
        while ( v27 );
        if ( (_WORD)v34 != 21 )
          break;
LABEL_34:
        if ( v14 == v37 )
        {
          if ( v38[1] == 1 && v39 == 28 && v40[1] && (unsigned __int8)remove_tinfo_pointer(&v28, &v26, 0) )
          {
            v25 = apply_tinfo_to_stkarg(a2, v40, v41, &v28, v26);
            goto LABEL_40;
          }
LABEL_27:
          if ( (unsigned __int8)is_call_insn(a2) || sub_CF60(a1, (__int64)a2, v14) )
            goto LABEL_29;
        }
      }
      if ( (unsigned __int16)v34 > 0x15u )
      {
        if ( (_WORD)v34 != 27 )
          goto LABEL_27;
      }
      else if ( (_WORD)v34 != 1 )
      {
        if ( (_WORD)v34 != 19 )
          goto LABEL_27;
        goto LABEL_34;
      }
      if ( v14 == v37 )
      {
        v25 = sub_ECC0(a1, a2, v38, &v28, v26, a6);
LABEL_40:
        v12 = v25;
        if ( v29[0] )
          lock_func_range(v29[0], 0);
        goto LABEL_12;
      }
    }
  }
  if ( v9 != 2 )
  {
LABEL_11:
    v12 = 0;
    goto LABEL_12;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v11 = *((_QWORD *)a3 + 2) + 16LL * *a2;
  if ( v11 != v10 )
  {
    v10 &= v11;
    if ( v11 == -1 )
      v10 = -1;
  }
  v12 = apply_once_tinfo_and_name(v10, &v28, v26);
LABEL_12:
  clear_tinfo_t(&v28);
  return v12;
}
