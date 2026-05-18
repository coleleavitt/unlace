unsigned __int64 __fastcall sub_90820(__int64 a1, __int64 a2)
{
  char v4; // al
  const char *v5; // r14
  __int64 (__fastcall *v6)(__int64); // rax
  int v7; // eax
  __int64 v8; // rcx
  const char *v9; // rdx
  __int64 (__fastcall *v10)(__int64); // rax
  int v11; // eax
  __int64 *v12; // r15
  int v13; // esi
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, size_t *, const char *, int); // rax
  int v16; // r13d
  size_t v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int8 v20; // r15
  __int64 v21; // rdx
  int v22; // eax
  signed int v23; // eax
  __int64 v24; // r14
  __int64 *v25; // r15
  __int64 (__fastcall *v26)(__int64 *, bool); // rax
  int v27; // eax
  void (__fastcall *v28)(__int64 *); // rax
  __int64 v29; // rax
  size_t v30; // r13
  void *v31; // rcx
  __int64 v32; // rdi
  __int64 (__fastcall *v33)(__int64, size_t *, void *); // rax
  int v34; // eax
  size_t v35; // r13
  __int64 v36; // rdx
  void *v37; // r13
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __int64 v41; // rdi
  __int64 v42; // rcx
  void *v43; // r13
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // rcx
  void *v48; // r13
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __int64 v51; // rdi
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // rcx
  const char *v55; // rdx
  __int64 (__fastcall *v56)(__int64, const char *, const char *, __int64, __int64, __int64); // rax
  __int64 v57; // rdi
  __int64 v58; // rcx
  void *v59; // r13
  __m128i v60; // xmm0
  __m128i v61; // xmm0
  __int64 v62; // rax
  size_t v63; // rcx
  __int64 v64; // rdi
  const void *v65; // rsi
  __int64 (__fastcall *v66)(__int64, size_t *, const void *); // rax
  int v67; // eax
  const char *v68; // rax
  const char *v69; // rbx
  size_t v70; // rax
  size_t v71; // r13
  void *v72; // rbx
  __m128i v73; // xmm0
  __m128i v74; // xmm0
  void *v75; // rdi
  size_t v76; // r15
  int v77; // eax
  const char *v78; // rsi
  size_t *v79; // rsi
  __int64 *v80; // rdi
  __int64 v81; // rdx
  __int64 (__fastcall *v82)(__int64, const char *, int); // rax
  __int64 v83; // rsi
  int v84; // eax
  char *v85; // rsi
  void *v86; // r13
  __m128i v87; // xmm1
  __m128i v88; // xmm1
  __m128i v89; // [rsp+0h] [rbp-C8h] BYREF
  size_t v90; // [rsp+18h] [rbp-B0h] BYREF
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v92; // [rsp+28h] [rbp-A0h]
  void *v93; // [rsp+40h] [rbp-88h] BYREF
  __m128i v94; // [rsp+48h] [rbp-80h] BYREF
  void *v95; // [rsp+60h] [rbp-68h] BYREF
  void *dest[2]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v97; // [rsp+78h] [rbp-50h]
  unsigned __int64 v98; // [rsp+88h] [rbp-40h]

  v98 = __readfsqword(0x28u);
  sub_169470(&ptr, 10);
  v4 = *(_BYTE *)(a2 + 8);
  if ( v4 != 12 )
  {
    switch ( v4 )
    {
      case '[':
        v5 = s1;
        if ( *(_QWORD *)(a2 + 24) )
          v5 = *(const char **)(a2 + 16);
        v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL);
        if ( v6 == sub_8AB20 )
        {
          v7 = *(unsigned __int8 *)(a1 + 312);
          if ( (((_BYTE)v7 - 79) & 0xFD) != 0 )
          {
            if ( (unsigned __int8)(v7 - 58) > 0x2Eu
              || (v8 = 0x400000155001LL, !_bittest64(&v8, (unsigned int)(v7 - 58))) )
            {
              sub_2F260((__int64)"Wrong file request %d from the vault server", (unsigned __int8)v7);
            }
          }
        }
        else
        {
          v79 = (size_t *)v5;
          v16 = ((__int64 (__fastcall *)(__int64, const char *))v6)(a1, v5);
          if ( v16 )
            goto LABEL_116;
        }
        v80 = *(__int64 **)(a1 + 112);
        v81 = *(unsigned int *)(a2 + 40);
        v82 = *(__int64 (__fastcall **)(__int64, const char *, int))(*v80 + 40);
        if ( v82 == sub_8FFA0 )
          v22 = sub_900C0(v80[4], v5, v81);
        else
          v22 = v82((__int64)v80, v5, v81);
        goto LABEL_72;
      case '\\':
        v9 = s1;
        if ( *(_QWORD *)(a2 + 24) )
          v9 = *(const char **)(a2 + 16);
        v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL);
        if ( v10 == sub_8AB20 )
        {
          v11 = *(unsigned __int8 *)(a1 + 312);
          if ( (((_BYTE)v11 - 79) & 0xFD) != 0 )
          {
            if ( (unsigned __int8)(v11 - 58) > 0x2Eu
              || (v83 = 0x400000155001LL, !_bittest64(&v83, (unsigned int)(v11 - 58))) )
            {
              sub_2F260((__int64)"Wrong file request %d from the vault server", (unsigned __int8)v11);
            }
          }
        }
        else
        {
          v89.m128i_i64[0] = (__int64)v9;
          v79 = (size_t *)v9;
          v84 = ((__int64 (__fastcall *)(__int64, const char *))v10)(a1, v9);
          v9 = (const char *)v89.m128i_i64[0];
          v16 = v84;
          if ( v84 )
            goto LABEL_116;
        }
        v12 = *(__int64 **)(a1 + 112);
        v13 = *(_DWORD *)(a2 + 40);
        v14 = *v12;
        v89.m128i_i32[0] = v13;
        v15 = *(__int64 (__fastcall **)(__int64, size_t *, const char *, int))(v14 + 32);
        if ( v15 == sub_90300 )
        {
          v16 = sub_901B0(v12[4], &v95, v9, v13);
          if ( v16 )
            goto LABEL_85;
          v17 = operator new(0x18u);
          v18 = v12[4];
          v90 = v17;
          *(_QWORD *)v17 = &off_237BD0;
          *(_QWORD *)(v17 + 8) = v18;
          *(_DWORD *)(v17 + 16) = (_DWORD)v95;
          v19 = v12[4];
          v20 = v89.m128i_i8[0];
          *(_DWORD *)(v19 + 248) = 0;
          *(_DWORD *)(v19 + 252) = v20 & 3;
          goto LABEL_17;
        }
        v79 = &v90;
        v16 = v15((__int64)v12, &v90, v9, v89.m128i_u32[0]);
        if ( !v16 )
        {
          v17 = v90;
LABEL_17:
          v21 = 0;
          while ( *(_QWORD *)(a1 + 8 * v21 + 120) )
          {
            if ( ++v21 == 16 )
            {
              sub_18FAC0(0, "out of abstract file handles");
              v22 = sub_B6570(24, nullptr);
              goto LABEL_72;
            }
          }
          *(_QWORD *)(a1 + 8 * v21 + 120) = v17;
          v94.m128i_i8[0] = 93;
          v94.m128i_i32[1] = v21;
          v93 = off_238C98;
          sub_169470(&v95, 93);
          v86 = v95;
          v95 = nullptr;
          v87 = _mm_loadu_si128((const __m128i *)dest);
          *(_OWORD *)dest = 0;
          if ( ptr )
          {
            v89 = v87;
            v92.m128i_i64[0] = 0;
            j__free(ptr);
            v88 = _mm_load_si128(&v89);
            ptr = v86;
            v92 = v88;
            if ( v95 )
            {
              dest[0] = nullptr;
              j__free(v95);
            }
          }
          else
          {
            ptr = v86;
            v92 = v87;
          }
          sub_A4120(&v93, &ptr, *(unsigned int *)(a1 + 108));
          nullsub_52(&v93);
          if ( a2 )
            goto LABEL_43;
          goto LABEL_44;
        }
