unsigned __int64 __fastcall sub_2D9A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  unsigned __int64 v10; // rax
  char v11; // r15
  int v12; // edx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // r14
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v22; // rdx
  int flags; // eax
  int v24; // ecx
  __int64 v25; // rax
  int v26; // eax
  int v29; // [rsp+18h] [rbp-70h]
  int v30; // [rsp+18h] [rbp-70h]
  unsigned __int8 v32; // [rsp+24h] [rbp-64h]
  bool v33; // [rsp+25h] [rbp-63h]
  char v34; // [rsp+27h] [rbp-61h]
  int dtype_size; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+30h] [rbp-58h]
  __int128 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v10 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v10 > 0x1E9u )
  {
    v32 = (unsigned __int16)(v10 - 871) <= 1u;
LABEL_4:
    if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
      goto LABEL_5;
    goto LABEL_33;
  }
  if ( (unsigned __int16)v10 <= 0x1D9u )
  {
    v32 = (_WORD)v10 == 71 || (_WORD)v10 == 49;
    goto LABEL_4;
  }
  LOWORD(v10) = v10 - 474;
  v22 = 49923;
  v32 = _bittest64(&v22, v10);
  if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
  {
LABEL_5:
    if ( a3 )
    {
      v11 = 1;
      v12 = *(unsigned __int8 *)(a3 + 5);
      v13 = 7;
LABEL_7:
      v33 = v12 == v13;
      goto LABEL_8;
    }
    goto LABEL_62;
  }
LABEL_33:
  if ( (getinf() & 0x1006) == 0x1002 )
  {
    if ( a3 )
    {
      v12 = *(unsigned __int8 *)(a3 + 5);
      v11 = 1;
      v13 = 7;
      goto LABEL_7;
    }
LABEL_62:
    v33 = 0;
    v11 = 1;
    goto LABEL_8;
  }
  if ( a3 )
  {
    v12 = *(unsigned __int8 *)(a3 + 5);
    v11 = 0;
    v13 = 2;
    goto LABEL_7;
  }
  v33 = 0;
  v11 = 0;
LABEL_8:
  v14 = *(_QWORD *)(a6 + 8);
  v15 = *(_QWORD *)a6;
  v16 = 24 * v14;
  if ( !*(_BYTE *)(a6 + 24) )
  {
LABEL_14:
    v34 = 0;
    goto LABEL_15;
  }
  if ( v14 != 1 )
  {
    v17 = (_QWORD *)(v15 + 24);
    if ( v16 != 24 )
    {
      do
      {
        if ( *(_QWORD *)v15 != *v17 )
          goto LABEL_14;
        v17 += 3;
      }
      while ( v17 != (_QWORD *)(v15 + v16) );
      v34 = 1;
LABEL_15:
      v36 = 0;
      v37 = 0;
      if ( v16 )
        goto LABEL_16;
      return v38 - __readfsqword(0x28u);
    }
  }
  v34 = 1;
  v36 = 0;
  v37 = 0;
  while ( 1 )
  {
LABEL_16:
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*(_QWORD *)v15 + a5);
    if ( !v11 )
      v18 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (unsigned int)(*(_DWORD *)v15 + a5);
    if ( !a4 )
    {
      if ( *(_QWORD *)v15 != v18 && *(_WORD *)(v15 + 16) != 497 && (unsigned __int8)is_spec_ea() )
        break;
      sub_2A780(a1, v15, v18, 0, 0);
      goto LABEL_23;
    }
    if ( a5 != v18 && (unsigned __int8)is_spec_ea() )
      break;
    sub_2A780(a1, v15, v18, a5, 1u);
LABEL_23:
    v19 = (__int64 *)(v36 + 8 * v37);
    if ( (__int64 *)v36 == v19 )
      goto LABEL_39;
    v20 = (__int64 *)v36;
    while ( *v20 != v18 )
    {
      if ( v19 == ++v20 )
        goto LABEL_39;
    }
    if ( v19 == v20 )
    {
LABEL_39:
      if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
      {
        v36 = qvector_reserve();
        v19 = (__int64 *)(v36 + 8 * v37);
      }
      *v19 = v18;
      *(_QWORD *)&v37 = v37 + 1;
      if ( (unsigned __int8)is_mapped() )
      {
        flags = get_flags_ex();
        v29 = flags;
        if ( a7 == 1 || (~BYTE1(flags) & 6) != 0 )
        {
          insn_add_dref();
          if ( a3 )
          {
            dtype_size = get_dtype_size();
            sub_22400(v18, v29, a2, a3, dtype_size);
            if ( v32 )
            {
              v26 = get_flags_ex();
              sub_22400(dtype_size + v18, v26, a2, a3, dtype_size);
            }
          }
          if ( a8 && v34 )
            sub_2A0D0();
          if ( v33 )
          {
            v24 = 8;
            if ( *(_BYTE *)(a3 + 5) == 2 )
              v24 = 4;
            v30 = v24;
            v25 = sub_22770(a1, a2, v18, v24);
            if ( v32 )
            {
              sub_22770(a1, a2, v18 + v30, v30);
            }
            else if ( v25 != -1 && v34 )
            {
              sub_2A0D0();
            }
          }
        }
      }
    }
    v15 += 24;
    if ( v15 == *(_QWORD *)a6 + 24LL * *(_QWORD *)(a6 + 8) )
    {
      if ( !v36 )
        return v38 - __readfsqword(0x28u);
      goto LABEL_30;
    }
  }
  if ( v36 )
LABEL_30:
    qfree();
  return v38 - __readfsqword(0x28u);
}

