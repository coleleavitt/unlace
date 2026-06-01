__int64 __fastcall sub_206BC0(_QWORD *a1, __int64 a2, int a3, char a4, int a5, int a6, double a7, __m128 a8)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  int v12; // eax
  unsigned int v15; // r15d
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // r14
  __int64 v30; // rdi
  __int64 v32; // rax
  unsigned __int64 *v33; // rsi
  __int64 v34; // rdi
  __m128i v35; // xmm0
  int v36; // r12d
  __int64 v37; // rdi
  __int64 v38; // rax
  __m128i *v39; // rdx
  __int64 v40; // rcx
  int v41; // r12d
  __int64 v42; // rax
  __m128i v43; // xmm0
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // r12
  __int64 v46; // rsi
  unsigned __int64 v47; // rax
  int v48; // r12d
  _DWORD *v49; // r13
  __int64 v50; // rdx
  _DWORD *v51; // rax
  char v52; // al
  unsigned __int64 *v54[2]; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 *v55; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v56; // [rsp+38h] [rbp-E0h]
  __int64 v57[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v59; // [rsp+68h] [rbp-B0h]
  __int64 v60; // [rsp+80h] [rbp-98h] BYREF
  __int128 v61; // [rsp+88h] [rbp-90h] BYREF
  __int128 v62; // [rsp+98h] [rbp-80h]
  __int128 v63; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v64; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v65; // [rsp+D8h] [rbp-40h]

  v9 = *(int *)(a1[9] + 44LL);
  v65 = __readfsqword(0x28u);
  v10 = a1[1];
  v11 = *(_QWORD *)(v10 + 432) + 104 * v9;
  v12 = *(_DWORD *)(v11 + 24);
  if ( (v12 & 0x40) != 0 )
    return 0;
  if ( (v12 & 0x100) == 0 )
    goto LABEL_5;
  v15 = *(unsigned __int8 *)(v10 + 320);
  if ( (_BYTE)v15 )
    return 0;
  if ( (v12 & 0x8000) != 0 )
    return v15;
LABEL_5:
  v16 = a1[2];
  v54[0] = nullptr;
  v54[1] = nullptr;
  v55 = nullptr;
  v56 = 0;
  sub_127FE0(v16, (__int64 *)v54, a2, 0, a5, a6, 0.0, a8);
  v17 = a1[1];
  v57[0] = 0;
  v57[1] = 0;
  v58 = 0;
  v59 = 0;
  sub_1C3380(v11, v17, (__int64)v57, 0, 0.0, a8);
  sub_64640((__int64 *)v54, v57, v18, v19, v20, v21);
  sub_317C60((__int64 *)&v55, (__int64)&v58);
  v25 = *(unsigned int *)(v11 + 92);
  if ( (_DWORD)v25 )
    goto LABEL_22;
  v26 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)v26 == 2 )
  {
    v50 = *(_QWORD *)(v26 + 8);
    v51 = *(_DWORD **)v50;
    v23 = *(_QWORD *)v50 + 24LL * *(_QWORD *)(v50 + 8);
    if ( *(_QWORD *)v50 == v23 )
      goto LABEL_8;
    while ( (unsigned int)(*v51 - 3) > 1 )
    {
      v51 += 6;
      if ( (_DWORD *)v23 == v51 )
        goto LABEL_8;
    }
LABEL_57:
    if ( (unsigned int)sub_1C3500((_DWORD *)v26, 0.0) != -1 )
      goto LABEL_19;
    goto LABEL_8;
  }
  if ( (unsigned int)(*(_DWORD *)v26 - 3) <= 1 )
    goto LABEL_57;
LABEL_8:
  v27 = a1[1];
  v22 = *(unsigned int *)(v27 + 792);
  if ( (_DWORD)v22 )
  {
    v28 = *(_DWORD *)(a1[9] + 44LL);
    if ( (int)v22 > v28 && a3 != -1 )
      goto LABEL_19;
    if ( (int)v22 > 0 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( v28 != (_DWORD)v29 )
        {
          a8 = 0;
          v60 = 0;
          v62 = 0;
          v61 = 0u;
          sub_1C3380(*(_QWORD *)(v27 + 432) + 104 * v29, v27, (__int64)&v60, 0, 0.0, (__m128)0LL);
          if ( (unsigned __int8)sub_64780(&v60, v54) )
          {
            v30 = *((_QWORD *)&v61 + 1);
LABEL_16:
            if ( v30 )
            {
              *(_QWORD *)&v62 = 0;
              qfree(v30);
            }
            qfree(v60);
            goto LABEL_19;
          }
          v52 = sub_318470((unsigned __int64 **)&v61 + 1, (__int64)&v55);
          v30 = *((_QWORD *)&v61 + 1);
          if ( v52 )
            goto LABEL_16;
          if ( *((_QWORD *)&v61 + 1) )
          {
            *(_QWORD *)&v62 = 0;
            qfree(*((__int64 *)&v61 + 1));
          }
          qfree(v60);
          v27 = a1[1];
        }
        if ( *(_DWORD *)(v27 + 792) <= (int)++v29 )
          break;
        v28 = *(_DWORD *)(a1[9] + 44LL);
      }
    }
  }
