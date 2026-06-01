char *__fastcall sub_54F10(char **a1, const __m128i *a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // r8
  unsigned __int32 v5; // ecx
  char *v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  char **v10; // r11
  unsigned __int64 v11; // r15
  char *v12; // rax
  char *v13; // r10
  char *v14; // r12
  unsigned __int64 v16; // rdx
  char *v17; // r14
  __int64 v18; // r15
  char *v19; // rax
  _QWORD *v20; // rdx
  char *v21; // r12
  size_t v22; // r15
  char *v23; // r9
  char *v24; // rsi
  unsigned __int64 v25; // r8
  char *v26; // rcx
  unsigned __int64 v27; // rdx
  char *v28; // rax
  char *v29; // rdx

  v2 = operator new(0x28u);
  v3 = _mm_loadu_si128(a2 + 1);
  v4 = a2->m128i_i64[1];
  a2->m128i_i64[1] = 0;
  v5 = a2->m128i_i32[0];
  *(_QWORD *)v2 = 0;
  v6 = (char *)v2;
  *(__m128i *)(v2 + 24) = v3;
  a2[1] = 0;
  v7 = (unsigned __int64)a1[3];
  *(_DWORD *)(v2 + 8) = v5;
  *(_QWORD *)(v2 + 16) = v4;
  if ( v7 )
  {
    v8 = (unsigned __int64)a1[1];
    v9 = v5;
    v10 = *(char ***)&(*a1)[8 * (v5 % v8)];
    v11 = v5 % v8;
    if ( !v10 )
      goto LABEL_16;
    v12 = *v10;
    if ( v5 != *((_DWORD *)*v10 + 2) )
    {
      while ( 1 )
      {
        v13 = *(char **)v12;
        if ( !*(_QWORD *)v12 )
          break;
        v10 = (char **)v12;
        if ( v5 % v8 != *((unsigned int *)v13 + 2) % v8 )
          break;
        v12 = *(char **)v12;
        if ( v5 == *((_DWORD *)v13 + 2) )
          goto LABEL_7;
      }
LABEL_16:
      if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                              (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                              v8,
                              v7,
                              1u) )
      {
        v21 = (char *)v16;
        if ( v16 == 1 )
        {
          v23 = (char *)(a1 + 6);
          a1[6] = nullptr;
          v17 = (char *)(a1 + 6);
        }
        else
        {
          if ( v16 >> 60 )
          {
            if ( v16 >> 61 )
              sub_23D63();
            std::__throw_bad_alloc();
          }
          v22 = 8 * v16;
          v17 = (char *)operator new(8 * v16);
          memset(v17, 0, v22);
          v23 = (char *)(a1 + 6);
        }
        v24 = a1[2];
        a1[2] = nullptr;
        v25 = 0;
        while ( v24 )
        {
          while ( 1 )
          {
            v26 = v24;
            v24 = *(char **)v24;
            v27 = *((unsigned int *)v26 + 2) % (unsigned __int64)v21;
            v28 = &v17[8 * v27];
            if ( !*(_QWORD *)v28 )
              break;
            *(_QWORD *)v26 = **(_QWORD **)v28;
            **(_QWORD **)v28 = v26;
            if ( !v24 )
              goto LABEL_31;
          }
          *(_QWORD *)v26 = a1[2];
          a1[2] = v26;
          *(_QWORD *)v28 = a1 + 2;
          if ( *(_QWORD *)v26 )
            *(_QWORD *)&v17[8 * v25] = v26;
          v25 = v27;
        }
LABEL_31:
        if ( *a1 != v23 )
          operator delete(*a1, 8LL * (_QWORD)a1[1]);
        a1[1] = v21;
        *a1 = v17;
        v18 = 8 * (v9 % (unsigned __int64)v21);
        v19 = &v17[v18];
        v20 = *(_QWORD **)&v17[v18];
        if ( v20 )
          goto LABEL_18;
      }
      else
      {
        v17 = *a1;
        v18 = 8 * v11;
        v19 = &(*a1)[v18];
        v20 = *(_QWORD **)v19;
        if ( *(_QWORD *)v19 )
        {
LABEL_18:
          *(_QWORD *)v6 = *v20;
          **(_QWORD **)v19 = v6;
LABEL_19:
          ++a1[3];
          return v6;
        }
      }
      v29 = a1[2];
      a1[2] = v6;
      *(_QWORD *)v6 = v29;
      if ( v29 )
      {
        *(_QWORD *)&v17[8 * (*((unsigned int *)v29 + 2) % (unsigned __int64)a1[1])] = v6;
        v19 = &(*a1)[v18];
      }
      *(_QWORD *)v19 = a1 + 2;
      goto LABEL_19;
    }
LABEL_7:
    if ( !v10 )
      goto LABEL_16;
    v14 = *v10;
    if ( !*v10 )
      goto LABEL_16;
    if ( v6 )
      goto LABEL_10;
  }
  else
  {
    v14 = a1[2];
    if ( !v14 )
    {
LABEL_15:
      v8 = (unsigned __int64)a1[1];
      v9 = v5;
      v11 = v5 % v8;
      goto LABEL_16;
    }
    while ( *((_DWORD *)v14 + 2) != v5 )
    {
      v14 = *(char **)v14;
      if ( !v14 )
        goto LABEL_15;
    }
    if ( v2 )
    {
LABEL_10:
      if ( v4 )
      {
        *((_QWORD *)v6 + 3) = 0;
        qfree(v4);
      }
      operator delete(v6, 0x28u);
    }
  }
  return v14;
}

