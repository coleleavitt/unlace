__int64 __fastcall sub_99400(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // r15d
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  __int64 v14; // rdi
  _QWORD *v15; // rdx
  bool v16; // zf
  _QWORD *v17; // rax
  __int64 v18; // rdx
  void (__fastcall *v19)(_QWORD *); // rdx
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int16 v24; // ax
  unsigned __int64 v25; // rax
  size_t v26; // rbx
  size_t v27; // rbx
  size_t v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // r14
  __int64 v36; // r12
  __int64 *v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  size_t v40; // rbx
  __int64 v41; // rdx
  void (__fastcall ***v42)(__int64, __int64); // r12
  void (__fastcall *v43)(__int64, __int64); // rax
  void (__fastcall **v44)(__int64, __int64); // rbx
  void (__fastcall *v45)(__int64, __int64); // r14
  void (__fastcall *v46)(__int64, __int64); // rdi
  void (__fastcall **v47)(__int64, __int64); // r14
  void (__fastcall **v48)(__int64, __int64); // rbx
  void (__fastcall *v49)(__int64, __int64); // rdi
  void (__fastcall **v50)(__int64, __int64); // rdi
  __m128i v51; // xmm0
  __int64 v52; // rax
  __m128i v53; // xmm0
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // r14
  unsigned __int64 v58; // rcx
  size_t v59; // rdx
  __int64 v60; // rdi
  void *v61; // rax
  size_t v62; // rdx
  unsigned __int64 v63; // r14
  void *v64; // rdi
  __int64 v65; // r14
  void *v66; // rdi
  unsigned __int64 v67; // r14
  void *v68; // rdi
  __int64 v69; // r14
  void *v70; // rdi
  __m128i v71; // [rsp+10h] [rbp-1F8h] BYREF
  size_t n; // [rsp+20h] [rbp-1E8h]
  unsigned __int64 v73; // [rsp+28h] [rbp-1E0h]
  unsigned __int64 v74; // [rsp+30h] [rbp-1D8h]
  __int64 v75; // [rsp+38h] [rbp-1D0h]
  __int64 v76; // [rsp+40h] [rbp-1C8h]
  __int64 v77; // [rsp+48h] [rbp-1C0h] BYREF
  __int128 v78; // [rsp+50h] [rbp-1B8h]
  __int64 v79; // [rsp+60h] [rbp-1A8h]
  __int32 v80; // [rsp+68h] [rbp-1A0h]
  __int32 v81; // [rsp+6Ch] [rbp-19Ch]
  __m128i v82; // [rsp+70h] [rbp-198h] BYREF
  void *src; // [rsp+80h] [rbp-188h]
  void *v84; // [rsp+88h] [rbp-180h]
  void *v85; // [rsp+90h] [rbp-178h]
  void *v86; // [rsp+98h] [rbp-170h]
  int v87; // [rsp+A4h] [rbp-164h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-160h] BYREF
  __int64 v89[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v90; // [rsp+C0h] [rbp-148h] BYREF
  __int16 v91; // [rsp+C8h] [rbp-140h]
  __int64 v92; // [rsp+D8h] [rbp-130h]
  __int128 v93; // [rsp+E0h] [rbp-128h]
  __int128 v94; // [rsp+F0h] [rbp-118h]
  void *v95; // [rsp+100h] [rbp-108h]
  __int128 v96; // [rsp+108h] [rbp-100h]
  void *v97; // [rsp+118h] [rbp-F0h]
  __int128 v98; // [rsp+120h] [rbp-E8h]
  __m128i v99; // [rsp+130h] [rbp-D8h] BYREF
  __m128i v100; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v101; // [rsp+150h] [rbp-B8h]
  __int64 v102; // [rsp+158h] [rbp-B0h]
  __int128 v103; // [rsp+160h] [rbp-A8h]
  void *v104; // [rsp+170h] [rbp-98h]
  __int128 v105; // [rsp+178h] [rbp-90h]
  __int64 v106; // [rsp+188h] [rbp-80h]
  __int16 v107; // [rsp+190h] [rbp-78h]
  __m256i v108; // [rsp+194h] [rbp-74h]
  __int64 v109; // [rsp+1B8h] [rbp-50h]
  unsigned __int64 v110; // [rsp+1C0h] [rbp-48h]
  unsigned __int64 v111; // [rsp+1C8h] [rbp-40h]

  v111 = __readfsqword(0x28u);
  v3 = a1[28];
  if ( (v3 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v3 == -1 )
  {
    if ( under_debugger )
      BUG();
    a1 = (_QWORD *)(&stru_76F8 + 22);
    interr(30478);
  }
  v4 = a3;
  v5 = sub_841F0(*(_QWORD **)(*a1 + 16), (_QWORD *)(*(_QWORD *)(*a1 + 16) + 32LL), a1 + 28);
  v89[0] = v5;
  v89[1] = v6;
  if ( (v5 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v5 == -1 )
    return 0;
  v9 = operator new(0x20u);
  v92 = 0;
  *(_DWORD *)(v9 + 8) = 1;
  *(_QWORD *)v9 = off_C9528;
  v90 = v9;
  *(_OWORD *)(v9 + 16) = 0;
  v108.m256i_i64[2] = 0x80000000LL;
  v108.m256i_i64[3] = 0xFFFFFFFF00000000LL;
  v95 = nullptr;
  v97 = nullptr;
  v102 = 0;
  v104 = nullptr;
  *(_OWORD *)v108.m256i_i8 = 0u;
  v109 = 0;
  v93 = 0;
  v94 = 0;
  v96 = 0;
  v98 = 0;
  v103 = 0;
  v105 = 0;
  LOBYTE(v10) = sub_98E20(v89, &v90);
  v7 = v10;
  if ( (_BYTE)v10 )
  {
    v11 = v90;
    v12 = v93;
    v77 = v92;
    v85 = *((void **)&v93 + 1);
    v75 = v94;
    v84 = v95;
    v74 = v96;
    src = v97;
    v73 = v98;
    v82.m128i_i64[1] = v102;
    v71.m128i_i64[0] = v103;
    v86 = v104;
    v76 = v105;
    v80 = v108.m256i_i32[0];
    v78 = *(_OWORD *)((char *)v108.m256i_i64 + 4);
    v79 = *(__int64 *)((char *)&v108.m256i_i64[2] + 4);
    v13 = v110;
    v14 = *(_QWORD *)(v90 + 24);
    LODWORD(n) = (unsigned __int16)a2;
    v81 = v108.m256i_i32[7];
    v88 = 0;
    v82.m128i_i64[0] = v109;
    v87 = 0;
    a2 = (unsigned __int16)a2;
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, int *, __int64 *))(v110 + 112))(
           v14,
           (unsigned __int16)a2,
           &v87,
           &v88)
      || !v87 )
    {
      v7 = sub_99400(&v90, (unsigned __int16)a2, v4);
LABEL_65:
      sub_1B750((__int64)&v90);
      return v7;
    }
    v15 = (_QWORD *)*v4;
    if ( *v4 )
    {
      v16 = (*((_DWORD *)v15 + 2))-- == 1;
      if ( v16 )
      {
        v17 = (_QWORD *)*v4;
        a2 = (__int64)sub_12F10;
        v18 = *(_QWORD *)*v4;
        if ( *(__int64 (__fastcall **)(__int64))v18 == sub_12F10 )
        {
          if ( v17 )
          {
            v19 = *(void (__fastcall **)(_QWORD *))(v18 + 16);
            if ( v19 == sub_80130 )
            {
              v20 = v17[2];
              *v17 = off_C9528;
              if ( v20 )
              {
                v21 = v17[3];
                if ( v21 )
                {
                  v22 = *(_QWORD *)(v20 + 88);
                  v23 = *(_QWORD *)(v20 + 160);
                  n = (size_t)v17;
                  (*(void (__fastcall **)(__int64, __int64, __int64))(v22 + 480))(v23, v21, 8);
                  v17 = (_QWORD *)n;
                }
              }
              a2 = 32;
              operator delete(v17, 0x20u);
            }
            else
            {
              v19((_QWORD *)*v4);
            }
          }
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *))v18)(v17);
        }
      }
    }
    *v4 = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    v24 = v91;
    v4[4] = v12;
    *((_WORD *)v4 + 4) = v24;
    v25 = v75;
    *((__m128 *)v4 + 1) = _mm_loadh_ps((const double *)&v77);
    if ( v25 && (v26 = v25 - 1, v25 != 1) )
    {
      if ( v4[7] < v25 )
        v4[5] = qvector_reserve(v4 + 5, v4[5], v25, 1);
      v65 = v75;
      v66 = (void *)v4[5];
      a2 = (__int64)v85;
      v4[6] = v75;
      memmove(v66, (const void *)a2, v26);
      *(_BYTE *)(v4[5] + v65 - 1) = 0;
    }
    else
    {
      v4[6] = 0;
    }
    if ( v74 && (v27 = v74 - 1, v74 != 1) )
    {
      if ( v4[10] < v74 )
        v4[8] = qvector_reserve(v4 + 8, v4[8], v74, 1);
      v67 = v74;
      v68 = (void *)v4[8];
      a2 = (__int64)v84;
      v4[9] = v74;
      memmove(v68, (const void *)a2, v27);
      *(_BYTE *)(v4[8] + v67 - 1) = 0;
    }
    else
    {
      v4[9] = 0;
    }
    if ( v73 && (v28 = v73 - 1, v73 != 1) )
    {
      if ( v4[13] < v73 )
        v4[11] = qvector_reserve(v4 + 11, v4[11], v73, 1);
      v63 = v73;
      v64 = (void *)v4[11];
      a2 = (__int64)src;
      v4[12] = v73;
      memmove(v64, (const void *)a2, v28);
      *(_BYTE *)(v4[11] + v63 - 1) = 0;
    }
    else
    {
      v4[12] = 0;
    }
    v29 = v101;
    v30 = 0;
    v16 = v71.m128i_i64[0] == 0;
    *((__m128i *)v4 + 7) = _mm_load_si128(&v99);
    v31 = _mm_load_si128(&v100);
    v4[18] = v29;
    *((__m128i *)v4 + 8) = v31;
    if ( !v16 )
    {
      v55 = qalloc_or_throw(24 * v71.m128i_i64[0]);
      v56 = v82.m128i_i64[1];
      v30 = v55;
      v57 = v55;
      v58 = 0;
      do
      {
        *(_QWORD *)v57 = 0;
        *(_OWORD *)(v57 + 8) = 0;
        v59 = *(_QWORD *)(v56 + 8);
        if ( v59 )
        {
          v60 = *(_QWORD *)(v56 + 8);
          v73 = v58;
          n = v59;
          v61 = (void *)qalloc_or_throw(v60);
          v62 = n;
          *(_QWORD *)v57 = v61;
          *(_QWORD *)(v57 + 16) = v62;
          a2 = *(_QWORD *)v56;
          memcpy(v61, *(const void **)v56, v62);
          v58 = v73;
          *(_QWORD *)(v57 + 8) = n;
        }
        ++v58;
        v57 += 24;
        v56 += 24;
      }
      while ( v71.m128i_i64[0] != v58 );
    }
    v32 = _mm_loadl_epi64(&v71);
    v33 = v4[19];
    v34 = _mm_unpacklo_epi64(v32, v32);
    if ( v33 )
    {
      v35 = v4[20];
      if ( v35 )
      {
        v36 = 0;
        v71 = v34;
        do
        {
          v37 = (__int64 *)(v33 + 24 * v36);
          v38 = *v37;
          if ( *v37 )
          {
            v37[1] = 0;
            qfree(v38);
            v33 = v4[19];
          }
          ++v36;
        }
        while ( v35 != v36 );
        v34 = _mm_load_si128(&v71);
      }
      v4[20] = 0;
      v71 = v34;
      qfree(v33);
      v34 = _mm_load_si128(&v71);
    }
    v39 = v76;
    v4[19] = v30;
    *((__m128i *)v4 + 10) = v34;
    if ( v39 && (v40 = v39 - 1, v39 != 1) )
    {
      if ( v4[24] < v39 )
        v4[22] = qvector_reserve(v4 + 22, v4[22], v39, 1);
      v69 = v76;
      v70 = (void *)v4[22];
      a2 = (__int64)v86;
      v4[23] = v76;
      memmove(v70, (const void *)a2, v40);
      *(_BYTE *)(v4[22] + v69 - 1) = 0;
    }
    else
    {
      v4[23] = 0;
    }
    v41 = v4[27];
    v4[25] = v106;
    *((_WORD *)v4 + 104) = v107;
    *((_DWORD *)v4 + 53) = v80;
    if ( v41 )
    {
      v16 = (*(_DWORD *)(v41 + 8))-- == 1;
      if ( v16 )
      {
        v42 = (void (__fastcall ***)(__int64, __int64))v4[27];
        v43 = **v42;
        if ( (char *)v43 != (char *)sub_15E30 )
        {
LABEL_84:
          v43(v4[27], a2);
          goto LABEL_60;
        }
        if ( v42 )
        {
          v43 = (*v42)[2];
          if ( (char *)v43 == (char *)sub_15D70 )
          {
            v44 = v42[16];
            *v42 = (void (__fastcall **)(__int64, __int64))&off_C71D8;
            if ( v44 )
            {
              v45 = v44[2];
              while ( v45 )
              {
                sub_80300(*((_QWORD **)v45 + 3));
                v46 = v45;
                v45 = *((void (__fastcall **)(__int64, __int64))v45 + 2);
                operator delete(v46, 0x30u);
              }
              operator delete(v44, 0x30u);
            }
            v47 = v42[19];
            while ( v47 )
            {
              v48 = v47;
              sub_80A30(v47[3]);
              v49 = v47[4];
              v47 = (void (__fastcall **)(__int64, __int64))v47[2];
              if ( v49 )
              {
                v48[5] = nullptr;
                qfree(v49);
              }
              operator delete(v48, 0x48u);
            }
            v50 = v42[12];
            if ( v50 )
            {
              v42[13] = nullptr;
              qfree(v50);
            }
            operator delete(v42, 0xC0u);
            goto LABEL_60;
          }
          goto LABEL_84;
        }
      }
    }
LABEL_60:
    v51 = _mm_loadl_epi64(&v82);
    v52 = v78;
    v4[27] = v78;
    v53 = _mm_unpacklo_epi64(v51, (__m128i)v13);
    if ( v52 )
      ++*(_DWORD *)(v52 + 8);
    v54 = *((_QWORD *)&v78 + 1);
    *(__m128i *)(v4 + 31) = v53;
    v4[28] = v54;
    v4[29] = v79;
    *((_DWORD *)v4 + 60) = v81;
    goto LABEL_65;
  }
  sub_1B750((__int64)&v90);
  return 0;
}
