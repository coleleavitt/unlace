__int64 __fastcall sub_192960(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v11; // rbp
  _DWORD *v12; // rsi
  __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  int v17; // edx
  int v18; // eax
  __int64 result; // rax
  int v20; // eax
  __int64 v21; // r10
  _QWORD *v22; // rdx
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  char v27; // r11
  _DWORD *v28; // r10
  __int64 v29; // rsi
  _DWORD *v30; // rax
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r13
  __m128i v40; // xmm1
  __m128i v41; // xmm2
  __int64 v42; // r10
  __int64 v43; // rsi
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rdx
  int v48; // ebx
  _DWORD *v49; // r9
  __int64 v50; // rdi
  _DWORD *v51; // rdx
  int v52; // edi
  __int64 v53; // rdx
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  char v56; // r13
  char v57; // al
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 *v62; // r15
  __int64 v63; // xmm1_8
  __int64 v64; // rcx
  __int32 v65; // r8d
  __int64 v66; // xmm2_8
  __int64 v67; // r10
  __int32 v68; // r13d
  __int64 v69; // rbp
  __int64 v70; // r12
  __int64 *v71; // rbx
  __int64 v72; // r15
  __int64 v73; // rsi
  __m128i v74; // xmm0
  __m128i v75; // xmm0
  size_t v77; // r13
  void *v78; // [rsp+8h] [rbp-80h]
  __m128i v79; // [rsp+10h] [rbp-78h] BYREF
  __int64 v80; // [rsp+20h] [rbp-68h]
  __m128i v81; // [rsp+28h] [rbp-60h] BYREF
  __int64 v82; // [rsp+38h] [rbp-50h]
  __int64 v83; // [rsp+40h] [rbp-48h]
  int v84; // [rsp+4Ch] [rbp-3Ch]

  v7 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 32) + 64LL) + 144LL) <= a4 )
    return 0;
  v8 = *(_QWORD **)(v7 + 24);
  v11 = a1;
  v12 = (_DWORD *)*v8;
  v13 = *v8 + 4LL * v8[1];
  if ( *v8 == v13 )
    goto LABEL_74;
  v14 = (_DWORD *)*v8;
  while ( a3 != *v14 )
  {
    if ( (_DWORD *)v13 == ++v14 )
      goto LABEL_74;
  }
  if ( (_DWORD *)v13 == v14 )
  {
LABEL_74:
    *(_DWORD *)(a1 + 96) = -1;
    return 0;
  }
  v15 = v14 - v12;
  *(_DWORD *)(a1 + 96) = v15;
  v16 = (unsigned int)v15;
  if ( (_DWORD)v15 == -1 )
    return 0;
  v17 = *(_DWORD *)(a2 + 36);
  v18 = *(_DWORD *)(v7 + 40);
  if ( v17 != v18 && v17 != 2 * v18 )
    return 0;
  *(_QWORD *)(a1 + 88) = a4;
  v20 = *(_DWORD *)(v7 + 40);
  if ( (*(_BYTE *)(a2 + 4) & 0x10) == 0 || (v21 = a4, v20 > 7) )
  {
    v21 = a4;
    if ( *(_DWORD *)(a2 + 36) == 2 * v20 )
    {
      v56 = sub_118790((unsigned __int8 *)(a2 + 32), *(_QWORD *)(a1 + 8));
      v57 = sub_118790((unsigned __int8 *)(a2 + 64), *(_QWORD *)(a1 + 8));
      v21 = *(_QWORD *)(a1 + 88);
      v16 = *(unsigned int *)(a1 + 96);
      if ( v56 != v57 )
      {
        v21 += *(int *)(*(_QWORD *)(a1 + 56) + 40LL);
        *(_QWORD *)(a1 + 88) = v21;
      }
    }
  }
  v22 = *(_QWORD **)(a1 + 64);
  v23 = &v22[7 * *(_QWORD *)(a1 + 72)];
  if ( v23 != v22 )
  {
    a6 = (unsigned int)a4;
    do
    {
      while ( 1 )
      {
        v24 = *((unsigned int *)v22 + 10);
        if ( v21 != *((_DWORD *)v22 + 11) + (_DWORD)v24 * (_DWORD)v16 )
          break;
        if ( (unsigned __int64)(unsigned int)v16 >= v22[1] )
          goto LABEL_75;
        v25 = (_QWORD *)(*v22 + 8LL * (int)v16);
        if ( !*v25 )
        {
          *v25 = a2;
          LODWORD(v24) = *((_DWORD *)v22 + 10);
        }
        if ( *(_DWORD *)(a2 + 36) != 2 * (_DWORD)v24 )
          return 1;
        v55 = (_QWORD *)v22[3];
        a5 = (unsigned int)(v24 + a3);
        v28 = (_DWORD *)*v55;
        v29 = *v55 + 4LL * v55[1];
        if ( v29 == *v55 )
          return 1;
        v27 = 1;
LABEL_27:
        v30 = v28;
        while ( *v30 != (_DWORD)a5 )
        {
          if ( ++v30 == (_DWORD *)v29 )
            goto LABEL_35;
        }
        if ( (_DWORD *)v29 != v30 )
        {
          v31 = a4;
          v32 = v30 - v28;
          if ( a4 == *(_QWORD *)(v11 + 88) )
            v31 = v24 + a4;
          if ( (_DWORD)v32 != -1 && *((_DWORD *)v22 + 11) + (_DWORD)v32 * (_DWORD)v24 == v31 )
          {
            v54 = (_QWORD *)(*v22 + 8LL * (int)v32);
            if ( !*v54 )
LABEL_55:
              *v54 = a2;
            return 1;
          }
        }
LABEL_35:
        if ( v27 )
          return 1;
LABEL_36:
        v22 += 7;
        v21 = *(_QWORD *)(v11 + 88);
        v16 = *(unsigned int *)(v11 + 96);
        if ( v23 == v22 )
          goto LABEL_37;
      }
      if ( *(_DWORD *)(a2 + 36) == 2 * (_DWORD)v24 )
      {
        v26 = (_QWORD *)v22[3];
        a5 = (unsigned int)(a3 + v24);
        v27 = 0;
        v28 = (_DWORD *)*v26;
        v29 = *v26 + 4LL * v26[1];
        if ( v29 == *v26 )
          goto LABEL_36;
        goto LABEL_27;
      }
      v22 += 7;
    }
    while ( v23 != v22 );
  }
