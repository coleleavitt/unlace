__int64 __fastcall sub_1A4E60(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbp
  __int64 v19; // rax
  int v20; // r13d
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r12
  __int32 v24; // edx
  unsigned __int64 v25; // rsi
  __int64 v26; // r12
  __int64 v27; // rax
  int *v28; // r12
  int v29; // eax
  _DWORD *v30; // rdx
  __int64 v31; // rsi
  int v32; // ecx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbp
  unsigned __int64 v36; // r15
  __int64 v37; // r13
  int v38; // r12d
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __int64 v44; // r12
  _QWORD *v45; // rax
  __int64 *v46; // r15
  unsigned __int64 v47; // r13
  __int64 *v48; // r15
  int v49; // eax
  __int64 v50; // rsi
  __int64 v51; // rsi
  int v52; // eax
  __int64 v53; // rdx
  __int64 *v54; // rax
  int v55; // eax
  unsigned __int8 *v56; // rdi
  __int64 v57; // r13
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 *v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rsi
  bool v64; // cf
  __int64 v65; // rax
  __int64 v66; // rax
  const __m128i *v67; // rdi
  __int64 v68; // rcx
  __int64 *v69; // rsi
  __int64 v70; // rbx
  const __m128i *v71; // rdx
  __int64 v72; // rcx
  __m128i v73; // xmm0
  __m128i v74; // [rsp+8h] [rbp-A0h] BYREF
  __int64 *p_tinfo_property; // [rsp+18h] [rbp-90h]
  char v76; // [rsp+2Fh] [rbp-79h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v78; // [rsp+38h] [rbp-70h]
  __int64 v79; // [rsp+40h] [rbp-68h]
  __int64 v80; // [rsp+48h] [rbp-60h]
  __int64 v81; // [rsp+50h] [rbp-58h]
  int v82; // [rsp+58h] [rbp-50h]
  unsigned __int64 v83; // [rsp+68h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  v8 = a1[6].m128i_i64[0];
  if ( v8 )
  {
    v9 = *(_QWORD **)v8;
    v10 = a1[2].m128i_i64[0];
    v11 = *(_QWORD *)v8 + 8LL * *(_QWORD *)(v8 + 8);
    if ( *(_QWORD *)v8 != v11 )
    {
      while ( v10 != *v9 )
      {
        if ( (_QWORD *)v11 == ++v9 )
          goto LABEL_9;
      }
      if ( (_QWORD *)v11 != v9 )
        goto LABEL_7;
    }
LABEL_9:
    v13 = *(_QWORD **)(v8 + 56);
    v14 = &v13[*(_QWORD *)(v8 + 64)];
    if ( v13 != v14 )
    {
      while ( v10 != *v13 )
      {
        if ( v14 == ++v13 )
          goto LABEL_14;
      }
      if ( v13 != v14 )
      {
LABEL_7:
        a1[2].m128i_i8[8] = 1;
        return 0;
      }
    }
  }
LABEL_14:
  if ( *(_BYTE *)a2 == 4 )
  {
    v30 = *(_DWORD **)(a2 + 8);
    v31 = a1[1].m128i_i64[1];
    v32 = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
    tinfo_property = *(_QWORD *)(a1->m128i_i64[1] + 1504);
    v78 = 0;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v82 = v32;
    if ( !(unsigned __int8)sub_197DA0((__int64)&tinfo_property, v31, v30) )
      return 0;
    v35 = v80;
    if ( !v80 )
      sub_18EAC0();
    v36 = v78;
    if ( !v78 )
    {
      if ( !under_debugger )
        sub_37B760(51647);
      BUG();
    }
    v37 = v81;
    v38 = v82;
    v74.m128i_i64[1] = tinfo_property;
    v74.m128i_i64[0] = v79;
    v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 8) + 8LL) + 8LL);
    if ( v81 && *(_BYTE *)v81 == 2 )
      v39 += sub_323690(*(_QWORD *)(*(_QWORD *)(v81 + 8) + 16LL), *(unsigned int *)(v81 + 4), 1);
    if ( a1[10].m128i_i64[0] > v39 || !(unsigned __int8)sub_1A4920(a1, v35, 0, nullptr, v33, v34) )
      return 0;
    v40 = a1[7].m128i_i64[0];
    if ( a1[7].m128i_i64[1] < (unsigned __int64)(v40 + 1) )
    {
      p_tinfo_property = (__int64 *)a1[7].m128i_i64[1];
      v66 = qvector_reserve();
      v67 = (const __m128i *)a1[6].m128i_i64[1];
      v68 = a1[7].m128i_i64[0];
      v69 = (__int64 *)a1[7].m128i_i64[1];
      v70 = v66;
      a1[7].m128i_i64[1] = (__int64)p_tinfo_property;
      v71 = v67;
      v72 = v68 - 1;
      if ( v72 >= 0 )
      {
        do
        {
          v73 = _mm_loadu_si128(v71);
          v66 += 48;
          v71 += 3;
          *(__m128i *)(v66 - 48) = v73;
          *(__m128i *)(v66 - 32) = _mm_loadu_si128(v71 - 2);
          *(__m128i *)(v66 - 16) = _mm_loadu_si128(v71 - 1);
          v64 = v72-- == 0;
        }
        while ( !v64 );
      }
      p_tinfo_property = v69;
      qfree();
      a1[6].m128i_i64[1] = v70;
      v40 = a1[7].m128i_i64[0];
      a1[7].m128i_i64[1] = (__int64)v69;
    }
    v41 = a1[6].m128i_i64[1] + 48 * v40;
    v42 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]), (__m128i)v36);
    *(_QWORD *)(v41 + 32) = v37;
    *(__m128i *)v41 = v42;
    v43 = _mm_loadl_epi64(&v74);
    *(_DWORD *)(v41 + 40) = v38;
    *(__m128i *)(v41 + 16) = _mm_unpacklo_epi64(v43, (__m128i)(unsigned __int64)v35);
    ++a1[7].m128i_i64[0];
    goto LABEL_7;
  }
  if ( *(_BYTE *)a2 != 8 )
  {
    sub_1A4920(a1, a2, 0, nullptr, a5, a6);
    return 0;
  }
  v15 = sub_CA320(*(_QWORD **)(a2 + 8), *(_QWORD *)(a1->m128i_i64[1] + 1496), &v76);
  v18 = v15;
  if ( !v15 || *(_BYTE *)v15 != 10 || !v76 )
    goto LABEL_19;
  v44 = *(_QWORD *)(v15 + 8);
  v45 = (_QWORD *)a1[3].m128i_i64[0];
  if ( !v45 )
    goto LABEL_53;
  v46 = &qword_18;
  v47 = *v45 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v47 )
  {
LABEL_64:
    sub_1A4920(a1, v46[1], v46[1], (__int64 *)&byte_1, v16, v17);
    goto LABEL_19;
  }
  if ( (*(_BYTE *)v47 & 2) != 0 )
    goto LABEL_53;
  v74.m128i_i64[1] = (__int64)&tinfo_property;
  while ( 1 )
  {
    v51 = *(_QWORD *)(v47 + 24);
    v46 = (__int64 *)(v47 + 24);
    if ( *(_DWORD *)(v44 + 4) == -1 || *(_DWORD *)(v51 + 4) == -1 )
    {
      sub_11D380(v74.m128i_i64[1], (unsigned __int8 *)v51);
      HIDWORD(tinfo_property) = *(_DWORD *)(v44 + 4);
      v74.m128i_i32[0] = sub_117380((unsigned __int8 *)v44, (unsigned __int8 *)v74.m128i_i64[1]);
      sub_1166E0(v74.m128i_i64[1]);
      v52 = v74.m128i_i32[0];
    }
    else
    {
      v52 = sub_117380((unsigned __int8 *)v44, (unsigned __int8 *)v51);
    }
    if ( v52 >= 0 )
      break;
    v47 = *(_QWORD *)(v47 + 8);
LABEL_71:
    if ( (*(_BYTE *)v47 & 2) != 0 )
      goto LABEL_72;
  }
  if ( *(_DWORD *)(*v46 + 4) == -1 || *(_DWORD *)(v44 + 4) == -1 )
  {
    v74.m128i_i64[0] = (__int64)&tinfo_property;
    sub_11D380((__int64)&tinfo_property, (unsigned __int8 *)v44);
    v56 = (unsigned __int8 *)*v46;
    HIDWORD(tinfo_property) = *(_DWORD *)(*v46 + 4);
    LODWORD(p_tinfo_property) = sub_117380(v56, (unsigned __int8 *)&tinfo_property);
    sub_1166E0((__int64)&tinfo_property);
    v55 = (int)p_tinfo_property;
  }
  else
  {
    v55 = sub_117380((unsigned __int8 *)*v46, (unsigned __int8 *)v44);
  }
  if ( v55 < 0 )
  {
    v47 = *(_QWORD *)(v47 + 16);
    goto LABEL_71;
  }
  if ( a1[3].m128i_i64[0] != v47 )
    goto LABEL_64;