LABEL_22:
  sub_64640((__int64 *)v54, a1 + 18, v22, v23, v25, v24);
  sub_317C60((__int64 *)&v55, (__int64)(a1 + 20));
  if ( (unsigned __int8)sub_64880(v54) && !(_QWORD)v56 )
    goto LABEL_24;
  v64 = 0u;
  v63 = 0;
  v32 = operator new(0x18u);
  *(_QWORD *)v32 = v54;
  v33 = (unsigned __int64 *)a1[8];
  *(_QWORD *)(v32 + 8) = v11;
  v34 = a1[1];
  v35 = _mm_loadl_epi64((const __m128i *)&off_4DEEE8);
  *(_DWORD *)(v32 + 16) = a3;
  *(_QWORD *)&v63 = v32;
  v64 = _mm_unpacklo_epi64(v35, (__m128i)(unsigned __int64)sub_2016C0);
  v36 = sub_201A80(v34, v33, v54, (__int64)&v63);
  if ( v64.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v64.m128i_i64[0])(&v63, &v63, 3);
  if ( !v36 )
  {
    if ( a4 || (unsigned __int8)sub_64880(v54) && !(_QWORD)v56 )
    {
LABEL_24:
      v15 = 1;
      goto LABEL_25;
    }
    v63 = (unsigned __int64)v54;
    v37 = a1[1];
    v38 = a1[23];
    v64 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4DEEF0), (__m128i)(unsigned __int64)sub_201610);
    v41 = sub_201A80(v37, (unsigned __int64 *)(**(_QWORD **)(v38 + 72) + 24LL * *(int *)(v11 + 92)), v54, (__int64)&v63);
    if ( v64.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v64.m128i_i64[0])(&v63, &v63, 3);
    if ( !v41 )
    {
      if ( !*(_DWORD *)(v11 + 92) )
      {
        v42 = a1[1];
        v43.m128i_i64[0] = 0;
        v60 = 0;
        v61 = 0;
        v44 = *(_QWORD *)(v42 + 664);
        v45 = *(_QWORD *)(v42 + 672);
        if ( v44 + v45 - 1 >= v44 )
        {
          v60 = qvector_reserve((__int64)&v60, 0, 1, 16);
          v43 = _mm_unpacklo_epi64((__m128i)v44, (__m128i)v45);
          v39 = (__m128i *)(16 * v61);
          *(__m128i *)(v60 + 16 * v61) = v43;
          *(_QWORD *)&v61 = v61 + 1;
        }
        sub_3180C0((__int64 *)&v55, (__int64)&v60, v39, v40);
        if ( v60 )
        {
          *(_QWORD *)&v61 = 0;
          qfree(v60);
        }
        if ( !(unsigned __int8)sub_64880(v54) || (_QWORD)v56 )
        {
          v46 = a1[1];
          v47 = *(int *)(v46 + 792);
          v48 = *(_DWORD *)(v46 + 792);
          if ( v47 < *(_QWORD *)(v46 + 440) )
          {
            while ( 1 )
            {
              v49 = (_DWORD *)(*(_QWORD *)(v46 + 432) + 104 * v47);
              if ( !v49[23] )
              {
                v60 = 0;
                v61 = 0u;
                v62 = 0;
                sub_1C3380((__int64)v49, v46, (__int64)&v60, 0, *(double *)v43.m128i_i64, a8);
                if ( (unsigned __int8)sub_64780(v54, &v60) || (unsigned __int8)sub_318470(&v55, (__int64)&v61 + 8) )
                {
                  if ( *v49 != 2 )
                  {
                    if ( !under_debugger )
                      sub_383060(0xCEC2u, *(double *)v43.m128i_i64);
                    BUG();
                  }
                  sub_93B40(&v60);
                  goto LABEL_19;
                }
                if ( *((_QWORD *)&v61 + 1) )
                {
                  *(_QWORD *)&v62 = 0;
                  qfree(*((__int64 *)&v61 + 1));
                }
                qfree(v60);
                v46 = a1[1];
              }
              v47 = ++v48;
              if ( (unsigned __int64)v48 >= *(_QWORD *)(v46 + 440) )
                goto LABEL_24;
            }
          }
        }
      }
      goto LABEL_24;
    }
  }
LABEL_19:
  v15 = 0;
LABEL_25:
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  qfree(v57[0]);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree((__int64)v55);
  }
  qfree((__int64)v54[0]);
  return v15;
}

