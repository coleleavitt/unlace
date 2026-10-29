unsigned __int64 __fastcall sub_25080(unsigned __int64 p_i, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 *v5; // rcx
  int v6; // esi
  __int64 v7; // r14
  unsigned __int64 *v8; // r15
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdx
  _QWORD *v11; // r11
  __int64 v12; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  _DWORD *v15; // rbp
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 *v21; // r15
  void ***v22; // rax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // r12
  void **v25; // rsi
  unsigned __int64 v26; // rdi
  void **v27; // rcx
  unsigned __int64 v28; // rdx
  void ***v29; // rax
  _QWORD *v30; // rdx
  __int64 **v31; // r10
  __int64 *v32; // rax
  __int64 *v33; // rax
  unsigned __int64 *v34; // r12
  _QWORD *v35; // rbx
  void *v36; // rdi
  __int64 v38; // rsi
  unsigned __int64 v39; // rcx
  int v40; // ebp
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // ebp
  __int64 v44; // r15
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  char v46; // al
  __int64 v47; // rax
  __int64 v48; // rcx
  int *v49; // rbp
  int *v50; // r14
  int v51; // r15d
  __int64 v52; // rsi
  int v53; // [rsp+0h] [rbp-C8h]
  unsigned __int64 *v54; // [rsp+0h] [rbp-C8h]
  __int64 n; // [rsp+28h] [rbp-A0h]
  __int64 v57; // [rsp+30h] [rbp-98h] BYREF
  __int128 v58; // [rsp+38h] [rbp-90h]
  void *s; // [rsp+50h] [rbp-78h]
  unsigned __int64 v60; // [rsp+58h] [rbp-70h]
  void *i; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v62; // [rsp+68h] [rbp-60h]
  int v63; // [rsp+70h] [rbp-58h] BYREF
  __int64 v64; // [rsp+78h] [rbp-50h]
  __int64 v65; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v66; // [rsp+88h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return v66 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(p_i + 8);
  v4 = p_i;
  v5 = &v65;
  v60 = 1;
  v6 = *(_DWORD *)(v3 + 96);
  s = &v65;
  i = nullptr;
  v62 = 0;
  v63 = 1065353216;
  v64 = 0;
  v65 = 0;
  if ( v6 > 0 )
  {
    v7 = 0;
    p_i = 1;
    while ( 1 )
    {
      v53 = v7;
      v8 = (unsigned __int64 *)(*(_QWORD *)(v3 + 72) + (v7 << 6));
      v9 = *v8;
      v10 = *v8 % p_i;
      v11 = (_QWORD *)v5[v10];
      v12 = v10;
      if ( !v11 )
        goto LABEL_13;
      v13 = (_QWORD *)*v11;
      if ( v9 != *(_QWORD *)(*v11 + 8LL) )
        break;
LABEL_9:
      if ( !v11 )
        goto LABEL_13;
      v15 = (_DWORD *)*v11;
      if ( !*v11 )
        goto LABEL_13;
LABEL_11:
      ++v7;
      v15[4] = v53;
      v3 = *(_QWORD *)(v4 + 8);
      if ( *(_DWORD *)(v3 + 96) <= (int)v7 )
      {
        v2 = *(_QWORD *)(a2 + 8);
        goto LABEL_49;
      }
      p_i = v60;
      v5 = (__int64 *)s;
    }
    while ( 1 )
    {
      v14 = (_QWORD *)*v13;
      if ( !*v13 )
        break;
      v11 = v13;
      if ( *v8 % p_i != v14[1] % p_i )
        break;
      v13 = (_QWORD *)*v13;
      if ( v9 == v14[1] )
        goto LABEL_9;
    }
LABEL_13:
    v16 = (_QWORD *)operator new(0x18u);
    *v16 = 0;
    v15 = v16;
    v17 = *v8;
    v15[4] = 0;
    v18 = v62;
    v19 = v60;
    p_i = (unsigned __int64)&v63;
    *((_QWORD *)v15 + 1) = v17;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)&v63,
                            v19,
                            v18,
                            1u) )
    {
      v24 = v20;
      if ( v20 == 1 )
      {
        v65 = 0;
        v21 = &v65;
      }
      else
      {
        if ( v20 > 0xFFFFFFFFFFFFFFFLL )
        {
          if ( v20 >> 61 )
            sub_B371();
          std::__throw_bad_alloc();
        }
        n = 8 * v20;
        v21 = (__int64 *)operator new(8 * v20);
        memset(v21, 0, n);
      }
      v25 = (void **)i;
      v26 = 0;
      for ( i = nullptr; v25; v26 = v28 )
      {
        while ( 1 )
        {
          v27 = v25;
          v25 = (void **)*v25;
          v28 = (unsigned __int64)v27[1] % v24;
          v29 = (void ***)&v21[v28];
          if ( !*v29 )
            break;
          *v27 = **v29;
          **v29 = v27;
          if ( !v25 )
            goto LABEL_27;
        }
        *v27 = i;
        i = v27;
        *v29 = &i;
        if ( *v27 )
          v21[v26] = (__int64)v27;
      }
LABEL_27:
      p_i = (unsigned __int64)s;
      if ( s != &v65 )
        operator delete(s, 8 * v60);
      v60 = v24;
      s = v21;
      v12 = v9 % v24;
      v22 = (void ***)&v21[v12];
      v23 = (_QWORD *)v21[v12];
      if ( v23 )
        goto LABEL_15;
    }
    else
    {
      v21 = (__int64 *)s;
      v22 = (void ***)((char *)s + v12 * 8);
      v23 = *(_QWORD **)((char *)s + v12 * 8);
      if ( v23 )
      {
LABEL_15:
        *(_QWORD *)v15 = *v23;
        **v22 = v15;
LABEL_16:
        ++v62;
        goto LABEL_11;
      }
    }
    v30 = i;
    i = v15;
    *(_QWORD *)v15 = v30;
    if ( v30 )
    {
      v21[v30[1] % v60] = (__int64)v15;
      v22 = (void ***)((char *)s + v12 * 8);
    }
    p_i = (unsigned __int64)&i;
    *v22 = &i;
    goto LABEL_16;
  }
