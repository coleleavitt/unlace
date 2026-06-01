__int64 __fastcall sub_544B0(__int64 a1, __int64 a2, int a3)
{
  size_t v3; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r12
  size_t v9; // rbp
  void *v10; // rax
  void *v11; // rax

  if ( a3 >= 0 || (a3 = *(_DWORD *)(a2 + 1176), a3 >= 0) )
  {
    if ( a3 < (unsigned __int64)xmmword_9AC18 )
    {
      v5 = *(_QWORD *)(qword_9AC10 + 8LL * a3);
      if ( v5 < (unsigned __int64)xmmword_9AC38 )
      {
        v6 = 3 * v5;
        v7 = qword_9AC30;
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v8 = v7 + 8 * v6;
        v9 = *(_QWORD *)(v8 + 8);
        if ( v9 )
        {
          v10 = (void *)qalloc_or_throw();
          *(_QWORD *)(a1 + 16) = v9;
          *(_QWORD *)a1 = v10;
          memcpy(v10, *(const void **)v8, v9);
          *(_QWORD *)(a1 + 8) = v9;
        }
        return a1;
      }
    }
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 896);
  if ( !v3 )
    return a1;
  v11 = (void *)qalloc_or_throw();
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)a1 = v11;
  memcpy(v11, *(const void **)(a2 + 888), v3);
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}

