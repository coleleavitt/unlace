unsigned __int64 __fastcall sub_1F3950(__int64 a1, double a2, __m128 a3)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r12
  int v7; // r8d
  __int64 v8; // rbx
  __int64 v9; // r15
  int *v10; // r14
  int *v11; // r13
  __int64 i; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  void *v22; // r13
  __m128i v23; // xmm0
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rax
  int v28; // eax
  __int64 v29; // r14
  unsigned int v30; // ebx
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 *v35; // rbp
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 *v40; // rbp
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 *v45; // rbp
  __int64 v46; // rdi
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // r14
  _DWORD *v51; // r10
  int v52; // eax
  unsigned int v53; // edx
  __int64 *v54; // r13
  __int64 v55; // r14
  __int64 *v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // r9d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // r9d
  __m128i v66; // [rsp+8h] [rbp-158h] BYREF
  unsigned __int64 v67; // [rsp+18h] [rbp-148h]
  _DWORD *v68; // [rsp+20h] [rbp-140h]
  __int64 (__fastcall ***v69)(); // [rsp+28h] [rbp-138h]
  __int64 *v70; // [rsp+30h] [rbp-130h]
  __int64 (__fastcall **v71)(); // [rsp+38h] [rbp-128h] BYREF
  __int64 v72; // [rsp+40h] [rbp-120h]
  __int64 v73; // [rsp+48h] [rbp-118h]
  __int128 v74; // [rsp+50h] [rbp-110h]
  char v75; // [rsp+60h] [rbp-100h]
  __int64 v76; // [rsp+68h] [rbp-F8h]
  __int64 v77; // [rsp+70h] [rbp-F0h]
  __int64 (__fastcall **v78)(); // [rsp+78h] [rbp-E8h] BYREF
  __int64 v79; // [rsp+80h] [rbp-E0h] BYREF
  __int128 v80; // [rsp+88h] [rbp-D8h]
  __int64 v81[2]; // [rsp+98h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-B8h] BYREF
  __int128 v83; // [rsp+B0h] [rbp-B0h]
  __int64 v84[2]; // [rsp+C0h] [rbp-A0h] BYREF
  __int64 v85; // [rsp+D0h] [rbp-90h]
  __m128i v86; // [rsp+D8h] [rbp-88h]
  int v87; // [rsp+E8h] [rbp-78h]
  __int64 v88; // [rsp+F0h] [rbp-70h] BYREF
  __int128 v89; // [rsp+F8h] [rbp-68h]
  __int64 v90; // [rsp+108h] [rbp-58h] BYREF
  __int128 v91; // [rsp+110h] [rbp-50h]
  unsigned __int64 v92; // [rsp+120h] [rbp-40h]

  v3 = 0;
  v92 = __readfsqword(0x28u);
  v79 = 0;
  v81[0] = 0;
  v81[1] = 0;
  v82 = 0;
  v84[0] = 0;
  v84[1] = 0;
  v85 = 0;
  v87 = 0;
  v78 = &off_4DED20;
  v88 = 0;
  v90 = 0;
  v80 = 0;
  v83 = 0;
  v86 = 0;
  v89 = 0;
  v91 = 0;
  v4 = *(int *)(a1 + 64);
  v67 = v4;
  if ( v4 )
  {
    v71 = nullptr;
    v69 = &v71;
    v72 = 0;
    v73 = 0;
    v70 = &v88;
    v74 = 0;
    sub_1F3610(&v88, v4, (unsigned __int64)&v71, 0.0);
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      qfree(v73);
    }
    qfree((__int64)v71);
    if ( v67 != (_QWORD)v91 )
    {
      v3 = 0;
      v74 = 0;
      v71 = nullptr;
      v72 = 0;
      v73 = 0;
      sub_1F3610(&v90, v67, (unsigned __int64)v69, 0.0);
      if ( v73 )
      {
        *(_QWORD *)&v74 = 0;
        qfree(v73);
      }
      qfree((__int64)v71);
    }
    if ( (int)v4 > 0 )
    {
      v5 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 64) )
        {
          if ( !under_debugger )
            sub_383060(0xCDEFu, *(double *)v3.m128i_i64);
          goto LABEL_73;
        }
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v5);
        v7 = *(_DWORD *)(v6 + 72);
        v66.m128i_i64[0] = 40 * v5;
        v8 = 40 * v5 + v88;
        if ( v7 )
          break;
        v9 = *(_QWORD *)(v6 + 64);
        if ( !*(_BYTE *)(v9 + 320) )
        {
          v48 = *(_QWORD *)(v9 + 440);
          if ( (int)v48 <= 0 )
            goto LABEL_20;
          v49 = 0;
          v50 = 104 * ((unsigned int)(v48 - 1) + 1LL);
          do
          {
            v51 = (_DWORD *)(v49 + *(_QWORD *)(v9 + 432));
            if ( !v51[23] )
            {
              if ( (*((_BYTE *)v51 + 25) & 1) != 0
                || (*(_BYTE *)(v9 + 2) & 8) == 0
                && (v68 = (_DWORD *)(v49 + *(_QWORD *)(v9 + 432)), sub_36E2C0())
                && (v52 = sub_1C3500(v68, *(double *)v3.m128i_i64), v51 = v68, v52 >= *(_QWORD *)(v9 + 144)) )
              {
                v53 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 480) + 130LL);
                if ( v53 < v51[22] )
                  v53 = v51[22];
                sub_1C31B0(
                  (__int64)v51,
                  v8,
                  v53,
                  *(_QWORD *)(*(_QWORD *)(v6 + 64) + 1440LL),
                  (__int64)(v51 + 20),
                  *(double *)v3.m128i_i64,
                  a3);
              }
            }
            v49 += 104;
          }
          while ( v50 != v49 );
          goto LABEL_19;
        }
        v10 = *(int **)(v9 + 456);
        v11 = &v10[*(_QWORD *)(v9 + 464)];
        if ( v10 != v11 )
        {
          for ( i = *(_QWORD *)(v6 + 64); ; i = *(_QWORD *)(v6 + 64) )
          {
            v13 = *(_QWORD *)(i + 1440);
            v14 = *(_QWORD *)(v9 + 432) + 104LL * *v10;
            v15 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 480) + 130LL);
            if ( v15 < *(_DWORD *)(v14 + 88) )
              v15 = *(_DWORD *)(v14 + 88);
            sub_1C31B0(v14, v8, v15, v13, v14 + 80, *(double *)v3.m128i_i64, a3);
            if ( v11 == ++v10 )
              break;
          }
          goto LABEL_19;
        }
