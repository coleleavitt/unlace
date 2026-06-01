__int64 __fastcall sub_196E20(__int64 a1, __int64 a2, int a3, __int64 a4, __m128 a5)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v10; // rbp
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // esi
  int v16; // edx
  int v17; // eax
  __int64 result; // rax
  int v19; // eax
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rdi
  int v23; // ecx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int v26; // r8d
  char v27; // r11
  _DWORD *v28; // r10
  __int64 v29; // rsi
  _DWORD *v30; // rax
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r13
  __m128i v42; // xmm1
  __m128i v43; // xmm2
  __int64 v44; // r10
  __int32 v45; // r8d
  __int64 v46; // rsi
  __m128i v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // edx
  int v52; // esi
  _QWORD *v53; // rdx
  int v54; // ebx
  _DWORD *v55; // r9
  __int64 v56; // rdi
  _DWORD *v57; // rdx
  int v58; // edi
  __int64 v59; // rdx
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  char v62; // r13
  char v63; // al
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // r15
  __int64 v69; // xmm1_8
  __int64 v70; // rcx
  __int32 v71; // r8d
  __int64 v72; // xmm2_8
  __int64 v73; // r10
  __int32 v74; // r13d
  __int64 v75; // rbp
  __int64 v76; // r12
  __int64 v77; // rbx
  __int64 v78; // r15
  __int64 v79; // rsi
  __m128i v80; // xmm0
  __m128i v81; // xmm0
  __int64 v82; // rdi
  size_t v84; // r13
  void *v85; // [rsp+8h] [rbp-80h]
  __m128i v86; // [rsp+10h] [rbp-78h] BYREF
  __int64 v87; // [rsp+20h] [rbp-68h]
  __m128i v88; // [rsp+28h] [rbp-60h] BYREF
  __int64 v89; // [rsp+38h] [rbp-50h]
  __int64 v90; // [rsp+40h] [rbp-48h]
  int v91; // [rsp+4Ch] [rbp-3Ch]

  v6 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 64LL) + 144LL) <= a4 )
    return 0;
  v7 = *(_QWORD **)(v6 + 24);
  v10 = a1;
  v11 = (_DWORD *)*v7;
  v12 = *v7 + 4LL * v7[1];
  if ( *v7 == v12 )
    goto LABEL_74;
  v13 = (_DWORD *)*v7;
  while ( a3 != *v13 )
  {
    if ( (_DWORD *)v12 == ++v13 )
      goto LABEL_74;
  }
  if ( (_DWORD *)v12 == v13 )
  {
LABEL_74:
    *(_DWORD *)(a1 + 96) = -1;
    return 0;
  }
  v14 = v13 - v11;
  *(_DWORD *)(a1 + 96) = v14;
  v15 = v14;
  if ( (_DWORD)v14 == -1 )
    return 0;
  v16 = *(_DWORD *)(a2 + 36);
  v17 = *(_DWORD *)(v6 + 40);
  if ( v16 != v17 && v16 != 2 * v17 )
    return 0;
  *(_QWORD *)(a1 + 88) = a4;
  v19 = *(_DWORD *)(v6 + 40);
  if ( (*(_BYTE *)(a2 + 4) & 0x10) == 0 || (v20 = a4, v19 > 7) )
  {
    v20 = a4;
    if ( *(_DWORD *)(a2 + 36) == 2 * v19 )
    {
      v62 = sub_11CC50((unsigned __int8 *)(a2 + 32), *(_QWORD *)(a1 + 8), 0, *(double *)a5.m128_u64);
      v63 = sub_11CC50((unsigned __int8 *)(a2 + 64), *(_QWORD *)(a1 + 8), 0, *(double *)a5.m128_u64);
      v20 = *(_QWORD *)(a1 + 88);
      v15 = *(_DWORD *)(a1 + 96);
      if ( v62 != v63 )
      {
        v20 += *(int *)(*(_QWORD *)(a1 + 56) + 40LL);
        *(_QWORD *)(a1 + 88) = v20;
      }
    }
  }
  v21 = *(_QWORD *)(a1 + 64);
  v22 = v21 + 56LL * *(_QWORD *)(a1 + 72);
  while ( v22 != v21 )
  {
    while ( 1 )
    {
      v23 = *(_DWORD *)(v21 + 40);
      if ( v20 != *(_DWORD *)(v21 + 44) + v23 * v15 )
        break;
      if ( (unsigned __int64)v15 >= *(_QWORD *)(v21 + 8) )
        goto LABEL_75;
      v24 = (_QWORD *)(*(_QWORD *)v21 + 8LL * (int)v15);
      if ( !*v24 )
      {
        *v24 = a2;
        v23 = *(_DWORD *)(v21 + 40);
      }
      if ( *(_DWORD *)(a2 + 36) != 2 * v23 )
        return 1;
      v61 = *(_QWORD **)(v21 + 24);
      v26 = v23 + a3;
      v28 = (_DWORD *)*v61;
      v29 = *v61 + 4LL * v61[1];
      if ( v29 == *v61 )
        return 1;
      v27 = 1;
LABEL_27:
      v30 = v28;
      while ( *v30 != v26 )
      {
        if ( ++v30 == (_DWORD *)v29 )
          goto LABEL_35;
      }
      if ( (_DWORD *)v29 != v30 )
      {
        v31 = a4;
        v32 = v30 - v28;
        if ( a4 == *(_QWORD *)(v10 + 88) )
          v31 = v23 + a4;
        if ( (_DWORD)v32 != -1 && *(_DWORD *)(v21 + 44) + (_DWORD)v32 * v23 == v31 )
        {
          v60 = (_QWORD *)(*(_QWORD *)v21 + 8LL * (int)v32);
          if ( !*v60 )
LABEL_55:
            *v60 = a2;
          return 1;
        }
      }
LABEL_35:
      if ( v27 )
        return 1;
LABEL_36:
      v21 += 56;
      v20 = *(_QWORD *)(v10 + 88);
      v15 = *(_DWORD *)(v10 + 96);
      if ( v22 == v21 )
        goto LABEL_37;
    }
    if ( *(_DWORD *)(a2 + 36) == 2 * v23 )
    {
      v25 = *(_QWORD **)(v21 + 24);
      v26 = a3 + v23;
      v27 = 0;
      v28 = (_DWORD *)*v25;
      v29 = *v25 + 4LL * v25[1];
      if ( v29 == *v25 )
        goto LABEL_36;
      goto LABEL_27;
    }
    v21 += 56;
  }
