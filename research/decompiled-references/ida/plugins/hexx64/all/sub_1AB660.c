__int64 __fastcall sub_1AB660(__m128i *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rax
  int v18; // r13d
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r12
  __int32 v22; // edx
  unsigned __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rax
  int *v26; // r12
  int v27; // eax
  _DWORD *v28; // rdx
  __int64 v29; // rsi
  int v30; // ecx
  __int64 v31; // rbp
  unsigned __int64 v32; // r15
  __int64 v33; // r13
  int v34; // r12d
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __int64 v40; // r12
  _QWORD *v41; // rax
  __int64 *v42; // r15
  unsigned __int64 v43; // r13
  __int64 *v44; // r15
  int v45; // eax
  __int64 v46; // rsi
  __int64 v47; // rsi
  int v48; // eax
  __int64 v49; // rdx
  __int64 *v50; // rax
  unsigned __int64 v51; // rdx
  int v52; // eax
  unsigned __int8 *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // r13
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rsi
  bool v63; // cf
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rcx
  __m128i *v68; // rsi
  __int64 v69; // rbx
  const __m128i *v70; // rdx
  __int64 v71; // rcx
  __m128i v72; // xmm0
  __m128i v73; // [rsp+8h] [rbp-A0h] BYREF
  __m128i *p_tinfo_property; // [rsp+18h] [rbp-90h]
  char v75; // [rsp+2Fh] [rbp-79h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v77; // [rsp+38h] [rbp-70h]
  __int64 v78; // [rsp+40h] [rbp-68h]
  __int64 v79; // [rsp+48h] [rbp-60h]
  __int64 v80; // [rsp+50h] [rbp-58h]
  int v81; // [rsp+58h] [rbp-50h]
  unsigned __int64 v82; // [rsp+68h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  v6 = a1[6].m128i_i64[0];
  if ( v6 )
  {
    v7 = *(_QWORD **)v6;
    v8 = a1[2].m128i_i64[0];
    v9 = *(_QWORD *)v6 + 8LL * *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)v6 != v9 )
    {
      while ( v8 != *v7 )
      {
        if ( (_QWORD *)v9 == ++v7 )
          goto LABEL_9;
      }
      if ( (_QWORD *)v9 != v7 )
        goto LABEL_7;
    }
