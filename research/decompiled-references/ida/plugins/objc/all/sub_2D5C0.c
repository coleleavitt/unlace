__int64 __fastcall sub_2D5C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // r12
  __int64 result; // rax
  int flags; // eax
  __int64 ea_name; // rdx
  char *v9; // r13
  char *v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // rax
  const char *v13; // rsi
  size_t v14; // rbx
  int v15; // eax
  char *v16; // rbx
  char *v17; // rbx
  __int64 *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r14
  void (__fastcall *v22)(__int64, __int64, __int64); // rax
  void (__fastcall *v23)(__int64, __int64); // rax
  __int64 (__fastcall *v24)(__int64, __int64); // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  unsigned __int8 (__fastcall *v27)(__int64, unsigned __int64, __int64 *); // rax
  unsigned int v28; // r14d
  __int64 (__fastcall *v29)(__int64, _QWORD); // rax
  __int64 v30; // rax
  __int64 v31; // r13
  void (__fastcall *v32)(__int64, __int64); // rax
  void (__fastcall *v33)(__int64, __int64 *, _QWORD, _QWORD); // rax
  void (__fastcall *v34)(__int64, unsigned __int64, __int64 *); // rax
  void (__fastcall *v35)(__int64, unsigned __int64, char *); // rax
  __int64 v36; // r13
  void (__fastcall *v37)(__int64, __int64 *, _QWORD, unsigned __int64, __int64 *, __int64, _QWORD); // rax
  __int64 v38; // rbx
  __m128 v39; // xmm0
  __int64 v40; // rdi
  __m128i si128; // xmm0
  __int64 v42; // rbx
  __int64 i; // r13
  unsigned int v44; // r14d
  unsigned int v45; // r12d
  __int64 (__fastcall *v46)(__int64, _QWORD); // rax
  unsigned int v47; // r12d
  void (__fastcall *v48)(__int64, __int64); // rax
  size_t v49; // rax
  __int64 v50; // r15
  bool v51; // r15
  int v52; // r15d
  void (__fastcall *hexdsp)(__int64, size_t); // rax
  size_t v54; // rax
  __int64 v55; // rbx
  void (__fastcall *v56)(__int64, __int64, __int64); // rax
  __int64 v57; // rax
  unsigned int v58; // r14d
  __int64 (__fastcall *v59)(__int64, _QWORD); // rax
  unsigned int v60; // r12d
  void (__fastcall *v61)(__int64, __int64); // rax
  size_t v62; // rax
  __int64 v63; // r13
  __int64 v64; // r14
  _QWORD *v65; // rbx
  void *v66; // rdi
  unsigned int v67; // [rsp+Ch] [rbp-F4h]
  unsigned int v68; // [rsp+10h] [rbp-F0h]
  char *v69; // [rsp+10h] [rbp-F0h]
  unsigned __int8 v70; // [rsp+18h] [rbp-E8h]
  int tinfo_size; // [rsp+18h] [rbp-E8h]
  char *v72[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v73; // [rsp+30h] [rbp-D0h]
  size_t n; // [rsp+38h] [rbp-C8h]
  char *s1; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v76; // [rsp+48h] [rbp-B8h]
  __int64 v77; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v78; // [rsp+68h] [rbp-98h] BYREF
  __int128 v79; // [rsp+78h] [rbp-88h]
  __int64 v80; // [rsp+88h] [rbp-78h]
  __int128 v81; // [rsp+90h] [rbp-70h]
  __int64 v82; // [rsp+A0h] [rbp-60h]
  __int128 v83; // [rsp+A8h] [rbp-58h]
  char v84; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v85; // [rsp+C8h] [rbp-38h]

  v4 = *(_DWORD *)a3;
  v85 = __readfsqword(0x28u);
  v5 = a3;
  if ( v4 == 4 )
  {
    if ( *(_BYTE *)(a3 + 32) != 4 )
      return 0;
    v5 = *(_QWORD *)(a3 + 40);
    v4 = *(_DWORD *)v5;
  }
  if ( v4 != 56 )
    return 0;
  if ( *(_BYTE *)(v5 + 32) != 6 )
    return 0;
  flags = get_flags_ex();
  if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
    return 0;
  s1 = 0;
  n = (size_t)&s1;
  v76 = 0;
  ea_name = get_ea_name();
  v9 = s1;
  result = 0;
  if ( ea_name <= 0 )
    goto LABEL_11;
  v70 = cleanup_name();
  if ( !v70 )
    goto LABEL_14;
  if ( !(_BYTE)byte_3D5F0 && __cxa_guard_acquire(&byte_3D5F0) )
  {
    xmmword_3D608 = 0;
    qword_3D600 = 0;
    qword_3D600 = qvector_reserve();
    *(_QWORD *)&xmmword_3D608 = 13;
    strcpy((char *)qword_3D600, "objc_retain_");
    qword_3D618 = 0;
    xmmword_3D620 = 0;
    qword_3D618 = qvector_reserve();
    *(_QWORD *)&xmmword_3D620 = 14;
    strcpy((char *)qword_3D618, "objc_release_");
    qword_3D630 = 0;
    xmmword_3D638 = 0;
    qword_3D630 = qvector_reserve();
    *(_QWORD *)&xmmword_3D638 = 14;
    strcpy((char *)qword_3D630, "objc_msgSend$");
    __cxa_atexit(func, 0, &off_3BCA0);
    __cxa_guard_release(&byte_3D5F0);
  }
  v10 = (char *)v76;
  v9 = s1;
  n = 0;
  v11 = &qword_3D600;
  do
  {
    v12 = v11[1];
    if ( !v12 )
      goto LABEL_31;
    v13 = (const char *)*v11;
    v14 = v12 - 1;
    if ( !*v11 )
      goto LABEL_58;
    if ( v12 == 1 )
    {
LABEL_31:
      v17 = v9;
      goto LABEL_32;
    }
    if ( v10 )
    {
      if ( (unsigned __int64)(v10 - 1) >= v14 )
      {
        v73 = v11;
        v72[0] = v10;
        v15 = strncmp(v9, v13, v14);
        v10 = v72[0];
        v11 = v73;
        if ( !v15 )
        {
LABEL_58:
          v17 = &v9[v14];
LABEL_32:
          if ( n == 2 )
          {
            if ( !*v17 )
              goto LABEL_15;
            v69 = v17;
            goto LABEL_61;
          }
          v68 = str2reg();
          if ( v68 == -1 )
            goto LABEL_14;
LABEL_34:
          v18 = (__int64 *)(a1 + 32 * n + 8);
          v19 = *v18;
          if ( (*(_BYTE *)v18 & 0x3F) == 1 )
            goto LABEL_14;
          goto LABEL_35;
        }
      }
    }
    ++n;
    v11 += 3;
  }
  while ( n != 3 );
  v16 = (char *)src;
  n = 0;
  if ( v10 )
    v16 = v9;
  v72[0] = v16;
  while ( strcmp(v72[0], off_3C980[n]) )
  {
    if ( ++n == 14 )
    {
      result = 0;
      goto LABEL_11;
    }
  }
  if ( n > 1 )
  {
    if ( n == 2 )
    {
      v69 = 0;
LABEL_61:
      if ( (*(_BYTE *)(a1 + 72) & 0x3F) == 1 )
        goto LABEL_15;
      if ( !(unsigned __int8)*(_QWORD *)(a1 + 72) && !(unsigned __int8)sub_2D360(a1 + 72, 2u) )
        goto LABEL_37;
      if ( *(_BYTE *)(v5 + 64) == 8 )
      {
        v21 = *(_QWORD *)(v5 + 72);
        if ( *(_DWORD *)(v21 + 8) == 2 )
        {
          v77 = 0;
          v79 = 0u;
          v80 = 0;
          v82 = 0;
          v84 = 16;
          v78 = 0;
          v81 = 0;
          v83 = 0;
          get_tinfo_details();
          for ( n = 0; ; n = 80 )
          {
            v50 = *(int *)(*(_QWORD *)(v21 + 24) + n + 4);
            if ( v50 != get_tinfo_size() )
              break;
            v51 = (get_tinfo_property() & 0xF) == 9;
            if ( v51 != ((get_tinfo_property() & 0xF) == 9) )
              break;
            if ( n )
            {
              if ( v69 )
              {
                n = *(_QWORD *)(v21 + 24);
                v52 = *(_DWORD *)(n + 84);
                v72[0] = (char *)(n + 80);
                hexdsp = (void (__fastcall *)(__int64, size_t))get_hexdsp();
                hexdsp(276, n + 80);
                v54 = n;
                *(_DWORD *)(n + 84) = v52;
                *(_BYTE *)(v54 + 80) = 3;
                *(_QWORD *)(v54 + 88) = qstrdup();
              }
              v55 = *(_QWORD *)(a1 + 80);
              v56 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp();
              v56(289, v5 + 32, v55);
              v5 = 0;
              goto LABEL_73;
            }
          }
          v70 = 0;
          goto LABEL_85;
        }
      }
LABEL_14:
      v9 = s1;
LABEL_15:
      result = 0;
      goto LABEL_11;
    }
    goto LABEL_34;
  }
  v68 = -1;
  v18 = (__int64 *)(a1 + 32 * n + 8);
  v19 = *v18;
  if ( (*(_BYTE *)v18 & 0x3F) == 1 )
  {
    result = 0;
    goto LABEL_11;
  }
LABEL_35:
  if ( !(_BYTE)v19 && !(unsigned __int8)sub_2D360((__int64)v18, n) )
  {
LABEL_37:
    v77 = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v9 = s1;
    result = 0;
    goto LABEL_11;
  }
  if ( *(_BYTE *)(v5 + 64) == 8 )
    goto LABEL_14;
  v20 = v18[1];
  v21 = v5 + 32;
  v73 = *(__int64 **)(a2 + 64);
  v22 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp();
  v22(289, v5 + 32, v20);
  v23 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
  v23(276, v5 + 64);
  v24 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
  v25 = v24(129, 312);
  *(_QWORD *)v25 = -1;
  v26 = v25;
  *(_QWORD *)(v25 + 8) = 0;
  *(_QWORD *)(v25 + 16) = 0;
  *(_QWORD *)(v25 + 24) = 0;
  *(_QWORD *)(v25 + 48) = 0;
  *(_QWORD *)(v25 + 72) = 0;
  *(_QWORD *)(v25 + 80) = 0;
  *(_QWORD *)(v25 + 88) = 0;
  *(_QWORD *)(v25 + 96) = 0;
  *(_QWORD *)(v25 + 104) = 0;
  *(_QWORD *)(v25 + 112) = 0;
  *(_QWORD *)(v25 + 136) = 0;
  *(_QWORD *)(v25 + 144) = 0;
  *(_QWORD *)(v25 + 152) = 0;
  *(_QWORD *)(v25 + 176) = 0;
  *(_QWORD *)(v25 + 184) = 0;
  *(_QWORD *)(v25 + 192) = 0;
  *(_QWORD *)(v25 + 216) = 0;
  *(_QWORD *)(v25 + 240) = 0;
  *(_QWORD *)(v25 + 248) = 0;
  *(_QWORD *)(v25 + 256) = 0;
  *(_QWORD *)(v25 + 280) = 0;
  *(_QWORD *)(v25 + 288) = 0;
  *(_OWORD *)(v25 + 32) = 0;
  *(_OWORD *)(v25 + 56) = 0;
  *(_OWORD *)(v25 + 120) = 0;
  *(_OWORD *)(v25 + 160) = 0;
  *(_OWORD *)(v25 + 200) = 0;
  *(_OWORD *)(v25 + 224) = 0;
  *(_OWORD *)(v25 + 264) = 0;
  *(_OWORD *)(v25 + 296) = 0;
  *(_BYTE *)(v5 + 64) = 8;
  *(_QWORD *)(v5 + 72) = v25;
  *(_DWORD *)(v25 + 280) |= 4u;
  v27 = (unsigned __int8 (__fastcall *)(__int64, unsigned __int64, __int64 *))get_hexdsp();
  if ( v27(313, v26, v18) )
  {
    LODWORD(v72[0]) = 0;
    if ( (*(_BYTE *)(v26 + 72) & 0x3F) != 1 )
    {
      tinfo_size = get_tinfo_size();
      v28 = *(unsigned __int16 *)(v26 + 88);
      LODWORD(v72[0]) = tinfo_size;
      v29 = (__int64 (__fastcall *)(__int64, _QWORD))get_hexdsp();
      v67 = v29(252, v28);
      v30 = *(_QWORD *)(v26 + 56);
      if ( *(_QWORD *)(v26 + 64) < (unsigned __int64)(v30 + 1) )
      {
        *(_QWORD *)(v26 + 48) = qvector_reserve();
        v30 = *(_QWORD *)(v26 + 56);
      }
      v31 = *(_QWORD *)(v26 + 48) + 16 * v30;
      *(_QWORD *)v31 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v31 + 8) = 0;
      ++*(_QWORD *)(v26 + 56);
      v32 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      v32(276, v31);
      *(_BYTE *)v31 = 1;
      *(_DWORD *)(v31 + 8) = v67;
      *(_DWORD *)(v31 + 4) = tinfo_size;
      v77 = 0;
      *(_QWORD *)&v78 = 0;
      v33 = (void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD))get_hexdsp();
      v33(206, &v77, v67, LODWORD(v72[0]));
      *((_QWORD *)&v78 + 1) = 0;
      v79 = 0;
      v34 = (void (__fastcall *)(__int64, unsigned __int64, __int64 *))get_hexdsp();
      v34(207, v26 + 96, &v77);
      v35 = (void (__fastcall *)(__int64, unsigned __int64, char *))get_hexdsp();
      v35(231, v26 + 112, (char *)&v78 + 8);
      if ( *((_QWORD *)&v78 + 1) )
      {
        *(_QWORD *)&v79 = 0;
        qfree();
      }
      qfree();
    }
    v36 = *(_QWORD *)(v5 + 24);
    *(_DWORD *)(v5 + 68) = v72[0];
    v37 = (void (__fastcall *)(__int64, __int64 *, _QWORD, unsigned __int64, __int64 *, __int64, _QWORD))get_hexdsp();
    v37(415, v73, 0, v26 + 136, v18, v36, 0);
    v77 = 0;
    v78 = 0;
    v77 = qvector_reserve();
    *(__m128i *)(v77 + 16 * v78) = _mm_load_si128((const __m128i *)&xmmword_31B80);
    v38 = v77;
    v77 = 0;
    v39 = _mm_loadh_ps((const double *)&v78 + 1);
    v78 = 0;
    if ( *(_QWORD *)(v26 + 216) )
    {
      *(_QWORD *)(v26 + 224) = 0;
      *(__m128 *)v72 = v39;
      qfree();
      v40 = v77;
      si128 = _mm_load_si128((const __m128i *)v72);
      *(_QWORD *)(v26 + 216) = v38;
      *(__m128i *)(v26 + 224) = si128;
      if ( v40 )
      {
        *(_QWORD *)&v78 = 0;
        qfree();
      }
    }
    else
    {
      *(_QWORD *)(v26 + 216) = v38;
      *(__m128 *)(v26 + 224) = v39;
    }
    v42 = *(_QWORD *)(v26 + 24);
    if ( n > 1 || v68 == -1 )
    {
      for ( i = v42 + 80LL * *(_QWORD *)(v26 + 32); i != v42; *(_QWORD *)(v42 - 76) = v49 )
      {
        v44 = *(_DWORD *)(v42 + 4);
        v45 = *(unsigned __int16 *)(v42 + 64);
        v46 = (__int64 (__fastcall *)(__int64, _QWORD))get_hexdsp();
        v47 = v46(252, v45);
        v48 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
        n = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v44), _mm_cvtsi32_si128(v47)).m128i_u64[0];
        v48(276, v42);
        v49 = n;
        *(_BYTE *)v42 = 1;
        v42 += 80;
      }
      v9 = s1;
      result = 1;
    }
    else
    {
      v58 = *(_DWORD *)(v42 + 4);
      v59 = (__int64 (__fastcall *)(__int64, _QWORD))get_hexdsp();
      v60 = v59(252, v68);
      v61 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      n = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v58), _mm_cvtsi32_si128(v60)).m128i_u64[0];
      v61(276, v42);
      v62 = n;
      *(_BYTE *)v42 = 1;
      *(_QWORD *)(v42 + 4) = v62;
      result = 1;
      v9 = s1;
    }
    goto LABEL_11;
  }
  if ( under_debugger )
    BUG();
  interr();
