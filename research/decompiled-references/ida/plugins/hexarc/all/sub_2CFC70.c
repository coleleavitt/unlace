unsigned __int64 __fastcall sub_2CFC70(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  const __m128i *v3; // r15
  char v4; // r14
  bool (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  const __m128i *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // [rsp+0h] [rbp-A8h]
  __m128i v24; // [rsp+10h] [rbp-98h] BYREF
  const __m128i *v25[2]; // [rsp+20h] [rbp-88h] BYREF
  char v26; // [rsp+30h] [rbp-78h]
  __int64 *v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+40h] [rbp-68h]
  __int64 v29; // [rsp+48h] [rbp-60h] BYREF
  __int128 v30; // [rsp+50h] [rbp-58h]
  __m128i *v31; // [rsp+60h] [rbp-48h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  switch_dbctx();
  v24 = 0u;
  v1 = a1[5];
  v2 = v1 + 264LL * a1[6];
  if ( v2 != v1 )
  {
    while ( 1 )
    {
      v5 = **(bool (__fastcall ***)(__int64))v1;
      if ( v5 != sub_2A7CC0 )
        break;
      if ( *(_DWORD *)(v1 + 120) == *(_DWORD *)(v1 + 248) )
      {
        v3 = (const __m128i *)(v1 + 8);
        if ( (unsigned int)sub_1310E0(v1 + 8, v1 + 136) )
          goto LABEL_4;
        v1 += 264;
        if ( v2 == v1 )
          goto LABEL_10;
      }
      else
      {
LABEL_3:
        v3 = (const __m128i *)(v1 + 8);
LABEL_4:
        v4 = *(_BYTE *)(v1 + 128);
        v25[0] = v3;
        *(_BYTE *)(sub_2CF760(&v24, (__int64)v3, v25) + 144) = v4;
LABEL_5:
        v1 += 264;
        if ( v2 == v1 )
          goto LABEL_10;
      }
    }
    if ( !v5(v1) )
      goto LABEL_5;
    goto LABEL_3;
  }
LABEL_10:
  v6 = a1[10];
  v7 = j__qalloc_or_throw();
  v8 = sub_2590D0(0);
  sub_32F980(v7, v8);
  v9 = *(const __m128i **)(v7 + 40);
  v26 = 73;
  v28 = v7;
  v25[1] = v9;
  v27 = &v29;
  v25[0] = (const __m128i *)&off_4AD990;
  v29 = 0;
  v31 = &v24;
  v30 = 0;
  *(_QWORD *)(v7 + 40) = v6;
  sub_2AEE80(a1[8], (__int64)v25);
  v25[0] = (const __m128i *)&off_4AD990;
  if ( v28 )
  {
    sub_7DBD0(v28);
    j__qfree();
  }
  v31 = nullptr;
  v10 = v29;
  if ( v29 )
  {
    v23 = v30;
    if ( (_QWORD)v30 )
    {
      v11 = 0;
      do
      {
        v12 = (__int64 *)(v10 + 24 * v11);
        v13 = *v12;
        if ( *v12 )
        {
          v14 = v12[1];
          if ( v14 )
          {
            v15 = 0;
            v16 = 0;
            do
            {
              v17 = v13 + v15;
              ++v16;
              v15 += 112;
              sub_1166E0(v17 + 88);
              sub_1166E0(v17 + 72);
              sub_1166E0(v17 + 56);
              v13 = *v12;
            }
            while ( v14 != v16 );
          }
          v12[1] = 0;
          qfree();
          v10 = v29;
        }
        ++v11;
      }
      while ( v23 != v11 );
    }
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( v24.m128i_i64[0] )
  {
    if ( v24.m128i_i64[1] )
    {
      sub_2AEBB0((_QWORD *)(*(_QWORD *)v24.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL));
      *(_QWORD *)v24.m128i_i64[0] = v24.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v24.m128i_i64[0] & 3LL;
      v21 = v24.m128i_i64[0];
      v22 = (__m128i)v24.m128i_u64[0];
      *(_QWORD *)v24.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v22, v22);
      *(_QWORD *)v24.m128i_i64[0] |= 2uLL;
      v24.m128i_i64[1] = 0;
    }
    else
    {
      *(_QWORD *)v24.m128i_i64[0] = *(_QWORD *)v24.m128i_i64[0] & 3LL | v24.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      v18 = v24.m128i_i64[0];
      v19 = (__m128i)v24.m128i_u64[0];
      *(_QWORD *)v24.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v19, v19);
      *(_QWORD *)v24.m128i_i64[0] |= 2uLL;
    }
    if ( v24.m128i_i64[0] )
      qfree();
  }
  return v32 - __readfsqword(0x28u);
}