LABEL_9:
    v11 = *(_QWORD **)(v6 + 56);
    v12 = &v11[*(_QWORD *)(v6 + 64)];
    if ( v11 != v12 )
    {
      while ( v8 != *v11 )
      {
        if ( v12 == ++v11 )
          goto LABEL_14;
      }
      if ( v11 != v12 )
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
    v28 = *(_DWORD **)(a2 + 8);
    v29 = a1[1].m128i_i64[1];
    v30 = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
    tinfo_property = *(_QWORD *)(a1->m128i_i64[1] + 1504);
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v80 = 0;
    v81 = v30;
    if ( !(unsigned __int8)sub_19E5A0((__int64)&tinfo_property, v29, v28) )
      return 0;
    v31 = v79;
    if ( !v79 )
      sub_195180(a3);
    v32 = v77;
    if ( !v77 )
    {
      if ( !under_debugger )
        sub_383060(0xC9BFu, a3);
      BUG();
    }
    v33 = v80;
    v34 = v81;
    v73.m128i_i64[1] = tinfo_property;
    v73.m128i_i64[0] = v78;
    v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v79 + 8) + 8LL) + 8LL);
    if ( v80 && *(_BYTE *)v80 == 2 )
      v35 += sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v80 + 8) + 16LL), *(_DWORD *)(v80 + 4), 1);
    if ( a1[10].m128i_i64[0] > v35 || !(unsigned __int8)sub_1AB120(a1, v31, 0, 0, a3, a4) )
      return 0;
    v36 = a1[7].m128i_i64[0];
    if ( a1[7].m128i_i64[1] < (unsigned __int64)(v36 + 1) )
    {
      p_tinfo_property = (__m128i *)a1[7].m128i_i64[1];
      v65 = qvector_reserve((__int64)&a1[6].m128i_i64[1], 0, v36 + 1, 48);
      v66 = a1[6].m128i_i64[1];
      v67 = a1[7].m128i_i64[0];
      v68 = (__m128i *)a1[7].m128i_i64[1];
      v69 = v65;
      a1[7].m128i_i64[1] = (__int64)p_tinfo_property;
      v70 = (const __m128i *)v66;
      v71 = v67 - 1;
      if ( v71 >= 0 )
      {
        do
        {
          v72 = _mm_loadu_si128(v70);
          v65 += 48;
          v70 += 3;
          *(__m128i *)(v65 - 48) = v72;
          *(__m128i *)(v65 - 32) = _mm_loadu_si128(v70 - 2);
          *(__m128i *)(v65 - 16) = _mm_loadu_si128(v70 - 1);
          v63 = v71-- == 0;
        }
        while ( !v63 );
        v66 = a1[6].m128i_i64[1];
      }
      p_tinfo_property = v68;
      qfree(v66);
      a1[6].m128i_i64[1] = v69;
      v36 = a1[7].m128i_i64[0];
      a1[7].m128i_i64[1] = (__int64)v68;
    }
    v37 = a1[6].m128i_i64[1] + 48 * v36;
    v38 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v73.m128i_u64[1]), (__m128i)v32);
    *(_QWORD *)(v37 + 32) = v33;
    *(__m128i *)v37 = v38;
    v39 = _mm_loadl_epi64(&v73);
    *(_DWORD *)(v37 + 40) = v34;
    *(__m128i *)(v37 + 16) = _mm_unpacklo_epi64(v39, (__m128i)(unsigned __int64)v31);
    ++a1[7].m128i_i64[0];
    goto LABEL_7;
  }
  if ( *(_BYTE *)a2 != 8 )
  {
    sub_1AB120(a1, a2, 0, 0, a3, a4);
    return 0;
  }
  v13 = sub_D09E0(*(__int64 **)(a2 + 8), *(_QWORD *)(a1->m128i_i64[1] + 1496), &v75);
  v16 = v13;
  if ( !v13 || *(_BYTE *)v13 != 10 || !v75 )
    goto LABEL_19;
  v40 = *(_QWORD *)(v13 + 8);
  v41 = (_QWORD *)a1[3].m128i_i64[0];
  if ( !v41 )
    goto LABEL_53;
  v42 = qword_18;
  v43 = *v41 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v43 )
  {
LABEL_64:
    sub_1AB120(a1, v42[1], v42[1], 1, a3, a4);
    goto LABEL_19;
  }
  if ( (*(_BYTE *)v43 & 2) != 0 )
    goto LABEL_53;
  v73.m128i_i64[1] = (__int64)&tinfo_property;
  while ( 1 )
  {
    v47 = *(_QWORD *)(v43 + 24);
    v42 = (__int64 *)(v43 + 24);
    if ( *(_DWORD *)(v40 + 4) == -1 || *(_DWORD *)(v47 + 4) == -1 )
    {
      sub_123A40(v73.m128i_i64[1], (unsigned __int8 *)v47, v14, v15);
      HIDWORD(tinfo_property) = *(_DWORD *)(v40 + 4);
      v73.m128i_i32[0] = sub_11DA40((unsigned __int8 *)v40, (unsigned __int8 *)v73.m128i_i64[1], a3);
      sub_11CDA0(v73.m128i_i64[1]);
      v48 = v73.m128i_i32[0];
    }
    else
    {
      v48 = sub_11DA40((unsigned __int8 *)v40, (unsigned __int8 *)v47, a3);
    }
    if ( v48 >= 0 )
      break;
    v43 = *(_QWORD *)(v43 + 8);
LABEL_71:
    if ( (*(_BYTE *)v43 & 2) != 0 )
      goto LABEL_72;
  }
  if ( *(_DWORD *)(*v42 + 4) == -1 || *(_DWORD *)(v40 + 4) == -1 )
  {
    v73.m128i_i64[0] = (__int64)&tinfo_property;
    sub_123A40((__int64)&tinfo_property, (unsigned __int8 *)v40, v14, v15);
    v53 = (unsigned __int8 *)*v42;
    HIDWORD(tinfo_property) = *(_DWORD *)(*v42 + 4);
    LODWORD(p_tinfo_property) = sub_11DA40(v53, (unsigned __int8 *)&tinfo_property, a3);
    sub_11CDA0((__int64)&tinfo_property);
    v52 = (int)p_tinfo_property;
  }
  else
  {
    v52 = sub_11DA40((unsigned __int8 *)*v42, (unsigned __int8 *)v40, a3);
  }
  if ( v52 < 0 )
  {
    v43 = *(_QWORD *)(v43 + 16);
    goto LABEL_71;
  }
  if ( a1[3].m128i_i64[0] != v43 )
    goto LABEL_64;
LABEL_72:
  v40 = *(_QWORD *)(v16 + 8);