LABEL_20:
        sub_64280(v81, (__int64 *)v8, *(double *)v3.m128i_i64);
        sub_316CB0(&v82, (__int64 **)(v8 + 16), v16, v17);
        if ( v67 == ++v5 )
          goto LABEL_21;
      }
      v75 = 0;
      v54 = (__int64 *)(v90 + v66.m128i_i64[0]);
      v72 = 0;
      v73 = 0;
      v74 = 0u;
      v76 = 40 * v5 + v88;
      v77 = v90 + v66.m128i_i64[0];
      v71 = &off_4DECD0;
      sub_1EE830(v6, (__int64)v69, v3, a3);
      v55 = *(_QWORD *)(*(_QWORD *)(v6 + 480) + 112LL);
      v56 = (__int64 *)(v55 + 104);
      sub_64640((__int64 *)v8, (__int64 *)(v55 + 104), v57, v58, v59, v60);
      v55 += 120;
      sub_317C60((__int64 *)(v8 + 16), v55);
      sub_64640(v54, v56, v61, v62, v63, v64);
      sub_317C60(v54 + 2, v55);
LABEL_19:
      v8 = v88 + v66.m128i_i64[0];
      goto LABEL_20;
    }
LABEL_21:
    v18 = v88;
  }
  else
  {
    v18 = 0;
  }
  v70 = &v88;
  sub_648D0(v84, (const void **)v18, *(double *)v3.m128i_i64);
  v21 = *(_QWORD *)(v18 + 24);
  v22 = nullptr;
  if ( v21 )
  {
    v70 = &v88;
    v22 = (void *)qalloc_or_throw(16 * v21, v18, v19, v20);
    memcpy(v22, *(const void **)(v18 + 16), 16 * v21);
  }
  v23 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
  if ( v85 )
  {
    v66 = v23;
    v86.m128i_i64[0] = 0;
    qfree(v85);
    v23 = _mm_load_si128(&v66);
  }
  v85 = (__int64)v22;
  v86 = v23;
  v24 = *(int *)(a1 + 64);
  v70 = &v88;
  sub_1F3610(&v79, v24, (unsigned __int64)v81, *(double *)v23.m128i_i64);
  v27 = (__int64 *)sub_670E0((_QWORD *)a1, v24, v25, v26);
  sub_3111E0(v27, (__int64)&v78);
  v28 = *(_DWORD *)(a1 + 64);
  v29 = 40;
  v30 = 1;
  if ( v28 > 1 )
  {
    while ( v30 < v28 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v30);
      v75 = 0;
      v72 = 0;
      v74 = 0u;
      v76 = v29 + v79;
      v77 = 0;
      v71 = &off_4DECF8;
      v73 = v31;
      sub_1EE830(v31, (__int64)&v71, v23, a3);
      v28 = *(_DWORD *)(a1 + 64);
      ++v30;
      v29 += 40;
      if ( v28 <= (int)v30 )
        goto LABEL_29;
    }
    if ( !under_debugger )
      sub_383060(0xCDEFu, *(double *)v23.m128i_i64);
