__int64 __fastcall sub_C6460(__m128i *a1, __int64 a2, __int64 a3, _QWORD *a4, _BYTE *a5, double a6, __m128 a7)
{
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // r12
  int **v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r8
  int *v14; // rdi
  int *v15; // r15
  __int64 v16; // rdx
  int v17; // esi
  _DWORD *v18; // rax
  _DWORD *v19; // rdx
  _QWORD *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // r12d
  _QWORD *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r15
  unsigned __int64 v38; // r13
  __int64 v39; // rcx
  __int64 v40; // r12
  int v41; // eax
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 *v46; // r12
  unsigned int i; // eax
  unsigned int v48; // r15d
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r14
  _QWORD *v52; // rax
  unsigned __int64 v53; // r8
  int v54; // edx
  int *v55; // r9
  __int64 v56; // rax
  int v57; // esi
  int v58; // edx
  __int64 v59; // rcx
  _DWORD *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // r13
  char v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbp
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  _QWORD *v73; // [rsp+8h] [rbp-180h]
  _QWORD *v74; // [rsp+8h] [rbp-180h]
  size_t n; // [rsp+10h] [rbp-178h]
  int na; // [rsp+10h] [rbp-178h]
  __int64 nc; // [rsp+10h] [rbp-178h]
  __int64 nb; // [rsp+10h] [rbp-178h]
  __int64 v79; // [rsp+18h] [rbp-170h]
  __int64 v83; // [rsp+40h] [rbp-148h]
  __int64 v84; // [rsp+58h] [rbp-130h]
  _QWORD *v85; // [rsp+68h] [rbp-120h]
  __int64 v86; // [rsp+70h] [rbp-118h] BYREF
  __int64 v87; // [rsp+78h] [rbp-110h]
  __int64 v88[2]; // [rsp+80h] [rbp-108h] BYREF
  void *src; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v90; // [rsp+98h] [rbp-F0h]
  __int64 v91[2]; // [rsp+B0h] [rbp-D8h] BYREF
  void *v92; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v93; // [rsp+C8h] [rbp-C0h]
  __int64 v94; // [rsp+E0h] [rbp-A8h] BYREF
  int v95; // [rsp+E8h] [rbp-A0h]
  void *v96; // [rsp+F0h] [rbp-98h]
  __int128 v97; // [rsp+F8h] [rbp-90h]
  unsigned __int64 *v98; // [rsp+110h] [rbp-78h] BYREF
  __int128 v99; // [rsp+118h] [rbp-70h] BYREF
  __int128 v100; // [rsp+128h] [rbp-60h]
  unsigned __int64 v101; // [rsp+138h] [rbp-50h]
  char v102; // [rsp+140h] [rbp-48h]
  unsigned __int64 v103; // [rsp+148h] [rbp-40h]

  v103 = __readfsqword(0x28u);
  v8 = a1[20].m128i_i64[1];
  v83 = a2 >> 32;
  v86 = 0;
  v87 = 0;
  v79 = sub_1108E0(*(_QWORD *)(v8 + 784), 0);
  if ( !v79 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, a6);
    goto LABEL_128;
  }
  n = 0;
  ++*(_DWORD *)(v79 + 24);
  if ( a1[14].m128i_i32[0] > 0 )
  {
    while ( 1 )
    {
      v73 = (_QWORD *)(*(_QWORD *)v79 + 24LL * *(int *)(a1[1].m128i_i64[0] + 4 * n));
      v9 = (_QWORD *)*v73;
      if ( *v73 )
      {
        if ( v73[1] )
        {
          v10 = (_QWORD *)v9[1];
          if ( v10 != v9 )
            break;
        }
      }
LABEL_19:
      if ( a1[14].m128i_i32[0] <= (int)++n )
        goto LABEL_20;
    }
    while ( 1 )
    {
LABEL_6:
      v11 = (int **)(v10 + 3);
      v12 = a1[20].m128i_i64[1];
      a7 = 0;
      v98 = nullptr;
      v99 = 0u;
      v100 = 0;
      sub_103D60((__int64)(v10 + 3), v12, (__int64)&v98);
      if ( (unsigned __int8)sub_64780((_QWORD *)a3, &v98)
        || (unsigned __int8)sub_318470((unsigned __int64 **)(a3 + 16), (__int64)&v99 + 8) )
      {
        v13 = v10[4];
        v14 = *v11;
        v15 = *v11;
        if ( 4 * v13 )
        {
          do
          {
            while ( 1 )
            {
              v16 = a1[14].m128i_i32[0];
              v17 = *v15;
              if ( (int)v16 > 0 )
                break;
LABEL_33:
              sub_64190(&v86, v17, a6);
              v14 = *v11;
              v13 = v10[4];
              if ( ++v15 == &(*v11)[v13] )
                goto LABEL_13;
            }
            v18 = (_DWORD *)a1[1].m128i_i64[0];
            v19 = &v18[v16];
            while ( *v18 != v17 )
            {
              if ( v19 == ++v18 )
                goto LABEL_33;
            }
            ++v15;
          }
          while ( v15 != &v14[v13] );
        }
LABEL_13:
        if ( *((_QWORD *)&v99 + 1) )
        {
          *(_QWORD *)&v100 = 0;
          qfree(*((__int64 *)&v99 + 1));
        }
      }
      else if ( *((_QWORD *)&v99 + 1) )
      {
        *(_QWORD *)&v100 = 0;
        qfree(*((__int64 *)&v99 + 1));
      }
      qfree((__int64)v98);
      if ( (*v10 & 2) != 0 )
        goto LABEL_18;
      v20 = (_QWORD *)v10[2];
      if ( (*(_BYTE *)v20 & 2) != 0 )
      {
        v33 = (_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
        v34 = *v33;
        if ( (*v33 & 2) == 0 )
        {
          while ( (_QWORD *)v33[2] == v10 )
          {
            v10 = v33;
            v35 = v34 & 0xFFFFFFFFFFFFFFFCLL;
            v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v34 & 2) != 0 )
            {
              v10 = (_QWORD *)v35;
              if ( *v73 != v35 )
                goto LABEL_6;
              goto LABEL_19;
            }
            v33 = (_QWORD *)v35;
          }
        }
        v10 = v33;
        if ( (_QWORD *)*v73 == v33 )
          goto LABEL_19;
      }
      else
      {
        do
        {
          v10 = v20;
          v20 = (_QWORD *)v20[1];
        }
        while ( (*(_BYTE *)v20 & 2) == 0 );
LABEL_18:
        if ( (_QWORD *)*v73 == v10 )
          goto LABEL_19;
      }
    }
  }