LABEL_53:
  v44 = (__int64 *)a1[4].m128i_i64[0];
  for ( v73.m128i_i64[1] = (__int64)&v44[a1[4].m128i_i64[1]]; (__int64 *)v73.m128i_i64[1] != v44; ++v44 )
  {
    v46 = *v44;
    if ( *(_DWORD *)(v40 + 4) == -1 || *(_DWORD *)(v46 + 4) == -1 )
    {
      sub_123A40((__int64)&tinfo_property, (unsigned __int8 *)v46, v14, v15);
      HIDWORD(tinfo_property) = *(_DWORD *)(v40 + 4);
      v73.m128i_i32[0] = sub_11DA40((unsigned __int8 *)v40, (unsigned __int8 *)&tinfo_property, a3);
      sub_11CDA0((__int64)&tinfo_property);
      v45 = v73.m128i_i32[0];
    }
    else
    {
      v45 = sub_11DA40((unsigned __int8 *)v40, (unsigned __int8 *)v46, a3);
    }
    if ( !v45 )
      break;
  }
  v49 = a1[4].m128i_i64[1];
  v50 = (__int64 *)(a1[4].m128i_i64[0] + 8 * v49);
  if ( v50 == v44 )
  {
    v51 = v49 + 1;
    if ( a1[5].m128i_i64[0] < v51 )
    {
      v73.m128i_i64[0] = a1[5].m128i_i64[0];
      v54 = qvector_reserve((__int64)a1[4].m128i_i64, 0, v51, 8);
      v55 = a1[4].m128i_i64[0];
      v56 = v54;
      v57 = v54;
      v58 = a1[4].m128i_i64[1];
      v59 = a1[5].m128i_i64[0];
      v60 = (__int64 *)v55;
      a1[5].m128i_i64[0] = v73.m128i_i64[0];
      v61 = v58 - 1;
      if ( v61 >= 0 )
      {
        do
        {
          v62 = *v60;
          v57 += 8;
          ++v60;
          *(_QWORD *)(v57 - 8) = v62;
          v63 = v61-- == 0;
        }
        while ( !v63 );
        v55 = a1[4].m128i_i64[0];
      }
      qfree(v55);
      v64 = a1[4].m128i_i64[1];
      a1[4].m128i_i64[0] = v56;
      a1[5].m128i_i64[0] = v59;
      v50 = (__int64 *)(v56 + 8 * v64);
    }
    *v50 = v40;
    ++a1[4].m128i_i64[1];
  }
LABEL_19:
  v17 = *(_QWORD *)(a2 + 8);
  v18 = *(_DWORD *)(v17 + 32) - 1;
  if ( v18 < 0 )
    return 0;
  v19 = 80LL * (unsigned int)v18;
  while ( 2 )
  {
    v20 = v19 + *(_QWORD *)(v17 + 24);
    if ( *(_BYTE *)v20 != 4
      || (v26 = *(int **)(v20 + 8), v27 = *v26, v21 = (__int64)(v26 + 8), (unsigned int)(v27 - 8) > 1) )
    {
      v21 = v20;
    }
    if ( !v16 && *(_BYTE *)v21 == 10 && **(_BYTE **)(v21 + 8) == 5 )
    {
      v73.m128i_i64[0] = v20;
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        tinfo_property = 0;
        v73.m128i_i64[1] = v73.m128i_i64[0];
        tinfo_property = get_tinfo_property();
        v73.m128i_i64[0] = get_tinfo_size();
        p_tinfo_property = (__m128i *)&tinfo_property;
        clear_tinfo_t();
        v22 = v73.m128i_i32[0];
        if ( v73.m128i_i64[0] != -1 )
        {
          v23 = *(int *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
          if ( v23 < v73.m128i_i64[0] )
          {
            v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73.m128i_i64[1] + 8) + 8LL) + 8LL);
            if ( v73.m128i_i32[0] > 1 )
            {
              tinfo_property = v24 + 1;
              v77 = v73.m128i_i32[0] - 1;
              sub_316BB0(a1[8].m128i_i64, p_tinfo_property, a3, a4);
              v22 = v73.m128i_i32[0];
              LODWORD(v23) = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
            }
            v25 = -(int)v23 & (unsigned __int64)((int)v23 - 1 + v24 + v22);
            if ( v25 > a1[11].m128i_i64[0] )
              a1[11].m128i_i64[0] = v25;
            goto LABEL_22;
          }
        }
      }
    }
    if ( (unsigned __int8)sub_1AB120(a1, v21, v16, 1, a3, a4) )
    {
LABEL_22:
      --v18;
      v19 -= 80;
      if ( v18 == -1 )
        return 0;
      v17 = *(_QWORD *)(a2 + 8);
      continue;
    }
    return 1;
  }
}