LABEL_73:
    BUG();
  }
LABEL_29:
  v32 = v90;
  v78 = &off_4DED20;
  if ( v90 )
  {
    v33 = v91;
    if ( (_QWORD)v91 )
    {
      v34 = 0;
      do
      {
        v35 = (__int64 *)(v32 + 40 * v34);
        v36 = v35[2];
        if ( v36 )
        {
          v35[3] = 0;
          qfree(v36);
        }
        ++v34;
        qfree(*v35);
        v32 = v90;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v91 = 0;
    qfree(v32);
  }
  v37 = v88;
  if ( v88 )
  {
    v38 = v89;
    if ( (_QWORD)v89 )
    {
      v39 = 0;
      do
      {
        v40 = (__int64 *)(v37 + 40 * v39);
        v41 = v40[2];
        if ( v41 )
        {
          v40[3] = 0;
          qfree(v41);
        }
        ++v39;
        qfree(*v40);
        v37 = v88;
      }
      while ( v38 != v39 );
    }
    *(_QWORD *)&v89 = 0;
    qfree(v37);
  }
  v78 = (__int64 (__fastcall **)())&unk_4EBF08;
  if ( v85 )
  {
    v86.m128i_i64[0] = 0;
    qfree(v85);
  }
  qfree(v84[0]);
  if ( v82 )
  {
    *(_QWORD *)&v83 = 0;
    qfree(v82);
  }
  qfree(v81[0]);
  v42 = v79;
  if ( v79 )
  {
    v43 = v80;
    if ( (_QWORD)v80 )
    {
      v44 = 0;
      do
      {
        v45 = (__int64 *)(v42 + 40 * v44);
        v46 = v45[2];
        if ( v46 )
        {
          v45[3] = 0;
          qfree(v46);
        }
        ++v44;
        qfree(*v45);
        v42 = v79;
      }
      while ( v43 != v44 );
    }
    *(_QWORD *)&v80 = 0;
    qfree(v42);
  }
  return v92 - __readfsqword(0x28u);
}

