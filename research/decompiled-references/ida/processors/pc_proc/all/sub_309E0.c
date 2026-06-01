unsigned __int64 __fastcall sub_309E0(const __m128i *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 *v6; // rax
  char v7; // dl
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // r12
  bool v10; // zf
  unsigned __int64 v11; // rbp
  unsigned __int64 *v12; // rcx
  unsigned __int64 *v13; // rax
  __m128i v14; // xmm1
  __m128i si128; // xmm0
  __int64 v16; // rcx
  __m128i v18[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v2 = a1[2].m128i_u64[0];
  v20 = __readfsqword(0x28u);
  v3 = a2;
  v4 = v2;
  if ( a2 >= v2 )
    v4 = a2;
  if ( v2 != -1 )
    v3 = v4;
  sub_30960(&a1->m128i_i64[1], v3);
  if ( v3 )
  {
    v5 = 4 * v3;
    v6 = (unsigned __int64 *)a1->m128i_i64[1];
    v7 = v5 * 8;
    v8 = &v6[v5];
    v3 = 0;
    if ( (v7 & 0x20) == 0 )
      goto LABEL_32;
    if ( *v6 )
      v3 = *v6;
    v6 += 4;
    if ( v6 != v8 )
    {
LABEL_32:
      do
      {
        if ( v3 < *v6 )
          v3 = *v6;
        if ( v3 < v6[4] )
          v3 = v6[4];
        v6 += 8;
      }
      while ( v6 != v8 );
    }
  }
  v9 = 0;
  v10 = a1[3].m128i_i64[1] == 0;
  memset(v18, 0, 24);
  if ( !v10 )
  {
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(a1[3].m128i_i64[0] + 8 * v9);
        if ( v3 >= v11 )
        {
          v12 = (unsigned __int64 *)(v18[0].m128i_i64[0] + 8 * v18[0].m128i_i64[1]);
          if ( (unsigned __int64 *)v18[0].m128i_i64[0] == v12 )
            break;
          v13 = (unsigned __int64 *)v18[0].m128i_i64[0];
          while ( v11 != *v13 )
          {
            if ( v12 == ++v13 )
              goto LABEL_24;
          }
          if ( v12 == v13 )
            break;
        }
        if ( ++v9 >= a1[3].m128i_i64[1] )
          goto LABEL_27;
      }
LABEL_24:
      if ( v18[1].m128i_i64[0] < (unsigned __int64)(v18[0].m128i_i64[1] + 1) )
      {
        v18[0].m128i_i64[0] = qvector_reserve();
        v12 = (unsigned __int64 *)(v18[0].m128i_i64[0] + 8 * v18[0].m128i_i64[1]);
      }
      *v12 = v11;
      ++v9;
      ++v18[0].m128i_i64[1];
    }
    while ( v9 < a1[3].m128i_i64[1] );
  }
LABEL_27:
  v14 = _mm_loadu_si128(a1 + 3);
  si128 = _mm_load_si128(v18);
  v16 = a1[4].m128i_i64[0];
  v18[2] = si128;
  v19 = v18[1].m128i_i64[0];
  v18[1].m128i_i64[0] = v16;
  a1[4].m128i_i64[0] = v19;
  v18[0] = v14;
  a1[3] = si128;
  if ( v14.m128i_i64[0] )
  {
    v18[0].m128i_i64[1] = 0;
    qfree();
  }
  return v20 - __readfsqword(0x28u);
}