LABEL_72:
  v44 = *(_QWORD *)(v18 + 8);
LABEL_53:
  v48 = (__int64 *)a1[4].m128i_i64[0];
  for ( v74.m128i_i64[1] = (__int64)&v48[a1[4].m128i_i64[1]]; (__int64 *)v74.m128i_i64[1] != v48; ++v48 )
  {
    v50 = *v48;
    if ( *(_DWORD *)(v44 + 4) == -1 || *(_DWORD *)(v50 + 4) == -1 )
    {
      sub_11D380((__int64)&tinfo_property, (unsigned __int8 *)v50);
      HIDWORD(tinfo_property) = *(_DWORD *)(v44 + 4);
      v74.m128i_i32[0] = sub_117380((unsigned __int8 *)v44, (unsigned __int8 *)&tinfo_property);
      sub_1166E0((__int64)&tinfo_property);
      v49 = v74.m128i_i32[0];
    }
    else
    {
      v49 = sub_117380((unsigned __int8 *)v44, (unsigned __int8 *)v50);
    }
    if ( !v49 )
      break;
  }
  v53 = a1[4].m128i_i64[1];
  v54 = (__int64 *)(a1[4].m128i_i64[0] + 8 * v53);
  if ( v54 == v48 )
  {
    v16 = a1[5].m128i_u64[0];
    if ( v16 < v53 + 1 )
    {
      v74.m128i_i64[0] = a1[5].m128i_i64[0];
      v57 = qvector_reserve();
      v58 = v57;
      v59 = a1[4].m128i_i64[1];
      v60 = a1[5].m128i_i64[0];
      v61 = (__int64 *)a1[4].m128i_i64[0];
      a1[5].m128i_i64[0] = v74.m128i_i64[0];
      v62 = v59 - 1;
      if ( v62 >= 0 )
      {
        do
        {
          v63 = *v61;
          v58 += 8;
          ++v61;
          *(_QWORD *)(v58 - 8) = v63;
          v64 = v62-- == 0;
        }
        while ( !v64 );
      }
      qfree();
      v65 = a1[4].m128i_i64[1];
      a1[4].m128i_i64[0] = v57;
      a1[5].m128i_i64[0] = v60;
      v54 = (__int64 *)(v57 + 8 * v65);
    }
    *v54 = v44;
    ++a1[4].m128i_i64[1];
  }
