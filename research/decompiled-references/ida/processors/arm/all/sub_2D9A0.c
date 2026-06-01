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
  __int64 v21; // rdi
  __int64 v23; // rdx
  int flags; // eax
  int v25; // ecx
  __int64 v26; // rax
  int v27; // eax
  int v30; // [rsp+18h] [rbp-70h]
  int v31; // [rsp+18h] [rbp-70h]
  unsigned __int8 v33; // [rsp+24h] [rbp-64h]
  bool v34; // [rsp+25h] [rbp-63h]
  char v35; // [rsp+27h] [rbp-61h]
  int dtype_size; // [rsp+28h] [rbp-60h]
  __int64 *v37; // [rsp+30h] [rbp-58h] BYREF
  __int128 v38; // [rsp+38h] [rbp-50h]
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v10 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v10 > 0x1E9u )
  {
    v33 = (unsigned __int16)(v10 - 871) <= 1u;
LABEL_4:
    if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
      goto LABEL_5;
    goto LABEL_33;
  }
  if ( (unsigned __int16)v10 <= 0x1D9u )
  {
    v33 = (_WORD)v10 == 71 || (_WORD)v10 == 49;
    goto LABEL_4;
  }
  LOWORD(v10) = v10 - 474;
  v23 = 49923;
  v33 = _bittest64(&v23, v10);
  if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
  {
LABEL_5:
    if ( a3 )
    {
      v11 = 1;
      v12 = *(unsigned __int8 *)(a3 + 5);
      v13 = 7;
LABEL_7:
      v34 = v12 == v13;
      goto LABEL_8;
    }
    goto LABEL_62;
  }
LABEL_33:
  if ( (getinf(3) & 0x1006) == 0x1002 )
  {
    if ( a3 )
    {
      v12 = *(unsigned __int8 *)(a3 + 5);
      v11 = 1;
      v13 = 7;
      goto LABEL_7;
    }
LABEL_62:
    v34 = 0;
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
  v34 = 0;
  v11 = 0;
LABEL_8:
  v14 = *(_QWORD *)(a6 + 8);
  v15 = *(_QWORD *)a6;
  v16 = 24 * v14;
  if ( !*(_BYTE *)(a6 + 24) )
  {
LABEL_14:
    v35 = 0;
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
      v35 = 1;
LABEL_15:
      v37 = 0;
      v38 = 0;
      if ( v16 )
        goto LABEL_16;
      return v39 - __readfsqword(0x28u);
    }
  }
  v35 = 1;
  v37 = 0;
  v38 = 0;
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
    v19 = &v37[v38];
    if ( v37 == v19 )
      goto LABEL_39;
    v20 = v37;
    while ( *v20 != v18 )
    {
      if ( v19 == ++v20 )
        goto LABEL_39;
    }
    if ( v19 == v20 )
    {
LABEL_39:
      if ( *((_QWORD *)&v38 + 1) < (unsigned __int64)(v38 + 1) )
      {
        v37 = (__int64 *)qvector_reserve((__int64)&v37, (__int64)v37, v38 + 1, 8);
        v19 = &v37[v38];
      }
      *v19 = v18;
      *(_QWORD *)&v38 = v38 + 1;
      if ( (unsigned __int8)is_mapped() )
      {
        flags = get_flags_ex(v18, 0);
        v30 = flags;
        if ( a7 == 1 || (~BYTE1(flags) & 6) != 0 )
        {
          insn_add_dref();
          if ( a3 )
          {
            dtype_size = get_dtype_size();
            sub_22400(v18, v30, a2, a3, dtype_size);
            if ( v33 )
            {
              v27 = get_flags_ex(dtype_size + v18, 0);
              sub_22400(dtype_size + v18, v27, a2, a3, dtype_size);
            }
          }
          if ( a8 && v35 )
            sub_2A0D0(a1, *(_QWORD *)(a2 + 16), v18);
          if ( v34 )
          {
            v25 = 8;
            if ( *(_BYTE *)(a3 + 5) == 2 )
              v25 = 4;
            v31 = v25;
            v26 = sub_22770(a1, a2, v18, v25);
            if ( v33 )
            {
              sub_22770(a1, a2, v18 + v31, v31);
            }
            else if ( v26 != -1 && v35 )
            {
              sub_2A0D0(a1, *(_QWORD *)(a2 + 16), v26);
            }
          }
        }
      }
    }
    v15 += 24;
    if ( v15 == *(_QWORD *)a6 + 24LL * *(_QWORD *)(a6 + 8) )
    {
      v21 = (__int64)v37;
      if ( !v37 )
        return v39 - __readfsqword(0x28u);
      goto LABEL_30;
    }
  }
  v21 = (__int64)v37;
  if ( v37 )
  {
LABEL_30:
    *(_QWORD *)&v38 = 0;
    qfree(v21);
  }
  return v39 - __readfsqword(0x28u);
}
