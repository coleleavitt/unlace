__int64 __fastcall sub_83090(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 v7; // rdi
  int v8; // ebp
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 j; // rbp
  __int64 *v14; // rax
  __int64 v15; // rdi

  v2 = *a1;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0;
  }
  a1[1] = 0;
  a1[12] = 0;
  memset(
    (void *)((unsigned __int64)(a1 + 2) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 16) & 0xFFFFFFF8) + 104) >> 3));
  v3 = a1[13];
  if ( v3 )
  {
    v4 = a1[14];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = *(_QWORD *)(v3 + v5 + 16);
        if ( v7 )
        {
          *(_QWORD *)(v3 + v5 + 24) = 0;
          qfree(v7);
          v3 = a1[13];
        }
        v5 += 120;
      }
    }
    a1[14] = 0;
    qfree(v3);
    a1[13] = 0;
    a1[15] = 0;
  }
  v8 = 0;
  for ( result = 0; v8 < (unsigned __int64)a1[39]; result = v8 )
  {
    ++v8;
    qfree(*(_QWORD *)(a1[38] + 72 * result + 56));
  }
  v10 = a1[16];
  if ( v10 )
  {
    a1[17] = 0;
    result = qfree(v10);
    a1[16] = 0;
    a1[18] = 0;
  }
  v11 = a1[41];
  if ( v11 )
  {
    v12 = a1[42];
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = (__int64 *)(v11 + 24 * j);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15);
          v11 = a1[41];
        }
      }
    }
    a1[42] = 0;
    result = qfree(v11);
    a1[41] = 0;
    a1[43] = 0;
  }
  return result;
}

