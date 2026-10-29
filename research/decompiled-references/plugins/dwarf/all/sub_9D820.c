__int64 __fastcall sub_9D820(__int64 a1, __int64 *a2, _DWORD *a3, const __m128i **a4)
{
  __int64 v4; // r12
  __int64 v5; // r10
  const __m128i **v6; // r15
  _DWORD *v7; // rbx
  const __m128i *v8; // rcx
  __int64 *v9; // rbp
  __int64 *v10; // r14
  __int64 *m128i_i64; // rdi
  unsigned int v12; // r12d
  unsigned __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 *v19; // r12
  unsigned __int64 (*v20)(); // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 (*v26)(); // rax
  __int64 (*v27)(); // rax
  __int64 *(__fastcall *v28)(__int64, __int64 *, __int64); // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  const __m128i *v32; // rdx
  const __m128i *v33; // rsi
  const __m128i *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v39; // rdx
  const char *v40; // rax
  const char *v41; // r12
  size_t v42; // rax
  size_t v43; // rbx
  char *v44; // rsi
  const char *v45; // rax
  void (*v46)(); // rax
  const char *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  char v50; // dl
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // eax
  char *v54; // rdi
  size_t v55; // r13
  const char *v56; // rdx
  __m128i v57; // xmm0
  size_t n; // [rsp+8h] [rbp-2E0h]
  size_t na; // [rsp+8h] [rbp-2E0h]
  size_t nb; // [rsp+8h] [rbp-2E0h]
  const char *src; // [rsp+18h] [rbp-2D0h]
  __int64 *v62; // [rsp+28h] [rbp-2C0h] BYREF
  __int64 v63; // [rsp+30h] [rbp-2B8h] BYREF
  __int64 v64; // [rsp+38h] [rbp-2B0h]
  char *v65; // [rsp+40h] [rbp-2A8h] BYREF
  __m128i v66; // [rsp+48h] [rbp-2A0h]
  char *v67; // [rsp+60h] [rbp-288h] BYREF
  __m128i v68; // [rsp+68h] [rbp-280h] BYREF
  __int64 *v69; // [rsp+78h] [rbp-270h]
  _DWORD *v70; // [rsp+80h] [rbp-268h]
  const __m128i **v71; // [rsp+88h] [rbp-260h]
  __int64 v72[4]; // [rsp+90h] [rbp-258h] BYREF
  __int128 v73; // [rsp+B0h] [rbp-238h]
  __int128 v74; // [rsp+C0h] [rbp-228h]
  __int64 v75; // [rsp+D0h] [rbp-218h]
  __int128 v76; // [rsp+D8h] [rbp-210h]
  __int64 v77; // [rsp+E8h] [rbp-200h]
  __int128 v78; // [rsp+F0h] [rbp-1F8h]
  __int64 v79; // [rsp+128h] [rbp-1C0h]
  __int128 v80; // [rsp+130h] [rbp-1B8h]
  __int64 v81; // [rsp+140h] [rbp-1A8h]
  __int128 v82; // [rsp+148h] [rbp-1A0h]
  __int64 v83; // [rsp+164h] [rbp-184h]
  __int64 v84; // [rsp+16Ch] [rbp-17Ch]
  __int64 v85; // [rsp+174h] [rbp-174h]
  unsigned __int64 v86; // [rsp+17Ch] [rbp-16Ch]
  __int64 v87; // [rsp+188h] [rbp-160h]
  __int64 v88[3]; // [rsp+1A0h] [rbp-148h] BYREF
  __int64 v89; // [rsp+1B8h] [rbp-130h]
  __int128 v90; // [rsp+1C0h] [rbp-128h]
  __int128 v91; // [rsp+1D0h] [rbp-118h]
  __int64 v92; // [rsp+1E0h] [rbp-108h]
  __int128 v93; // [rsp+1E8h] [rbp-100h]
  __int64 v94; // [rsp+1F8h] [rbp-F0h]
  __int128 v95; // [rsp+200h] [rbp-E8h]
  __int64 v96; // [rsp+238h] [rbp-B0h]
  __int128 v97; // [rsp+240h] [rbp-A8h]
  __int64 v98; // [rsp+250h] [rbp-98h]
  __int128 v99; // [rsp+258h] [rbp-90h]
  __int64 v100; // [rsp+274h] [rbp-74h]
  __int64 v101; // [rsp+27Ch] [rbp-6Ch]
  __int64 v102; // [rsp+284h] [rbp-64h]
  unsigned __int64 v103; // [rsp+28Ch] [rbp-5Ch]
  __int64 v104; // [rsp+298h] [rbp-50h]
  unsigned __int64 v105; // [rsp+2A8h] [rbp-40h]

  v105 = __readfsqword(0x28u);
  v4 = a2[28];
  v5 = v4 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v4 == -1 || !v5 )
  {
    if ( under_debugger )
      goto LABEL_84;
    a1 = 30478;
    interr(30478);
  }
  v6 = a4;
  v7 = a3;
  v8 = *a4;
  v9 = (__int64 *)a1;
  v10 = a2;
  m128i_i64 = v8[(_QWORD)v6[1]].m128i_i64;
  if ( v8 != (const __m128i *)m128i_i64 )
  {
    while ( (v8->m128i_i64[0] ^ v4) < 0
         || *(_QWORD *)(v8->m128i_i64[1] + 8LL * (v8->m128i_i64[0] >= 0) + 224)
          + (v8->m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != v5 + *(_QWORD *)(a2[29] + 8 * ((v4 >= 0) + 28LL)) )
    {
      if ( m128i_i64 == (__int64 *)++v8 )
        goto LABEL_13;
    }
    if ( m128i_i64 != (__int64 *)v8 )
      return 0;
  }
LABEL_13:
  v14 = (unsigned __int64)v6[1]->m128i_u64 + 1;
  v15 = a2[29];
  if ( (unsigned __int64)v6[2] < v14 )
  {
    n = (size_t)v6[2];
    v31 = qvector_reserve(v6, 0, v14, 16);
    v32 = v6[1];
    v33 = v6[2];
    v34 = *v6;
    v6[2] = (const __m128i *)n;
    v35 = (__int64)&v32[-1].m128i_i64[1] + 7;
    if ( v35 >= 0 )
    {
      v36 = v31;
      do
      {
        v37 = _mm_loadu_si128(v34);
        v36 += 16;
        ++v34;
        *(__m128i *)(v36 - 16) = v37;
      }
      while ( v35-- != 0 );
      v34 = *v6;
    }
    na = v31;
    qfree(v34);
    v39 = 16LL * (_QWORD)v6[1];
    *v6 = (const __m128i *)na;
    v6[2] = v33;
    m128i_i64 = (__int64 *)(na + v39);
  }
  *m128i_i64 = v4;
  m128i_i64[1] = v15;
  v6[1] = (const __m128i *)((char *)v6[1] + 1);
  if ( (unsigned __int16)sub_97BF0((__int64)v10) != 22
    || (v16 = *(_QWORD *)(*v10 + 16), (*(_BYTE *)(v16 + 376) & 1) == 0)
    || (*(_BYTE *)(*(_QWORD *)(v16 + 128) + 298LL) & 1) == 0
    || !(unsigned __int8)sub_84C30((__int64)v10) )
  {
    v17 = operator new(0x20u);
    v72[3] = 0;
    *(_DWORD *)(v17 + 8) = 1;
    *(_QWORD *)v17 = off_C9528;
    v72[0] = v17;
    *(_OWORD *)(v17 + 16) = 0;
    v85 = 0x80000000LL;
    v86 = 0xFFFFFFFF00000000LL;
    v18 = v7[2];
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v87 = 0;
    v83 = 0;
    v84 = 0;
    v73 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    if ( v18 )
    {
      v19 = v10;
    }
    else
    {
      v19 = v10;
      v20 = *(unsigned __int64 (**)())(*(_QWORD *)v7 + 32LL);
      if ( v20 != sub_12F90 )
      {
        v48 = ((__int64 (__fastcall *)(_DWORD *, __int64 *))v20)(v7, v10);
        v88[0] = v48;
        v88[1] = v49;
        if ( (v48 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v48 == -1 )
        {
          v18 = v7[2];
          v19 = v10;
        }
        else
        {
          v19 = v72;
          v50 = sub_98E20(v88, v72);
          v18 = v7[2];
          if ( !v50 )
            v19 = v10;
        }
      }
    }
    v68.m128i_i32[0] = 0;
    v7[2] = v18 + 1;
    v68.m128i_i64[1] = 0;
    v67 = (char *)off_C9760;
    v69 = v9;
    v70 = v7;
    v71 = v6;
    v21 = operator new(0x20u);
    *(_DWORD *)(v21 + 8) = 1;
    *(_QWORD *)v21 = off_C9528;
    v88[0] = v21;
    *(_OWORD *)(v21 + 16) = 0;
    v102 = 0x80000000LL;
    v89 = 0;
    v92 = 0;
    v94 = 0;
    v96 = 0;
    v98 = 0;
    v104 = 0;
    v100 = 0;
    v101 = 0;
    v103 = 0xFFFFFFFF00000000LL;
    v90 = 0;
    v91 = 0;
    v93 = 0;
    v95 = 0;
    v97 = 0;
    v99 = 0;
    v22 = sub_97BF0((__int64)v19);
    if ( (unsigned __int16)v22 <= 0x2Eu )
    {
      v23 = 0x400000880004LL;
      if ( _bittest64(&v23, v22) )
      {
        if ( (unsigned __int8)sub_9AB20(v19, v88) )
          v19 = v88;
      }
    }
    v12 = sub_99180(v19, (__int64 (__fastcall ***)(_QWORD, __int64 *))&v67, 0);
    sub_1B750((__int64)v88);
    if ( v12 )
      goto LABEL_37;
    v24 = operator new(0x20u);
    v88[0] = v24;
    *(_QWORD *)v24 = off_C9528;
    *(_DWORD *)(v24 + 8) = 1;
    *(_OWORD *)(v24 + 16) = 0;
    v102 = 0x80000000LL;
    v103 = 0xFFFFFFFF00000000LL;
    v25 = *(_QWORD *)v7;
    v89 = 0;
    v92 = 0;
    v94 = 0;
    v96 = 0;
    v98 = 0;
    v104 = 0;
    v100 = 0;
    v101 = 0;
    v90 = 0;
    v91 = 0;
    v93 = 0;
    v95 = 0;
    v97 = 0;
    v99 = 0;
    v26 = *(unsigned __int64 (**)())(v25 + 32);
    if ( v26 == sub_12F90 )
    {
      v64 = 0;
      v63 = 0x8000000000000000LL;
    }
    else
    {
      v51 = ((__int64 (__fastcall *)(_DWORD *, __int64 *))v26)(v7, v10);
      v63 = v51;
      v64 = v52;
      if ( (v51 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v51 != -1 && sub_98E20(&v63, v88) )
        v10 = v88;
    }
    if ( sub_95200(v10) )
    {
      v27 = *(__int64 (**)())(*(_QWORD *)v7 + 8LL);
      if ( v27 != sub_12F70 )
      {
        v53 = ((__int64 (__fastcall *)(_DWORD *, __int64 *, __int64 *))v27)(v7, v9, v10);
        if ( v53 != 1 )
        {
          v12 = v53;
LABEL_36:
          sub_1B750((__int64)v88);
LABEL_37:
          --v7[2];
          sub_1B750((__int64)v72);
          return v12;
        }
      }
      v65 = nullptr;
      v66 = 0;
      if ( (unsigned __int16)sub_97BF0((__int64)v10) == 57 )
      {
        v44 = v65;
        if ( v66.m128i_i64[1] <= 0x15uLL )
        {
          v65 = (char *)qvector_reserve(&v65, v65, 22, 1);
          v44 = v65;
        }
        v66.m128i_i64[0] = 22;
        *(__m128i *)v44 = _mm_load_si128((const __m128i *)&xmmword_AB210);
        *(_QWORD *)(v44 + 13) = 0x276563617073656DLL;
        v65[21] = 0;
      }
      else if ( (unsigned __int16)sub_97BF0((__int64)v10) == 46 )
      {
        v67 = nullptr;
        v62 = v10;
        v68 = 0;
        if ( (unsigned __int8)sub_9C800((__int64 *)&v62, (__int64 *)&v67) )
        {
          v56 = v65;
          v57 = _mm_loadu_si128(&v68);
          v65 = v67;
          v54 = (char *)v56;
          v67 = (char *)v56;
          v68.m128i_i64[1] = v66.m128i_i64[1];
          v66 = v57;
        }
        else
        {
          v54 = v67;
        }
        if ( v54 )
        {
          v68.m128i_i64[0] = 0;
          qfree(v54);
        }
      }
      if ( v66.m128i_i64[0] > 1uLL )
      {
LABEL_34:
        sub_85010(v9, v65);
        if ( v65 )
        {
          v66.m128i_i64[0] = 0;
          qfree(v65);
        }
        goto LABEL_36;
      }
      v28 = *(__int64 *(__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v7 + 16LL);
      if ( v28 != sub_33C40 )
      {
LABEL_75:
        v28((__int64)v7, (__int64 *)&v65, (__int64)v10);
        goto LABEL_34;
      }
      v29 = v10[28];
      v30 = v29 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v29 != -1 && v30 )
      {
        sub_20160((__int64 *)&v65, (__int64)"$<%llu,%d>", v30, v29 >> 63);
        goto LABEL_34;
      }
      if ( !under_debugger )
      {
        v28 = (__int64 *(__fastcall *)(__int64, __int64 *, __int64))interr(30478);
        goto LABEL_75;
      }
LABEL_84:
      BUG();
    }
    v45 = (const char *)sub_9AC00((__int64)v10);
    v67 = nullptr;
    v68 = 0;
    if ( v45 )
    {
      src = v45;
      nb = strlen(v45);
      v67 = (char *)qvector_reserve(&v67, 0, nb + 1, 1);
      v68.m128i_i64[0] = nb + 1;
      memmove(v67, src, nb);
      v67[nb] = 0;
      v46 = *(void (**)())(*(_QWORD *)v7 + 24LL);
      if ( v46 == nullsub_6 )
        goto LABEL_54;
    }
    else
    {
      v46 = *(void (**)())(*(_QWORD *)v7 + 24LL);
      if ( v46 == nullsub_6 )
      {
LABEL_67:
        v47 = ::src;
LABEL_55:
        sub_85010(v9, v47);
        if ( v67 )
        {
          v68.m128i_i64[0] = 0;
          qfree(v67);
        }
        goto LABEL_36;
      }
    }
    ((void (__fastcall *)(_DWORD *, char **, __int64 *))v46)(v7, &v67, v10);
LABEL_54:
    v47 = v67;
    if ( v68.m128i_i64[0] )
      goto LABEL_55;
    goto LABEL_67;
  }
  v40 = (const char *)sub_9AC00((__int64)v10);
  v41 = v40;
  if ( v40 && (v42 = strlen(v40), (v43 = v42) != 0) )
  {
    v55 = v42 + 1;
    if ( v9[2] < v42 + 1 )
      *v9 = qvector_reserve(v9, *v9, v42 + 1, 1);
    v9[1] = v55;
    memmove((void *)*v9, v41, v43);
    *(_BYTE *)(*v9 + v43) = 0;
  }
  else
  {
    v9[1] = 0;
  }
  return 0;
}
