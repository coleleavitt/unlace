__int64 __fastcall sub_37AD0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned __int16 a5)
{
  unsigned int v5; // ebx
  __int64 v8; // rdx
  __int64 v12; // rsi
  _QWORD *v14; // rdx
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  char v17; // al
  __int64 v18; // r10
  _QWORD *v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r15
  __int64 not_tail; // rdi
  __int64 v24; // [rsp+8h] [rbp-90h]
  unsigned __int8 v25; // [rsp+8h] [rbp-90h]
  _QWORD *v26; // [rsp+10h] [rbp-88h] BYREF
  __int128 v27; // [rsp+18h] [rbp-80h]
  char v28; // [rsp+28h] [rbp-70h]
  __int64 v29; // [rsp+30h] [rbp-68h] BYREF
  __int128 v30; // [rsp+38h] [rbp-60h]
  char v31; // [rsp+48h] [rbp-50h]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  LOBYTE(v5) = a4 == 1 || a3 == 1;
  if ( (_BYTE)v5 )
    return 0;
  v8 = *(_QWORD *)(a2 + 16);
  v12 = (__int64)&v26;
  v28 = 0;
  v26 = nullptr;
  v27 = 0;
  if ( !(unsigned __int8)sub_5B9B0(a1, &v26, v8, a3, 0xFFFFFFFFLL, 0) )
  {
    v12 = a5;
    if ( !sub_34C80(&v26, a5) )
      goto LABEL_14;
    v12 = (__int64)&v26;
    v17 = sub_5B9B0(a1, &v26, *(_QWORD *)(a2 + 16), a4, 0xFFFFFFFFLL, 0);
    v15 = v26;
    if ( v17 && (unsigned __int8)(v28 - 10) <= 1u )
    {
      v18 = *v26;
      if ( (_QWORD)v27 == 1 )
        goto LABEL_27;
      v19 = v26 + 3;
      v14 = &v26[3 * v27];
      if ( 24LL * (_QWORD)v27 == 24 )
        goto LABEL_27;
      while ( v18 == *v19 )
      {
        v19 += 3;
        if ( v14 == v19 )
          goto LABEL_27;
      }
    }
    v5 = 0;
    goto LABEL_11;
  }
  v15 = v26;
  if ( (unsigned __int8)(v28 - 10) > 1u )
    goto LABEL_11;
  if ( (_QWORD)v27 != 1 )
  {
    v16 = v26 + 3;
    v14 = &v26[3 * v27];
    if ( 24LL * (_QWORD)v27 != 24 )
    {
      while ( *v16 == *v26 )
      {
        v16 += 3;
        if ( v14 == v16 )
          goto LABEL_23;
      }
      goto LABEL_11;
    }
  }
LABEL_23:
  v20 = *(_QWORD *)(a2 + 16);
  v12 = (__int64)&v29;
  v24 = *v26;
  v29 = 0;
  v31 = 0;
  v30 = 0;
  if ( (unsigned __int8)sub_5B9B0(a1, &v29, v20, a4, 0, 0) || (v12 = a5, !sub_34C80(&v29, a5)) )
  {
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v29, v12, v14, 0.0);
    }
    goto LABEL_37;
  }
  v18 = v24;
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, a5, v14, 0.0);
    v18 = v24;
  }
LABEL_27:
  v21 = use_mapping(v18);
  v22 = v21;
  if ( v21 > 0x20 )
  {
    v25 = is_mapped(v21);
    if ( v25 )
    {
      not_tail = v22;
      if ( (get_flags_ex(v22, 4) & 0x600) == 0x200 )
        not_tail = prev_not_tail(v22);
      v12 = 4;
      if ( (~((unsigned __int16)get_flags_ex(not_tail, 4) >> 8) & 6) != 0 )
      {
        sub_5DEA0(a1, &v26, 1);
        if ( !(unsigned __int8)is_spec_ea(v22) )
          insn_add_dref(a2, v22, 0, 3 - (a5 & 1u));
        v12 = v22;
        insn_create_op_data(a2, v22, 0, (unsigned __int8)((HIBYTE(a5) & 0x7F) - 1));
        v15 = v26;
        v5 = v25;
        goto LABEL_11;
      }
      goto LABEL_37;
    }
LABEL_14:
    v15 = v26;
    v5 = 0;
    goto LABEL_11;
  }
LABEL_37:
  v15 = v26;
LABEL_11:
  if ( v15 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v15, v12, v14, 0.0);
  }
  return v5;
}