LABEL_101:
  v18[4] = qvector_reserve();
LABEL_98:
  v66 = (void *)v18[4];
  v18[5] = v26;
  memmove(v66, v72[0], n);
  *(_BYTE *)(v18[4] + v26 - 1) = 0;
  while ( !v5 )
  {
    v5 = 80;
LABEL_73:
    copy_tinfo_t();
    v57 = v5 + v77;
    v18 = (__int64 *)(v5 + *(_QWORD *)(v21 + 24));
    if ( v18 + 4 != (__int64 *)(v5 + v77 + 16) )
    {
      v26 = *(_QWORD *)(v57 + 24);
      if ( v26 )
      {
        n = v26 - 1;
        if ( v26 != 1 )
        {
          v72[0] = *(char **)(v57 + 16);
          if ( v18[6] < v26 )
            goto LABEL_101;
          goto LABEL_98;
        }
      }
      v18[5] = 0;
    }
  }
LABEL_85:
  if ( v82 )
  {
    *(_QWORD *)&v83 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  if ( v77 )
  {
    v63 = v78;
    v64 = 0;
    if ( (_QWORD)v78 )
    {
      do
      {
        v65 = (_QWORD *)(v77 + 80 * v64);
        clear_tinfo_t();
        if ( v65[5] )
        {
          v65[6] = 0;
          qfree();
        }
        if ( v65[2] )
        {
          v65[3] = 0;
          qfree();
        }
        cleanup_argloc();
        ++v64;
      }
      while ( v63 != v64 );
    }
    *(_QWORD *)&v78 = 0;
    qfree();
  }
  result = v70;
  v9 = s1;
LABEL_11:
  if ( v9 )
  {
    LODWORD(n) = result;
    *(_QWORD *)&v76 = 0;
    qfree();
    return (unsigned int)n;
  }
  return result;
}
