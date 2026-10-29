__int64 __fastcall sub_3F7F00(__int64 a1, __int64 a2, char a3, double a4, __m128 a5, __m128 a6)
{
  unsigned int v6; // ebp
  char *v9; // rbx
  char *v10; // rax
  char *v11; // rbp
  const char *v12; // rbx
  size_t v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __m128i v18; // xmm0
  void *v19; // rax
  __m128i v20; // xmm0
  __int8 v21; // al
  char *v22; // rax
  char *v23; // rbp
  __int8 v24; // al
  char *v25; // rax
  __int16 v26; // ax
  unsigned __int64 v27; // rax
  __int64 *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  size_t v31; // rbx
  void *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // r12
  _QWORD *v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rdi
  void *v39; // rbx
  __int64 *v40; // rbx
  __int64 v41; // rsi
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  int v46; // ebp
  __int64 v47; // rbx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rbx
  __m128i v52; // xmm0
  __int64 v53; // rdi
  __int64 v54; // rdi
  int v55; // ecx
  __int64 i; // rdx
  __int64 v57; // rax
  int v58; // edx
  __m128i v59; // [rsp+0h] [rbp-1D8h] BYREF
  const char *v60; // [rsp+18h] [rbp-1C0h]
  char v61; // [rsp+27h] [rbp-1B1h]
  __int64 v62; // [rsp+28h] [rbp-1B0h]
  __int64 *v63; // [rsp+30h] [rbp-1A8h]
  _BYTE *v64; // [rsp+38h] [rbp-1A0h]
  __int64 v65; // [rsp+40h] [rbp-198h]
  _QWORD *v66; // [rsp+48h] [rbp-190h]
  __int64 v67; // [rsp+50h] [rbp-188h]
  __int64 v68; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int64 v69; // [rsp+60h] [rbp-178h] BYREF
  __int64 v70; // [rsp+68h] [rbp-170h]
  char *s; // [rsp+70h] [rbp-168h]
  __int128 v72; // [rsp+78h] [rbp-160h]
  __int64 v73; // [rsp+90h] [rbp-148h] BYREF
  void *src[2]; // [rsp+98h] [rbp-140h]
  size_t n[2]; // [rsp+A8h] [rbp-130h]
  void *v76; // [rsp+B8h] [rbp-120h]
  size_t v77[2]; // [rsp+C0h] [rbp-118h]
  __int64 v78; // [rsp+D0h] [rbp-108h]
  int v79; // [rsp+D8h] [rbp-100h]
  _BYTE v80[24]; // [rsp+E0h] [rbp-F8h] BYREF
  __m128i v81; // [rsp+F8h] [rbp-E0h] BYREF
  void *v82; // [rsp+108h] [rbp-D0h]
  __m128i v83; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v84; // [rsp+120h] [rbp-B8h]
  int v85; // [rsp+128h] [rbp-B0h]
  __int64 v86; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v87; // [rsp+138h] [rbp-A0h]
  __int64 v88; // [rsp+148h] [rbp-90h]
  _QWORD v89[2]; // [rsp+150h] [rbp-88h] BYREF
  __int128 v90; // [rsp+160h] [rbp-78h]
  __int64 v91; // [rsp+170h] [rbp-68h]
  __int128 v92; // [rsp+178h] [rbp-60h]
  char v93; // [rsp+188h] [rbp-50h]
  unsigned __int64 v94; // [rsp+198h] [rbp-40h]

  v62 = a1;
  v65 = a2;
  v61 = a3;
  v94 = __readfsqword(0x28u);
  v59.m128i_i8[0] = *(_BYTE *)(a2 + 28);
  if ( a3 == ((v59.m128i_i8[0] & 0x10) != 0) )
  {
    LOBYTE(v6) = *(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) != 25
              && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) - 10) > 1;
    if ( (_BYTE)v6 )
    {
      s = nullptr;
      v72 = 0;
      v9 = nullptr;
      if ( get_predef_insn_cmt() > 0 && (v10 = strchr(s, 59), (v11 = v10) != nullptr) )
      {
        *v10 = 0;
        v12 = v10 + 1;
        v86 = 0;
        v88 = 0;
        v89[0] = 0;
        *(_QWORD *)v80 = (-(__int64)(a3 == 0) & 0xFFFFFFFFFFFFFFF2LL) + 21;
        v93 = -16;
        v89[1] = 3;
        v91 = 0;
        v66 = v89;
        v87 = 0;
        v90 = 0;
        v92 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( v11[1] )
        {
          while ( 1 )
          {
            v22 = strchr(v12, 59);
            v23 = v22;
            if ( !v22 )
              break;
            v60 = v22 + 1;
            v24 = v22[1];
            v23[1] = 0;
            v59.m128i_i8[0] = v24;
            v25 = strchr(v12, 58);
            if ( !v25 )
              goto LABEL_42;
            *v25 = 0;
            toupper(*(unsigned __int8 *)v12);
            v26 = str2reg();
            if ( v26 == -1 )
              goto LABEL_42;
            a6 = 0;
            src[1] = nullptr;
            v76 = nullptr;
            v78 = 0;
            v79 = 0;
            LODWORD(v73) = 3;
            src[0] = (void *)(unsigned int)v26;
            *(_OWORD *)n = 0;
            *(_OWORD *)v77 = 0;
            if ( !(unsigned __int8)parse_decl() )
            {
              clear_tinfo_t();
              if ( v76 )
              {
                v77[0] = 0;
                qfree((__int64)v76);
              }
              if ( src[1] )
              {
                n[0] = 0;
                qfree((__int64)src[1]);
              }
              cleanup_argloc();
LABEL_42:
              v6 = 0;
              goto LABEL_43;
            }
            v69 = 0;
            v70 = 0;
            if ( (unsigned __int8)get_tinfo_details() )
            {
              v67 = 0;
              v68 = 0;
              v63 = (__int64 *)&v80[8];
              *(_OWORD *)v80 = 0;
              copy_tinfo_t();
              *(_QWORD *)&v80[16] = 0;
              v64 = &v80[16];
              copy_tinfo_t();
              v81.m128i_i32[0] = 0;
              v81.m128i_i16[2] = 0;
              clear_tinfo_t();
              clear_tinfo_t();
              v27 = *(_QWORD *)v80;
              *(_QWORD *)v80 = v69;
              v69 = v27;
              create_tinfo();
              clear_tinfo_t();
              clear_tinfo_t();
              clear_tinfo_t();
            }
            clear_tinfo_t();
            if ( !v61 && get_tinfo_size() == 8 )
            {
              *(_QWORD *)v80 = 7;
              copy_tinfo_t();
              clear_tinfo_t();
            }
            *(_DWORD *)v80 = 0;
            v28 = &v73;
            copy_argloc();
            v31 = n[0];
            *(_QWORD *)&v80[16] = 0;
            v81 = 0;
            if ( n[0] )
            {
              v32 = (void *)qalloc_or_throw(n[0], (__int64)&v73, v29, v30);
              v28 = (__int64 *)src[1];
              *(_QWORD *)&v80[16] = v32;
              v81.m128i_i64[1] = v31;
              memcpy(v32, src[1], v31);
              v81.m128i_i64[0] = v31;
            }
            v13 = v77[0];
            v82 = nullptr;
            v83 = 0;
            if ( v77[0] )
            {
              v82 = (void *)qalloc_or_throw(v77[0], (__int64)v28, v29, v30);
              v83.m128i_i64[1] = v13;
              memcpy(v82, v76, v13);
              v83.m128i_i64[0] = v13;
            }
            v84 = 0;
            copy_tinfo_t();
            v14 = v87;
            v15 = v86;
            v85 = v79;
            if ( *((_QWORD *)&v87 + 1) < (unsigned __int64)(v87 + 1) )
            {
              v63 = &v86;
              v86 = qvector_reserve((__int64)&v86, v86, v87 + 1, 80);
              v14 = v87;
              v15 = v86;
            }
            v63 = &v86;
            v16 = v15 + 80 * v14;
            *(_DWORD *)v16 = 0;
            copy_argloc();
            v17 = *(_QWORD *)&v80[16];
            v18 = _mm_loadu_si128(&v81);
            *(_QWORD *)&v80[16] = 0;
            *(_QWORD *)(v16 + 16) = v17;
            *(__m128i *)(v16 + 24) = v18;
            v19 = v82;
            v20 = _mm_load_si128(&v83);
            v81 = 0;
            v82 = nullptr;
            v83 = 0;
            *(_QWORD *)(v16 + 40) = v19;
            *(_QWORD *)(v16 + 64) = 0;
            *(__m128i *)(v16 + 48) = v20;
            copy_tinfo_t();
            *(_QWORD *)&v87 = v87 + 1;
            *(_DWORD *)(v16 + 72) = v85;
            clear_tinfo_t();
            if ( v82 )
            {
              v83.m128i_i64[0] = 0;
              qfree((__int64)v82);
            }
            if ( *(_QWORD *)&v80[16] )
            {
              v81.m128i_i64[0] = 0;
              qfree(*(__int64 *)&v80[16]);
            }
            cleanup_argloc();
            clear_tinfo_t();
            if ( v76 )
            {
              v77[0] = 0;
              qfree((__int64)v76);
            }
            if ( src[1] )
            {
              n[0] = 0;
              qfree((__int64)src[1]);
            }
            cleanup_argloc();
            v21 = v59.m128i_i8[0];
            v23[1] = v59.m128i_i8[0];
            if ( !v21 )
              break;
            v12 = v60;
          }
        }
        v39 = (void *)v87;
        v73 = 0;
        *(_OWORD *)src = 0;
        if ( (_QWORD)v87
          && (v73 = qvector_reserve((__int64)&v73, 0, v87, 4),
              memset((void *)(v73 + 4 * (__int64)src[0]), 0, 4 * ((_QWORD)v39 - (unsigned __int64)src[0])),
              src[0] = v39,
              (_QWORD)v87) )
        {
          v46 = 0;
          v47 = 0;
          while ( 1 )
          {
            v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v62 + 832) + 168LL))(
                    *(_QWORD *)(v62 + 832),
                    *(unsigned __int16 *)(v86 + 80 * v47 + 8));
            v45 = v73;
            if ( v48 == -1 )
              break;
            ++v46;
            *(_DWORD *)(v73 + 4 * v47) = v48;
            v47 = v46;
            if ( v46 >= (unsigned __int64)v87 )
              goto LABEL_56;
          }
          v6 = 0;
        }
        else
        {
LABEL_56:
          v68 = 0;
          v63 = &v86;
          create_tinfo();
          v40 = (__int64 *)v62;
          v41 = *(_QWORD *)(v62 + 800);
          LOBYTE(v42) = sub_32CB80(&v68, v41, 0.0, a5);
          v6 = v42;
          if ( (_BYTE)v42 )
          {
            v70 = 0;
            v69 = 0xFFFFFFFF00000000LL;
            v49 = j__qalloc_or_throw(312, v41, v43, v44);
            *(_QWORD *)v49 = -1;
            v50 = v49;
            *(_QWORD *)(v49 + 8) = 0;
            *(_QWORD *)(v49 + 16) = 0;
            *(_QWORD *)(v49 + 24) = 0;
            *(_QWORD *)(v49 + 48) = 0;
            *(_QWORD *)(v49 + 72) = 0;
            *(_QWORD *)(v49 + 80) = 0;
            *(_QWORD *)(v49 + 88) = 0;
            *(_QWORD *)(v49 + 96) = 0;
            *(_QWORD *)(v49 + 104) = 0;
            *(_QWORD *)(v49 + 112) = 0;
            *(_QWORD *)(v49 + 136) = 0;
            *(_QWORD *)(v49 + 144) = 0;
            *(_QWORD *)(v49 + 152) = 0;
            *(_QWORD *)(v49 + 176) = 0;
            *(_QWORD *)(v49 + 184) = 0;
            *(_QWORD *)(v49 + 192) = 0;
            *(_QWORD *)(v49 + 216) = 0;
            *(_QWORD *)(v49 + 240) = 0;
            *(_QWORD *)(v49 + 248) = 0;
            *(_QWORD *)(v49 + 256) = 0;
            *(_QWORD *)(v49 + 280) = 0;
            *(_QWORD *)(v49 + 288) = 0;
            *(_OWORD *)(v49 + 32) = 0;
            *(_OWORD *)(v49 + 56) = 0;
            *(_OWORD *)(v49 + 120) = 0;
            *(_OWORD *)(v49 + 160) = 0;
            *(_OWORD *)(v49 + 200) = 0;
            *(_OWORD *)(v49 + 224) = 0;
            *(_OWORD *)(v49 + 264) = 0;
            *(_OWORD *)(v49 + 296) = 0;
            LOBYTE(v69) = 8;
            v70 = v49;
            HIDWORD(v69) = *(_DWORD *)(v40[104] + 80);
            *(_DWORD *)(v49 + 280) = 4;
            if ( sub_11C5C0(v40[100], v40[5], 1) )
              *(_DWORD *)(v50 + 280) |= 8u;
            v6 = sub_335200(v50);
            if ( (_BYTE)v6 )
            {
              sub_1390C0(
                *(_QWORD *)(v62 + 8),
                v50 + 96,
                (__int64 *)(v50 + 136),
                (__int64)&v68,
                *(_QWORD *)(v65 + 16),
                0);
              memset(v80, 0, sizeof(v80));
              *(_QWORD *)v80 = qvector_reserve((__int64)v80, 0, 1, 16);
              *(__m128i *)(*(_QWORD *)v80 + 16LL * *(_QWORD *)&v80[8]) = _mm_load_si128((const __m128i *)&xmmword_424800);
              v51 = *(_QWORD *)v80;
              memset(v80, 0, sizeof(v80));
              v52 = (__m128i)_mm_loadh_ps((const double *)&v80[16]);
              v53 = *(_QWORD *)(v50 + 216);
              if ( v53 )
              {
                *(_QWORD *)(v50 + 224) = 0;
                v59 = v52;
                qfree(v53);
                v54 = *(_QWORD *)v80;
                v52 = _mm_load_si128(&v59);
                *(_QWORD *)(v50 + 216) = v51;
                *(__m128i *)(v50 + 224) = v52;
                if ( v54 )
                {
                  *(_QWORD *)&v80[8] = 0;
                  qfree(v54);
                }
              }
              else
              {
                *(_QWORD *)(v50 + 216) = v51;
                *(__m128i *)(v50 + 224) = v52;
              }
              sub_330290(v50, *(_QWORD *)(v62 + 8), *(double *)v52.m128i_i64);
              v55 = 0;
              for ( i = 0; (unsigned __int64)v55 < *(_QWORD *)(v50 + 32); i = v55 )
              {
                ++v55;
                v57 = *(_QWORD *)(v50 + 24) + 80 * i;
                v58 = *(_DWORD *)(v73 + 4 * i);
                *(_BYTE *)v57 = 1;
                *(_DWORD *)(v57 + 8) = v58;
              }
              strrchr(s, 32);
              *(_OWORD *)v80 = 0xFFFFFFFF00000000LL;
              sub_11D4A0((__int64)v80);
              sub_1D6450(v62, 56, v80, nullptr, (unsigned __int8 *)&v69, v52, (__m128)0LL, a6);
              sub_11CDA0((__int64)v80);
            }
            sub_11CDA0((__int64)&v69);
          }
          clear_tinfo_t();
          v45 = v73;
        }
        if ( v45 )
        {
          src[0] = nullptr;
          qfree(v45);
        }
LABEL_43:
        if ( v91 )
        {
          *(_QWORD *)&v92 = 0;
          qfree(v91);
        }
        cleanup_argloc();
        clear_tinfo_t();
        v33 = v86;
        if ( v86 )
        {
          v34 = v87;
          if ( (_QWORD)v87 )
          {
            v35 = 0;
            do
            {
              v36 = (_QWORD *)(v33 + 80 * v35);
              clear_tinfo_t();
              v37 = v36[5];
              if ( v37 )
              {
                v36[6] = 0;
                qfree(v37);
              }
              v38 = v36[2];
              if ( v38 )
              {
                v36[3] = 0;
                qfree(v38);
              }
              ++v35;
              cleanup_argloc();
              v33 = v86;
            }
            while ( v34 != v35 );
          }
          *(_QWORD *)&v87 = 0;
          qfree(v33);
        }
        v9 = s;
      }
      else
      {
        v6 = 0;
      }
      if ( v9 )
      {
        *(_QWORD *)&v72 = 0;
        qfree((__int64)v9);
      }
    }
  }
  else
  {
    return 0;
  }
  return v6;
}

