void __fastcall sub_13B70(__int64 a1)
{
  unsigned __int64 v1; // r15
  __int64 *v2; // r12
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rbx
  void *v7; // rdi
  void **v8; // rbx
  unsigned __int64 v9; // rbp
  void *v10; // rdi
  __int64 v11; // [rsp+0h] [rbp-58h]
  __int64 v12; // [rsp+8h] [rbp-50h]
  __int64 i; // [rsp+18h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 72);
  v2 = (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 48);
  v12 = *(_QWORD *)(a1 + 32);
  for ( i = *(_QWORD *)(a1 + 40); (unsigned __int64)v2 < v1; ++v2 )
  {
    v5 = *v2;
    v6 = *v2 + 504;
    do
    {
      v5 += 72;
      free_debug_event();
    }
    while ( v6 != v5 );
  }
  if ( i == v1 )
  {
    if ( v4 != v11 )
    {
      do
      {
        v4 += 72;
        free_debug_event();
      }
      while ( v11 != v4 );
      v7 = *(void **)a1;
      if ( !*(_QWORD *)a1 )
        return;
      goto LABEL_12;
    }
  }
  else
  {
    if ( v4 == v12 )
      goto LABEL_10;
    do
    {
      v4 += 72;
      free_debug_event();
    }
    while ( v12 != v4 );
    while ( v11 != v3 )
    {
      v3 += 72;
      free_debug_event();
LABEL_10:
      ;
    }
  }
  v7 = *(void **)a1;
  if ( !*(_QWORD *)a1 )
    return;
LABEL_12:
  v8 = *(void ***)(a1 + 40);
  v9 = *(_QWORD *)(a1 + 72) + 8LL;
  if ( (unsigned __int64)v8 < v9 )
  {
    do
    {
      v10 = *v8++;
      operator delete(v10, 0x1F8u);
    }
    while ( (unsigned __int64)v8 < v9 );
    v7 = *(void **)a1;
  }
  operator delete(v7, 8LL * *(_QWORD *)(a1 + 8));
}

