bool __fastcall sub_364010(
        const __m128i *a1,
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
        __m128 a12)
{
  __int64 ***v13; // r12
  __int64 *v14; // rbx
  __int64 v15; // rax
  __m128 si128; // xmm0
  __m128i v18; // xmm1
  double v19; // xmm2_8
  unsigned __int64 v20; // r15
  void **v21; // rbp
  void *v22; // rdi
  _QWORD *v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  int v28; // eax
  __int64 encoding_helper; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
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
  __int64 v52; // rbp
  bool v53; // zf
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 i; // r14
  _QWORD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rsi
  __int64 j; // r15
  _QWORD *v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __int64 **v64; // r15
  __int64 **v65; // rsi
  __int64 v66; // r8
  __int64 v67; // r15
  __int64 **v68; // rbp
  _QWORD *v69; // rbx
  __int64 v70; // r12
  __int64 *v71; // rax
  __int64 *v72; // rdx
  __int64 *v73; // r13
  __int64 v74; // r8
  __int64 v75; // r14
  __int64 k; // r15
  _QWORD *v77; // rax
  __int64 v78; // r8
  __int64 v79; // r14
  __int64 m; // r15
  _QWORD *v81; // rax
  __int64 **v83; // rdx
  __int64 **v84; // rax
  __int64 **v85; // rax
  const char *v86; // rax
  __m128 v87; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v88; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v89; // [rsp+20h] [rbp-A8h]
  __int64 v90; // [rsp+28h] [rbp-A0h]
  __int64 v91; // [rsp+30h] [rbp-98h]
  __int64 **v92; // [rsp+38h] [rbp-90h]
  __int64 v93; // [rsp+40h] [rbp-88h]
  __int64 v94; // [rsp+48h] [rbp-80h]
  __int64 *v95; // [rsp+50h] [rbp-78h]
  __int64 ***v96; // [rsp+58h] [rbp-70h]
  _QWORD v97[2]; // [rsp+60h] [rbp-68h] BYREF
  char v98; // [rsp+70h] [rbp-58h]
  _BYTE v99[3]; // [rsp+85h] [rbp-43h] BYREF
  unsigned __int64 v100; // [rsp+88h] [rbp-40h]

  v13 = a2;
  v14 = (__int64 *)a1;
  v15 = a1->m128i_i64[0];
  v100 = __readfsqword(0x28u);
  *(_DWORD *)(v15 + 1336) = a5;
  si128 = (__m128)_mm_loadu_si128(a1 + 18);
  v18 = _mm_loadu_si128(a1 + 17);
  *(_QWORD *)&v19 = _mm_movehl_ps(a8, si128).m128_u64[0];
  v20 = a1[20].m128i_i64[1] + 8;
  v21 = (void **)(*(_QWORD *)&v19 + 8LL);
  if ( *(_QWORD *)&v19 + 8LL < v20 )
  {
    v87 = si128;
    v88 = v18;
    do
    {
      v22 = *v21;
      a2 = (__int64 ***)&dword_200;
      ++v21;
      operator delete(v22, 0x200u);
    }
    while ( (unsigned __int64)v21 < v20 );
    si128 = (__m128)_mm_load_si128((const __m128i *)&v87);
    v18 = _mm_load_si128(&v88);
  }
  v14[42] = 0;
  *((__m128i *)v14 + 19) = v18;
  *((__m128 *)v14 + 20) = si128;
  *(__int64 *)((char *)v14 + 468) = 0;
  memset(
    (void *)((unsigned __int64)(v14 + 43) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v14 - (((_DWORD)v14 + 344) & 0xFFFFFFF8) + 476) >> 3));
  v23 = (_QWORD *)*v14;
  if ( *(_QWORD *)(*v14 + 928) )
  {
    v23[117] = 0;
    qfree();
    v23[116] = 0;
    v23[118] = 0;
  }
  sub_35C500(v14);
  if ( (*(_BYTE *)(*v14 + 1336) & 0x20) != 0 )
  {
    v97[0] = &off_4C6838;
    v97[1] = 0;
    v98 = 0;
    hook_event_listener();
    auto_wait();
    a2 = (__int64 ***)v97;
    unhook_event_listener();
    if ( v98 )
    {
      get_path();
      a2 = nullptr;
      save_database();
    }
    v97[0] = &off_4CC1E0;
    remove_event_listener();
    v27 = *v14;
    v28 = *(_DWORD *)(*v14 + 1336);
    if ( (v28 & 0x400000) == 0 )
    {
LABEL_11:
      if ( (v28 & 2) != 0 )
      {
        if ( a3 )
        {
          if ( (unsigned __int8)qfileexist() )
          {
            *(_DWORD *)(*v14 + 1336) = 0;
            return 0;
          }
LABEL_13:
          encoding_helper = create_encoding_helper();
          v99[0] = (*(_DWORD *)(*v14 + 1336) & 1) == 0 ? 119 : 97;
          v34 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64, __int64, __int64, __int64))(*(_QWORD *)encoding_helper + 40LL))(
                  encoding_helper,
                  1,
                  v30,
                  v31,
                  v32,
                  v33,
                  v87.m128_u64[0],
                  v87.m128_i64[1],
                  v88.m128i_i64[0],
                  v88.m128i_i64[1]);
          a2 = (__int64 ***)v99;
          v99[2] = 0;
          v99[1] = v34 == 0 ? 116 : 98;
          v35 = qfopen();
          if ( v35 )
          {
            v27 = *v14;
LABEL_15:
            *((_BYTE *)v14 + 521) = 1;
            sub_36F9D0(v27, a2);
            sub_320930(*v14);
            v36 = *(_QWORD *)(*v14 + 1352);
            v89 = *(_QWORD *)(*v14 + 1344);
            v90 = v36;
            v39 = sub_363530(
                    (__int64)v14,
                    encoding_helper,
                    v35,
                    a4,
                    *(double *)si128.m128_u64,
                    v18,
                    v19,
                    a9,
                    v37,
                    v38,
                    a12);
            sub_133430(
              *(_QWORD *)(*v14 + 112),
              encoding_helper,
              v40,
              v41,
              v42,
              v43,
              v87.m128_i64[0],
              v87.m128_i64[1],
              v88.m128i_i64[0],
              v88.m128i_i64[1]);
            if ( v39 == -1 )
              sub_2B05F0((__int64)"IDA failed to encode some text; file generation has been stopped\n");
            if ( encoding_helper )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)encoding_helper + 8LL))(encoding_helper);
              qfclose();