LABEL_37:
  v33 = *(_QWORD *)(v10 + 56);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 32) + 64LL) + 144LL) <= v20 )
    return 0;
  v34 = *(_DWORD *)(v33 + 40);
  v35 = *(_QWORD *)(v33 + 24);
  v85 = nullptr;
  v36 = v34 * v15;
  *(_DWORD *)(v33 + 44) = v20 - v36;
  v37 = (unsigned int)(*(_DWORD *)(v35 + 8) * v34);
  *(_DWORD *)(v33 + 48) = v37;
  v38 = *(_QWORD *)(v10 + 56);
  v39 = *(_QWORD *)(v38 + 8);
  v86.m128i_i64[0] = v39;
  if ( v39 )
  {
    v84 = 8 * v39;
    v85 = (void *)qalloc_or_throw(8 * v39, v36, v37, v35);
    memcpy(v85, *(const void **)v38, v84);
  }
  v40 = *(_QWORD *)(v10 + 72);
  v41 = *(_QWORD *)(v10 + 80);
  v42 = _mm_loadl_epi64((const __m128i *)(v38 + 24));
  v43 = _mm_loadl_epi64((const __m128i *)(v38 + 32));
  v44 = *(_QWORD *)(v38 + 40);
  v45 = *(_DWORD *)(v38 + 48);
  if ( v41 < v40 + 1 )
  {
    v89 = *(_QWORD *)(v38 + 40);
    v88.m128i_i32[2] = v45;
    v88.m128i_i64[0] = v43.m128i_i64[0];
    v87 = v42.m128i_i64[0];
    v65 = qvector_reserve(v10 + 64, 0, v40 + 1, 56);
    v66 = *(_QWORD *)(v10 + 72);
    v46 = v65;
    v67 = *(_QWORD *)(v10 + 80);
    *(_QWORD *)(v10 + 80) = v41;
    v68 = *(_QWORD *)(v10 + 64);
    v69 = v87;
    v70 = v66 - 1;
    v86.m128i_i64[1] = v67;
    v71 = v88.m128i_i32[2];
    v72 = v88.m128i_i64[0];
    v73 = v89;
    if ( v70 >= 0 )
    {
      v87 = v46;
      v74 = v88.m128i_i32[2];
      v89 = v10;
      v75 = v46;
      v90 = a2;
      v76 = v70;
      v91 = a3;
      v77 = v68;
      v78 = v73;
      v88.m128i_i64[0] = v69;
      v88.m128i_i64[1] = v72;
      do
      {
        v79 = *(_QWORD *)v77;
        v80 = _mm_loadu_si128((const __m128i *)(v77 + 8));
        *(_QWORD *)v77 = 0;
        *(_QWORD *)(v77 + 16) = 0;
        *(_QWORD *)v75 = v79;
        *(__m128i *)(v75 + 8) = v80;
        v81 = _mm_loadu_si128((const __m128i *)(v77 + 24));
        *(_QWORD *)(v75 + 40) = *(_QWORD *)(v77 + 40);
        LODWORD(v79) = *(_DWORD *)(v77 + 48);
        *(__m128i *)(v75 + 24) = v81;
        *(_DWORD *)(v75 + 48) = v79;
        v82 = *(_QWORD *)v77;
        if ( *(_QWORD *)v77 )
        {
          *(_QWORD *)(v77 + 8) = 0;
          qfree(v82);
        }
        v77 += 56;
        v75 += 56;
      }
      while ( v76-- != 0 );
      v10 = v89;
      v73 = v78;
      v46 = v87;
      v71 = v74;
      v72 = v88.m128i_i64[1];
      v69 = v88.m128i_i64[0];
      a2 = v90;
      a3 = v91;
      v68 = *(_QWORD *)(v89 + 64);
    }
    v90 = v73;
    LODWORD(v89) = v71;
    v87 = v46;
    v88.m128i_i64[1] = v72;
    v88.m128i_i64[0] = v69;
    qfree(v68);
    v44 = v90;
    v45 = v89;
    *(_QWORD *)(v10 + 80) = v86.m128i_i64[1];
    v43 = _mm_loadl_epi64((const __m128i *)&v88.m128i_u64[1]);
    v40 = *(_QWORD *)(v10 + 72);
    v42 = _mm_loadl_epi64(&v88);
    *(_QWORD *)(v10 + 64) = v46;
  }
  else
  {
    v46 = *(_QWORD *)(v10 + 64);
  }
  v47 = _mm_loadl_epi64(&v86);
  v48 = v46 + 56 * v40;
  *(__m128i *)(v48 + 8) = _mm_unpacklo_epi64(v47, v47);
  a5 = (__m128)_mm_unpacklo_epi64(v42, v43);
  *(_QWORD *)v48 = v85;
  *(_QWORD *)(v48 + 40) = v44;
  *(_DWORD *)(v48 + 48) = v45;
  *(__m128 *)(v48 + 24) = a5;
  v49 = *(_QWORD *)(v10 + 72) + 1LL;
  *(_QWORD *)(v10 + 72) = v49;
  v50 = *(_QWORD *)(v10 + 64) + 56 * v49 - 56;
  v51 = *(_DWORD *)(v10 + 96);
  v52 = *(_DWORD *)(v50 + 40);
  if ( *(_QWORD *)(v10 + 88) == *(_DWORD *)(v50 + 44) + v52 * v51 )
  {
    if ( (unsigned __int64)v51 >= *(_QWORD *)(v50 + 8) )
LABEL_75:
      sub_1954A0(*(double *)a5.m128_u64);
    v64 = (_QWORD *)(*(_QWORD *)v50 + 8LL * (int)v51);
    if ( !*v64 )
    {
      *v64 = a2;
      v52 = *(_DWORD *)(v50 + 40);
    }
    if ( *(_DWORD *)(a2 + 36) != 2 * v52 )
      return 1;
    result = 1;
  }
  else
  {
    if ( 2 * v52 != *(_DWORD *)(a2 + 36) )
      return 0;
    result = 0;
  }
  v53 = *(_QWORD **)(v50 + 24);
  v54 = v52 + a3;
  v55 = (_DWORD *)*v53;
  v56 = *v53 + 4LL * v53[1];
  if ( *v53 != v56 )
  {
    v57 = (_DWORD *)*v53;
    while ( v54 != *v57 )
    {
      if ( (_DWORD *)v56 == ++v57 )
        return result;
    }
    if ( (_DWORD *)v56 != v57 )
    {
      v58 = a4;
      v59 = v57 - v55;
      if ( a4 == *(_QWORD *)(v10 + 88) )
        v58 = v52 + a4;
      if ( (_DWORD)v59 != -1 && *(_DWORD *)(v50 + 44) + (_DWORD)v59 * v52 == v58 )
      {
        v60 = (_QWORD *)(*(_QWORD *)v50 + 8LL * (int)v59);
        if ( !*v60 )
          goto LABEL_55;
        return 1;
      }
    }
  }
  return result;
}