LABEL_49:
  v38 = 0;
  v57 = 0;
  v34 = *(unsigned __int64 **)a2;
  v58 = 0;
  v54 = &v34[v2];
  if ( v34 == v54 )
    goto LABEL_43;
  do
  {
    v39 = *v34;
    if ( !v62 )
    {
      v33 = (__int64 *)i;
      if ( !i )
        goto LABEL_40;
      while ( v39 != v33[1] )
      {
        v33 = (__int64 *)*v33;
        if ( !v33 )
          goto LABEL_40;
      }
LABEL_55:
      v40 = *((_DWORD *)v33 + 4);
      v41 = v58;
      if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
      {
        p_i = (unsigned __int64)&v57;
        v57 = qvector_reserve(&v57, v38, v58 + 1, 4);
        v38 = v57;
        v41 = v58;
      }
      *(_DWORD *)(v38 + 4 * v41) = v40;
      v42 = v58 + 1;
      *(_QWORD *)&v58 = v58 + 1;
      while ( 1 )
      {
        v38 = v57;
        if ( !v42 )
          break;
        v43 = *(_DWORD *)(v57 + 4 * v42 - 4);
        v44 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)&v58 = v42 - 1;
        hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(p_i, v57);
        p_i = 205;
        v46 = hexdsp(205, v44, v43);
        v42 = v58;
        if ( v46 )
        {
          v47 = *(_QWORD *)(v4 + 8);
          v48 = *(_QWORD *)(v47 + 72) + ((__int64)(int)v43 << 6);
          v49 = *(int **)(v48 + 16);
          v50 = &v49[*(_QWORD *)(v48 + 24)];
          if ( v50 != v49 )
          {
            while ( 1 )
            {
              v51 = *v49;
              if ( *v49 < *(_DWORD *)(v47 + 96) )
              {
                v52 = v57;
                if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v42 + 1) )
                {
                  p_i = (unsigned __int64)&v57;
                  v57 = qvector_reserve(&v57, v57, v42 + 1, 4);
                  v42 = v58;
                  v52 = v57;
                }
                *(_DWORD *)(v52 + 4 * v42) = v51;
                v42 = v58 + 1;
                *(_QWORD *)&v58 = v58 + 1;
              }
              if ( v50 == ++v49 )
                break;
              v47 = *(_QWORD *)(v4 + 8);
            }
          }
        }
      }
      goto LABEL_40;
    }
    v31 = *((__int64 ***)s + v39 % v60);
    if ( !v31 )
      goto LABEL_40;
    v32 = *v31;
    p_i = (*v31)[1];
    if ( v39 == p_i )
    {
LABEL_38:
      if ( !v31 )
        goto LABEL_40;
      v33 = *v31;
      if ( !*v31 )
        goto LABEL_40;
      goto LABEL_55;
    }
    while ( *v32 )
    {
      p_i = *(_QWORD *)(*v32 + 8);
      v31 = (__int64 **)v32;
      if ( v39 % v60 != p_i % v60 )
        break;
      v32 = (__int64 *)*v32;
      if ( v39 == p_i )
        goto LABEL_38;
    }
LABEL_40:
    ++v34;
  }
  while ( v54 != v34 );
  if ( v38 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v38);
  }
LABEL_43:
  v35 = i;
  if ( i )
  {
    do
    {
      v36 = v35;
      v35 = (_QWORD *)*v35;
      operator delete(v36, 0x18u);
    }
    while ( v35 );
  }
  memset(s, 0, 8 * v60);
  v62 = 0;
  i = nullptr;
  if ( s != &v65 )
    operator delete(s, 8 * v60);
  return v66 - __readfsqword(0x28u);
}
