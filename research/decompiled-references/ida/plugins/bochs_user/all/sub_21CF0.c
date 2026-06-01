void __fastcall sub_21CF0(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int128 v5; // xmm0
  size_t v6; // r15
  __int64 v7; // rbx
  void *v8; // rax

  if ( a1[2] < a2 )
    *a1 = qvector_reserve();
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 0;
    do
    {
      v7 = *a1 + 32 * v4;
      *(_DWORD *)v7 = -2;
      *(_QWORD *)(v7 + 24) = 0;
      *(_OWORD *)(v7 + 8) = v5;
      if ( v7 != a3 )
      {
        if ( *(int *)a3 >= -1 )
        {
          *(_QWORD *)(v7 + 8) = 0;
          *(_OWORD *)(v7 + 16) = 0;
          v6 = *(_QWORD *)(a3 + 16);
          if ( v6 )
          {
            v8 = (void *)qalloc_or_throw();
            *(_QWORD *)(v7 + 24) = v6;
            *(_QWORD *)(v7 + 8) = v8;
            memcpy(v8, *(const void **)(a3 + 8), v6);
            *(_QWORD *)(v7 + 16) = v6;
            v5 = 0;
          }
        }
        else
        {
          *(_QWORD *)(v7 + 8) = *(_QWORD *)(a3 + 8);
        }
        *(_DWORD *)v7 = *(_DWORD *)a3;
      }
      ++v4;
    }
    while ( a2 != v4 );
  }
  a1[1] = a2;
}

