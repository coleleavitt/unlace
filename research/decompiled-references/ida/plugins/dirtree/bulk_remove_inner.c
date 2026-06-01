__int64 __fastcall sub_77C830(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  char *v5; // rdi
  __int64 v6; // rcx
  __m128i v7; // xmm1
  void *v8; // rax
  __m128i v9; // xmm0
  char *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // zf
  __int32 v18; // r15d
  __int64 v19; // rax
  __m128i *v20; // rax
  __int64 *v21; // r9
  __int64 v22; // rbp
  __int8 v23; // dl
  unsigned __int64 *v24; // rbx
  unsigned __int64 v25; // rdi
  __m128i v26; // xmm0
  __m128i *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  char *v31; // rbp
  __int8 v32; // al
  __int8 v33; // r12
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __int8 v37; // r15
  char *v38; // rsi
  __int32 v39; // ebp
  __m128i *v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rsi
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int8 v45; // r10
  char v46; // r11
  __m128i v47; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v48; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+27h] [rbp-A1h]
  __int8 v50; // [rsp+2Fh] [rbp-99h]
  void *v51; // [rsp+30h] [rbp-98h] BYREF
  __m128i v52; // [rsp+38h] [rbp-90h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __int128 v54; // [rsp+58h] [rbp-70h]
  __m128i v55; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v56; // [rsp+80h] [rbp-48h]
  unsigned __int64 v57; // [rsp+88h] [rbp-40h]

  v47.m128i_i64[1] = a3;
  v4 = a2[1];
  v57 = __readfsqword(0x28u);
  v52 = 0;
  v51 = 0;
  ptr = 0;
  v54 = 0;
  if ( v4 )
  {
    v47.m128i_i64[0] = (__int64)&ptr;
    v13 = (char *)qvector_reserve(&ptr, 0, v4, 24);
    v17 = a2[1] == 0;
    ptr = v13;
    v5 = v13;
    if ( v17 )
    {
      v29 = v54 - 1;
    }
    else
    {
      v18 = 0;
      v19 = 0;
      do
      {
        v49 = sub_775F70(a1, *a2 + 16 * v19, v14, v15, v16, *a2 + 16 * v19);
        v22 = v49;
        v50 = v23;
        if ( v49 == -1 )
        {
          v46 = 2;
          v24 = (unsigned __int64 *)&v51;
        }
        else
        {
          v24 = (unsigned __int64 *)v47.m128i_i64[0];
          v46 = 0;
        }
        v43 = *v21;
        BYTE1(v56) = v46;
        v42 = *v24;
        v14 = v24[2];
        HIDWORD(v56) = v18;
        v55.m128i_i64[1] = v49;
        v45 = v50;
        v44 = v24[1];
        v55.m128i_i64[0] = v43;
        LOBYTE(v56) = v50;
        v25 = v44 + 1;
        if ( (unsigned __int64)&v55 < v42 || (v15 = v42 + 24 * v14, (unsigned __int64)&v55 >= v15) )
        {
          if ( v14 < v25 )
          {
            v28 = qvector_reserve(v24, v42, v44 + 1, 24);
            *v24 = v28;
            v42 = v28;
            v44 = v24[1];
          }
          v26 = _mm_load_si128(&v55);
          v14 = v56;
          v27 = (__m128i *)(v42 + 24 * v44);
          v27[1].m128i_i64[0] = v56;
          *v27 = v26;
        }
        else
        {
          if ( v14 < v25 )
          {
            v48.m128i_i8[15] = v50;
            v48.m128i_i8[14] = v46;
            v48.m128i_i64[0] = v43;
            v41 = qvector_reserve(v24, v42, v44 + 1, 24);
            *v24 = v41;
            v42 = v41;
            v43 = v48.m128i_i64[0];
            v44 = v24[1];
            v45 = v48.m128i_i8[15];
            v46 = v48.m128i_i8[14];
          }
          v20 = (__m128i *)(v42 + 24 * v44);
          v20[1].m128i_i8[0] = v45;
          v20[1].m128i_i8[1] = v46;
          v20[1].m128i_i32[1] = v18;
          *v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v43, (__m128i)(unsigned __int64)v22);
        }
        ++v18;
        ++v24[1];
        v19 = v18;
      }
      while ( (unsigned __int64)v18 < a2[1] );
      v5 = (char *)ptr;
      v29 = v54 - 1;
    }
    if ( v29 >= 0 )
    {
      do
      {
        v31 = &v5[24 * v29];
        if ( !v31[17] )
        {
          v32 = sub_77C790(a1, *(_QWORD *)v31, v31 + 8);
          v31[17] = v32;
          v33 = v32;
          if ( v32 )
          {
            v34 = v52.m128i_i64[0];
            v35 = _mm_loadl_epi64((const __m128i *)v31);
            v36 = _mm_loadl_epi64((const __m128i *)(v31 + 8));
            v37 = v31[16];
            v38 = (char *)v51;
            v39 = *((_DWORD *)v31 + 5);
            if ( v52.m128i_i64[1] < (unsigned __int64)(v52.m128i_i64[0] + 1) )
            {
              v48.m128i_i64[0] = v36.m128i_i64[0];
              v47.m128i_i64[0] = v35.m128i_i64[0];
              v51 = (void *)qvector_reserve(&v51, v51, v52.m128i_i64[0] + 1, 24);
              v34 = v52.m128i_i64[0];
              v38 = (char *)v51;
              v36 = _mm_loadl_epi64(&v48);
              v35 = _mm_loadl_epi64(&v47);
            }
            v40 = (__m128i *)&v38[24 * v34];
            *v40 = _mm_unpacklo_epi64(v35, v36);
            v40[1].m128i_i8[0] = v37;
            ++v52.m128i_i64[0];
            v40[1].m128i_i8[1] = v33;
            v40[1].m128i_i32[1] = v39;
          }
          v5 = (char *)ptr;
        }
      }
      while ( v29-- != 0 );
    }
    if ( !v47.m128i_i64[1] )
      goto LABEL_4;
  }
  else
  {
    v5 = 0;
    if ( !a3 )
      goto LABEL_6;
  }
  v6 = v47.m128i_i64[1];
  v7 = _mm_loadu_si128(&v52);
  v8 = *(void **)v47.m128i_i64[1];
  v9 = _mm_loadu_si128((const __m128i *)(v47.m128i_i64[1] + 8));
  *(_QWORD *)v47.m128i_i64[1] = v51;
  *(__m128i *)(v6 + 8) = v7;
  v51 = v8;
  v52 = v9;
LABEL_4:
  if ( v5 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v5);
  }
LABEL_6:
  if ( v51 )
  {
    v52.m128i_i64[0] = 0;
    qfree(v51);
  }
  return 0;
}