LABEL_116:
        if ( a2 )
        {
          (*(void (__fastcall **)(__int64, size_t *, const char *))(*(_QWORD *)a2 + 8LL))(a2, v79, v9);
          goto LABEL_76;
        }
        v67 = v16;
        goto LABEL_77;
      case '^':
        v23 = *(_DWORD *)(a2 + 12);
        if ( (unsigned int)v23 > 0xF )
          goto LABEL_108;
        v24 = v23;
        v25 = *(__int64 **)(a1 + 8LL * v23 + 120);
        v26 = *(__int64 (__fastcall **)(__int64 *, bool))(*v25 + 48);
        if ( v26 == sub_904C0 )
        {
          v27 = sub_903A0(v25[1], *((_DWORD *)v25 + 4), *(_BYTE *)(a2 + 16));
          v25[1] = 0;
          v16 = v27;
          if ( v25 )
          {
            v28 = *(void (__fastcall **)(__int64 *))(*v25 + 8);
            if ( v28 == sub_8A160 )
              operator delete(v25, 0x18u);
            else
              v28(v25);
          }
        }
        else
        {
          v16 = v26(v25, *(_BYTE *)(a2 + 16));
        }
        *(_QWORD *)(a1 + 8 * v24 + 120) = 0;
        goto LABEL_73;
      case '_':
        v29 = *(unsigned int *)(a2 + 12);
        if ( (unsigned int)v29 > 0xF )
          goto LABEL_108;
        v30 = *(unsigned int *)(a2 + 16);
        LOBYTE(dest[0]) = 96;
        v31 = nullptr;
        v97 = 0;
        dest[1] = nullptr;
        v90 = v30;
        v95 = &off_238D28;
        if ( v30 )
        {
          dest[1] = (void *)sub_1987B0(&dest[1], 0, v30, 1);
          memset((char *)dest[1] + v97, 0, v30 - v97);
          *(_QWORD *)&v97 = v30;
          v29 = *(unsigned int *)(a2 + 12);
          v31 = dest[1];
        }
        v32 = *(_QWORD *)(a1 + 8 * v29 + 120);
        v33 = *(__int64 (__fastcall **)(__int64, size_t *, void *))(*(_QWORD *)v32 + 16LL);
        if ( v33 == sub_90800 )
          v34 = sub_906D0(*(_QWORD *)(v32 + 8), &v90, *(_DWORD *)(v32 + 16), v31);
        else
          v34 = v33(v32, &v90, v31);
        v16 = v34;
        if ( v34 )
        {
          sub_9C980(&v95);
          v67 = v16;
          if ( a2 )
            goto LABEL_86;
          goto LABEL_77;
        }
        v35 = v90;
        v36 = v97;
        if ( (unsigned __int64)v97 < v90 )
        {
          v85 = (char *)dest[1];
          if ( *((_QWORD *)&v97 + 1) < v90 )
          {
            dest[1] = (void *)sub_1987B0(&dest[1], dest[1], v90, 1);
            v36 = v97;
            v85 = (char *)dest[1];
          }
          memset(&v85[v36], 0, v35 - v36);
          *(_QWORD *)&v97 = v35;
        }
        else if ( v90 != (_QWORD)v97 )
        {
          *(_QWORD *)&v97 = v90;
        }
        sub_169470(&v93, 96);
        v37 = v93;
        v93 = nullptr;
        v38 = _mm_loadu_si128(&v94);
        v94 = 0;
        if ( ptr )
        {
          v89 = v38;
          v92.m128i_i64[0] = 0;
          j__free(ptr);
          v39 = _mm_load_si128(&v89);
          ptr = v37;
          v92 = v39;
          if ( v93 )
          {
            v94.m128i_i64[0] = 0;
            j__free(v93);
          }
        }
        else
        {
          ptr = v37;
          v92 = v38;
        }
        sub_A4800(&v95, &ptr, *(unsigned int *)(a1 + 108));
        sub_9C980(&v95);
        if ( a2 )
          goto LABEL_43;
        goto LABEL_44;
      case 'a':
        v62 = *(unsigned int *)(a2 + 12);
        if ( (unsigned int)v62 > 0xF )
        {
LABEL_108:
          sub_18FAC0(0, "bad abstract file handle");
          if ( a2 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
          v67 = 33;
          goto LABEL_77;
        }
        v63 = *(_QWORD *)(a2 + 24);
        v64 = *(_QWORD *)(a1 + 8 * v62 + 120);
        v65 = *(const void **)(a2 + 16);
        v95 = *(void **)(a2 + 24);
        v66 = *(__int64 (__fastcall **)(__int64, size_t *, const void *))(*(_QWORD *)v64 + 24LL);
        if ( v66 == sub_906B0 )
          v22 = sub_90530(*(_QWORD *)(v64 + 8), *(_DWORD *)(v64 + 16), v65, v63);
        else
          v22 = v66(v64, (size_t *)&v95, v65);
LABEL_72:
        v16 = v22;
LABEL_73:
        if ( a2 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        if ( v16 )
          goto LABEL_76;
        goto LABEL_44;
      case 'b':
        v41 = *(_QWORD *)(a1 + 112);
        v42 = *(unsigned int *)(a2 + 40);
        LOBYTE(dest[0]) = 99;
        v97 = 0;
        dest[1] = nullptr;
        v95 = &off_238DB8;
        v16 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64))(*(_QWORD *)v41 + 160LL))(
                v41,
                &dest[1],
                a2 + 16,
                v42);
        if ( v16 )
          goto LABEL_84;
        sub_169470(&v93, 99);
        v43 = v93;
        v93 = nullptr;
        v44 = _mm_loadu_si128(&v94);
        v94 = 0;
        if ( ptr )
        {
          v89 = v44;
          v92.m128i_i64[0] = 0;
          j__free(ptr);
          v45 = _mm_load_si128(&v89);
          ptr = v43;
          v92 = v45;
          if ( v93 )
          {
            v94.m128i_i64[0] = 0;
            j__free(v93);
          }
        }
        else
        {
          ptr = v43;
          v92 = v44;
        }
        goto LABEL_57;
      case 'd':
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 192LL))(*(_QWORD *)(a1 + 112));
        goto LABEL_42;
      case 'e':
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 200LL))(
          *(_QWORD *)(a1 + 112),
          *(unsigned __int8 *)(a2 + 9),
          *(_QWORD *)(a2 + 16));
        goto LABEL_42;
      case 'l':
        v57 = *(_QWORD *)(a1 + 112);
        v58 = *(unsigned int *)(a2 + 40);
        LOBYTE(dest[0]) = 109;
        v97 = 0;
        dest[1] = nullptr;
        v95 = &off_238F98;
        v16 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64))(*(_QWORD *)v57 + 168LL))(
                v57,
                &dest[1],
                a2 + 16,
                v58);
        if ( v16 )
        {
          sub_9DC40(&v95);
          v67 = v16;
          if ( a2 )
            goto LABEL_86;
          goto LABEL_77;
        }
        sub_169470(&v93, 109);
        v59 = v93;
        v93 = nullptr;
        v60 = _mm_loadu_si128(&v94);
        v94 = 0;
        if ( ptr )
        {
          v89 = v60;
          v92.m128i_i64[0] = 0;
          j__free(ptr);
          v61 = _mm_load_si128(&v89);
          ptr = v59;
          v92 = v61;
          if ( v93 )
          {
            v94.m128i_i64[0] = 0;
            j__free(v93);
          }
        }
        else
        {
          ptr = v59;
          v92 = v60;
        }
        sub_A84C0(&v95, &ptr, *(unsigned int *)(a1 + 108));
        sub_9DC40(&v95);
        if ( a2 )
          goto LABEL_43;
        goto LABEL_44;
      case 'n':
        v46 = *(_QWORD *)(a1 + 112);
        v47 = *(unsigned int *)(a2 + 40);
        LOBYTE(dest[0]) = 99;
        v97 = 0;
        dest[1] = nullptr;
        v95 = &off_238DB8;
        v16 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64))(*(_QWORD *)v46 + 176LL))(
                v46,
                &dest[1],
                a2 + 16,
                v47);
        if ( v16 )
        {
LABEL_84:
          sub_9CA00(&v95);
LABEL_85:
          v67 = v16;
          if ( a2 )
          {
LABEL_86:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
LABEL_76:
            v67 = v16;
          }
LABEL_77:
          LOBYTE(dest[0]) = 11;
          dest[1] = nullptr;
          HIDWORD(dest[0]) = v67;
          v95 = &off_237D38;
          v97 = 0;
          v68 = (const char *)sub_18FCA0(0);
          v69 = v68;
          if ( v68 && (v70 = strlen(v68), (v71 = v70) != 0) )
          {
            v75 = dest[1];
            v76 = v70 + 1;
            if ( *((_QWORD *)&v97 + 1) < v70 + 1 )
            {
              dest[1] = (void *)sub_1987B0(&dest[1], dest[1], v76, 1);
              v75 = dest[1];
            }
            *(_QWORD *)&v97 = v76;
            memmove(v75, v69, v71);
            *((_BYTE *)dest[1] + v71) = 0;
          }
          else
          {
            *(_QWORD *)&v97 = 0;
          }
          sub_169470(&v93, 11);
          v72 = v93;
          v93 = nullptr;
          v73 = _mm_loadu_si128(&v94);
          v94 = 0;
          if ( ptr )
          {
            v89 = v73;
            v92.m128i_i64[0] = 0;
            j__free(ptr);
            v74 = _mm_load_si128(&v89);
            ptr = v72;
            v92 = v74;
            if ( v93 )
            {
              v94.m128i_i64[0] = 0;
              j__free(v93);
            }
          }
          else
          {
            ptr = v72;
            v92 = v73;
          }
          sub_A4CF0(&v95, &ptr, *(unsigned int *)(a1 + 108));
          sub_9C160(&v95);
        }
        else
        {
          sub_169470(&v93, 99);
          v48 = v93;
          v93 = nullptr;
          v49 = _mm_loadu_si128(&v94);
          v94 = 0;
          if ( ptr )
          {
            v89 = v49;
            v92.m128i_i64[0] = 0;
            j__free(ptr);
            v50 = _mm_load_si128(&v89);
            ptr = v48;
            v92 = v50;
            if ( v93 )
            {
              v94.m128i_i64[0] = 0;
              j__free(v93);
            }
          }
          else
          {
            ptr = v48;
            v92 = v49;
          }
LABEL_57:
          sub_A48C0(&v95, &ptr, *(unsigned int *)(a1 + 108));
          sub_9CA00(&v95);
          if ( a2 )
            goto LABEL_43;
        }
        goto LABEL_44;
      case 'o':
        v51 = *(_QWORD *)(a1 + 112);
        v52 = a2 + 112;
        v53 = a2 + 88;
        v54 = a2 + 64;
        v55 = s1;
        v56 = *(__int64 (__fastcall **)(__int64, const char *, const char *, __int64, __int64, __int64))(*(_QWORD *)v51 + 136LL);
        if ( *(_QWORD *)(a2 + 48) )
          v55 = *(const char **)(a2 + 40);
        if ( *(_QWORD *)(a2 + 24) )
          v22 = v56(v51, *(const char **)(a2 + 16), v55, v54, v53, v52);
        else
          v22 = v56(v51, s1, v55, v54, v53, v52);
        goto LABEL_72;
      default:
        if ( !unk_2439A0 )
          sub_198E10(2371);
        BUG();
    }
  }
  if ( *(_QWORD *)(a2 + 24) > 1u )
  {
    v77 = *(_DWORD *)(a2 + 12);
    v78 = *(const char **)(a2 + 16);
    if ( v77 == 1 )
    {
      (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 96LL))(a1, v78);
    }
    else
    {
      if ( v77 == 3 )
        sub_2F260((__int64)"%s", v78);
      sub_466E0((const __m128i *)"%s", v78);
    }
  }
LABEL_42:
  if ( a2 )
LABEL_43:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
LABEL_44:
  sub_168B00(a1, &ptr);
  if ( ptr )
  {
    v92.m128i_i64[0] = 0;
    j__free(ptr);
  }
  return v98 - __readfsqword(0x28u);
}
