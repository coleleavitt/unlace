unsigned __int64 __fastcall sub_3D4130(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  void *v8; // rdi
  size_t v9; // r13
  void *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  _QWORD *v14; // rax
  __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  __int128 v17; // [rsp+28h] [rbp-70h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v20; // [rsp+58h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( a2[1] > 1u )
  {
    get_ash();
    v16 = 0;
    v17 = 0;
    sub_3C9BF0(a2, &v16, "\n", 0);
    v3 = v16;
    v4 = v16 + 24 * v17;
    if ( v16 != v4 )
    {
      do
      {
        src = nullptr;
        *(_OWORD *)n = 0;
        sub_F4410((__int64 *)&src);
        v9 = n[0];
        v10 = nullptr;
        if ( n[0] )
        {
          v10 = (void *)qalloc_or_throw();
          memcpy(v10, src, v9);
        }
        v5 = a1[1];
        v6 = *a1;
        if ( a1[2] < (unsigned __int64)(v5 + 1) )
        {
          v11 = qvector_reserve();
          *a1 = v11;
          v5 = a1[1];
          v6 = v11;
        }
        v7 = v6 + 24 * v5;
        *(_QWORD *)v7 = v10;
        v8 = src;
        *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
        ++a1[1];
        if ( v8 )
        {
          n[0] = 0;
          qfree();
        }
        v3 += 24;
      }
      while ( v4 != v3 );
      v4 = v16;
      v3 = v16;
    }
    if ( v4 )
    {
      v12 = v17;
      if ( (_QWORD)v17 )
      {
        v13 = 0;
        do
        {
          v14 = (_QWORD *)(v4 + 24 * v13);
          if ( *v14 )
          {
            v14[1] = 0;
            qfree();
            v3 = v16;
          }
          ++v13;
          v4 = v3;
        }
        while ( v12 != v13 );
      }
      *(_QWORD *)&v17 = 0;
      qfree();
    }
  }
  return v20 - __readfsqword(0x28u);
}

