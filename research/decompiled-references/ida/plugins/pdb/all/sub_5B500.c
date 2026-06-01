char *__fastcall sub_5B500(char **a1, unsigned __int64 a2, unsigned __int64 a3, char *a4, unsigned __int64 a5)
{
  unsigned __int64 v8; // rdx
  char *v9; // r14
  _QWORD *v10; // rax
  char *v12; // r13
  size_t v13; // r15
  char *v14; // r9
  char *v15; // rsi
  unsigned __int64 v16; // r8
  char *v17; // rcx
  unsigned __int64 v18; // rdx
  char *v19; // rax

  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                          (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                          (unsigned __int64)a1[1],
                          (unsigned __int64)a1[3],
                          a5) )
  {
    v12 = (char *)v8;
    if ( v8 == 1 )
    {
      v14 = (char *)(a1 + 6);
      a1[6] = nullptr;
      v9 = (char *)(a1 + 6);
    }
    else
    {
      if ( v8 >> 60 )
      {
        if ( v8 >> 61 )
          sub_23D63();
        std::__throw_bad_alloc();
      }
      v13 = 8 * v8;
      v9 = (char *)operator new(8 * v8);
      memset(v9, 0, v13);
      v14 = (char *)(a1 + 6);
    }
    v15 = a1[2];
    a1[2] = nullptr;
    v16 = 0;
    while ( v15 )
    {
      while ( 1 )
      {
        v17 = v15;
        v15 = *(char **)v15;
        v18 = *((unsigned int *)v17 + 2) % (unsigned __int64)v12;
        v19 = &v9[8 * v18];
        if ( !*(_QWORD *)v19 )
          break;
        *(_QWORD *)v17 = **(_QWORD **)v19;
        **(_QWORD **)v19 = v17;
        if ( !v15 )
          goto LABEL_13;
      }
      *(_QWORD *)v17 = a1[2];
      a1[2] = v17;
      *(_QWORD *)v19 = a1 + 2;
      if ( *(_QWORD *)v17 )
        *(_QWORD *)&v9[8 * v16] = v17;
      v16 = v18;
    }
LABEL_13:
    if ( *a1 != v14 )
      operator delete(*a1, 8LL * (_QWORD)a1[1]);
    a1[1] = v12;
    *a1 = v9;
    a2 = a3 % (unsigned __int64)v12;
  }
  else
  {
    v9 = *a1;
  }
  v10 = *(_QWORD **)&v9[8 * a2];
  if ( v10 )
  {
    *(_QWORD *)a4 = *v10;
    **(_QWORD **)&(*a1)[8 * a2] = a4;
  }
  else
  {
    *(_QWORD *)a4 = a1[2];
    a1[2] = a4;
    if ( *(_QWORD *)a4 )
      *(_QWORD *)&(*a1)[8 * (*(unsigned int *)(*(_QWORD *)a4 + 8LL) % (unsigned __int64)a1[1])] = a4;
    *(_QWORD *)&(*a1)[8 * a2] = a1 + 2;
  }
  ++a1[3];
  return a4;
}

