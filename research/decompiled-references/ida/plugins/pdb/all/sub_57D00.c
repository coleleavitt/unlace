char *__fastcall sub_57D00(char **a1, _DWORD *a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdi
  char ***v6; // r8
  __int64 v7; // r13
  char **v8; // rax
  unsigned __int64 v9; // r9
  char **v10; // rsi
  char **v11; // rbp
  char **v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  char *v17; // r15
  char *v18; // rax
  char **v19; // rdx
  char *v20; // r14
  size_t v21; // r13
  char *v22; // r9
  char *v23; // rsi
  unsigned __int64 v24; // r8
  char *v25; // rcx
  unsigned __int64 v26; // rdx
  char *v27; // rax
  char *v28; // rdx

  v4 = (unsigned int)*a2;
  v5 = (unsigned __int64)a1[1];
  v6 = *(char ****)&(*a1)[8 * (v4 % v5)];
  v7 = 8 * (v4 % v5);
  if ( !v6 )
    goto LABEL_9;
  v8 = *v6;
  v9 = (unsigned int)*a2 % v5;
  if ( (_DWORD)v4 != *((_DWORD *)*v6 + 2) )
  {
    while ( 1 )
    {
      v10 = (char **)*v8;
      if ( !*v8 )
        break;
      v6 = (char ***)v8;
      if ( v9 != *((unsigned int *)v10 + 2) % v5 )
        break;
      v8 = (char **)*v8;
      if ( (_DWORD)v4 == *((_DWORD *)v10 + 2) )
        goto LABEL_6;
    }
LABEL_9:
    v13 = (char **)operator new(0x10u);
    v14 = (unsigned __int64)a1[3];
    v15 = (unsigned __int64)a1[1];
    *v13 = nullptr;
    v11 = v13;
    LODWORD(v13) = *a2;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 2) = (_DWORD)v13;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                            v15,
                            v14,
                            1u) )
    {
      v20 = (char *)v16;
      if ( v16 == 1 )
      {
        v22 = (char *)(a1 + 6);
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
        v21 = 8 * v16;
        v17 = (char *)operator new(8 * v16);
        memset(v17, 0, v21);
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
          v26 = *((unsigned int *)v25 + 2) % (unsigned __int64)v20;
          v27 = &v17[8 * v26];
          if ( !*(_QWORD *)v27 )
            break;
          *(_QWORD *)v25 = **(_QWORD **)v27;
          **(_QWORD **)v27 = v25;
          if ( !v23 )
            goto LABEL_20;
        }
        *(_QWORD *)v25 = a1[2];
        a1[2] = v25;
        *(_QWORD *)v27 = a1 + 2;
        if ( *(_QWORD *)v25 )
          *(_QWORD *)&v17[8 * v24] = v25;
        v24 = v26;
      }
LABEL_20:
      if ( *a1 != v22 )
        operator delete(*a1, 8LL * (_QWORD)a1[1]);
      a1[1] = v20;
      *a1 = v17;
      v7 = 8 * (v4 % (unsigned __int64)v20);
      v18 = &v17[v7];
      v19 = *(char ***)&v17[v7];
      if ( v19 )
        goto LABEL_11;
    }
    else
    {
      v17 = *a1;
      v18 = &(*a1)[v7];
      v19 = *(char ***)v18;
      if ( *(_QWORD *)v18 )
      {
LABEL_11:
        *v11 = *v19;
        **(_QWORD **)v18 = v11;
LABEL_12:
        ++a1[3];
        return (char *)v11 + 12;
      }
    }
    v28 = a1[2];
    a1[2] = (char *)v11;
    *v11 = v28;
    if ( v28 )
    {
      *(_QWORD *)&v17[8 * (*((unsigned int *)v28 + 2) % (unsigned __int64)a1[1])] = v11;
      v18 = &(*a1)[v7];
    }
    *(_QWORD *)v18 = a1 + 2;
    goto LABEL_12;
  }
LABEL_6:
  if ( !v6 )
    goto LABEL_9;
  v11 = *v6;
  if ( !*v6 )
    goto LABEL_9;
  return (char *)v11 + 12;
}

