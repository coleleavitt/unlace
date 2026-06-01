char **__fastcall sub_52EB0(char **a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  char ***v7; // r9
  __int64 v8; // r13
  char **v9; // rsi
  char **v10; // rdi
  char **v11; // rbp
  char **v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char *v18; // r14
  char *v19; // rax
  char **v20; // rdx
  char *v21; // r13
  size_t v22; // r15
  char *v23; // r10
  char *v24; // rsi
  unsigned __int64 v25; // r9
  char *v26; // rcx
  unsigned __int64 v27; // rdx
  char *v28; // rax
  char *v29; // rdx

  v4 = *a2;
  v5 = (unsigned __int64)a1[1];
  v6 = *a2 % v5;
  v7 = *(char ****)&(*a1)[8 * v6];
  v8 = 8 * v6;
  if ( !v7 )
    goto LABEL_9;
  v9 = *v7;
  if ( (char *)v4 != (*v7)[1] )
  {
    while ( 1 )
    {
      v10 = (char **)*v9;
      if ( !*v9 )
        break;
      v7 = (char ***)v9;
      if ( v6 != (unsigned __int64)v10[1] % v5 )
        break;
      v9 = (char **)*v9;
      if ( (char *)v4 == v10[1] )
        goto LABEL_6;
    }
LABEL_9:
    v13 = (char **)operator new(0x28u);
    v14 = (unsigned __int64)a1[3];
    v15 = (unsigned __int64)a1[1];
    *v13 = nullptr;
    v11 = v13;
    v16 = *a2;
    *(_OWORD *)(v11 + 3) = 0;
    v11[1] = (char *)v16;
    v11[2] = nullptr;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                            v15,
                            v14,
                            1u) )
    {
      v21 = (char *)v17;
      if ( v17 == 1 )
      {
        v23 = (char *)(a1 + 6);
        a1[6] = nullptr;
        v18 = (char *)(a1 + 6);
      }
      else
      {
        if ( v17 >> 60 )
        {
          if ( v17 >> 61 )
            sub_B371();
          std::__throw_bad_alloc();
        }
        v22 = 8 * v17;
        v18 = (char *)operator new(8 * v17);
        memset(v18, 0, v22);
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
          v27 = *((_QWORD *)v26 + 1) % (unsigned __int64)v21;
          v28 = &v18[8 * v27];
          if ( !*(_QWORD *)v28 )
            break;
          *(_QWORD *)v26 = **(_QWORD **)v28;
          **(_QWORD **)v28 = v26;
          if ( !v24 )
            goto LABEL_20;
        }
        *(_QWORD *)v26 = a1[2];
        a1[2] = v26;
        *(_QWORD *)v28 = a1 + 2;
        if ( *(_QWORD *)v26 )
          *(_QWORD *)&v18[8 * v25] = v26;
        v25 = v27;
      }
LABEL_20:
      if ( *a1 != v23 )
        operator delete(*a1, 8LL * (_QWORD)a1[1]);
      a1[1] = v21;
      *a1 = v18;
      v8 = 8 * (v4 % (unsigned __int64)v21);
      v19 = &v18[v8];
      v20 = *(char ***)&v18[v8];
      if ( v20 )
        goto LABEL_11;
    }
    else
    {
      v18 = *a1;
      v19 = &(*a1)[v8];
      v20 = *(char ***)v19;
      if ( *(_QWORD *)v19 )
      {
LABEL_11:
        *v11 = *v20;
        **(_QWORD **)v19 = v11;
LABEL_12:
        ++a1[3];
        return v11 + 2;
      }
    }
    v29 = a1[2];
    a1[2] = (char *)v11;
    *v11 = v29;
    if ( v29 )
    {
      *(_QWORD *)&v18[8 * (*((_QWORD *)v29 + 1) % (unsigned __int64)a1[1])] = v11;
      v19 = &(*a1)[v8];
    }
    *(_QWORD *)v19 = a1 + 2;
    goto LABEL_12;
  }
LABEL_6:
  if ( !v7 )
    goto LABEL_9;
  v11 = *v7;
  if ( !*v7 )
    goto LABEL_9;
  return v11 + 2;
}
