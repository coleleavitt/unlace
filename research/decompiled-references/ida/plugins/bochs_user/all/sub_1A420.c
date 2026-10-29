__int64 __fastcall sub_1A420(
        __m128i *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  __m128i *v7; // rbx
  const char *v8; // r12
  char v9; // r13
  __int64 v10; // r14
  _QWORD *v11; // rax
  __m128i v12; // xmm3
  __m128i v13; // xmm2
  __m128i v14; // xmm0
  unsigned __int64 v15; // rbp
  void **v16; // r13
  void *v17; // rdi
  __m128i v18; // xmm5
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned int v23; // ebp
  __int64 v25; // rax
  char v26; // al
  __int8 v27; // dl
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r14
  size_t v31; // r13
  int v32; // r13d
  unsigned __int64 v33; // r14
  _QWORD *v34; // rbp
  void *v35; // rsi
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int16 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int32 *v47; // rdi
  __m128i v48; // xmm0
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rcx
  __int32 *v52; // rsi
  __m128i *v53; // rdi
  _DWORD *v54; // rsi
  __int64 v55; // rcx
  _DWORD *v56; // rdi
  __int64 v57; // [rsp-10h] [rbp-318h]
  __int64 v58; // [rsp-8h] [rbp-310h]
  __m128i v59; // [rsp+0h] [rbp-308h] BYREF
  __int64 v60; // [rsp+18h] [rbp-2F0h]
  __int64 v61; // [rsp+20h] [rbp-2E8h]
  unsigned int v62; // [rsp+2Ch] [rbp-2DCh]
  __m128i v63; // [rsp+30h] [rbp-2D8h] BYREF
  _OWORD v64[2]; // [rsp+40h] [rbp-2C8h] BYREF
  __m256i src; // [rsp+60h] [rbp-2A8h] BYREF
  unsigned __int16 v66; // [rsp+80h] [rbp-288h]
  unsigned __int16 v67; // [rsp+82h] [rbp-286h]
  unsigned __int8 v68; // [rsp+84h] [rbp-284h]
  unsigned __int8 v69; // [rsp+85h] [rbp-283h]
  unsigned __int16 v70; // [rsp+86h] [rbp-282h]
  __m128i v71[2]; // [rsp+88h] [rbp-280h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-260h] BYREF
  __m128i v73; // [rsp+B8h] [rbp-250h]
  __m128i v74; // [rsp+C8h] [rbp-240h]
  __m128i v75; // [rsp+D8h] [rbp-230h]
  __m128i v76; // [rsp+E8h] [rbp-220h]
  __m128i v77; // [rsp+F8h] [rbp-210h]
  __m128 v78; // [rsp+108h] [rbp-200h]
  _OWORD s[3]; // [rsp+118h] [rbp-1F0h] BYREF
  __m128i v80; // [rsp+148h] [rbp-1C0h]
  __m128i v81; // [rsp+158h] [rbp-1B0h]
  __m128i v82; // [rsp+168h] [rbp-1A0h]
  __m128i v83; // [rsp+178h] [rbp-190h]
  __m128i v84; // [rsp+188h] [rbp-180h]
  __int64 v85; // [rsp+198h] [rbp-170h]
  _BYTE v86[264]; // [rsp+1A0h] [rbp-168h] BYREF
  __int64 v87; // [rsp+2A8h] [rbp-60h]
  __int64 v88; // [rsp+2B0h] [rbp-58h]
  char v89; // [rsp+2B8h] [rbp-50h]
  __int64 v90; // [rsp+2C0h] [rbp-48h]
  unsigned __int64 v91; // [rsp+2C8h] [rbp-40h]

  v60 = a3;
  v61 = a4;
  v62 = a5;
  v91 = __readfsqword(0x28u);
  if ( a1[67].m128i_i64[0] )
  {
    if ( under_debugger )
      BUG();
    v38 = interr();
LABEL_95:
    memset((char *)s + 8 * v38 + 8, 0, (unsigned int)(8 * (16 - v38)));
LABEL_60:
    v39 = 248;
    if ( v73.m128i_i16[4] == 523 )
      v39 = 264;
    v40 = 128;
    v41 = v73.m128i_u16[2] + 24LL;
    if ( v41 >= 0x80 )
      v40 = v73.m128i_u16[2] + 24LL;
    if ( v40 < v39 )
    {
      v42 = 120;
      if ( v39 != 248 )
        v42 = 136;
      if ( v41 >= v42 )
        memset((char *)s + 8 * (16 - ((v39 - v41 + 7) >> 3)) + 8, 0, (v39 - v41 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    if ( !v9 )
      goto LABEL_77;
    v43 = v73.m128i_i16[4];
    v44 = v75.m128i_u32[1];
    if ( v73.m128i_i16[4] == 523 )
      v44 = v75.m128i_i64[0];
    v87 = v44;
    goto LABEL_73;
  }
  v7 = a1;
  if ( !a1[69].m128i_i8[8] )
  {
    sub_EB00((__int64)"AUTOHIDE NONE\n"
                      "Bochs executable \"bochs\" is not found:\n"
                      "Please install Bochs and/or specify the location of \"bochs\" in the dbg_bochs.cfg file.");
    return (unsigned int)-1;
  }
  v8 = a2;
  v10 = a6;
  if ( !(unsigned __int8)qfileexist() )
  {
    sub_EB00(
      (__int64)"AUTOHIDE NONE\n"
               "Bochs debugger executable \"%s\" is not found.\n"
               "Please make sure you specify a correct location to \"bochs\" in the dbg_bochs.cfg file.",
      &a1[69].m128i_i8[8]);
    return (unsigned int)-1;
  }
  if ( (unsigned __int8)is_miniidb() )
  {
    if ( a1[582].m128i_i32[1] != 1 )
    {
      v25 = open_linput();
      if ( v25 )
      {
        v9 = sub_15C50(v25, nullptr);
        if ( v9 )
        {
          a1[582].m128i_i32[1] = 1;
          sub_EBD0((__int64)"Bochs debugger detected a bochsrc file. Switching to Disk operation mode.\n");
          goto LABEL_19;
        }
        if ( a1[582].m128i_i32[1] != 3 )
        {
LABEL_19:
          close_linput();
          goto LABEL_6;
        }
        LODWORD(v64[0]) = 0;
        v89 = 0;
        memset(&src.m256i_u64[1], 0, 24);
        src.m256i_i64[0] = (__int64)off_71C40;
        qlseek();
        if ( qlread() != 28 )
          goto LABEL_77;
        if ( v66 != 17744 )
        {
          if ( v66 == 23126 )
          {
            qlseek();
            if ( qlread() == 40 )
            {
              v46 = 60;
              v47 = &si128.m128i_i32[2];
              while ( v46 )
              {
                *v47++ = 0;
                --v46;
              }
              si128.m128i_i32[0] = v66;
              v48 = _mm_loadl_epi64(v71);
              v49 = v71[0].m128i_i64[1];
              si128.m128i_i32[1] = v67 | (v68 << 16);
              v50 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v48, 229)) + 40 - v70;
              if ( v67 == 512 || v67 == 0x8664 || v67 == 0xAA64 )
              {
                v73.m128i_i16[4] = 523;
                v77.m128i_i32[1] = v50;
                v75.m128i_i64[0] = v71[0].m128i_i64[1];
                v74.m128i_i64[1] = v48.m128i_i64[0];
              }
              else
              {
                v75.m128i_i32[1] = v71[0].m128i_i32[2];
                v49 = v71[0].m128i_u32[2];
                v73.m128i_i16[4] = 267;
                v77.m128i_i32[1] = v50;
                v74.m128i_i64[1] = v48.m128i_i64[0];
              }
              v77.m128i_i16[6] = v69;
              v87 = v49;
              v43 = v73.m128i_i16[4];
              v80 = v71[1];
              v75.m128i_i64[1] = 0x100000001LL;
              v88 = LODWORD(v64[0]);
LABEL_73:
              if ( (unsigned __int8)getinf_flag() != (v43 == 523) )
              {
                if ( v43 != 523 )
                  setinf_flag();
                setinf_flag();
                v7[581].m128i_i32[3] = (v43 == 523) | v7[581].m128i_i32[3] & 0xFFFFFFFE;
              }
              goto LABEL_77;
            }
            goto LABEL_77;
          }
          if ( v66 == 23117 || v66 == 19802 )
          {
            if ( qlread() == 8 && v90 == 0x6B6E694C696E55LL )
              v89 = 1;
            qlseek();
            if ( qlread() != 4 )
              goto LABEL_77;
          }
        }
        v88 = LODWORD(v64[0]);
        qlseek();
        memset(v86, 0, sizeof(v86));
        qlseek();
        if ( (unsigned __int64)(qlread() - 93) <= 0xAB
          && (*(_DWORD *)v86 == 19536 || *(_DWORD *)v86 == 4542530 || *(_DWORD *)v86 == 17744) )
        {
          if ( *(_WORD *)&v86[24] == 523 )
          {
            v51 = 24;
            v52 = (__int32 *)v86;
            v9 = *(_DWORD *)v86 == 19536 || *(_DWORD *)v86 == 4542530 || *(_DWORD *)v86 == 17744;
            v53 = &si128;
            while ( v51 )
            {
              v53->m128i_i32[0] = *v52++;
              v53 = (__m128i *)((char *)v53 + 4);
              --v51;
            }
            v54 = &v86[128];
            v55 = 34;
            v56 = s;
            while ( v55 )
            {
              *v56++ = *v54++;
              --v55;
            }
            v78 = _mm_shuffle_ps((__m128)_mm_load_si128((const __m128i *)&v86[96]), *(__m128 *)&v86[112], 136);
          }
          else
          {
            if ( *(_WORD *)&v86[24] <= 0x20Bu )
              v9 = *(_WORD *)&v86[24] == 0 || ((*(_WORD *)&v86[24] - 263) & 0xFFFB) == 0;
            si128 = _mm_load_si128((const __m128i *)v86);
            v85 = *(_QWORD *)&v86[240];
            v73 = _mm_load_si128((const __m128i *)&v86[16]);
            v74 = _mm_load_si128((const __m128i *)&v86[32]);
            v75 = _mm_load_si128((const __m128i *)&v86[48]);
            v76 = _mm_load_si128((const __m128i *)&v86[64]);
            v77 = _mm_load_si128((const __m128i *)&v86[80]);
            v78 = (__m128)_mm_load_si128((const __m128i *)&v86[96]);
            s[0] = _mm_load_si128((const __m128i *)&v86[112]);
            s[1] = _mm_load_si128((const __m128i *)&v86[128]);
            s[2] = _mm_load_si128((const __m128i *)&v86[144]);
            v80 = _mm_load_si128((const __m128i *)&v86[160]);
            v81 = _mm_load_si128((const __m128i *)&v86[176]);
            v82 = _mm_load_si128((const __m128i *)&v86[192]);
            v83 = _mm_load_si128((const __m128i *)&v86[208]);
            v84 = _mm_load_si128((const __m128i *)&v86[224]);
          }
          v38 = DWORD1(s[0]);
          if ( (unsigned int)(DWORD1(s[0]) - 1) > 0xE )
            goto LABEL_60;
          goto LABEL_95;
        }
LABEL_77:
        src.m256i_i64[0] = (__int64)off_70C58;
        if ( src.m256i_i64[1] )
        {
          src.m256i_i64[2] = 0;
          qfree();
        }
        goto LABEL_19;
      }
    }
  }
LABEL_6:
  v11 = sub_1A320((__int64)v7);
  v12 = _mm_loadu_si128(v7 + 63);
  v13 = _mm_loadu_si128(v7 + 64);
  v7[67].m128i_i64[0] = (__int64)v11;
  v14 = _mm_loadu_si128(v7 + 66);
  v63 = v12;
  v64[0] = _mm_loadu_si128(v7 + 65);
  v64[1] = v14;
  *(__m128i *)src.m256i_i8 = v12;
  v59 = v13;
  *(__m128i *)&src.m256i_u64[2] = v13;
  sub_12E50(src.m256i_i64, (__int64 *)v64);
  v15 = v7[66].m128i_i64[1] + 8;
  v16 = (void **)(v13.m128i_i64[1] + 8);
  if ( v13.m128i_i64[1] + 8 < v15 )
  {
    do
    {
      v17 = *v16++;
      operator delete(v17, 0x1F8u);
    }
    while ( (unsigned __int64)v16 < v15 );
  }
  v18 = _mm_load_si128(&v59);
  v19 = *(_DWORD *)debug;
  v7[65] = _mm_load_si128(&v63);
  v7[66] = v18;
  if ( (v19 & 0x10000) != 0 )
  {
    sub_EBD0((__int64)"Logging communication with Bochs into bochscmd.log.\n");
    v34 = (_QWORD *)v7[67].m128i_i64[0];
    v35 = (void *)v34[164];
    if ( v34[166] <= 0xCu )
    {
      v36 = qvector_reserve();
      v34[164] = v36;
      v35 = (void *)v36;
    }
    v34[165] = 13;
    qmemcpy(v35, "bochscmd.log", 12);
    *(_BYTE *)(v34[164] + 12LL) = 0;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v7[67].m128i_i64[0] + 16LL))(
          v7[67].m128i_i64[0],
          v8,
          v60,
          v61,
          v62,
          v10,
          a7);
  v22 = v7[67].m128i_i64[0];
  v23 = v20;
  if ( v20 != 1 )
  {
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v7[67].m128i_i64[0] = 0;
    if ( v23 == -1 )
      return (unsigned int)-2;
    if ( v23 == -2 )
      return (unsigned int)-3;
    return (unsigned int)-1;
  }
  v7[975].m128i_i64[1] = v22;
  if ( !(unsigned __int8)sub_15EB0(1, v58, v21, v57) )
    sub_EBD0((__int64)"Error: Failed to install Bochs debugger menus\n");
  v26 = getinf_flag();
  v27 = v7[2].m128i_i8[4];
  if ( !v26 )
  {
    v28 = 4;
    if ( !v27 )
      goto LABEL_27;
    v29 = v7->m128i_i64[1];
    v28 = 4;
    goto LABEL_26;
  }
  v28 = 8;
  if ( v27 )
  {
    v29 = v7[1].m128i_i64[0];
LABEL_26:
    v7[1].m128i_i64[1] = v29;
    v7[2].m128i_i32[0] = v28;
  }
LABEL_27:
  v7[17].m128i_i32[1] = v28;
  sub_15790(v7->m128i_i64);
  v30 = v7[67].m128i_i64[0];
  memset(&src, 0, 24);
  if ( v8 )
  {
    v31 = strlen(v8);
    v59.m128i_i64[0] = v31 + 1;
    src.m256i_i64[0] = qvector_reserve();
    src.m256i_i64[1] = v59.m128i_i64[0];
    memmove((void *)src.m256i_i64[0], v8, v31);
    *(_BYTE *)(src.m256i_i64[0] + v31) = 0;
    v8 = (const char *)src.m256i_i64[0];
    v32 = ++dword_75370;
    if ( !v30 )
      goto LABEL_33;
    v7[61].m128i_i64[0] = v30;
    v33 = src.m256i_u64[1];
    if ( !src.m256i_i64[1] )
      goto LABEL_31;
  }
  else
  {
    v32 = ++dword_75370;
    if ( !v30 )
      return v23;
    v7[61].m128i_i64[0] = v30;
    v33 = src.m256i_u64[1];
    if ( !src.m256i_i64[1] )
    {
      v7[60].m128i_i64[0] = 0;
      v7[61].m128i_i32[2] = v32;
      return v23;
    }
  }
  if ( v33 != 1 )
  {
    v37 = (void *)v7[59].m128i_i64[1];
    if ( v7[60].m128i_i64[1] < v33 )
    {
      v45 = qvector_reserve();
      v7[59].m128i_i64[1] = v45;
      v37 = (void *)v45;
    }
    v7[60].m128i_i64[0] = v33;
    memmove(v37, v8, v33 - 1);
    *(_BYTE *)(v7[59].m128i_i64[1] + v33 - 1) = 0;
    v8 = (const char *)src.m256i_i64[0];
    goto LABEL_32;
  }
LABEL_31:
  v7[60].m128i_i64[0] = 0;
LABEL_32:
  v7[61].m128i_i32[2] = v32;
LABEL_33:
  if ( v8 )
  {
    src.m256i_i64[1] = 0;
    qfree();
  }
  return v23;
}

