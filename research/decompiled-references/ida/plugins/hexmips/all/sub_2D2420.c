__m128i *__fastcall sub_2D2420(_QWORD *a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  __int64 i; // r13
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  __m128i *v12; // r12
  __m128i *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  const __m128i *v16; // r15
  __int64 v17; // rbp
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int32 v20; // eax
  __int64 v22; // [rsp+8h] [rbp-F0h]
  unsigned __int64 j; // [rsp+8h] [rbp-F0h]
  _QWORD *v25; // [rsp+18h] [rbp-E0h]
  const __m128i *v28; // [rsp+38h] [rbp-C0h] BYREF
  __m128i v29; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-A8h]
  char v31[8]; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+60h] [rbp-98h]
  _QWORD v33[2]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v34[2]; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v35[2]; // [rsp+98h] [rbp-60h] BYREF
  __int32 v36; // [rsp+A8h] [rbp-50h]
  int v37; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v38; // [rsp+B8h] [rbp-40h]

  v4 = a1[5];
  v38 = __readfsqword(0x28u);
  v25 = a1 + 5;
  if ( v4 )
  {
    v22 = a1[6];
    if ( v22 )
    {
      for ( i = 0; i != v22; ++i )
      {
        v6 = (__int64 *)(v4 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v8 = v6[1];
          if ( v8 )
          {
            v9 = 0;
            v10 = 0;
            do
            {
              v11 = v7 + v9;
              ++v10;
              v9 += 112;
              sub_118BA0(v11 + 88);
              sub_118BA0(v11 + 72);
              sub_118BA0(v11 + 56);
              v7 = *v6;
            }
            while ( v8 != v10 );
          }
          v6[1] = 0;
          qfree();
          v4 = a1[5];
        }
      }
    }
    a1[6] = 0;
    qfree();
    a1[5] = 0;
    a1[7] = 0;
  }
  a1[3] = v25;
  v12 = (__m128i *)sub_2BE7A0(a3, a4, a1[4]);
  if ( v12 )
  {
    v13 = (__m128i *)qalloc();
    v12 = v13;
    if ( !v13 )
      sub_4E45E(16);
    v13->m128i_i64[0] = 0;
    v13->m128i_i64[1] = 0;
    v14 = (_QWORD *)a1[3];
    for ( j = 0; j < v14[1]; ++j )
    {
      v15 = *v14 + 24 * j;
      v16 = *(const __m128i **)v15;
      v17 = *(_QWORD *)v15 + 112LL * *(_QWORD *)(v15 + 8);
      if ( v17 != *(_QWORD *)v15 )
      {
        do
        {
          v18 = _mm_loadu_si128(v16);
          v19 = v16[1].m128i_i64[0];
          v33[0] = 0xFFFFFFFF00000000LL;
          v29 = v18;
          v30 = v19;
          v33[1] = 0;
          v34[0] = 0xFFFFFFFF00000000LL;
          v34[1] = 0;
          v35[0] = 0xFFFFFFFF00000000LL;
          v35[1] = 0;
          v32 = 0;
          sub_1211A0((__int64)v31, (__int64)&v16[1].m128i_i64[1]);
          v20 = v16[6].m128i_i32[2];
          v37 = j;
          v36 = v20;
          v28 = &v29;
          *(_BYTE *)(sub_2D2260(v12, (__int64)&v29, &v28) + 144) = 1;
          v16 += 7;
          sub_118BA0((__int64)v35);
          sub_118BA0((__int64)v34);
          sub_118BA0((__int64)v33);
        }
        while ( (const __m128i *)v17 != v16 );
        v14 = (_QWORD *)a1[3];
      }
    }
  }
  return v12;
}

