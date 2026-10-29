unsigned __int64 __fastcall sub_2D6FF0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbp
  const __m128i *v6; // r15
  char v7; // r14
  bool (__fastcall *v8)(__int64); // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  const __m128i *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 *v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // [rsp+0h] [rbp-A8h]
  __m128i v28; // [rsp+10h] [rbp-98h] BYREF
  const __m128i *v29[2]; // [rsp+20h] [rbp-88h] BYREF
  char v30; // [rsp+30h] [rbp-78h]
  __int64 *v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+40h] [rbp-68h]
  __int64 v33; // [rsp+48h] [rbp-60h] BYREF
  __int128 v34; // [rsp+50h] [rbp-58h]
  __m128i *v35; // [rsp+60h] [rbp-48h]
  unsigned __int64 v36; // [rsp+68h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  switch_dbctx();
  v28 = 0u;
  v3 = a1[6];
  v4 = a1[5];
  v5 = v4 + 264 * v3;
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      v8 = **(bool (__fastcall ***)(__int64))v4;
      if ( v8 != sub_2AF040 )
        break;
      if ( *(_DWORD *)(v4 + 120) == *(_DWORD *)(v4 + 248) )
      {
        v6 = (const __m128i *)(v4 + 8);
        a2 = v4 + 136;
        if ( sub_1377A0(v4 + 8, v4 + 136) )
          goto LABEL_4;
        v4 += 264;
        if ( v5 == v4 )
          goto LABEL_10;
      }
      else
      {
LABEL_3:
        v6 = (const __m128i *)(v4 + 8);
LABEL_4:
        a2 = (__int64)v6;
        v7 = *(_BYTE *)(v4 + 128);
        v29[0] = v6;
        *(_BYTE *)(sub_2D6AE0(&v28, (__int64)v6, v29) + 144) = v7;
LABEL_5:
        v4 += 264;
        if ( v5 == v4 )
          goto LABEL_10;
      }
    }
    if ( !v8(v4) )
      goto LABEL_5;
    goto LABEL_3;
  }
LABEL_10:
  v9 = a1[10];
  v10 = j__qalloc_or_throw(1512, a2, v3, v2);
  v11 = sub_260450(0);
  sub_336F00(v10, v11);
  v12 = *(const __m128i **)(v10 + 40);
  v30 = 73;
  v32 = v10;
  v29[1] = v12;
  v31 = &v33;
  v29[0] = (const __m128i *)&off_4E1190;
  v33 = 0;
  v35 = &v28;
  v34 = 0;
  *(_QWORD *)(v10 + 40) = v9;
  sub_2B6200(a1[8], (__int64)v29);
  v13 = v32;
  v29[0] = (const __m128i *)&off_4E1190;
  if ( v32 )
  {
    sub_84290(v32);
    j__qfree(v13);
  }
  v35 = nullptr;
  v14 = v33;
  if ( v33 )
  {
    v27 = v34;
    if ( (_QWORD)v34 )
    {
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v14 + 24 * v15);
        v17 = *v16;
        if ( *v16 )
        {
          v18 = v16[1];
          if ( v18 )
          {
            v19 = 0;
            v20 = 0;
            do
            {
              v21 = v17 + v19;
              ++v20;
              v19 += 112;
              sub_11CDA0(v21 + 88);
              sub_11CDA0(v21 + 72);
              sub_11CDA0(v21 + 56);
              v17 = *v16;
            }
            while ( v18 != v20 );
          }
          v16[1] = 0;
          qfree(v17);
          v14 = v33;
        }
        ++v15;
      }
      while ( v27 != v15 );
    }
    *(_QWORD *)&v34 = 0;
    qfree(v14);
  }
  if ( v28.m128i_i64[0] )
  {
    if ( v28.m128i_i64[1] )
    {
      sub_2B5F30((_QWORD *)(*(_QWORD *)v28.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL));
      *(_QWORD *)v28.m128i_i64[0] = v28.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v28.m128i_i64[0] & 3LL;
      v25 = v28.m128i_i64[0];
      v26 = (__m128i)v28.m128i_u64[0];
      *(_QWORD *)v28.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64(v26, v26);
      *(_QWORD *)v28.m128i_i64[0] |= 2uLL;
      v28.m128i_i64[1] = 0;
    }
    else
    {
      *(_QWORD *)v28.m128i_i64[0] = *(_QWORD *)v28.m128i_i64[0] & 3LL | v28.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      v22 = v28.m128i_i64[0];
      v23 = (__m128i)v28.m128i_u64[0];
      *(_QWORD *)v28.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v23, v23);
      *(_QWORD *)v28.m128i_i64[0] |= 2uLL;
    }
    if ( v28.m128i_i64[0] )
      qfree(v28.m128i_i64[0]);
  }
  return v36 - __readfsqword(0x28u);
}