LABEL_19:
              v44 = v90;
              *(_QWORD *)(*v14 + 1344) = v89;
              *(_QWORD *)(*v14 + 1352) = v44;
              sub_36FA60(*v14);
              v45 = *v14;
              *((_BYTE *)v14 + 521) = 0;
              *(_DWORD *)(v45 + 1336) = 0;
              return v39 == 1;
            }
            if ( !v13 )
              goto LABEL_19;
            sub_35D2A0((__int64)v13, *((int *)v14 + 16));
            if ( !*((_DWORD *)v14 + 16) )
              goto LABEL_19;
            v88.m128i_i64[0] = 0;
            v87.m128_u64[0] = 0;
            while ( 1 )
            {
              v48 = *(_QWORD *)(v14[23] + v88.m128i_i64[0]);
              v97[0] = v48;
              if ( v48 )
                break;
              v85 = v13[1];
              v51 = (unsigned __int64)v13[2];
              if ( v51 < (unsigned __int64)v85 + 1 )
                goto LABEL_58;
              (*v13)[(_QWORD)v85] = nullptr;
LABEL_37:
              v52 = v97[0];
              v13[1] = (__int64 **)((char *)v13[1] + 1);
              if ( v52 )
              {
                v53 = (*(_DWORD *)(v52 + 104))-- == 1;
                if ( v53 )
                {
                  sub_2540F0((__int64 *)v52);
                  v54 = *(_QWORD *)(v52 + 184);
                  if ( v54 )
                  {
                    v55 = *(_QWORD *)(v52 + 192);
                    if ( v55 )
                    {
                      for ( i = 0; i != v55; ++i )
                      {
                        v57 = (_QWORD *)(v54 + 24 * i);
                        if ( *v57 )
                        {
                          v57[1] = 0;
                          qfree();
                          v54 = *(_QWORD *)(v52 + 184);
                        }
                      }
                    }
                    *(_QWORD *)(v52 + 192) = 0;
                    qfree();
                  }
                  if ( *(_QWORD *)(v52 + 160) )
                  {
                    *(_QWORD *)(v52 + 168) = 0;
                    qfree();
                  }
                  v58 = *(_QWORD *)(v52 + 128);
                  if ( v58 )
                  {
                    v59 = *(_QWORD *)(v52 + 136);
                    if ( v59 )
                    {
                      for ( j = 0; j != v59; ++j )
                      {
                        v61 = (_QWORD *)(v58 + 32 * j);
                        if ( *v61 )
                        {
                          v61[1] = 0;
                          qfree();
                          v58 = *(_QWORD *)(v52 + 128);
                        }
                      }
                    }
                    *(_QWORD *)(v52 + 136) = 0;
                    qfree();
                  }
                  sub_2507D0(v52 + 16);
                  j__qfree();
                }
              }
              ++v87.m128_u64[0];
              v62 = *((int *)v14 + 16);
              v88.m128i_i64[0] += 120;
              if ( v87.m128_u64[0] >= v62 )
                goto LABEL_19;
            }
            v49 = *(_DWORD *)(v48 + 104) + 1;
            *(_DWORD *)(v48 + 104) = v49;
            v50 = v13[1];
            v51 = (unsigned __int64)v13[2];
            if ( v51 < (unsigned __int64)v50 + 1 )
            {
LABEL_58:
              v93 = v48;
              v63 = qvector_reserve();
              v64 = v13[1];
              v65 = v13[2];
              v91 = v63;
              v13[2] = (__int64 **)v51;
              v66 = v93;
              v67 = (__int64)v64 - 1;
              v92 = v65;
              v68 = *v13;
              if ( v67 >= 0 )
              {
                LODWORD(v93) = v39;
                v94 = v66;
                v95 = v14;
                v69 = (_QWORD *)v63;
                v96 = v13;
                v70 = v67;
                do
                {
                  v71 = *v68;
                  *v69 = *v68;
                  if ( v71 )
                    ++*((_DWORD *)v71 + 26);
                  v72 = *v68;
                  if ( *v68 )
                  {
                    v53 = (*((_DWORD *)v72 + 26))-- == 1;
                    if ( v53 )
                    {
                      v73 = *v68;
                      if ( *v68 )
                      {
                        sub_2540F0(*v68);
                        v74 = v73[23];
                        if ( v74 )
                        {
                          v75 = v73[24];
                          if ( v75 )
                          {
                            for ( k = 0; k != v75; ++k )
                            {
                              v77 = (_QWORD *)(v74 + 24 * k);
                              if ( *v77 )
                              {
                                v77[1] = 0;
                                qfree();
                                v74 = v73[23];
                              }
                            }
                          }
                          v73[24] = 0;
                          qfree();
                        }
                        if ( v73[20] )
                        {
                          v73[21] = 0;
                          qfree();
                        }
                        v78 = v73[16];
                        if ( v78 )
                        {
                          v79 = v73[17];
                          if ( v79 )
                          {
                            for ( m = 0; m != v79; ++m )
                            {
                              v81 = (_QWORD *)(v78 + 32 * m);
                              if ( *v81 )
                              {
                                v81[1] = 0;
                                qfree();
                                v78 = v73[16];
                              }
                            }
                          }
                          v73[17] = 0;
                          qfree();
                        }
                        sub_2507D0((__int64)(v73 + 2));
                        j__qfree();
                      }
                    }
                  }
                  ++v68;
                  ++v69;
                }
                while ( v70-- != 0 );
                v13 = v96;
                v39 = v93;
                v66 = v94;
                v14 = v95;
              }
              v93 = v66;
              qfree();
              v83 = (__int64 **)v91;
              v48 = v93;
              v13[2] = v92;
              v84 = v13[1];
              *v13 = v83;
              v83[(_QWORD)v84] = (__int64 *)v48;
              if ( !v48 )
                goto LABEL_37;
              v49 = *(_DWORD *)(v48 + 104);
            }
            else
            {
              (*v13)[(_QWORD)v50] = (__int64 *)v48;
            }
            *(_DWORD *)(v48 + 104) = v49 + 1;
            goto LABEL_37;
          }
          v86 = (const char *)qerrstr();
          sub_2B05F0((__int64)"%s: %s", a3, v86);
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
    v27 = *v14;
    v28 = *(_DWORD *)(*v14 + 1336);
    if ( (v28 & 0x400000) == 0 )
      goto LABEL_11;
  }
  if ( *(_QWORD *)(a4 + 8) )
  {
    v47 = **(_QWORD **)a4;
  }
  else
  {
    callui(11, v97, &callui, v24, v25, v26, v87.m128_u64[0], v87.m128_u64[1], v88.m128i_i64[0], v88.m128i_i64[1]);
    v47 = v97[0];
  }
  sub_321E00(v47, 0x73u);
  set_database_flag();
  getinf();
  getinf();
  setinf();
  get_path();
  save_database();
  return 1;
}

