__int64 __fastcall sub_7EA0(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebx
  __m128i *v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  _DWORD *v14; // rax
  __int32 v15; // edx
  void *v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __m128i *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rsi
  const __m128i *v26; // rdi
  __int64 v27; // rcx
  __m128i v28; // xmm0
  bool v29; // cf
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rsi
  const __m128i *v35; // rdi
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r12
  const __m128i *v41; // rdi
  __int64 v42; // rbp
  __int64 v43; // rcx
  __int64 v44; // rdx
  __m128i si128; // xmm0
  unsigned __int64 v46; // [rsp+8h] [rbp-140h]
  unsigned __int64 v47; // [rsp+8h] [rbp-140h]
  unsigned __int64 v48; // [rsp+8h] [rbp-140h]
  unsigned __int64 v49; // [rsp+8h] [rbp-140h]
  __int64 v50; // [rsp+18h] [rbp-130h]
  _BYTE *v51; // [rsp+20h] [rbp-128h] BYREF
  __int128 v52; // [rsp+28h] [rbp-120h]
  __m128i v53; // [rsp+40h] [rbp-108h] BYREF
  __m128i v54; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v55; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v56; // [rsp+70h] [rbp-D8h] BYREF
  __m128i v57; // [rsp+80h] [rbp-C8h] BYREF
  __m128i v58; // [rsp+90h] [rbp-B8h] BYREF
  __m128i v59; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i v60; // [rsp+B0h] [rbp-98h] BYREF
  __m128i v61; // [rsp+C0h] [rbp-88h] BYREF
  __m128i v62; // [rsp+D0h] [rbp-78h] BYREF
  __m128i v63; // [rsp+E0h] [rbp-68h] BYREF
  __m128i v64; // [rsp+F0h] [rbp-58h] BYREF
  unsigned __int64 v65; // [rsp+108h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v65 = __readfsqword(0x28u);
  v3 = v1 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, a1 + 68)) == 0 )
    sub_3890((__int64)"global section: couldn't read global count");
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  create_data(v6, 0, v5, -1);
  set_cmt(*(_QWORD *)(a1 + 40), "globals count", 0);
  v7 = *(_QWORD *)(a1 + 232);
  v50 = a1 + 216;
  v8 = *(_DWORD *)(a1 + 68);
  v9 = (unsigned int)(*(_DWORD *)(a1 + 72) + v8);
  if ( v7 < v9 )
  {
    v38 = qvector_reserve(v50, 0, v9, 96);
    v39 = *(_QWORD *)(a1 + 224);
    v40 = *(_QWORD *)(a1 + 232);
    *(_QWORD *)(a1 + 232) = v7;
    v41 = *(const __m128i **)(a1 + 216);
    v42 = v38;
    v43 = v39 - 1;
    if ( v43 >= 0 )
    {
      v44 = v38;
      do
      {
        si128 = _mm_load_si128(v41);
        v44 += 96;
        v41 += 6;
        *(__m128i *)(v44 - 96) = si128;
        *(__m128i *)(v44 - 80) = _mm_load_si128(v41 - 5);
        *(__m128i *)(v44 - 64) = _mm_load_si128(v41 - 4);
        *(__m128i *)(v44 - 48) = _mm_load_si128(v41 - 3);
        *(__m128i *)(v44 - 32) = _mm_load_si128(v41 - 2);
        *(__m128i *)(v44 - 16) = _mm_load_si128(v41 - 1);
        v29 = v43-- == 0;
      }
      while ( !v29 );
      v41 = *(const __m128i **)(a1 + 216);
    }
    qfree(v41);
    *(_QWORD *)(a1 + 216) = v42;
    v8 = *(_DWORD *)(a1 + 68);
    *(_QWORD *)(a1 + 232) = v40;
  }
  if ( v8 )
  {
    v10 = 0;
    do
    {
      v13 = *(_DWORD *)(a1 + 72);
      v56.m128i_i8[0] = 0;
      v58.m128i_i8[0] = 0;
      v53.m128i_i32[0] = v10 + v13;
      sub_4890((_QWORD *)a1, &v54.m128i_u32[2], (unsigned __int8 *)&v55);
      v53.m128i_i64[1] = *(_QWORD *)(a1 + 24);
      auto_mark_range(v53.m128i_i64[1], v53.m128i_i64[1] + 1, 20);
      v52 = 0;
      v51 = nullptr;
      v14 = (_DWORD *)qvector_reserve(&v51, 0, 8, 1);
      v51 = v14;
      *(_QWORD *)&v52 = 8;
      *v14 = 1651469415;
      *(_DWORD *)((char *)v14 + 3) = 1600938338;
      v15 = v53.m128i_i32[0];
      v51[7] = 0;
      sub_4EE0((__int64 *)&v51, (__int64)"%u", v15);
      v16 = &unk_10F58;
      if ( (_QWORD)v52 )
        v16 = v51;
      set_name(*(_QWORD *)(a1 + 24), v16, 0);
      sub_4A00((_QWORD *)a1, &v56, 0);
      v17 = *(_QWORD *)(a1 + 216);
      v18 = *(_QWORD *)(a1 + 232);
      v54.m128i_i64[0] = *(_QWORD *)(a1 + 24);
      v19 = *(_QWORD *)(a1 + 224);
      v20 = v19 + 1;
      if ( (unsigned __int64)&v53 < v17 || (unsigned __int64)&v53 >= v17 + 96 * v18 )
      {
        if ( v18 < v20 )
        {
          v46 = v18;
          v22 = qvector_reserve(v50, 0, v19 + 1, 96);
          v23 = *(_QWORD *)(a1 + 224);
          v24 = v22;
          v25 = *(_QWORD *)(a1 + 232);
          v26 = *(const __m128i **)(a1 + 216);
          *(_QWORD *)(a1 + 232) = v46;
          v27 = v23 - 1;
          if ( v27 >= 0 )
          {
            do
            {
              v28 = _mm_load_si128(v26);
              v22 += 96;
              v26 += 6;
              *(__m128i *)(v22 - 96) = v28;
              *(__m128i *)(v22 - 80) = _mm_load_si128(v26 - 5);
              *(__m128i *)(v22 - 64) = _mm_load_si128(v26 - 4);
              *(__m128i *)(v22 - 48) = _mm_load_si128(v26 - 3);
              *(__m128i *)(v22 - 32) = _mm_load_si128(v26 - 2);
              *(__m128i *)(v22 - 16) = _mm_load_si128(v26 - 1);
              v29 = v27-- == 0;
            }
            while ( !v29 );
            v26 = *(const __m128i **)(a1 + 216);
          }
          v47 = v24;
          qfree(v26);
          v17 = v47;
          v19 = *(_QWORD *)(a1 + 224);
          *(_QWORD *)(a1 + 216) = v47;
          *(_QWORD *)(a1 + 232) = v25;
        }
        v21 = (__m128i *)(v17 + 96 * v19);
        *v21 = _mm_load_si128(&v53);
        v21[1] = _mm_load_si128(&v54);
        v21[2] = _mm_load_si128(&v55);
        v21[3] = _mm_load_si128(&v56);
        v21[4] = _mm_load_si128(&v57);
        v21[5] = _mm_load_si128(&v58);
      }
      else
      {
        v59 = _mm_load_si128(&v53);
        v60 = _mm_load_si128(&v54);
        v61 = _mm_load_si128(&v55);
        v62 = _mm_load_si128(&v56);
        v63 = _mm_load_si128(&v57);
        v64 = _mm_load_si128(&v58);
        if ( v18 < v20 )
        {
          v48 = v18;
          v31 = qvector_reserve(v50, 0, v19 + 1, 96);
          v32 = *(_QWORD *)(a1 + 224);
          v33 = v31;
          v34 = *(_QWORD *)(a1 + 232);
          v35 = *(const __m128i **)(a1 + 216);
          *(_QWORD *)(a1 + 232) = v48;
          v36 = v32 - 1;
          if ( v36 >= 0 )
          {
            do
            {
              v37 = _mm_load_si128(v35);
              v31 += 96;
              v35 += 6;
              *(__m128i *)(v31 - 96) = v37;
              *(__m128i *)(v31 - 80) = _mm_load_si128(v35 - 5);
              *(__m128i *)(v31 - 64) = _mm_load_si128(v35 - 4);
              *(__m128i *)(v31 - 48) = _mm_load_si128(v35 - 3);
              *(__m128i *)(v31 - 32) = _mm_load_si128(v35 - 2);
              *(__m128i *)(v31 - 16) = _mm_load_si128(v35 - 1);
              v29 = v36-- == 0;
            }
            while ( !v29 );
            v35 = *(const __m128i **)(a1 + 216);
          }
          v49 = v33;
          qfree(v35);
          v17 = v49;
          v19 = *(_QWORD *)(a1 + 224);
          *(_QWORD *)(a1 + 216) = v49;
          *(_QWORD *)(a1 + 232) = v34;
        }
        v11 = (__m128i *)(v17 + 96 * v19);
        *v11 = _mm_load_si128(&v59);
        v11[1] = _mm_load_si128(&v60);
        v11[2] = _mm_load_si128(&v61);
        v11[3] = _mm_load_si128(&v62);
        v11[4] = _mm_load_si128(&v63);
        v11[5] = _mm_load_si128(&v64);
      }
      v12 = (__int64)v51;
      ++*(_QWORD *)(a1 + 224);
      if ( v12 )
      {
        *(_QWORD *)&v52 = 0;
        qfree(v12);
      }
      ++v10;
    }
    while ( v10 < *(_DWORD *)(a1 + 68) );
  }
  return 1;
}

