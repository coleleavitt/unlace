_BOOL8 __fastcall sub_337510(__int64 a1, const char *a2)
{
  char v2; // al
  const char *v4; // rbp
  const char *v5; // rax
  signed __int64 v6; // rax
  __int64 v7; // rax
  const char *v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 i; // r15
  const char *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // r14
  _BOOL4 v16; // ebp
  const char *v17; // rsi
  const char *v18; // rdi
  void *v20; // rdi
  __int64 v21; // rbx
  char *s1; // [rsp+8h] [rbp-70h]
  size_t n; // [rsp+10h] [rbp-68h]
  __int64 v24; // [rsp+18h] [rbp-60h]
  __int64 v25; // [rsp+20h] [rbp-58h]

  if ( !a2 )
    return 0;
  v2 = *a2;
  v4 = a2;
  if ( *a2 != 106 )
    goto LABEL_3;
  if ( a2[1] == 95 )
  {
    v2 = a2[2];
    v4 = a2 + 2;
LABEL_3:
    if ( v2 == 95 )
    {
      do
        ++v4;
      while ( *v4 == 95 );
    }
  }
  v5 = &v4[strlen(v4) - 1];
  if ( v4 < v5 )
  {
    while ( (unsigned __int8)(*v5 - 48) <= 9u )
    {
      if ( --v5 == v4 )
      {
        v25 = 0;
        v6 = 0;
        n = 1;
        goto LABEL_32;
      }
    }
    if ( v4 < v5 )
    {
      while ( *v5 == 95 )
      {
        if ( --v5 == v4 )
        {
          v21 = 2;
          n = 1;
          goto LABEL_38;
        }
      }
    }
  }
  v25 = 0;
  v6 = v5 - v4;
  n = v6 + 1;
  if ( v6 == -1 )
  {
    s1 = nullptr;
  }
  else
  {
LABEL_32:
    v20 = nullptr;
    v21 = v6 + 2;
    if ( v6 != -2 )
    {
LABEL_38:
      v25 = qvector_reserve();
      v20 = (void *)v25;
    }
    memmove(v20, v4, n);
    *(_BYTE *)(v25 + n) = 0;
    n = v21;
    s1 = (char *)v25;
  }
  v7 = *(_QWORD *)(a1 + 840);
  v8 = s1;
  v9 = *(_QWORD *)(v7 + 32);
  v10 = 24LL * *(_QWORD *)(v7 + 40);
  v24 = v9 + v10;
  v11 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 3);
  if ( !n )
    v8 = ::s1;
  for ( i = v11; i > 0; i = i - 1 - v14 )
  {
    while ( 1 )
    {
      v13 = ::s1;
      v14 = i >> 1;
      v15 = v9 + 8 * ((i >> 1) + (i & 0xFFFFFFFFFFFFFFFELL));
      if ( *(_QWORD *)(v15 + 8) )
        v13 = *(const char **)v15;
      if ( strcmp(v13, v8) < 0 )
        break;
      i >>= 1;
      if ( v14 <= 0 )
        goto LABEL_21;
    }
    v9 = v15 + 24;
  }
LABEL_21:
  v16 = 0;
  if ( v24 != v9 )
  {
    v17 = ::s1;
    if ( *(_QWORD *)(v9 + 8) )
      v17 = *(const char **)v9;
    v18 = ::s1;
    if ( n )
      v18 = s1;
    v16 = strcmp(v18, v17) >= 0;
  }
  if ( s1 )
    qfree();
  return v16;
}

