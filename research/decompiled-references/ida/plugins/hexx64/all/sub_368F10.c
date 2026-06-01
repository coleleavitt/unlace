bool __fastcall sub_368F10(
        __m128i *a1,
        __int64 ***a2,
        const char *a3,
        __int64 a4,
        int a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        double a13)
{
  __int64 ***v14; // r12
  __m128i *v15; // rbx
  __int64 v16; // rax
  __m128 si128; // xmm0
  __m128i v19; // xmm1
  double v20; // xmm2_8
  unsigned __int64 v21; // r15
  void **v22; // rbp
  void *v23; // rdi
  _QWORD *v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  int v30; // eax
  __int64 encoding_helper; // r15
  double v32; // xmm4_8
  double v33; // xmm5_8
  char v34; // al
  __int64 v35; // rbp
  __int64 v36; // rax
  double v37; // xmm4_8
  double v38; // xmm5_8
  int v39; // r13d
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rsi
  __int64 v45; // rax
  unsigned __int64 v47; // rdi
  __int64 v48; // r8
  int v49; // eax
  __int64 **v50; // rcx
  unsigned __int64 v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // rbp
  bool v54; // zf
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 i; // r14
  __int64 *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rsi
  __int64 j; // r15
  __int64 *v64; // rax
  __int64 v65; // rdi
  unsigned __int64 v66; // rax
  __int64 v67; // rax
  __int64 **v68; // r15
  __int64 **v69; // rsi
  __int64 v70; // r8
  __int64 v71; // r15
  __int64 **v72; // rbp
  _QWORD *v73; // rbx
  __int64 v74; // r12
  __int64 *v75; // rax
  __int64 *v76; // rdx
  __int64 *v77; // r13
  __int64 v78; // r8
  __int64 v79; // r14
  __int64 k; // r15
  __int64 *v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // r8
  __int64 v85; // r14
  __int64 m; // r15
  __int64 *v87; // rax
  __int64 v88; // rdi
  __int64 **v90; // rdx
  __int64 **v91; // rax
  __int64 **v92; // rax
  const char *v93; // rax
  __m128 v94; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v95; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v96; // [rsp+20h] [rbp-A8h]
  __int64 v97; // [rsp+28h] [rbp-A0h]
  __int64 v98; // [rsp+30h] [rbp-98h]
  __int64 **v99; // [rsp+38h] [rbp-90h]
  __int64 v100; // [rsp+40h] [rbp-88h]
  __int64 v101; // [rsp+48h] [rbp-80h]
  __m128i *v102; // [rsp+50h] [rbp-78h]
  __int64 ***v103; // [rsp+58h] [rbp-70h]
  _QWORD v104[2]; // [rsp+60h] [rbp-68h] BYREF
  char v105; // [rsp+70h] [rbp-58h]
  char v106; // [rsp+85h] [rbp-43h]
  char v107; // [rsp+86h] [rbp-42h]
  char v108; // [rsp+87h] [rbp-41h]
  unsigned __int64 v109; // [rsp+88h] [rbp-40h]

  v14 = a2;
  v15 = a1;
  v16 = a1->m128i_i64[0];
  v109 = __readfsqword(0x28u);
  *(_DWORD *)(v16 + 1336) = a5;
  si128 = (__m128)_mm_loadu_si128(a1 + 18);
  v19 = _mm_loadu_si128(a1 + 17);
  *(_QWORD *)&v20 = _mm_movehl_ps(a8, si128).m128_u64[0];
  v21 = a1[20].m128i_i64[1] + 8;
  v22 = (void **)(*(_QWORD *)&v20 + 8LL);
  if ( *(_QWORD *)&v20 + 8LL < v21 )
  {
    v94 = si128;
    v95 = v19;
    do
    {
      v23 = *v22++;
      operator delete(v23, 0x200u);
    }
    while ( (unsigned __int64)v22 < v21 );
    si128 = (__m128)_mm_load_si128((const __m128i *)&v94);
    v19 = _mm_load_si128(&v95);
  }
  v15[21].m128i_i64[0] = 0;
  v15[19] = v19;
  v15[20] = (__m128i)si128;
  *(__int64 *)((char *)v15[29].m128i_i64 + 4) = 0;
  memset(
    (void *)((unsigned __int64)&v15[21].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v15 - (((_DWORD)v15 + 344) & 0xFFFFFFF8) + 476) >> 3));
  v24 = (_QWORD *)v15->m128i_i64[0];
  v25 = *(_QWORD *)(v15->m128i_i64[0] + 928);
  if ( v25 )
  {
    v24[117] = 0;
    qfree(v25);
    v24[116] = 0;
    v24[118] = 0;
  }
  sub_361400(v15);
  if ( (*(_BYTE *)(v15->m128i_i64[0] + 1336) & 0x20) != 0 )
  {
    v104[0] = &off_4E6118;
    v104[1] = 0;
    v105 = 0;
    hook_event_listener();
    auto_wait();
    unhook_event_listener();
    if ( v105 )
    {
      get_path();
      save_database();
    }
    v104[0] = &off_4EC308;
    remove_event_listener();
    v29 = v15->m128i_i64[0];
    v30 = *(_DWORD *)(v15->m128i_i64[0] + 1336);
    if ( (v30 & 0x400000) == 0 )
    {
LABEL_11:
      if ( (v30 & 2) != 0 )
      {
        if ( a3 )
        {
          if ( (unsigned __int8)qfileexist() )
          {
            *(_DWORD *)(v15->m128i_i64[0] + 1336) = 0;
            return 0;
          }
LABEL_13:
          encoding_helper = create_encoding_helper();
          v106 = (*(_DWORD *)(v15->m128i_i64[0] + 1336) & 1) == 0 ? 119 : 97;
          v34 = (*(__int64 (__fastcall **)(__int64, __int64, double, double, double, double, double, double, double, double, double, double, double, double))(*(_QWORD *)encoding_helper + 40LL))(
                  encoding_helper,
                  1,
                  *(double *)si128.m128_u64,
                  *(double *)v19.m128i_i64,
                  v20,
                  *(double *)a9.m128_u64,
                  v32,
                  v33,
                  *(double *)a12.m128_u64,
                  a13,
                  *(double *)v94.m128_u64,
                  *(double *)&v94.m128_u64[1],
                  *(double *)v95.m128i_i64,
                  *(double *)&v95.m128i_i64[1]);
          v108 = 0;
          v107 = v34 == 0 ? 116 : 98;
          v35 = qfopen();
          if ( v35 )
          {
            v29 = v15->m128i_i64[0];
LABEL_15:
            v15[32].m128i_i8[9] = 1;
            sub_3748D0(v29);
            sub_3256B0(v15->m128i_i64[0]);
            v36 = *(_QWORD *)(v15->m128i_i64[0] + 1352);
            v96 = *(_QWORD *)(v15->m128i_i64[0] + 1344);
            v97 = v36;
            v39 = sub_368430(
                    (__int64)v15,
                    encoding_helper,
                    v35,
                    a4,
                    *(double *)si128.m128_u64,
                    v19,
                    v20,
                    a9,
                    v37,
                    v38,
                    a12);
            sub_137630(
              *(_QWORD *)(v15->m128i_i64[0] + 112),
              encoding_helper,
              v40,
              v41,
              v42,
              v43,
              v94.m128_i64[0],
              v94.m128_i64[1],
              v95.m128i_i64[0],
              v95.m128i_i64[1]);
            if ( v39 == -1 )
              sub_2B4E70((__int64)"IDA failed to encode some text; file generation has been stopped\n");
            if ( encoding_helper )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)encoding_helper + 8LL))(encoding_helper);
              qfclose();
LABEL_19:
              v44 = v97;
              *(_QWORD *)(v15->m128i_i64[0] + 1344) = v96;
              *(_QWORD *)(v15->m128i_i64[0] + 1352) = v44;
              sub_374960(v15->m128i_i64[0]);
              v45 = v15->m128i_i64[0];
              v15[32].m128i_i8[9] = 0;
              *(_DWORD *)(v45 + 1336) = 0;
              return v39 == 1;
            }
            if ( !a2 )
              goto LABEL_19;
            sub_3621A0((__int64)a2, v15[4].m128i_i32[0], *(double *)si128.m128_u64);
            if ( !v15[4].m128i_i32[0] )
              goto LABEL_19;
            v95.m128i_i64[0] = 0;
            v94.m128_u64[0] = 0;
            while ( 1 )
            {
              v48 = *(_QWORD *)(v15[11].m128i_i64[1] + v95.m128i_i64[0]);
              v104[0] = v48;
              if ( v48 )
                break;
              v92 = v14[1];
              v51 = (unsigned __int64)v14[2];
              v52 = (__int64)v92 + 1;
              if ( v51 < (unsigned __int64)v92 + 1 )
                goto LABEL_58;
              (*v14)[(_QWORD)v92] = nullptr;
LABEL_37:
              v53 = v104[0];
              v14[1] = (__int64 **)((char *)v14[1] + 1);
              if ( v53 )
              {
                v54 = (*(_DWORD *)(v53 + 104))-- == 1;
                if ( v54 )
                {
                  sub_258970((__int64 *)v53);
                  v55 = *(_QWORD *)(v53 + 184);
                  if ( v55 )
                  {
                    v56 = *(_QWORD *)(v53 + 192);
                    if ( v56 )
                    {
                      for ( i = 0; i != v56; ++i )
                      {
                        v58 = (__int64 *)(v55 + 24 * i);
                        v59 = *v58;
                        if ( *v58 )
                        {
                          v58[1] = 0;
                          qfree(v59);
                          v55 = *(_QWORD *)(v53 + 184);
                        }
                      }
                    }
                    *(_QWORD *)(v53 + 192) = 0;
                    qfree(v55);
                  }
                  v60 = *(_QWORD *)(v53 + 160);
                  if ( v60 )
                  {
                    *(_QWORD *)(v53 + 168) = 0;
                    qfree(v60);
                  }
                  v61 = *(_QWORD *)(v53 + 128);
                  if ( v61 )
                  {
                    v62 = *(_QWORD *)(v53 + 136);
                    if ( v62 )
                    {
                      for ( j = 0; j != v62; ++j )
                      {
                        v64 = (__int64 *)(v61 + 32 * j);
                        v65 = *v64;
                        if ( *v64 )
                        {
                          v64[1] = 0;
                          qfree(v65);
                          v61 = *(_QWORD *)(v53 + 128);
                        }
                      }
                    }
                    *(_QWORD *)(v53 + 136) = 0;
                    qfree(v61);
                  }
                  sub_255050(v53 + 16, *(double *)si128.m128_u64);
                  j__qfree(v53);
                }
              }
              ++v94.m128_u64[0];
              v66 = v15[4].m128i_i32[0];
              v95.m128i_i64[0] += 120;
              if ( v94.m128_u64[0] >= v66 )
                goto LABEL_19;
            }
            v49 = *(_DWORD *)(v48 + 104) + 1;
            *(_DWORD *)(v48 + 104) = v49;
            v50 = v14[1];
            v51 = (unsigned __int64)v14[2];
            v52 = (__int64)v50 + 1;
            if ( v51 < (unsigned __int64)v50 + 1 )
            {
LABEL_58:
              v100 = v48;
              v67 = qvector_reserve((__int64)v14, 0, v52, 8);
              v68 = v14[1];
              v69 = v14[2];
              v98 = v67;
              v14[2] = (__int64 **)v51;
              v70 = v100;
              v71 = (__int64)v68 - 1;
              v99 = v69;
              v72 = *v14;
              if ( v71 >= 0 )
              {
                LODWORD(v100) = v39;
                v101 = v70;
                v102 = v15;
                v73 = (_QWORD *)v67;
                v103 = v14;
                v74 = v71;
                do
                {
                  v75 = *v72;
                  *v73 = *v72;
                  if ( v75 )
                    ++*((_DWORD *)v75 + 26);
                  v76 = *v72;
                  if ( *v72 )
                  {
                    v54 = (*((_DWORD *)v76 + 26))-- == 1;
                    if ( v54 )
                    {
                      v77 = *v72;
                      if ( *v72 )
                      {
                        sub_258970(*v72);
                        v78 = v77[23];
                        if ( v78 )
                        {
                          v79 = v77[24];
                          if ( v79 )
                          {
                            for ( k = 0; k != v79; ++k )
                            {
                              v81 = (__int64 *)(v78 + 24 * k);
                              v82 = *v81;
                              if ( *v81 )
                              {
                                v81[1] = 0;
                                qfree(v82);
                                v78 = v77[23];
                              }
                            }
                          }
                          v77[24] = 0;
                          qfree(v78);
                        }
                        v83 = v77[20];
                        if ( v83 )
                        {
                          v77[21] = 0;
                          qfree(v83);
                        }
                        v84 = v77[16];
                        if ( v84 )
                        {
                          v85 = v77[17];
                          if ( v85 )
                          {
                            for ( m = 0; m != v85; ++m )
                            {
                              v87 = (__int64 *)(v84 + 32 * m);
                              v88 = *v87;
                              if ( *v87 )
                              {
                                v87[1] = 0;
                                qfree(v88);
                                v84 = v77[16];
                              }
                            }
                          }
                          v77[17] = 0;
                          qfree(v84);
                        }
                        sub_255050((__int64)(v77 + 2), *(double *)si128.m128_u64);
                        j__qfree((__int64)v77);
                      }
                    }
                  }
                  ++v72;
                  ++v73;
                }
                while ( v74-- != 0 );
                v14 = v103;
                v39 = v100;
                v70 = v101;
                v15 = v102;
                v72 = *v103;
              }
              v100 = v70;
              qfree((__int64)v72);
              v90 = (__int64 **)v98;
              v48 = v100;
              v14[2] = v99;
              v91 = v14[1];
              *v14 = v90;
              v90[(_QWORD)v91] = (__int64 *)v48;
              if ( !v48 )
                goto LABEL_37;
              v49 = *(_DWORD *)(v48 + 104);
            }
            else
            {
              (*v14)[(_QWORD)v50] = (__int64 *)v48;
            }
            *(_DWORD *)(v48 + 104) = v49 + 1;
            goto LABEL_37;
          }
          v93 = (const char *)qerrstr();
          sub_2B4E70((__int64)"%s: %s", a3, v93);
          if ( encoding_helper )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)encoding_helper + 8LL))(encoding_helper);
            return 0;
          }
          return 0;
        }
      }
      else if ( a3 )
      {
        goto LABEL_13;
      }
      encoding_helper = 0;
      v35 = 0;
      goto LABEL_15;
    }
  }
  else
  {
    auto_wait();
    v29 = v15->m128i_i64[0];
    v30 = *(_DWORD *)(v15->m128i_i64[0] + 1336);
    if ( (v30 & 0x400000) == 0 )
      goto LABEL_11;
  }
  if ( *(_QWORD *)(a4 + 8) )
  {
    v47 = **(_QWORD **)a4;
  }
  else
  {
    callui(11, v104, &callui, v26, v27, v28, v94.m128_u64[0], v94.m128_u64[1], v95.m128i_i64[0], v95.m128i_i64[1]);
    v47 = v104[0];
  }
  sub_326B80(v47, 0x73u);
  set_database_flag();
  getinf();
  getinf();
  setinf();
  get_path();
  save_database();
  return 1;
}

