__m128i *__fastcall sub_2CF180(__int64 a1, __int64 a2, unsigned __int8 **a3, unsigned __int64 a4)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // dl
  int v6; // r12d
  int v7; // eax
  unsigned __int64 v8; // rsi
  _QWORD *v9; // r15
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v17; // rax
  __m128i *v18; // [rsp+0h] [rbp-90h]
  unsigned __int64 v19; // [rsp+10h] [rbp-80h]
  unsigned __int64 v20; // [rsp+10h] [rbp-80h]
  int v21; // [rsp+18h] [rbp-78h]
  int v22; // [rsp+1Ch] [rbp-74h]
  int v23; // [rsp+1Ch] [rbp-74h]
  __int64 v25; // [rsp+28h] [rbp-68h] BYREF
  __int64 *v26; // [rsp+30h] [rbp-60h] BYREF
  __m128i v27; // [rsp+38h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v4 = *a3;
  v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a3, (__m128i)a4);
  if ( (unsigned __int64)v4 < a4 )
  {
    v5 = *v4;
    v27.m128i_i64[0] = (__int64)(v4 + 1);
    if ( v5 > 1u )
      return nullptr;
  }
  v18 = (__m128i *)qalloc();
  if ( !v18 )
    sub_4E45E(16);
  v6 = 0;
  v18->m128i_i64[0] = 0;
  v18->m128i_i64[1] = 0;
  v7 = unpack_dd();
  v8 = *(_QWORD *)(a1 + 8);
  v21 = v7;
  v25 = v8;
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v25 = sub_32D380(&v27, v8);
      v26 = &v25;
      v9 = (_QWORD *)(sub_2CF010(v18, (unsigned __int64 *)&v25, &v26) + 24);
      v10 = (int)unpack_dd();
      v11 = v9[2];
      v12 = v10;
      if ( v11 < v10 )
      {
        v15 = v9[1];
        if ( v9[3] < v10 )
        {
          v23 = v10;
          v20 = v10;
          v17 = qvector_reserve();
          v12 = v23;
          v10 = v20;
          v9[1] = v17;
          v15 = v17;
          v11 = v9[2];
        }
        v22 = v12;
        v19 = v10;
        memset((void *)(v15 + 4 * v11), 0, 4 * (v10 - v11));
        v12 = v22;
        v9[2] = v19;
      }
      else if ( v10 != v11 )
      {
        v9[2] = v10;
      }
      v13 = 0;
      v14 = 4LL * (unsigned int)v12;
      if ( v12 > 0 )
      {
        do
        {
          *(_DWORD *)(v9[1] + v13) = unpack_dd();
          v13 += 4;
        }
        while ( v14 != v13 );
      }
      if ( v21 == ++v6 )
        break;
      v8 = v25;
    }
  }
  *a3 = (unsigned __int8 *)v27.m128i_i64[0];
  return v18;
}

