char *__fastcall sub_534A0(char **a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdi
  char **v6; // r8
  unsigned __int64 v7; // r15
  char *v8; // rax
  char *v9; // rsi
  char *v10; // rbx
  char *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  char *v16; // r14
  __int64 v17; // r15
  char *v18; // rax
  _QWORD *v19; // rdx
  char *v20; // r13
  size_t v21; // r15
  char *v22; // r10
  char *v23; // rsi
  unsigned __int64 v24; // r9
  char *v25; // rcx
  unsigned __int64 v26; // rdx
  char *v27; // rax
  char *v28; // rdx

  v4 = *a2;
  if ( a1[3] )
  {
    v5 = (unsigned __int64)a1[1];
    v6 = *(char ***)&(*a1)[8 * (v4 % v5)];
    v7 = v4 % v5;
    if ( !v6 )
      goto LABEL_12;
    v8 = *v6;
    if ( v4 != *((_QWORD *)*v6 + 1) )
    {
      while ( 1 )
      {
        v9 = *(char **)v8;
        if ( !*(_QWORD *)v8 )
          break;
        v6 = (char **)v8;
        if ( *((_QWORD *)v9 + 1) % v5 != v4 % v5 )
          break;
        v8 = *(char **)v8;
        if ( v4 == *((_QWORD *)v9 + 1) )
          goto LABEL_7;
      }
LABEL_12:
      v12 = (char *)operator new(0x10u);
      v13 = (unsigned __int64)a1[3];
      v14 = (unsigned __int64)a1[1];
      *(_QWORD *)v12 = 0;
      v10 = v12;
      *((_QWORD *)v12 + 1) = *a2;
      if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                              (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                              v14,
                              v13,
                              1u) )
      {
        v20 = (char *)v15;
        if ( v15 == 1 )
        {
          v22 = (char *)(a1 + 6);
          a1[6] = nullptr;
          v16 = (char *)(a1 + 6);
        }
        else
        {
          if ( v15 >> 60 )
          {
            if ( v15 >> 61 )
              sub_B371();
            std::__throw_bad_alloc();
          }
          v21 = 8 * v15;
          v16 = (char *)operator new(8 * v15);
          memset(v16, 0, v21);
          v22 = (char *)(a1 + 6);
        }
        v23 = a1[2];
        a1[2] = nullptr;
        v24 = 0;
        while ( v23 )
        {
          while ( 1 )
          {
            v25 = v23;
            v23 = *(char **)v23;
            v26 = *((_QWORD *)v25 + 1) % (unsigned __int64)v20;
            v27 = &v16[8 * v26];
            if ( !*(_QWORD *)v27 )
              break;
            *(_QWORD *)v25 = **(_QWORD **)v27;
            **(_QWORD **)v27 = v25;
            if ( !v23 )
              goto LABEL_26;
          }
          *(_QWORD *)v25 = a1[2];
          a1[2] = v25;
          *(_QWORD *)v27 = a1 + 2;
          if ( *(_QWORD *)v25 )
            *(_QWORD *)&v16[8 * v24] = v25;
          v24 = v26;
        }
LABEL_26:
        if ( *a1 != v22 )
          operator delete(*a1, 8LL * (_QWORD)a1[1]);
        a1[1] = v20;
        *a1 = v16;
        v17 = 8 * (v4 % (unsigned __int64)v20);
        v18 = &v16[v17];
        v19 = *(_QWORD **)&v16[v17];
        if ( v19 )
          goto LABEL_14;
      }
      else
      {
        v16 = *a1;
        v17 = 8 * v7;
        v18 = &(*a1)[v17];
        v19 = *(_QWORD **)v18;
        if ( *(_QWORD *)v18 )
        {
LABEL_14:
          *(_QWORD *)v10 = *v19;
          **(_QWORD **)v18 = v10;
LABEL_15:
          ++a1[3];
          return v10;
        }
      }
      v28 = a1[2];
      a1[2] = v10;
      *(_QWORD *)v10 = v28;
      if ( v28 )
      {
        *(_QWORD *)&v16[8 * (*((_QWORD *)v28 + 1) % (unsigned __int64)a1[1])] = v10;
        v18 = &(*a1)[v17];
      }
      *(_QWORD *)v18 = a1 + 2;
      goto LABEL_15;
    }
LABEL_7:
    if ( !v6 )
      goto LABEL_12;
    v10 = *v6;
    if ( !*v6 )
      goto LABEL_12;
  }
  else
  {
    v10 = a1[2];
    if ( !v10 )
    {
LABEL_11:
      v7 = v4 % (unsigned __int64)a1[1];
      goto LABEL_12;
    }
    while ( *((_QWORD *)v10 + 1) != v4 )
    {
      v10 = *(char **)v10;
      if ( !v10 )
        goto LABEL_11;
    }
  }
  return v10;
}

