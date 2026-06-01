unsigned __int64 __fastcall sub_1EAD40(_QWORD *a1, int a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // rsi
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rbx
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  char v24; // al
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rbp
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-118h] BYREF
  __int64 v38; // [rsp+10h] [rbp-108h]
  _QWORD v39[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v40; // [rsp+30h] [rbp-E8h]
  __m128i v41; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v42; // [rsp+48h] [rbp-D0h]
  __m128i v43; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v44; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+70h] [rbp-A8h]
  char v46; // [rsp+78h] [rbp-A0h]
  __int64 v47[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v48; // [rsp+90h] [rbp-88h]
  __m128i v49; // [rsp+98h] [rbp-80h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-70h]
  __m128i v51; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v52; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v53; // [rsp+D0h] [rbp-48h]
  char v54; // [rsp+D8h] [rbp-40h]
  unsigned __int64 v55; // [rsp+E8h] [rbp-30h]

  v7 = (_QWORD *)a1[7];
  v55 = __readfsqword(0x28u);
  v9 = a1[8];
  LODWORD(v38) = a2;
  BYTE4(v38) = a5;
  v10 = (__int64)&v7[12 * v9];
  if ( (_QWORD *)v10 != v7 )
  {
    v11 = v7;
    do
    {
      if ( a3 == v11[8] && a4 == v11[9] && ((v38 ^ v11[10]) & 0xFFFFFFFFFFLL) == 0 )
      {
        if ( !under_debugger )
          sub_37B760(52933);
        BUG();
      }
      v11 += 12;
    }
    while ( v11 != (_QWORD *)v10 );
  }
  v37.m128i_i64[1] = a4;
  v37.m128i_i64[0] = a3;
  v12 = a1[9];
  v41 = 0;
  v43 = 0;
  v13 = _mm_load_si128(&v37);
  v39[0] = 0;
  v39[1] = 0;
  v40 = 0;
  v42 = 0;
  v45 = v38;
  v46 = 0;
  v44 = v13;
  if ( v39 < v7 || v39 >= &v7[12 * v12] )
  {
    if ( v12 < v9 + 1 )
    {
      v34 = qvector_reserve();
      v35 = a1[8];
      a1[7] = v34;
      v10 = v34 + 96 * v35;
    }
    sub_5DA80((__int64 *)v10, (__int64)v39);
    v29 = _mm_loadu_si128(&v41);
    v30 = v40;
    v40 = 0;
    *(__m128i *)(v10 + 24) = v29;
    *(_QWORD *)(v10 + 16) = v30;
    v41 = 0;
    v31 = _mm_load_si128(&v43);
    *(_QWORD *)(v10 + 40) = v42;
    *(__m128i *)(v10 + 48) = v31;
    v32 = _mm_load_si128(&v44);
    *(_QWORD *)(v10 + 80) = v45;
    LOBYTE(v30) = v46;
    *(__m128i *)(v10 + 64) = v32;
    *(_BYTE *)(v10 + 88) = v30;
    ++a1[8];
  }
  else
  {
    sub_5DA80(v47, (__int64)v39);
    v14 = v40;
    v15 = _mm_loadu_si128(&v41);
    v40 = 0;
    v16 = _mm_load_si128(&v43);
    v17 = a1[7];
    v48 = v14;
    v49 = v15;
    v50 = v42;
    v41 = 0;
    v53 = v45;
    v43 = 0;
    v18 = _mm_load_si128(&v44);
    v54 = v46;
    v19 = a1[8];
    v42 = 0;
    v51 = v16;
    v52 = v18;
    if ( a1[9] < (unsigned __int64)(v19 + 1) )
    {
      v36 = qvector_reserve();
      a1[7] = v36;
      v17 = v36;
      v19 = a1[8];
    }
    v20 = v17 + 96 * v19;
    sub_5DA80((__int64 *)v20, (__int64)v47);
    v21 = _mm_loadu_si128(&v49);
    *(_QWORD *)(v20 + 16) = v48;
    *(__m128i *)(v20 + 24) = v21;
    v22 = _mm_load_si128(&v51);
    *(_QWORD *)(v20 + 40) = v50;
    *(__m128i *)(v20 + 48) = v22;
    v23 = _mm_load_si128(&v52);
    *(_QWORD *)(v20 + 80) = v53;
    v24 = v54;
    *(__m128i *)(v20 + 64) = v23;
    *(_BYTE *)(v20 + 88) = v24;
    qfree();
    v25 = v42;
    ++a1[8];
    if ( v25 )
    {
      v26 = v43.m128i_i64[0];
      if ( v43.m128i_i64[0] )
      {
        v27 = 0;
        do
        {
          v28 = v25 + 40 * v27;
          if ( *(_QWORD *)(v28 + 16) )
          {
            *(_QWORD *)(v28 + 24) = 0;
            qfree();
          }
          ++v27;
          qfree();
          v25 = v42;
        }
        while ( v26 != v27 );
      }
      v43.m128i_i64[0] = 0;
      qfree();
    }
  }
  if ( v40 )
  {
    v41.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v55 - __readfsqword(0x28u);
}