LABEL_37:
  v33 = *(_QWORD *)(v11 + 56);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 32) + 64LL) + 144LL) <= v21 )
    return 0;
  v34 = *(_DWORD *)(v33 + 40);
  v35 = *(_QWORD *)(v33 + 24);
  v78 = nullptr;
  *(_DWORD *)(v33 + 44) = v21 - v34 * v16;
  *(_DWORD *)(v33 + 48) = *(_DWORD *)(v35 + 8) * v34;
  v36 = *(_QWORD *)(v11 + 56);
  v37 = *(_QWORD *)(v36 + 8);
  v79.m128i_i64[0] = v37;
  if ( v37 )
  {
    v77 = 8 * v37;
    v78 = (void *)qalloc_or_throw();
    memcpy(v78, *(const void **)v36, v77);
  }
  v38 = *(_QWORD *)(v11 + 72);
  v39 = *(_QWORD *)(v11 + 80);
  v40 = _mm_loadl_epi64((const __m128i *)(v36 + 24));
  v41 = _mm_loadl_epi64((const __m128i *)(v36 + 32));
  v42 = *(_QWORD *)(v36 + 40);
  a5 = *(unsigned int *)(v36 + 48);
  if ( v39 < v38 + 1 )
  {
    v82 = *(_QWORD *)(v36 + 40);
    v81.m128i_i32[2] = a5;
    v81.m128i_i64[0] = v41.m128i_i64[0];
    v80 = v40.m128i_i64[0];
    v59 = qvector_reserve();
    v60 = *(_QWORD *)(v11 + 72);
    v43 = v59;
    v61 = *(_QWORD *)(v11 + 80);
    *(_QWORD *)(v11 + 80) = v39;
    v62 = *(__int64 **)(v11 + 64);
    v63 = v80;
    v64 = v60 - 1;
    v79.m128i_i64[1] = v61;
    v65 = v81.m128i_i32[2];
    v66 = v81.m128i_i64[0];
    v67 = v82;
    if ( v64 >= 0 )
    {
      v80 = v43;
      v68 = v81.m128i_i32[2];
      v82 = v11;
      v69 = v43;
      v83 = a2;
      v70 = v64;
      v84 = a3;
      v71 = v62;
      v72 = v67;
      v81.m128i_i64[0] = v63;
      v81.m128i_i64[1] = v66;
      do
      {
        v73 = *v71;
        v74 = _mm_loadu_si128((const __m128i *)(v71 + 1));
        *v71 = 0;
        v71[2] = 0;
        *(_QWORD *)v69 = v73;
        *(__m128i *)(v69 + 8) = v74;
        v75 = _mm_loadu_si128((const __m128i *)(v71 + 3));
        *(_QWORD *)(v69 + 40) = v71[5];
        LODWORD(v73) = *((_DWORD *)v71 + 12);
        *(__m128i *)(v69 + 24) = v75;
        *(_DWORD *)(v69 + 48) = v73;
        if ( *v71 )
        {
          v71[1] = 0;
          qfree();
        }
        v71 += 7;
        v69 += 56;
      }
      while ( v70-- != 0 );
      v11 = v82;
      v67 = v72;
      v43 = v80;
      v65 = v68;
      v66 = v81.m128i_i64[1];
      v63 = v81.m128i_i64[0];
      a2 = v83;
      a3 = v84;
    }
    v83 = v67;
    LODWORD(v82) = v65;
    v80 = v43;
    v81.m128i_i64[1] = v66;
    v81.m128i_i64[0] = v63;
    qfree();
    v42 = v83;
    a5 = (unsigned int)v82;
    *(_QWORD *)(v11 + 80) = v79.m128i_i64[1];
    v41 = _mm_loadl_epi64((const __m128i *)&v81.m128i_u64[1]);
    v38 = *(_QWORD *)(v11 + 72);
    v40 = _mm_loadl_epi64(&v81);
    *(_QWORD *)(v11 + 64) = v43;
  }
  else
  {
    v43 = *(_QWORD *)(v11 + 64);
  }
  v44 = _mm_loadl_epi64(&v79);
  v23 = v78;
  v45 = v43 + 56 * v38;
  *(__m128i *)(v45 + 8) = _mm_unpacklo_epi64(v44, v44);
  *(_QWORD *)v45 = v78;
  *(_QWORD *)(v45 + 40) = v42;
  *(_DWORD *)(v45 + 48) = a5;
  *(__m128i *)(v45 + 24) = _mm_unpacklo_epi64(v40, v41);
  v46 = *(_QWORD *)(v11 + 72) + 1LL;
  *(_QWORD *)(v11 + 72) = v46;
  v24 = *(_QWORD *)(v11 + 64) + 56 * v46 - 56;
  v22 = (_QWORD *)*(unsigned int *)(v11 + 96);
  v16 = *(unsigned int *)(v24 + 40);
  if ( *(_QWORD *)(v11 + 88) == *(_DWORD *)(v24 + 44) + (_DWORD)v16 * *(_DWORD *)(v11 + 96) )
  {
    if ( (unsigned __int64)(unsigned int)v22 >= *(_QWORD *)(v24 + 8) )
LABEL_75:
      sub_190FE0(v23, v16, v22, v24, a5, a6);
    v58 = (_QWORD *)(*(_QWORD *)v24 + 8LL * (int)v22);
    if ( !*v58 )
    {
      *v58 = a2;
      LODWORD(v16) = *(_DWORD *)(v24 + 40);
    }
    if ( *(_DWORD *)(a2 + 36) != 2 * (_DWORD)v16 )
      return 1;
    result = 1;
  }
  else
  {
    if ( 2 * (_DWORD)v16 != *(_DWORD *)(a2 + 36) )
      return 0;
    result = 0;
  }
  v47 = *(_QWORD **)(v24 + 24);
  v48 = v16 + a3;
  v49 = (_DWORD *)*v47;
  v50 = *v47 + 4LL * v47[1];
  if ( *v47 != v50 )
  {
    v51 = (_DWORD *)*v47;
    while ( v48 != *v51 )
    {
      if ( (_DWORD *)v50 == ++v51 )
        return result;
    }
    if ( (_DWORD *)v50 != v51 )
    {
      v52 = a4;
      v53 = v51 - v49;
      if ( a4 == *(_QWORD *)(v11 + 88) )
        v52 = v16 + a4;
      if ( (_DWORD)v53 != -1 && *(_DWORD *)(v24 + 44) + (_DWORD)v53 * (_DWORD)v16 == v52 )
      {
        v54 = (_QWORD *)(*(_QWORD *)v24 + 8LL * (int)v53);
        if ( !*v54 )
          goto LABEL_55;
        return 1;
      }
    }
  }
  return result;
}

