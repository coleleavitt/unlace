_BYTE *__fastcall sub_2A250(unsigned __int8 *a1, const char **a2, const char **a3)
{
  _BYTE *v3; // r13
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  const char *v9; // rbp
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE *result; // rax
  const char *v14; // rax
  char v15; // dl

  v3 = a1;
  a2[1] = nullptr;
  v5 = *a1;
  if ( (unsigned __int8)v5 <= 0xDu )
  {
    v6 = -9218;
    if ( !_bittest64(&v6, v5) )
    {
      v14 = s1;
      if ( a3 )
        goto LABEL_13;
      goto LABEL_14;
    }
  }
  v7 = 1;
  v8 = 2;
  v9 = nullptr;
LABEL_4:
  v10 = *a2;
  if ( (unsigned __int64)a2[2] < 2 )
    goto LABEL_9;
  while ( 1 )
  {
    a2[1] = (const char *)v8;
    ++v3;
    v9[(_QWORD)v10] = v5;
    (*a2)[v7] = 0;
    v5 = (unsigned __int8)*v3;
    if ( (unsigned __int8)v5 <= 0xDu )
    {
      v11 = -9218;
      if ( !_bittest64(&v11, v5) )
        break;
    }
    v9 = a2[1];
    v7 = 1;
    v8 = 2;
    if ( !v9 )
      goto LABEL_4;
    v8 = (unsigned __int64)(v9 + 1);
    v7 = (__int64)a2[1];
    v10 = *a2;
    --v9;
    if ( (unsigned __int64)a2[2] < v8 )
    {
LABEL_9:
      v12 = qvector_reserve();
      *a2 = (const char *)v12;
      v10 = (const char *)v12;
    }
  }
  result = v3;
  if ( a3 )
  {
    v14 = s1;
    if ( a2[1] )
      v14 = *a2;
LABEL_13:
    *a3 = v14;
    LOBYTE(v5) = *v3;
LABEL_14:
    result = v3;
  }
  if ( (_BYTE)v5 == 10 || (_BYTE)v5 == 13 )
  {
    do
    {
      do
        v15 = *++result;
      while ( v15 == 10 );
    }
    while ( v15 == 13 );
  }
  return result;
}