LABEL_20:
  sub_104E10(v79);
  v21 = a1[20].m128i_i64[1];
  v22 = *(unsigned int *)(a1[1].m128i_i64[0] + 4LL * (int)a2);
  if ( (unsigned int)v22 >= *(_DWORD *)(v21 + 64) )
    sub_B7BA0(a6);
  v23 = *(_QWORD *)(*(_QWORD *)(v21 + 528) + 8 * v22);
  v74 = a4;
  if ( !a4 )
  {
    v74 = *(_QWORD **)(*(_QWORD *)(a1[2].m128i_i64[1] + 24LL * (int)a2) + 8 * v83);
    if ( !v74 )
    {
      v31 = 0;
      goto LABEL_32;
    }
  }
  sub_124680((__int64)v88, *(_QWORD *)(v21 + 520), (__int64)v74, 1u);
  sub_64000(v91, a3, a6);
  v26 = *(_QWORD *)(a3 + 24);
  v92 = nullptr;
  v93 = 0;
  if ( v26 )
  {
    v92 = (void *)qalloc_or_throw(16 * v26, a3, v24, v25);
    *((_QWORD *)&v93 + 1) = v26;
    memcpy(v92, *(const void **)(a3 + 16), 16 * v26);
    *(_QWORD *)&v93 = v26;
  }
  sub_64280(v91, &a1[14].m128i_i64[1], 0.0);
  sub_316CB0((__int64 *)&v92, (__int64 **)&a1[15].m128i_i64[1], v27, v28);
  sub_316CB0((__int64 *)&v92, (__int64 **)(a1[20].m128i_i64[1] + 232), v29, v30);
  if ( !(unsigned __int8)sub_64820(v88, v91) || !(unsigned __int8)sub_317F40((__int64 *)&v92, (__int64)&src) )
  {
    if ( !a4 )
      goto LABEL_26;
    if ( !under_debugger )
      sub_383060(0xC37Fu, 0.0);
    goto LABEL_128;
  }
  if ( !(unsigned __int8)sub_64880(&v86) )
  {
    v45 = sub_110340(*(_QWORD *)(a1[20].m128i_i64[1] + 784), 0);
    v46 = (__int64 *)v45;
    if ( !v45 )
    {
      if ( !under_debugger )
        sub_383060(0xC50Eu, 0.0);
      goto LABEL_128;
    }
    ++*(_DWORD *)(v45 + 24);
    for ( i = sub_64960(&v86, 0); ; i = sub_64960(&v86, v48 + 1) )
    {
      v48 = i;
      if ( i == (_DWORD)v87 )
        break;
      v49 = a1[20].m128i_i64[1];
      if ( i >= *(_DWORD *)(v49 + 64) )
        sub_B7BA0(0.0);
      v50 = *(_QWORD *)(*(_QWORD *)(v49 + 528) + 8LL * i);
      v84 = v50;
      if ( *(_DWORD *)(v50 + 72) != *(_DWORD *)(v23 + 72) )
      {
        v51 = *v46;
        sub_64000(&v94, v50 + 160, 0.0);
        sub_64700(&v94, (__int64 *)a3);
        for ( na = sub_64960(&v94, 0); na != v95; na = sub_64960(&v94, na + 1) )
        {
          v98 = nullptr;
          *(_QWORD *)&v100 = na;
          BYTE8(v100) = 1;
          v101 = 0xFFFFFFFF00000001LL;
          v102 = 1;
          v99 = 0;
          v52 = sub_104DF0((unsigned __int64 *)(v51 + 24LL * (int)v48), (__int64)&v98);
          if ( v98 )
          {
            v85 = v52;
            *(_QWORD *)&v99 = 0;
            qfree((__int64)v98);
            v52 = v85;
          }
          if ( !v52 )
            goto LABEL_90;
          v53 = v52[1];
          if ( !v53 )
            goto LABEL_90;
          v54 = a1[14].m128i_i32[0];
          if ( v54 <= 0 )
            goto LABEL_90;
          v55 = (int *)*v52;
          v56 = v54;
          v57 = 0;
          v58 = *v55;
          v59 = a1[1].m128i_i64[0] + 4 * v56;
          while ( 1 )
          {
            v60 = (_DWORD *)a1[1].m128i_i64[0];
            while ( *v60 != v58 )
            {
              if ( ++v60 == (_DWORD *)v59 )
                goto LABEL_90;
            }
            if ( ++v57 >= v53 )
              break;
            v58 = v55[v57];
          }
          if ( !sub_64930(v88, na) )
          {
LABEL_90:
            v61 = v94;
            goto LABEL_91;
          }
        }
        sub_64000((__int64 *)&v98, (__int64)v88, 0.0);
        v63 = v90;
        *((_QWORD *)&v99 + 1) = 0;
        v100 = 0;
        if ( v90 )
        {
          nc = 16 * v90;
          *((_QWORD *)&v99 + 1) = qalloc_or_throw(16 * v90, (__int64)v88, 16 * v90, v62);
          *((_QWORD *)&v100 + 1) = v63;
          memcpy(*((void **)&v99 + 1), src, nc);
          *(_QWORD *)&v100 = v63;
        }
        v64 = sub_C5DE0(a1, v84, *(_QWORD *)(v84 + 48), v74, &v98, (__m128)0LL);
        if ( *((_QWORD *)&v99 + 1) )
        {
          *(_QWORD *)&v100 = 0;
          qfree(*((__int64 *)&v99 + 1));
        }
        qfree((__int64)v98);
        v61 = v94;
        if ( !v64 )
        {
LABEL_91:
          qfree(v61);
          sub_104E10((__int64)v46);
          goto LABEL_26;
        }
        qfree(v94);
      }
    }
    sub_104E10((__int64)v46);
  }
  v36 = sub_BD380((__int64)a1, a2, 1);
  v37 = v36;
  if ( v36 )
  {
    v38 = *(_QWORD *)(v36 + 8);
  }
  else if ( a4 )
  {
    v38 = *(_QWORD *)(v23 + 48);
  }
  else
  {
    v38 = v74[1];
  }
  sub_64000((__int64 *)&v98, (__int64)v88, 0.0);
  v40 = v90;
  *((_QWORD *)&v99 + 1) = 0;
  v100 = 0;
  if ( v90 )
  {
    nb = 16 * v90;
    *((_QWORD *)&v99 + 1) = qalloc_or_throw(16 * v90, (__int64)v88, 16 * v90, v39);
    *((_QWORD *)&v100 + 1) = v40;
    memcpy(*((void **)&v99 + 1), src, nb);
    *(_QWORD *)&v100 = v40;
  }
  v31 = sub_C5DE0(a1, v23, v38, v74, &v98, (__m128)0LL);
  if ( *((_QWORD *)&v99 + 1) )
  {
    *(_QWORD *)&v100 = 0;
    qfree(*((__int64 *)&v99 + 1));
  }
  qfree((__int64)v98);
  if ( !(_BYTE)v31 )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_27;
  v41 = *(_DWORD *)(v23 + 76);
  if ( v41 == 6 )
    goto LABEL_26;
  if ( v41 == 1 )
  {
    v68 = a1[20].m128i_i64[1];
    v69 = *(unsigned int *)(a1[1].m128i_i64[0] + 4LL * ((int)a2 - 1));
    if ( (unsigned int)v69 >= *(_DWORD *)(v68 + 64) )
      sub_B7BA0(0.0);
    sub_122290((__int64)a4, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 528) + 8 * v69) + 32LL));
    v23 = sub_67E20((_QWORD *)a1[20].m128i_i64[1], (__int64)a4, v70, v71);
    *a5 = 1;
  }
  else
  {
    if ( v38 )
      v42 = *(_QWORD *)(v38 + 24);
    else
      v42 = *(_QWORD *)(v23 + 32);
    sub_122290((__int64)a4, v42);
    sub_A3160(v23, a4, v37, 0.0);
  }
  sub_64000(&v94, a3, 0.0);
  v44 = *(_QWORD *)(a3 + 24);
  v96 = nullptr;
  v97 = 0;
  if ( v44 )
  {
    v96 = (void *)qalloc_or_throw(16 * v44, a3, 16 * v44, v43);
    *((_QWORD *)&v97 + 1) = v44;
    memcpy(v96, *(const void **)(a3 + 16), 16 * v44);
    *(_QWORD *)&v97 = v44;
  }
  if ( !(unsigned __int8)sub_BD640(a1, v23, &v94, (__int64)a4) )
  {
    *(_QWORD *)(*(_QWORD *)(a1[2].m128i_i64[1] + 24LL * (int)a2) + 8 * v83) = a4;
    sub_64190(a1[21].m128i_i64, *(_DWORD *)(v23 + 72), 0.0);
    v67 = a1[13].m128i_i64[1];
    if ( v67 )
    {
      sub_BB120((_QWORD *)a1[13].m128i_i64[1]);
      j__qfree(v67);
    }
    v98 = nullptr;
    v99 = 0u;
    v100 = 0;
    if ( (unsigned __int8)sub_BEC40((__int64)a1, (__int64)&v98, v65, v66, 0.0, a7) )
    {
      if ( *((_QWORD *)&v99 + 1) )
      {
        *(_QWORD *)&v100 = 0;
        qfree(*((__int64 *)&v99 + 1));
      }
      qfree((__int64)v98);
      if ( v96 )
      {
        *(_QWORD *)&v97 = 0;
        qfree((__int64)v96);
      }
      qfree(v94);
      goto LABEL_27;
    }
    if ( !under_debugger )
      sub_383060(0xC381u, 0.0);
LABEL_128:
    BUG();
  }
  if ( *a5 )
  {
    if ( !under_debugger )
      sub_383060(0xC380u, 0.0);
    goto LABEL_128;
  }
  sub_A33C0(v23, (__int64)a4);
  if ( v96 )
  {
    *(_QWORD *)&v97 = 0;
    qfree((__int64)v96);
  }
  qfree(v94);
LABEL_26:
  v31 = 0;
LABEL_27:
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree((__int64)v92);
  }
  qfree(v91[0]);
  if ( src )
  {
    v90 = 0;
    qfree((__int64)src);
  }
  qfree(v88[0]);
LABEL_32:
  qfree(v86);
  return v31;
}

