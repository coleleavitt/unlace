unsigned __int64 __fastcall sub_215A40(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  const __m128i *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __m128i v10; // xmm0
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  const __m128i *v15; // rax
  __int64 v16; // r13
  unsigned __int64 v17; // rbx
  int v18; // r15d
  const __m128i *v19; // rax
  __int64 v20; // rcx
  const __m128i *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // [rsp+8h] [rbp-C0h]
  __int64 v29; // [rsp+8h] [rbp-C0h]
  _QWORD v30[5]; // [rsp+10h] [rbp-B8h] BYREF
  char v31; // [rsp+38h] [rbp-90h]
  __int64 v32; // [rsp+40h] [rbp-88h]
  __int128 v33; // [rsp+48h] [rbp-80h]
  __int64 v34; // [rsp+58h] [rbp-70h]
  __int128 v35; // [rsp+60h] [rbp-68h]
  const __m128i *v36; // [rsp+70h] [rbp-58h]
  __int128 v37; // [rsp+78h] [rbp-50h]
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 440);
  if ( v1 )
  {
    v3 = (int)v1;
    v31 = 0;
    v33 = 0;
    memset(&v30[1], 0, 32);
    v30[0] = off_4BFE60;
    v32 = 0;
    v34 = 0;
    v36 = nullptr;
    v35 = 0;
    v37 = 0;
    if ( (_DWORD)v1 )
    {
      v5 = qvector_reserve();
      v6 = *((_QWORD *)&v37 + 1);
      *((_QWORD *)&v37 + 1) = 0;
      v7 = v36;
      v8 = v37 - 1;
      if ( (__int64)v37 - 1 >= 0 )
      {
        v9 = v5;
        do
        {
          v10 = _mm_loadu_si128(v7);
          v9 += 32;
          v7 += 2;
          *(__m128i *)(v9 - 32) = v10;
          *(__m128i *)(v9 - 16) = _mm_loadu_si128(v7 - 1);
        }
        while ( v8-- != 0 );
      }
      v28 = v5;
      qfree();
      *((_QWORD *)&v37 + 1) = v6;
      v36 = (const __m128i *)v28;
      if ( (unsigned __int64)v37 < v3 )
      {
        v12 = v37 + 1;
        v13 = 32 * v37 + v28;
        *(_QWORD *)v13 = 0;
        *(_BYTE *)(v13 + 24) = 0;
        *(_OWORD *)(v13 + 8) = 0;
        if ( v12 < v3 )
        {
          do
          {
            v14 = v12++;
            v15 = &v36[2 * v14];
            v15->m128i_i64[0] = 0;
            v15[1].m128i_i8[8] = 0;
            *(const __m128i *)((char *)v15 + 8) = 0;
          }
          while ( v3 != v12 );
        }
      }
      *(_QWORD *)&v37 = v3;
    }
    sub_11B9B0(a1, (__int64)v30);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( (_QWORD)v37 )
    {
      do
      {
        v19 = &v36[2 * v17];
        if ( v19->m128i_i64[0] )
        {
          if ( !v19[1].m128i_i8[8] )
          {
            v20 = *(int *)(*(_QWORD *)(v19->m128i_i64[0] + 40) + 16LL);
            v21 = &v36[2 * v20];
            if ( !v21->m128i_i64[1] && (v19->m128i_i64[1] == 1 || v21[1].m128i_i64[0] == 1) )
            {
              v26 = *(_QWORD *)(a1 + 432);
              if ( (*(_BYTE *)(v26 + v16 + 26) & 2) == 0 )
              {
                v27 = v26 + 104 * v20;
                if ( (*(_BYTE *)(v27 + 26) & 2) == 0 )
                {
                  v29 = v26 + v16;
                  if ( (unsigned int)sub_215710(a1, v26 + v16, v27) )
                  {
                    ++v18;
                    *(_DWORD *)(v29 + 24) |= 0x200000u;
                  }
                }
              }
            }
          }
        }
        ++v17;
        v16 += 104;
      }
      while ( v17 < (unsigned __int64)v37 );
      if ( v18 )
        sub_214E40(a1);
    }
    v30[0] = off_4BFE60;
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree();
    }
    v22 = v34;
    if ( v34 )
    {
      v23 = v35;
      if ( (_QWORD)v35 )
      {
        v24 = 0;
        do
        {
          v25 = (_QWORD *)(v22 + 24 * v24);
          if ( *v25 )
          {
            v25[1] = 0;
            qfree();
            v22 = v34;
          }
          ++v24;
        }
        while ( v23 != v24 );
      }
      *(_QWORD *)&v35 = 0;
      qfree();
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree();
    }
  }
  return v38 - __readfsqword(0x28u);
}

