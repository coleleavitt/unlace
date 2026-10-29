size_t *__fastcall std::vector<ida_mcp::mcp::Resource>::_M_realloc_append<ida_mcp::mcp::Resource const&>(
        size_t *a1,
        const __m128i *a2)
{
  const __m128i *v2; // r13
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  bool v9; // zf
  __m128i *v10; // rcx
  __m128i *v11; // r15
  const __m128i *v12; // rbx
  __m128i *v13; // r14
  __m128i *v14; // r12
  char *v15; // rbp
  __m128i *v16; // rdi
  __m128i *v17; // rdi
  __m128i *v18; // rcx
  const __m128i *v19; // rdx
  __int64 v20; // rdx
  __m128i *v21; // rcx
  __m128i *v22; // rdx
  __int64 v23; // rdx
  __m128i *v24; // rsi
  const __m128i *v25; // rdx
  const __m128i *v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rcx
  char *v29; // rdx
  __int64 v30; // rdx
  __m128i *v31; // rdi
  char *v32; // rdi
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  void *v36; // rdi
  unsigned int v37; // esi
  unsigned int v38; // esi
  __m128i *v40; // rdi
  __m128i *v41; // rcx
  __m128i *v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  char *v45; // rcx
  char *v46; // r8
  unsigned int v47; // esi
  unsigned int v48; // esi
  unsigned int v49; // ecx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  char *v52; // rcx
  char *v53; // r8
  unsigned int v54; // esi
  unsigned int v55; // esi
  unsigned int v56; // ecx
  __int64 v57; // rax
  unsigned int v58; // esi
  unsigned int v59; // edi
  __m128i v60; // xmm0
  unsigned __int64 v61; // rdx
  char *v62; // rcx
  char *v63; // r8
  unsigned int v64; // esi
  unsigned int v65; // esi
  unsigned int v66; // ecx
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  char *v69; // rsi
  char *v70; // r8
  unsigned int v71; // edi
  unsigned int v72; // edi
  unsigned int v73; // esi
  __int64 v74; // rax
  unsigned int v75; // esi
  const void *v76; // r15
  __int64 v77; // rdx
  unsigned __int64 v78; // rdx
  char *v79; // rax
  char *v80; // r14
  unsigned __int64 v81; // rdx
  char *v82; // rcx
  char *v83; // r8
  unsigned int v84; // esi
  unsigned int v85; // esi
  unsigned int v86; // ecx
  __int64 v87; // rax
  __int64 v88; // [rsp+8h] [rbp-60h]
  __int64 v90; // [rsp+18h] [rbp-50h]
  size_t n; // [rsp+20h] [rbp-48h]
  size_t na; // [rsp+20h] [rbp-48h]
  size_t nb; // [rsp+20h] [rbp-48h]
  size_t nc; // [rsp+20h] [rbp-48h]
  size_t nd; // [rsp+20h] [rbp-48h]
  __m128i *v96; // [rsp+28h] [rbp-40h]

  v2 = (const __m128i *)a1[1];
  v3 = (__int64)v2->m128i_i64 - *a1;
  v4 = 0xEEEEEEEEEEEEEEEFLL * (v3 >> 4);
  if ( v4 == 0x88888888888888LL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  n = *a1;
  if ( v4 )
    v5 = 0xEEEEEEEEEEEEEEEFLL * ((__int64)((__int64)v2->m128i_i64 - *a1) >> 4);
  v6 = v4 + v5;
  if ( v6 > 0x88888888888888LL )
    v6 = 0x88888888888888LL;
  v90 = 240 * v6;
  v7 = operator new(240 * v6);
  v8 = v7 + v3;
  v88 = v7;
  *(_QWORD *)v8 = v8 + 16;
  std::string::_M_construct<true>();
  *(_QWORD *)(v8 + 32) = v8 + 48;
  std::string::_M_construct<true>();
  v9 = a2[6].m128i_i8[0] == 0;
  v10 = (__m128i *)n;
  *(_BYTE *)(v8 + 96) = 0;
  if ( v9 )
  {
    *(_BYTE *)(v8 + 136) = 0;
    if ( !a2[8].m128i_i8[8] )
      goto LABEL_8;
  }
  else
  {
    *(_QWORD *)(v8 + 64) = v8 + 80;
    std::string::_M_construct<true>();
    v9 = a2[8].m128i_i8[8] == 0;
    v10 = (__m128i *)n;
    *(_BYTE *)(v8 + 96) = 1;
    *(_BYTE *)(v8 + 136) = 0;
    if ( v9 )
      goto LABEL_8;
  }
  *(_QWORD *)(v8 + 104) = v8 + 120;
  nb = (size_t)v10;
  std::string::_M_construct<true>();
  *(_BYTE *)(v8 + 136) = 1;
  v10 = (__m128i *)nb;
LABEL_8:
  *(_BYTE *)(v8 + 232) = 0;
  if ( a2[14].m128i_i8[8] )
  {
    *(_BYTE *)(v8 + 168) = 0;
    if ( a2[10].m128i_i8[8] )
    {
      v76 = (const void *)a2[9].m128i_i64[0];
      v77 = a2[9].m128i_i64[1];
      *(_QWORD *)(v8 + 160) = 0;
      *(_OWORD *)(v8 + 144) = 0;
      v78 = v77 - (_QWORD)v76;
      if ( v78 )
      {
        v96 = v10;
        nd = v78;
        v79 = (char *)operator new(v78);
        v80 = &v79[nd];
        *(__m128i *)(v8 + 144) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v79, (__m128i)(unsigned __int64)v79);
        *(_QWORD *)(v8 + 160) = &v79[nd];
        memcpy(v79, v76, nd);
        v10 = v96;
      }
      else
      {
        *(_QWORD *)(v8 + 144) = 0;
        v80 = nullptr;
        *(_QWORD *)(v8 + 160) = 0;
      }
      *(_QWORD *)(v8 + 152) = v80;
      *(_BYTE *)(v8 + 168) = 1;
    }
    v60 = _mm_loadu_si128(a2 + 11);
    *(_BYTE *)(v8 + 224) = 0;
    *(__m128i *)(v8 + 176) = v60;
    if ( a2[14].m128i_i8[0] )
    {
      *(_QWORD *)(v8 + 192) = v8 + 208;
      nc = (size_t)v10;
      std::string::_M_construct<true>();
      *(_BYTE *)(v8 + 224) = 1;
      v10 = (__m128i *)nc;
    }
    *(_BYTE *)(v8 + 232) = 1;
  }
  v11 = (__m128i *)v88;
  if ( v2 != v10 )
  {
    na = (size_t)v10;
    v11 = (__m128i *)v88;
    v12 = v10 + 1;
    v13 = v10 + 3;
    v14 = v10 + 13;
    v15 = &v10[7].m128i_i8[8];
    while ( 1 )
    {
      v18 = v11 + 1;
      v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
      v19 = (const __m128i *)v12[-1].m128i_i64[0];
      if ( v12 != v19 )
        break;
      v20 = v12[-1].m128i_i64[1];
      v38 = v20 + 1;
      if ( (unsigned int)(v20 + 1) >= 8 )
      {
        v18->m128i_i64[0] = v12->m128i_i64[0];
        *(__int64 *)((char *)&v18->m128i_i64[-1] + v38) = *(__int64 *)((char *)&v12->m128i_i64[-1] + v38);
        v51 = (unsigned __int64)&v11[1].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
        v52 = &v18->m128i_i8[-v51];
        v53 = (char *)((char *)v12 - v52);
        v54 = ((_DWORD)v52 + v38) & 0xFFFFFFF8;
        if ( v54 >= 8 )
        {
          v55 = v54 & 0xFFFFFFF8;
          v56 = 0;
          do
          {
            v57 = v56;
            v56 += 8;
            *(_QWORD *)(v51 + v57) = *(_QWORD *)&v53[v57];
          }
          while ( v56 < v55 );
        }
        goto LABEL_23;
      }
      if ( (v38 & 4) != 0 )
      {
        v18->m128i_i32[0] = v12->m128i_i32[0];
        *(__int32 *)((char *)&v18->m128i_i32[-1] + v38) = *(__int32 *)((char *)&v12->m128i_i32[-1] + v38);
        v20 = v12[-1].m128i_i64[1];
      }
      else if ( (_DWORD)v20 != -1 )
      {
        v18->m128i_i8[0] = v12->m128i_i8[0];
        if ( (v38 & 2) == 0 )
          goto LABEL_23;
        *(__int16 *)((char *)&v18->m128i_i16[-1] + v38) = *(__int16 *)((char *)&v12->m128i_i16[-1] + v38);
        v20 = v12[-1].m128i_i64[1];
      }
LABEL_24:
      v21 = v11 + 3;
      v11->m128i_i64[1] = v20;
      v12[-1].m128i_i64[0] = (__int64)v12;
      v12[-1].m128i_i64[1] = 0;
      v12->m128i_i8[0] = 0;
      v11[2].m128i_i64[0] = (__int64)v11[3].m128i_i64;
      v22 = (__m128i *)v12[1].m128i_i64[0];
      if ( v22 != v13 )
      {
        v11[2].m128i_i64[0] = (__int64)v22;
        v11[3].m128i_i64[0] = v12[2].m128i_i64[0];
LABEL_26:
        v23 = v12[1].m128i_i64[1];
        goto LABEL_27;
      }
      v23 = v12[1].m128i_i64[1];
      v37 = v23 + 1;
      if ( (unsigned int)(v23 + 1) >= 8 )
      {
        v21->m128i_i64[0] = v13->m128i_i64[0];
        *(__int64 *)((char *)&v21->m128i_i64[-1] + v37) = *(__int64 *)((char *)&v13->m128i_i64[-1] + v37);
        v44 = (unsigned __int64)&v11[3].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
        v45 = &v21->m128i_i8[-v44];
        v46 = (char *)((char *)v13 - v45);
        v47 = ((_DWORD)v45 + v37) & 0xFFFFFFF8;
        if ( v47 >= 8 )
        {
          v48 = v47 & 0xFFFFFFF8;
          v49 = 0;
          do
          {
            v50 = v49;
            v49 += 8;
            *(_QWORD *)(v44 + v50) = *(_QWORD *)&v46[v50];
          }
          while ( v49 < v48 );
        }
        goto LABEL_26;
      }
      if ( (v37 & 4) != 0 )
      {
        v21->m128i_i32[0] = v13->m128i_i32[0];
        *(__int32 *)((char *)&v21->m128i_i32[-1] + v37) = *(__int32 *)((char *)&v13->m128i_i32[-1] + v37);
        v23 = v12[1].m128i_i64[1];
      }
      else if ( (_DWORD)v23 != -1 )
      {
        v21->m128i_i8[0] = v13->m128i_i8[0];
        if ( (v37 & 2) == 0 )
          goto LABEL_26;
        *(__int16 *)((char *)&v21->m128i_i16[-1] + v37) = *(__int16 *)((char *)&v13->m128i_i16[-1] + v37);
        v23 = v12[1].m128i_i64[1];
      }
LABEL_27:
      v11[2].m128i_i64[1] = v23;
      v12[1].m128i_i64[0] = (__int64)v13;
      v12[1].m128i_i64[1] = 0;
      v12[2].m128i_i8[0] = 0;
      v11[6].m128i_i8[0] = 0;
      if ( !v12[5].m128i_i8[0] )
      {
        v11[8].m128i_i8[8] = 0;
        if ( !v12[7].m128i_i8[8] )
          goto LABEL_12;
        goto LABEL_32;
      }
      v24 = v11 + 5;
      v25 = v12 + 4;
      v11[4].m128i_i64[0] = (__int64)v11[5].m128i_i64;
      v26 = (const __m128i *)v12[3].m128i_i64[0];
      if ( v26 != &v12[4] )
      {
        v11[4].m128i_i64[0] = (__int64)v26;
        v11[5].m128i_i64[0] = v12[4].m128i_i64[0];
LABEL_30:
        v27 = v12[3].m128i_i64[1];
        goto LABEL_31;
      }
      v27 = v12[3].m128i_i64[1];
      v59 = v27 + 1;
      if ( (unsigned int)(v27 + 1) >= 8 )
      {
        v24->m128i_i64[0] = v25->m128i_i64[0];
        *(__int64 *)((char *)&v24->m128i_i64[-1] + v59) = *(__int64 *)((char *)&v25->m128i_i64[-1] + v59);
        v68 = (unsigned __int64)&v11[5].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
        v69 = &v24->m128i_i8[-v68];
        v70 = (char *)((char *)v25 - v69);
        v71 = ((_DWORD)v69 + v59) & 0xFFFFFFF8;
        if ( v71 >= 8 )
        {
          v72 = v71 & 0xFFFFFFF8;
          v73 = 0;
          do
          {
            v74 = v73;
            v73 += 8;
            *(_QWORD *)(v68 + v74) = *(_QWORD *)&v70[v74];
          }
          while ( v73 < v72 );
        }
        goto LABEL_30;
      }
      if ( (v59 & 4) != 0 )
      {
        v24->m128i_i32[0] = v25->m128i_i32[0];
        *(__int32 *)((char *)&v24->m128i_i32[-1] + v59) = *(__int32 *)((char *)&v25->m128i_i32[-1] + v59);
        v27 = v12[3].m128i_i64[1];
      }
      else if ( (_DWORD)v27 != -1 )
      {
        v24->m128i_i8[0] = v25->m128i_i8[0];
        if ( (v59 & 2) == 0 )
          goto LABEL_30;
        *(__int16 *)((char *)&v24->m128i_i16[-1] + v59) = *(__int16 *)((char *)&v25->m128i_i16[-1] + v59);
        v27 = v12[3].m128i_i64[1];
      }
LABEL_31:
      v12[3].m128i_i64[0] = (__int64)v25;
      v12[3].m128i_i64[1] = 0;
      v11[4].m128i_i64[1] = v27;
      v12[4].m128i_i8[0] = 0;
      v11[6].m128i_i8[0] = 1;
      v11[8].m128i_i8[8] = 0;
      if ( !v12[7].m128i_i8[8] )
        goto LABEL_12;
LABEL_32:
      v28 = &v11[7].m128i_i64[1];
      v11[6].m128i_i64[1] = (__int64)&v11[7].m128i_i64[1];
      v29 = (char *)v12[5].m128i_i64[1];
      if ( v29 != v15 )
      {
        v11[6].m128i_i64[1] = (__int64)v29;
        v11[7].m128i_i64[1] = v12[6].m128i_i64[1];
LABEL_34:
        v30 = v12[6].m128i_i64[0];
        goto LABEL_35;
      }
      v30 = v12[6].m128i_i64[0];
      v58 = v30 + 1;
      if ( (unsigned int)(v30 + 1) >= 8 )
      {
        *v28 = *(_QWORD *)v15;
        *(__int64 *)((char *)v28 + v58 - 8) = *(_QWORD *)&v15[v58 - 8];
        v61 = (unsigned __int64)&v11[8] & 0xFFFFFFFFFFFFFFF8LL;
        v62 = (char *)v28 - v61;
        v63 = (char *)(v15 - v62);
        v64 = ((_DWORD)v62 + v58) & 0xFFFFFFF8;
        if ( v64 >= 8 )
        {
          v65 = v64 & 0xFFFFFFF8;
          v66 = 0;
          do
          {
            v67 = v66;
            v66 += 8;
            *(_QWORD *)(v61 + v67) = *(_QWORD *)&v63[v67];
          }
          while ( v66 < v65 );
        }
        goto LABEL_34;
      }
      if ( (v58 & 4) != 0 )
      {
        *(_DWORD *)v28 = *(_DWORD *)v15;
        *(_DWORD *)((char *)v28 + v58 - 4) = *(_DWORD *)&v15[v58 - 4];
        v30 = v12[6].m128i_i64[0];
        goto LABEL_35;
      }
      if ( (_DWORD)v30 != -1 )
      {
        *(_BYTE *)v28 = *v15;
        if ( (v58 & 2) != 0 )
        {
          *(_WORD *)((char *)v28 + v58 - 2) = *(_WORD *)&v15[v58 - 2];
          v30 = v12[6].m128i_i64[0];
          goto LABEL_35;
        }
        goto LABEL_34;
      }
LABEL_35:
      v11[7].m128i_i64[0] = v30;
      v12[5].m128i_i64[1] = (__int64)v15;
      v12[6].m128i_i64[0] = 0;
      v12[6].m128i_i8[8] = 0;
      v11[8].m128i_i8[8] = 1;
LABEL_12:
      v11[14].m128i_i8[8] = 0;
      if ( !v12[13].m128i_i8[8] )
        goto LABEL_13;
      v11[10].m128i_i8[8] = 0;
      if ( v12[9].m128i_i8[8] )
      {
        v33 = v12[9].m128i_i64[0];
        v34 = _mm_loadu_si128(v12 + 8);
        v12[9].m128i_i64[0] = 0;
        v12[8].m128i_i64[0] = 0;
        v11[10].m128i_i64[0] = v33;
        v11[10].m128i_i8[8] = 1;
        v11[9] = v34;
      }
      v35 = _mm_loadu_si128(v12 + 10);
      v11[14].m128i_i8[0] = 0;
      v11[11] = v35;
      if ( v12[13].m128i_i8[0] )
      {
        v41 = v11 + 13;
        v11[12].m128i_i64[0] = (__int64)v11[13].m128i_i64;
        v42 = (__m128i *)v12[11].m128i_i64[0];
        if ( v42 != v14 )
        {
          v11[12].m128i_i64[0] = (__int64)v42;
          v11[13].m128i_i64[0] = v12[12].m128i_i64[0];
          goto LABEL_68;
        }
        v43 = v12[11].m128i_i64[1];
        v75 = v43 + 1;
        if ( (unsigned int)(v43 + 1) < 8 )
        {
          if ( (v75 & 4) != 0 )
          {
            v41->m128i_i32[0] = v14->m128i_i32[0];
            *(__int32 *)((char *)&v41->m128i_i32[-1] + v75) = *(__int32 *)((char *)&v14->m128i_i32[-1] + v75);
            v43 = v12[11].m128i_i64[1];
            goto LABEL_69;
          }
          if ( (_DWORD)v43 != -1 )
          {
            v41->m128i_i8[0] = v14->m128i_i8[0];
            if ( (v75 & 2) != 0 )
            {
              *(__int16 *)((char *)&v41->m128i_i16[-1] + v75) = *(__int16 *)((char *)&v14->m128i_i16[-1] + v75);
              v43 = v12[11].m128i_i64[1];
              goto LABEL_69;
            }
LABEL_68:
            v43 = v12[11].m128i_i64[1];
          }
LABEL_69:
          v11[12].m128i_i64[1] = v43;
          v12[11].m128i_i64[0] = (__int64)v14;
          v12[11].m128i_i64[1] = 0;
          v12[12].m128i_i8[0] = 0;
          v11[14].m128i_i8[0] = 1;
          goto LABEL_45;
        }
        v41->m128i_i64[0] = v14->m128i_i64[0];
        *(__int64 *)((char *)&v41->m128i_i64[-1] + v75) = *(__int64 *)((char *)&v14->m128i_i64[-1] + v75);
        v81 = (unsigned __int64)&v11[13].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
        v82 = &v41->m128i_i8[-v81];
        v83 = (char *)((char *)v14 - v82);
        v84 = ((_DWORD)v82 + v75) & 0xFFFFFFF8;
        if ( v84 >= 8 )
        {
          v85 = v84 & 0xFFFFFFF8;
          v86 = 0;
          do
          {
            v87 = v86;
            v86 += 8;
            *(_QWORD *)(v81 + v87) = *(_QWORD *)&v83[v87];
          }
          while ( v86 < v85 );
        }
        goto LABEL_68;
      }
LABEL_45:
      v11[14].m128i_i8[8] = 1;
      if ( v12[13].m128i_i8[8] )
      {
        v12[13].m128i_i8[8] = 0;
        if ( v12[13].m128i_i8[0] )
        {
          v40 = (__m128i *)v12[11].m128i_i64[0];
          if ( v40 != v14 )
            operator delete(v40, v12[12].m128i_i64[0] + 1);
        }
        if ( v12[9].m128i_i8[8] )
        {
          v36 = (void *)v12[8].m128i_i64[0];
          if ( v36 )
            operator delete(v36, v12[9].m128i_i64[0] - (_QWORD)v36);
        }
      }
LABEL_13:
      if ( v12[7].m128i_i8[8] )
      {
        v32 = (char *)v12[5].m128i_i64[1];
        if ( v32 != v15 )
          operator delete(v32, v12[6].m128i_i64[1] + 1);
      }
      if ( v12[5].m128i_i8[0] )
      {
        v31 = (__m128i *)v12[3].m128i_i64[0];
        if ( v31 != &v12[4] )
          operator delete(v31, v12[4].m128i_i64[0] + 1);
      }
      v16 = (__m128i *)v12[1].m128i_i64[0];
      if ( v13 != v16 )
        operator delete(v16, v12[2].m128i_i64[0] + 1);
      v17 = (__m128i *)v12[-1].m128i_i64[0];
      if ( v12 != v17 )
        operator delete(v17, v12->m128i_i64[0] + 1);
      v11 += 15;
      v13 += 15;
      v14 += 15;
      v15 += 240;
      if ( v2 == &v12[14] )
      {
        v10 = (__m128i *)na;
        goto LABEL_61;
      }
      v12 += 15;
    }
    v11->m128i_i64[0] = (__int64)v19;
    v11[1].m128i_i64[0] = v12->m128i_i64[0];
LABEL_23:
    v20 = v12[-1].m128i_i64[1];
    goto LABEL_24;
  }
LABEL_61:
  if ( v10 )
    operator delete(v10, a1[2] - (_QWORD)v10);
  *a1 = v88;
  a1[1] = (size_t)&v11[15];
  a1[2] = v88 + v90;
  return a1;
}

