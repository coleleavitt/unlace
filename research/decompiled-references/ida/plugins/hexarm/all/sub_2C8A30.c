unsigned __int64 __fastcall sub_2C8A30(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  unsigned __int64 v10; // r13
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  __m128i v18; // xmm0
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // [rsp+0h] [rbp-118h]
  __m128i *v23; // [rsp+0h] [rbp-118h]
  __int64 v24; // [rsp+8h] [rbp-110h]
  __int64 (__fastcall **v25)(); // [rsp+20h] [rbp-F8h] BYREF
  __m128i v26; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-E0h]
  __int64 v28; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v29; // [rsp+48h] [rbp-D0h]
  __m128i si128; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-B0h]
  int v32; // [rsp+70h] [rbp-A8h]
  __int64 (__fastcall **v33)(); // [rsp+80h] [rbp-98h]
  __m128i v34; // [rsp+88h] [rbp-90h] BYREF
  __int64 v35; // [rsp+98h] [rbp-80h]
  __int64 v36; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v37; // [rsp+A8h] [rbp-70h]
  __int64 v38; // [rsp+B8h] [rbp-60h]
  __m128i v39; // [rsp+C0h] [rbp-58h] BYREF
  int v40; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v41; // [rsp+D8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v26.m128i_i64[0] = -1;
    v26.m128i_i64[1] = 0xFFFFFFFFLL;
    v27 = 0;
    v28 = 0;
    v31 = 0xFFFFFFFFLL;
    v32 = -2;
    v25 = off_4DB990;
    v29 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
    if ( a2 < v2 )
    {
      v10 = a2;
      v11 = 88 * a2;
      do
      {
        v12 = (_QWORD *)(v11 + *a1);
        v13 = v12[4];
        *v12 = off_4DB968;
        if ( v13 )
        {
          v12[5] = 0;
          qfree();
        }
        ++v10;
        v11 += 88;
      }
      while ( v2 != v10 );
      a1[1] = a2;
    }
    else
    {
      v4 = a1[2];
      if ( (unsigned __int64)&v25 < *a1 || (unsigned __int64)&v25 >= *a1 + 88 * v4 )
      {
        if ( v4 < a2 )
        {
          *a1 = qvector_reserve();
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          v5 = 88 * v2;
          do
          {
            v6 = *a1 + v5;
            v7 = _mm_loadu_si128(&v26);
            *(_QWORD *)v6 = off_4DB968;
            *(_QWORD *)(v6 + 24) = 0;
            *(_QWORD *)(v6 + 32) = 0;
            *(__m128i *)(v6 + 8) = v7;
            *(_OWORD *)(v6 + 40) = 0;
            v22 = v5;
            sub_2AE6E0((_QWORD *)(v6 + 32), (__int64)&v28);
            v8 = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
            ++v2;
            *(_QWORD *)(v6 + 56) = 0;
            *(_DWORD *)(v6 + 80) = -2;
            *(_QWORD *)v6 = off_4DB990;
            v5 = v22 + 88;
            *(__m128i *)(v6 + 64) = v8;
          }
          while ( v2 < a2 );
        }
        a1[1] = a2;
      }
      else
      {
        v14 = _mm_loadu_si128(&v26);
        v35 = 0;
        v33 = off_4DB968;
        v36 = 0;
        v34 = v14;
        v37 = 0;
        sub_2AE6E0(&v36, (__int64)&v28);
        v15 = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
        v38 = 0;
        v33 = off_4DB990;
        v16 = v35;
        v24 = v36;
        v40 = -2;
        v39 = v15;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve();
        v17 = a1[1];
        if ( v17 < a2 )
        {
          do
          {
            v18 = _mm_loadu_si128(&v34);
            v19 = *a1;
            v35 = v16;
            v36 = v24;
            v20 = v19 + 88 * v17;
            *(_QWORD *)v20 = off_4DB968;
            *(_QWORD *)(v20 + 24) = v16;
            *(_QWORD *)(v20 + 32) = 0;
            *(__m128i *)(v20 + 8) = v18;
            *(_OWORD *)(v20 + 40) = 0;
            v23 = (__m128i *)v20;
            sub_2AE6E0((_QWORD *)(v20 + 32), (__int64)&v36);
            ++v17;
            v21 = _mm_load_si128(&v39);
            v23[3].m128i_i64[1] = 0;
            v23[5].m128i_i32[0] = -2;
            v23->m128i_i64[0] = (__int64)off_4DB990;
            v23[4] = v21;
          }
          while ( a2 != v17 );
        }
        a1[1] = a2;
        if ( v24 )
          qfree();
      }
    }
  }
  return v41 - __readfsqword(0x28u);
}

