unsigned __int64 __fastcall sub_21A2C0(__int64 a1)
{
  __int64 v1; // rax
  __m128i v3; // xmm0
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  const __m128i *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i v11; // xmm0
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  const __m128i *v16; // rax
  __int64 v17; // r13
  unsigned __int64 v18; // rbx
  int v19; // r15d
  const __m128i *v20; // rax
  __int64 v21; // rcx
  const __m128i *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // [rsp+8h] [rbp-C0h]
  __int64 v31; // [rsp+8h] [rbp-C0h]
  _QWORD v32[5]; // [rsp+10h] [rbp-B8h] BYREF
  char v33; // [rsp+38h] [rbp-90h]
  __int64 v34; // [rsp+40h] [rbp-88h]
  __int128 v35; // [rsp+48h] [rbp-80h]
  __int64 v36; // [rsp+58h] [rbp-70h]
  __int128 v37; // [rsp+60h] [rbp-68h]
  const __m128i *v38; // [rsp+70h] [rbp-58h] BYREF
  __int128 v39; // [rsp+78h] [rbp-50h]
  unsigned __int64 v40; // [rsp+88h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 440);
  if ( v1 )
  {
    v3.m128i_i64[0] = 0;
    v4 = (int)v1;
    v33 = 0;
    v35 = 0;
    memset(&v32[1], 0, 32);
    v32[0] = off_4DF720;
    v34 = 0;
    v36 = 0;
    v38 = nullptr;
    v37 = 0;
    v39 = 0;
    if ( (_DWORD)v1 )
    {
      v6 = qvector_reserve((__int64)&v38, 0, (int)v1, 32);
      v7 = *((_QWORD *)&v39 + 1);
      *((_QWORD *)&v39 + 1) = 0;
      v8 = v38;
      v9 = v39 - 1;
      if ( (__int64)v39 - 1 >= 0 )
      {
        v10 = v6;
        do
        {
          v11 = _mm_loadu_si128(v8);
          v10 += 32;
          v8 += 2;
          *(__m128i *)(v10 - 32) = v11;
          v3 = _mm_loadu_si128(v8 - 1);
          *(__m128i *)(v10 - 16) = v3;
        }
        while ( v9-- != 0 );
        v8 = v38;
      }
      v30 = v6;
      qfree((__int64)v8);
      *((_QWORD *)&v39 + 1) = v7;
      v38 = (const __m128i *)v30;
      if ( (unsigned __int64)v39 < v4 )
      {
        v3.m128i_i64[0] = 0;
        v13 = v39 + 1;
        v14 = 32 * v39 + v30;
        *(_QWORD *)v14 = 0;
        *(_BYTE *)(v14 + 24) = 0;
        *(_OWORD *)(v14 + 8) = 0;
        if ( v13 < v4 )
        {
          do
          {
            v15 = v13++;
            v16 = &v38[2 * v15];
            v16->m128i_i64[0] = 0;
            v16[1].m128i_i8[8] = 0;
            *(const __m128i *)((char *)v16 + 8) = 0;
          }
          while ( v4 != v13 );
        }
      }
      *(_QWORD *)&v39 = v4;
    }
    sub_11FBB0(a1, (__int64)v32);
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( (_QWORD)v39 )
    {
      do
      {
        v20 = &v38[2 * v18];
        if ( v20->m128i_i64[0] )
        {
          if ( !v20[1].m128i_i8[8] )
          {
            v21 = *(int *)(*(_QWORD *)(v20->m128i_i64[0] + 40) + 16LL);
            v22 = &v38[2 * v21];
            if ( !v22->m128i_i64[1] && (v20->m128i_i64[1] == 1 || v22[1].m128i_i64[0] == 1) )
            {
              v28 = *(_QWORD *)(a1 + 432);
              if ( (*(_BYTE *)(v28 + v17 + 26) & 2) == 0 )
              {
                v29 = v28 + 104 * v21;
                if ( (*(_BYTE *)(v29 + 26) & 2) == 0 )
                {
                  v31 = v28 + v17;
                  if ( (unsigned int)sub_219F90(a1, v28 + v17, v29, *(double *)v3.m128i_i64) )
                  {
                    ++v19;
                    *(_DWORD *)(v31 + 24) |= 0x200000u;
                  }
                }
              }
            }
          }
        }
        ++v18;
        v17 += 104;
      }
      while ( v18 < (unsigned __int64)v39 );
      if ( v19 )
        sub_2196C0(a1);
    }
    v32[0] = off_4DF720;
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree((__int64)v38);
    }
    v23 = v36;
    if ( v36 )
    {
      v24 = v37;
      if ( (_QWORD)v37 )
      {
        v25 = 0;
        do
        {
          v26 = (__int64 *)(v23 + 24 * v25);
          v27 = *v26;
          if ( *v26 )
          {
            v26[1] = 0;
            qfree(v27);
            v23 = v36;
          }
          ++v25;
        }
        while ( v24 != v25 );
      }
      *(_QWORD *)&v37 = 0;
      qfree(v23);
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
  }
  return v40 - __readfsqword(0x28u);
}