LABEL_19:
  v19 = *(_QWORD *)(a2 + 8);
  v20 = *(_DWORD *)(v19 + 32) - 1;
  if ( v20 < 0 )
    return 0;
  v21 = 80LL * (unsigned int)v20;
  while ( 2 )
  {
    v22 = v21 + *(_QWORD *)(v19 + 24);
    if ( *(_BYTE *)v22 != 4
      || (v28 = *(int **)(v22 + 8), v29 = *v28, v23 = (__int64)(v28 + 8), (unsigned int)(v29 - 8) > 1) )
    {
      v23 = v22;
    }
    if ( !v18 && *(_BYTE *)v23 == 10 && **(_BYTE **)(v23 + 8) == 5 )
    {
      v74.m128i_i64[0] = v22;
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        tinfo_property = 0;
        v74.m128i_i64[1] = v74.m128i_i64[0];
        tinfo_property = get_tinfo_property();
        v74.m128i_i64[0] = get_tinfo_size();
        p_tinfo_property = &tinfo_property;
        clear_tinfo_t();
        v24 = v74.m128i_i32[0];
        if ( v74.m128i_i64[0] != -1 )
        {
          v25 = *(int *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
          if ( v25 < v74.m128i_i64[0] )
          {
            v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v74.m128i_i64[1] + 8) + 8LL) + 8LL);
            if ( v74.m128i_i32[0] > 1 )
            {
              tinfo_property = v26 + 1;
              v78 = v74.m128i_i32[0] - 1;
              sub_30F830(&a1[8], p_tinfo_property, v74.m128i_i64[0], v74.m128i_i64[1], v16, v17);
              v24 = v74.m128i_i32[0];
              LODWORD(v25) = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
            }
            v27 = -(int)v25 & (unsigned __int64)((int)v25 - 1 + v26 + v24);
            if ( v27 > a1[11].m128i_i64[0] )
              a1[11].m128i_i64[0] = v27;
            goto LABEL_22;
          }
        }
      }
    }
    if ( (unsigned __int8)sub_1A4920(a1, v23, v18, (__int64 *)&byte_1, v16, v17) )
    {
LABEL_22:
      --v20;
      v21 -= 80;
      if ( v20 == -1 )
        return 0;
      v19 = *(_QWORD *)(a2 + 8);
      continue;
    }
    return 1;
  }
}

