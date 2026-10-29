void __fastcall sub_821B0(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  int v7; // eax
  void *v8; // rax
  void *v9; // rax
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve();
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 104 * v4;
    do
    {
      v6 = v5 + *a1;
      *(_DWORD *)v6 = 0;
      copy_argloc();
      *(_QWORD *)(v6 + 16) = *(_QWORD *)(a3 + 16);
      v7 = *(_DWORD *)(a3 + 24);
      *(_QWORD *)(v6 + 32) = 0;
      *(_DWORD *)(v6 + 24) = v7;
      *(_OWORD *)(v6 + 40) = 0;
      if ( *(_QWORD *)(a3 + 40) )
      {
        na = *(_QWORD *)(a3 + 40);
        v8 = (void *)qalloc_or_throw();
        *(_QWORD *)(v6 + 32) = v8;
        *(_QWORD *)(v6 + 48) = na;
        memcpy(v8, *(const void **)(a3 + 32), na);
        *(_QWORD *)(v6 + 40) = na;
      }
      *(_QWORD *)(v6 + 56) = 0;
      *(_OWORD *)(v6 + 64) = 0;
      if ( *(_QWORD *)(a3 + 64) )
      {
        n = *(_QWORD *)(a3 + 64);
        v9 = (void *)qalloc_or_throw();
        *(_QWORD *)(v6 + 56) = v9;
        *(_QWORD *)(v6 + 72) = n;
        memcpy(v9, *(const void **)(a3 + 56), n);
        *(_QWORD *)(v6 + 64) = n;
      }
      *(_QWORD *)(v6 + 80) = 0;
      copy_tinfo_t();
      ++v4;
      v5 += 104;
      *(_QWORD *)(v6 + 88) = *(_QWORD *)(a3 + 88);
      *(_QWORD *)(v6 + 96) = *(_QWORD *)(a3 + 96);
    }
    while ( a2 != v4 );
  }
  a1[1] = a2;
}

