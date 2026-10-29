__int64 __fastcall sub_1778B0(
        __int64 a1,
        unsigned __int64 **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __m128i a7,
        __m128 a8,
        int a9)
{
  bool v11; // zf
  __int64 v13; // rdx
  __int64 v14; // r12
  __m128i *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // r14
  __int64 v20; // r14
  _BYTE *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // rax
  _DWORD *v26; // rdx
  __int64 v27; // rax
  bool v28; // dl
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v40; // [rsp+8h] [rbp-140h]
  __int64 v41; // [rsp+10h] [rbp-138h]
  __int64 v42; // [rsp+10h] [rbp-138h]
  __int64 v43; // [rsp+10h] [rbp-138h]
  __int64 v44; // [rsp+18h] [rbp-130h]
  __m128i v45; // [rsp+20h] [rbp-128h] BYREF
  __m128i v46; // [rsp+30h] [rbp-118h] BYREF
  __m128i v47; // [rsp+40h] [rbp-108h] BYREF
  __m128i v48; // [rsp+50h] [rbp-F8h] BYREF
  __m128 v49; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+78h] [rbp-D0h]
  unsigned __int64 *v52; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v53; // [rsp+98h] [rbp-B0h] BYREF
  __m128 v54; // [rsp+A8h] [rbp-A0h]
  __m128i v55; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-78h] BYREF
  __m128i v57; // [rsp+D8h] [rbp-70h] BYREF
  char v58; // [rsp+E8h] [rbp-60h]
  __int64 v59; // [rsp+F0h] [rbp-58h]
  __m128 *v60; // [rsp+F8h] [rbp-50h]
  int v61; // [rsp+100h] [rbp-48h]
  bool v62; // [rsp+104h] [rbp-44h]
  unsigned __int64 v63; // [rsp+108h] [rbp-40h]

  v11 = a2[3] == nullptr;
  v63 = __readfsqword(0x28u);
  if ( v11 )
    goto LABEL_13;
  v13 = *(_QWORD *)(a1 + 64);
  a7.m128i_i64[0] = 0;
  v52 = nullptr;
  v53 = 0;
  v14 = *(_QWORD *)(v13 + 240);
  if ( v14 )
  {
    v42 = v13;
    *((_QWORD *)&v53 + 1) = *(_QWORD *)(v13 + 240);
    v52 = (unsigned __int64 *)qalloc_or_throw(16 * v14, (__int64)a2, v13, a4);
    memcpy(v52, *(const void **)(v42 + 232), 16 * v14);
    *(_QWORD *)&v53 = v14;
  }
  if ( *(_DWORD *)(a1 + 72) == a9 )
  {
    v41 = *(_QWORD *)(a1 + 64);
    v44 = *(_QWORD *)(v41 + 1440);
    v20 = a3;
    if ( !a3 )
    {
LABEL_44:
      if ( *(_DWORD *)(a1 + 76) == 3 )
      {
        if ( *(_DWORD *)(a1 + 376) != 1 )
        {
          if ( !under_debugger )
            sub_383060(0xCA3Du, 0.0);
          BUG();
        }
        v26 = *(_DWORD **)(a1 + 368);
        v45.m128i_i32[0] = *(_DWORD *)(v41 + 64);
        if ( *v26 == v45.m128i_i32[0] - 1 )
        {
          v49 = _mm_loadh_ps((const double *)(v41 + 136));
          sub_317BD0((__int64 *)&v52, (__m128i *)&v49);
        }
      }
LABEL_34:
      a7 = (__m128i)_mm_loadh_ps((const double *)(a1 + 328));
      v47 = a7;
      sub_317BD0((__int64 *)&v52, &v47);
      if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
      {
        a7 = (__m128i)_mm_loadh_ps((const double *)(a1 + 520));
        v46 = a7;
        sub_317BD0((__int64 *)&v52, &v46);
      }
      v22 = *(_QWORD *)(a1 + 336);
      v23 = *(_QWORD *)(v41 + 168);
      if ( v22 > v23 )
      {
        v55.m128i_i64[1] = v22 - v23;
        v55.m128i_i64[0] = v23 + v44;
        sub_317BD0((__int64 *)&v52, &v55);
      }
      goto LABEL_5;
    }
    while ( 1 )
    {
      v21 = sub_120380((_BYTE *)v20, 0);
      if ( v21 )
      {
        if ( v21[64] != 8 )
          goto LABEL_30;
        v24 = *((_QWORD *)v21 + 9);
        v25 = *(_QWORD *)(sub_1CFD00(v41, *(int *)(v24 + 16)) + 8);
        v48.m128i_i64[1] = *(int *)(v24 + 16) - v25;
        v48.m128i_i64[0] = v44 + v25;
        sub_317BD0((__int64 *)&v52, &v48);
        v20 = *(_QWORD *)(v20 + 8);
        if ( !v20 )
          goto LABEL_44;
      }
      else
      {
        if ( a5 == v20 )
        {
          if ( *(_DWORD *)a5 == 1 )
            goto LABEL_34;
          v55.m128i_i64[1] = 0;
          v56 = 0;
          v57 = 0u;
          v55.m128i_i64[0] = (__int64)&off_4DDED8;
          if ( (unsigned int)sub_11F760((_BYTE *)a5, &v55) )
            goto LABEL_34;
        }
        else if ( (unsigned __int8)sub_11EC90((_BYTE *)v20) )
        {
          goto LABEL_34;
        }
LABEL_30:
        v20 = *(_QWORD *)(v20 + 8);
        if ( !v20 )
          goto LABEL_44;
      }
    }
  }
