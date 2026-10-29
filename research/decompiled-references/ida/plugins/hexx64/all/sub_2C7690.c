unsigned __int64 __fastcall sub_2C7690(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  __int64 v5; // rsi
  __int64 (__fastcall ***v6)(); // rdx
  unsigned __int64 v7; // rcx
  __m128i v8; // xmm0
  __int64 v9; // rbx
  __m128i v10; // xmm0
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdi
  __m128i v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm0
  unsigned __int64 v19; // rbx
  __m128i v20; // xmm0
  __int64 v21; // r14
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 (__fastcall **v24)(); // [rsp+10h] [rbp-E8h] BYREF
  __m128i v25; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+28h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+30h] [rbp-C8h]
  char v28; // [rsp+40h] [rbp-B8h]
  __m128i v29; // [rsp+48h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A0h]
  __int64 (__fastcall **v31)(); // [rsp+60h] [rbp-98h]
  __m128i v32; // [rsp+68h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-80h] BYREF
  __int128 v34; // [rsp+80h] [rbp-78h]
  char v35; // [rsp+90h] [rbp-68h]
  __m128i v36; // [rsp+98h] [rbp-60h] BYREF
  int v37; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+B8h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v28 = 0;
    v27 = 0;
    v25.m128i_i64[0] = -1;
    v25.m128i_i32[2] = 0;
    v26 = 0;
    v29.m128i_i64[0] = -1;
    v29.m128i_i32[2] = 0;
    v30 = -2;
    v24 = off_4E1280;
    if ( a2 < v2 )
    {
      v12 = a2;
      do
      {
        v13 = (_QWORD *)(*a1 + 80 * v12);
        v14 = v13[3];
        *v13 = off_4E1258;
        if ( v14 )
        {
          v13[4] = 0;
          qfree(v14);
        }
        ++v12;
      }
      while ( v2 != v12 );
      a1[1] = a2;
    }
    else
    {
      v5 = *a1;
      v6 = &v24;
      v7 = a1[2];
      if ( (unsigned __int64)&v24 < *a1 || (unsigned __int64)&v24 >= v5 + 80 * v7 )
      {
        if ( v7 < a2 )
        {
          *a1 = qvector_reserve((__int64)a1, v5, a2, 80);
          v2 = a1[1];
        }
        for ( ; v2 < a2; *(__m128i *)(v9 + 56) = v10 )
        {
          v8 = _mm_loadu_si128(&v25);
          v9 = *a1 + 80 * v2;
          *(_QWORD *)v9 = off_4E1258;
          *(_QWORD *)(v9 + 24) = 0;
          *(__m128i *)(v9 + 8) = v8;
          *(_OWORD *)(v9 + 32) = 0;
          sub_2AE320((_QWORD *)(v9 + 24), (__int64)&v26, (__int64)v6, v7);
          v10 = _mm_loadu_si128(&v29);
          ++v2;
          *(_BYTE *)(v9 + 48) = 0;
          *(_DWORD *)(v9 + 72) = -2;
          *(_QWORD *)v9 = off_4E1280;
        }
        a1[1] = a2;
      }
      else
      {
        v15 = _mm_loadu_si128(&v25);
        v33 = 0;
        v31 = off_4E1258;
        v32 = v15;
        v34 = 0;
        sub_2AE320(&v33, (__int64)&v26, (__int64)&v24, v7);
        v18 = _mm_loadu_si128(&v29);
        v35 = 0;
        v37 = -2;
        v31 = off_4E1280;
        v36 = v18;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve((__int64)a1, *a1, a2, 80);
        v19 = a1[1];
        if ( v19 < a2 )
        {
          do
          {
            v20 = _mm_loadu_si128(&v32);
            v21 = *a1 + 80 * v19;
            *(_QWORD *)v21 = off_4E1258;
            *(_QWORD *)(v21 + 24) = 0;
            *(__m128i *)(v21 + 8) = v20;
            *(_OWORD *)(v21 + 32) = 0;
            sub_2AE320((_QWORD *)(v21 + 24), (__int64)&v33, v16, v17);
            v22 = _mm_loadu_si128(&v36);
            ++v19;
            *(_BYTE *)(v21 + 48) = 0;
            *(_DWORD *)(v21 + 72) = -2;
            *(_QWORD *)v21 = off_4E1280;
            *(__m128i *)(v21 + 56) = v22;
          }
          while ( a2 != v19 );
        }
        v23 = v33;
        a1[1] = a2;
        if ( v23 )
          qfree(v23);
      }
    }
  }
  return v38 - __readfsqword(0x28u);
}

