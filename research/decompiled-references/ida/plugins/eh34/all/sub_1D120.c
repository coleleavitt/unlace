char *__fastcall sub_1D120(char **a1, int *a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdi
  char ***v6; // r8
  __int64 v7; // r13
  char **v8; // rax
  int v9; // ecx
  char **v10; // rbp
  char **v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  char *v16; // r15
  char *v17; // rax
  char **v18; // rdx
  char *v19; // r14
  size_t v20; // r13
  char *v21; // r9
  char *v22; // rsi
  unsigned __int64 v23; // r8
  char *v24; // rcx
  unsigned __int64 v25; // rdx
  char *v26; // rax
  char *v27; // rdx

  v4 = *a2;
  v5 = (unsigned __int64)a1[1];
  v6 = *(char ****)&(*a1)[8 * (v4 % v5)];
  v7 = 8 * (v4 % v5);
  if ( !v6 )
    goto LABEL_9;
  v8 = *v6;
  if ( (_DWORD)v4 != *((_DWORD *)*v6 + 2) )
  {
    while ( *v8 )
    {
      v9 = *((_DWORD *)*v8 + 2);
      v6 = (char ***)v8;
      if ( *a2 % v5 != v9 % v5 )
        break;
      v8 = (char **)*v8;
      if ( (_DWORD)v4 == v9 )
        goto LABEL_6;
    }
LABEL_9:
    v12 = (char **)operator new(0x10u);
    v13 = (unsigned __int64)a1[3];
    v14 = (unsigned __int64)a1[1];
    *v12 = nullptr;
    v10 = v12;
    LODWORD(v12) = *a2;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 2) = (_DWORD)v12;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                            v14,
                            v13,
                            1u) )
    {
      v19 = (char *)v15;
      if ( v15 == 1 )
      {
        v21 = (char *)(a1 + 6);
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
        v20 = 8 * v15;
        v16 = (char *)operator new(8 * v15);
        memset(v16, 0, v20);
        v21 = (char *)(a1 + 6);
      }
      v22 = a1[2];
      a1[2] = nullptr;
      v23 = 0;
      while ( v22 )
      {
        while ( 1 )
        {
          v24 = v22;
          v22 = *(char **)v22;
          v25 = *((int *)v24 + 2) % (unsigned __int64)v19;
          v26 = &v16[8 * v25];
          if ( !*(_QWORD *)v26 )
            break;
          *(_QWORD *)v24 = **(_QWORD **)v26;
          **(_QWORD **)v26 = v24;
          if ( !v22 )
            goto LABEL_20;
        }
        *(_QWORD *)v24 = a1[2];
        a1[2] = v24;
        *(_QWORD *)v26 = a1 + 2;
        if ( *(_QWORD *)v24 )
          *(_QWORD *)&v16[8 * v23] = v24;
        v23 = v25;
      }
LABEL_20:
      if ( *a1 != v21 )
        operator delete(*a1, 8LL * (_QWORD)a1[1]);
      a1[1] = v19;
      *a1 = v16;
      v7 = 8 * (v4 % (unsigned __int64)v19);
      v17 = &v16[v7];
      v18 = *(char ***)&v16[v7];
      if ( v18 )
        goto LABEL_11;
    }
    else
    {
      v16 = *a1;
      v17 = &(*a1)[v7];
      v18 = *(char ***)v17;
      if ( *(_QWORD *)v17 )
      {
LABEL_11:
        *v10 = *v18;
        **(_QWORD **)v17 = v10;
LABEL_12:
        ++a1[3];
        return (char *)v10 + 12;
      }
    }
    v27 = a1[2];
    a1[2] = (char *)v10;
    *v10 = v27;
    if ( v27 )
    {
      *(_QWORD *)&v16[8 * (*((int *)v27 + 2) % (unsigned __int64)a1[1])] = v10;
      v17 = &(*a1)[v7];
    }
    *(_QWORD *)v17 = a1 + 2;
    goto LABEL_12;
  }
LABEL_6:
  if ( !v6 )
    goto LABEL_9;
  v10 = *v6;
  if ( !*v6 )
    goto LABEL_9;
  return (char *)v10 + 12;
}