LABEL_5:
  if ( (unsigned __int8)sub_318470(a2 + 2, (__int64)&v52) )
  {
    if ( a5 )
    {
      sub_124680((__int64)&v55, a1, a5, 8193, *(double *)a7.m128i_i64, a8);
      sub_3180C0((__int64 *)&v52, (__int64)&v56, v15, v16);
      if ( !(unsigned __int8)sub_318470(a2 + 2, (__int64)&v52) )
      {
        if ( v56 )
        {
          v57.m128i_i64[0] = 0;
          qfree(v56);
        }
        qfree(v55.m128i_i64[0]);
        goto LABEL_11;
      }
      if ( v56 )
      {
        v57.m128i_i64[0] = 0;
        qfree(v56);
      }
      qfree(v55.m128i_i64[0]);
    }
    if ( v52 )
    {
      *(_QWORD *)&v53 = 0;
      qfree((__int64)v52);
    }
    return 0;
  }
LABEL_11:
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree((__int64)v52);
  }
LABEL_13:
  v17 = sub_A9D90(a1, a2, a3, a4, 0x2001u);
  if ( a5 && a5 != v17 )
    return 0;
  if ( v17 )
  {
    v19 = sub_A9D90(a1, a2, *(_QWORD *)(v17 + 8), a4, 0x2001u);
    if ( v19 )
    {
      if ( !a5 || !*(_BYTE *)(a5 + 64) )
        return 0;
      v40 = *(_QWORD *)(a5 + 8);
      sub_124680((__int64)&v49, a1, a5, 1, *(double *)a7.m128i_i64, a8);
      v52 = nullptr;
      v53 = 0u;
      v54 = 0;
      while ( 1 )
      {
        v45.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        if ( (unsigned __int8)sub_1205A0((_BYTE *)a5, v45.m128i_i64[0], 0) )
          goto LABEL_22;
        if ( sub_11DC70((int **)a5) || (v27 = sub_11E0C0(a5), v28 = 0, v27) )
          v28 = sub_1201A0((_BYTE *)v19, v45.m128i_i64[0]);
        v11 = *(_DWORD *)a5 == 8;
        v55.m128i_i64[1] = 0;
        v55.m128i_i64[0] = (__int64)&off_4DDE68;
        v57 = 0u;
        v58 = 0;
        v59 = a5;
        v60 = &v49;
        v61 = 0;
        v62 = v28;
        v56 = a1;
        if ( v11
          || !sub_125B90((unsigned __int8 *)a5, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), (unsigned int *)v19, 0, 0.0)
          || *(_DWORD *)(v59 + 68) != *(_DWORD *)(v19 + 68) )
        {
          v61 = 0;
          if ( (unsigned int)sub_11E900((_BYTE *)v19, (__int64)&v55) || v61 <= 0 )
          {
LABEL_22:
            if ( *((_QWORD *)&v53 + 1) )
            {
              v54.m128_u64[0] = 0;
              qfree(*((__int64 *)&v53 + 1));
            }
            qfree((__int64)v52);
            if ( v50 )
            {
              v51 = 0;
              qfree(v50);
            }
            qfree(v49.m128_i64[0]);
            return 0;
          }
        }
        if ( (unsigned __int8)sub_64880(&v52) && !v54.m128_u64[0] )
        {
          sub_127A20((__int64)&v55, a1, a5, 0, v29, v30, 0.0, a8);
          sub_648D0((__int64 *)&v52, (const void **)&v55, 0.0);
          v31 = v56;
          v56 = 0;
          a8 = (__m128)_mm_loadu_si128(&v57);
          v57 = 0;
          if ( *((_QWORD *)&v53 + 1) )
          {
            v43 = v31;
            v45 = (__m128i)a8;
            v54.m128_u64[0] = 0;
            qfree(*((__int64 *)&v53 + 1));
            a8 = (__m128)_mm_load_si128(&v45);
            *((_QWORD *)&v53 + 1) = v43;
            v54 = a8;
            if ( v56 )
            {
              v57.m128i_i64[0] = 0;
              qfree(v56);
            }
          }
          else
          {
            *((_QWORD *)&v53 + 1) = v31;
            v54 = a8;
          }
          qfree(v55.m128i_i64[0]);
          if ( (unsigned __int8)sub_64780(&v52, &v49) )
            goto LABEL_22;
          v45.m128i_i64[0] = (__int64)&v50;
          if ( (unsigned __int8)sub_318470((unsigned __int64 **)&v53 + 1, (__int64)&v50) )
            goto LABEL_22;
          sub_64280((__int64 *)&v52, (__int64 *)&v49, 0.0);
          sub_316CB0((__int64 *)&v53 + 1, (__int64 **)v45.m128i_i64[0], v32, v33);
        }
        if ( sub_A9AA0(a1, &v52, v40, v19, 0x2001u) )
          goto LABEL_22;
        v34 = a6[1];
        v35 = *a6;
        if ( a6[2] < (unsigned __int64)(v34 + 1) )
        {
          v37 = qvector_reserve((__int64)a6, v35, v34 + 1, 8);
          *a6 = v37;
          v35 = v37;
          v34 = a6[1];
        }
        *(_QWORD *)(v35 + 8 * v34) = v19;
        ++a6[1];
        v36 = sub_A9D90(a1, a2, *(_QWORD *)(v19 + 8), a4, 0x2001u);
        v40 = v19;
        if ( !v36 )
          break;
        v19 = v36;
      }
      if ( *((_QWORD *)&v53 + 1) )
      {
        v54.m128_u64[0] = 0;
        qfree(*((__int64 *)&v53 + 1));
      }
      qfree((__int64)v52);
      if ( v50 )
      {
        v51 = 0;
        qfree(v50);
      }
      qfree(v49.m128_i64[0]);
    }
  }
  return 1;
}

