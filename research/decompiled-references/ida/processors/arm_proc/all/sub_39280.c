__int64 __fastcall sub_39280(__int64 a1, __int64 *a2, const __m128i *a3, _DWORD *a4)
{
  __m128i v7; // xmm4
  size_t v8; // r14
  __m128i v9; // xmm3
  __m128i v10; // xmm2
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rbx
  void *v15; // r12
  __int64 v16; // rcx
  __m128i si128; // xmm0
  void *v18; // rdi
  __m128i v19; // xmm4
  __m128i v20; // xmm3
  __m128i v21; // xmm2
  __m128i v22; // xmm1
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 result; // rax
  unsigned __int64 v27; // r12
  _DWORD *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  void *v33; // rax
  void *v34; // rax
  const void *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  const void *v38; // r14
  char *v39; // rdi
  const char *v40; // r12
  char *v41; // rax
  char *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v46; // [rsp+10h] [rbp-238h]
  __int64 v47; // [rsp+18h] [rbp-230h]
  __int64 v48; // [rsp+18h] [rbp-230h]
  __m128i v49; // [rsp+20h] [rbp-228h] BYREF
  __m128i v50; // [rsp+30h] [rbp-218h] BYREF
  __m128i v51; // [rsp+40h] [rbp-208h] BYREF
  __m128i v52; // [rsp+50h] [rbp-1F8h] BYREF
  __m128i v53; // [rsp+60h] [rbp-1E8h] BYREF
  void *src; // [rsp+70h] [rbp-1D8h]
  __m128i v55; // [rsp+90h] [rbp-1B8h] BYREF
  __m128i v56; // [rsp+A0h] [rbp-1A8h] BYREF
  __m128i v57; // [rsp+B0h] [rbp-198h] BYREF
  __m128i v58; // [rsp+C0h] [rbp-188h] BYREF
  __m128i v59[10]; // [rsp+D0h] [rbp-178h] BYREF
  _OWORD v60[5]; // [rsp+170h] [rbp-D8h]
  void *v61; // [rsp+1C0h] [rbp-88h]
  __int128 v62; // [rsp+1C8h] [rbp-80h]
  char v63[40]; // [rsp+1E0h] [rbp-68h] BYREF
  unsigned __int64 v64; // [rsp+208h] [rbp-40h]

  v7 = _mm_loadu_si128(a3);
  v8 = a3[5].m128i_u64[1];
  v9 = _mm_loadu_si128(a3 + 1);
  v10 = _mm_loadu_si128(a3 + 2);
  v11 = _mm_loadu_si128(a3 + 3);
  v12 = _mm_loadu_si128(a3 + 4);
  v64 = __readfsqword(0x28u);
  v49 = v7;
  src = nullptr;
  v50 = v9;
  v51 = v10;
  v52 = v11;
  v53 = v12;
  if ( v8 )
  {
    v34 = (void *)qalloc_or_throw();
    v35 = (const void *)a3[5].m128i_i64[0];
    src = v34;
    memcpy(v34, v35, v8);
    v36 = a2[1];
    v14 = *a2;
    v55 = _mm_load_si128(&v49);
    v56 = _mm_load_si128(&v50);
    v48 = 104 * v36;
    v57 = _mm_load_si128(&v51);
    v46 = v14 + 104 * v36;
    v58 = _mm_load_si128(&v52);
    v59[0] = _mm_load_si128(&v53);
    v15 = (void *)qalloc_or_throw();
    memcpy(v15, src, v8);
    v16 = v48;
  }
  else
  {
    v13 = a2[1];
    v14 = *a2;
    v55 = v7;
    v15 = nullptr;
    v56 = v9;
    v57 = v10;
    v58 = v11;
    v16 = 104 * v13;
    v59[0] = v12;
    v46 = v14 + 104 * v13;
  }
  si128 = _mm_load_si128(v59);
  v18 = nullptr;
  v19 = _mm_load_si128(&v55);
  v61 = nullptr;
  v20 = _mm_load_si128(&v56);
  v21 = _mm_load_si128(&v57);
  v22 = _mm_load_si128(&v58);
  v60[4] = si128;
  v59[7] = si128;
  v60[0] = v19;
  v60[1] = v20;
  v60[2] = v21;
  v60[3] = v22;
  v59[3] = v19;
  v59[4] = v20;
  v59[5] = v21;
  v59[6] = v22;
  v62 = 0;
  if ( v8 )
  {
    v47 = v16;
    v61 = (void *)qalloc_or_throw();
    *((_QWORD *)&v62 + 1) = v8;
    v33 = memcpy(v61, v15, v8);
    *(_QWORD *)&v62 = v8;
    v16 = v47;
    v18 = v33;
  }
  v23 = 0x4EC4EC4EC4EC4EC5LL * (v16 >> 3);
  if ( v23 >> 2 > 0 )
  {
    v24 = v14 + 416 * (v23 >> 2);
    do
    {
      v25 = 0;
      while ( (*(_QWORD *)(v14 + v25 * 16 + 8) & *(_QWORD *)&v60[v25]) == *(_QWORD *)(v14 + v25 * 16) )
      {
        if ( ++v25 == 5 )
          goto LABEL_10;
      }
      v29 = 0;
      while ( (*(_QWORD *)(v14 + v29 * 16 + 112) & *(_QWORD *)&v60[v29]) == *(_QWORD *)(v14 + v29 * 16 + 104) )
      {
        if ( ++v29 == 5 )
        {
          v14 += 104;
          goto LABEL_10;
        }
      }
      v30 = 0;
      while ( (*(_QWORD *)(v14 + v30 * 16 + 216) & *(_QWORD *)&v60[v30]) == *(_QWORD *)(v14 + v30 * 16 + 208) )
      {
        if ( ++v30 == 5 )
        {
          v14 += 208;
          goto LABEL_10;
        }
      }
      v31 = 0;
      while ( (*(_QWORD *)(v14 + v31 * 16 + 320) & *(_QWORD *)&v60[v31]) == *(_QWORD *)(v14 + v31 * 16 + 312) )
      {
        if ( ++v31 == 5 )
        {
          v14 += 312;
          goto LABEL_10;
        }
      }
      v14 += 416;
    }
    while ( v14 != v24 );
    v23 = 0x4EC4EC4EC4EC4EC5LL * ((v46 - v14) >> 3);
  }
  switch ( v23 )
  {
    case 2LL:
      goto LABEL_47;
    case 3LL:
      v43 = 0;
      while ( (*(_QWORD *)(v14 + v43 * 16 + 8) & *(_QWORD *)&v60[v43]) == *(_QWORD *)(v14 + v43 * 16) )
      {
        if ( ++v43 == 5 )
          goto LABEL_10;
      }
      v14 += 104;
LABEL_47:
      v37 = 0;
      while ( (*(_QWORD *)(v14 + v37 * 16 + 8) & *(_QWORD *)&v60[v37]) == *(_QWORD *)(v14 + v37 * 16) )
      {
        if ( ++v37 == 5 )
          goto LABEL_10;
      }
      v14 += 104;
      goto LABEL_42;
    case 1LL:
LABEL_42:
      v32 = 0;
      while ( (*(_QWORD *)(v14 + v32 * 16 + 8) & *(_QWORD *)&v60[v32]) == *(_QWORD *)(v14 + v32 * 16) )
      {
        if ( ++v32 == 5 )
          goto LABEL_10;
      }
      break;
  }
  v14 = v46;
LABEL_10:
  if ( v18 )
    qfree();
  if ( v15 )
    qfree();
  if ( src )
    qfree();
  result = 0;
  if ( v14 != *a2 + 104 * a2[1] )
  {
    if ( !a1 )
      goto LABEL_21;
    if ( a1 != v14 + 80 )
    {
      v27 = *(_QWORD *)(v14 + 88);
      if ( v27 <= 1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        goto LABEL_21;
      }
      v38 = *(const void **)(v14 + 80);
      v39 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v27 )
      {
        v44 = qvector_reserve();
        *(_QWORD *)a1 = v44;
        v39 = (char *)v44;
      }
      *(_QWORD *)(a1 + 8) = v27;
      memmove(v39, v38, v27 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v27 - 1) = 0;
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      v40 = *(const char **)a1;
      v41 = strchr(*(const char **)a1, 60);
      if ( v41 )
      {
        if ( v41 - v40 != -1 )
        {
          v42 = strstr(v40, "<m>");
          if ( v42 && v42 - v40 != -1 )
          {
            sub_386E0((__int64)a3, v14);
            qsnprintf();
            sub_38F90(a1, "<m>", v63);
            v28 = a4;
            if ( !a4 )
              return 1;
            goto LABEL_22;
          }
          qsnprintf();
          sub_38F90(a1, "<op2>", v63);
          qsnprintf();
          sub_38F90(a1, "<Cm>", v63);
          qsnprintf();
          sub_38F90(a1, "<Cn>", v63);
          qsnprintf();
          sub_38F90(a1, "<op1>", v63);
        }
      }
    }
LABEL_21:
    v28 = a4;
    if ( !a4 )
      return 1;
LABEL_22:
    *v28 = sub_386E0((__int64)a3, v14);
    return 1;
  }
  return result;
}

