unsigned __int64 __fastcall sub_1EED90(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // r14
  void *v14; // rax
  __int64 v15; // rax
  void *v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r15
  unsigned __int64 v19; // rbp
  __int64 v20; // r14
  void *v21; // rdi
  void *v22; // rax
  const void *v23; // rsi
  __int64 n; // [rsp+8h] [rbp-70h]
  __int64 v25[2]; // [rsp+10h] [rbp-68h] BYREF
  void *src; // [rsp+20h] [rbp-58h]
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v4 = a1[1];
  v28 = __readfsqword(0x28u);
  if ( a2 < v4 )
  {
    v19 = a2;
    do
    {
      v20 = *a1 + 40 * v19;
      if ( *(_QWORD *)(v20 + 16) )
      {
        *(_QWORD *)(v20 + 24) = 0;
        qfree();
      }
      ++v19;
      qfree();
    }
    while ( v4 != v19 );
    a1[1] = a2;
  }
  else if ( v4 < a2 )
  {
    v7 = *a1;
    v8 = a1[2];
    if ( a3 < *a1 || a3 >= v7 + 40 * v8 )
    {
      if ( v8 >= a2 || (v15 = qvector_reserve(), v4 = a1[1], *a1 = v15, v7 = v15, v4 < a2) )
      {
        while ( 1 )
        {
          v17 = v7 + 40 * v4;
          sub_5FE00((__int64 *)v17, a3);
          *(_QWORD *)(v17 + 16) = 0;
          *(_OWORD *)(v17 + 24) = 0;
          v18 = *(_QWORD *)(a3 + 24);
          if ( v18 )
          {
            v16 = (void *)qalloc_or_throw();
            *(_QWORD *)(v17 + 16) = v16;
            *(_QWORD *)(v17 + 32) = v18;
            memcpy(v16, *(const void **)(a3 + 16), 16 * v18);
            *(_QWORD *)(v17 + 24) = v18;
          }
          if ( ++v4 >= a2 )
            break;
          v7 = *a1;
        }
      }
      a1[1] = a2;
    }
    else
    {
      sub_5FE00(v25, a3);
      v10 = *(_QWORD *)(a3 + 24);
      src = nullptr;
      v27 = 0;
      if ( v10 )
      {
        v22 = (void *)qalloc_or_throw();
        v23 = *(const void **)(a3 + 16);
        src = v22;
        *((_QWORD *)&v27 + 1) = v10;
        memcpy(v22, v23, 16 * v10);
        *(_QWORD *)&v27 = v10;
      }
      if ( a1[2] < a2 )
        *a1 = qvector_reserve();
      v11 = a1[1];
      if ( v11 < a2 )
      {
        do
        {
          v12 = *a1 + 40 * v11;
          sub_5FE00((__int64 *)v12, (__int64)v25);
          *(_QWORD *)(v12 + 16) = 0;
          *(_OWORD *)(v12 + 24) = 0;
          v13 = v27;
          if ( (_QWORD)v27 )
          {
            n = 16 * v27;
            v14 = (void *)qalloc_or_throw();
            *(_QWORD *)(v12 + 16) = v14;
            *(_QWORD *)(v12 + 32) = v13;
            memcpy(v14, src, n);
            *(_QWORD *)(v12 + 24) = v13;
          }
          ++v11;
        }
        while ( a2 != v11 );
      }
      v21 = src;
      a1[1] = a2;
      if ( v21 )
      {
        *(_QWORD *)&v27 = 0;
        qfree();
      }
      qfree();
    }
  }
  return v28 - __readfsqword(0x28u);
}

