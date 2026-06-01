__int64 __fastcall sub_3FB7F0(__int64 a1, const char **a2)
{
  __int64 v2; // rdx
  __int16 v4; // ax
  __m128 si128; // xmm1
  __m128 *v8; // rax
  const char *v9; // rdi
  int v10; // esi
  int v11; // r14d
  int v12; // eax
  const char *v13; // rdi
  unsigned __int8 *v14; // rax
  const char *v15; // rsi
  __int64 v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rdx
  size_t v19; // r8
  const char *v20; // r12
  unsigned __int64 v21; // r12
  size_t v22; // r8
  int v23; // r13d
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r12
  int v27; // eax
  __int64 v28; // r12
  __int64 v29; // r13
  unsigned int v30; // eax
  __m128i v31; // xmm0
  char v32; // al
  int v33; // r14d
  __int64 v34; // r13
  int v35; // ecx
  __int64 v36; // rdi
  unsigned int v37; // r12d
  __int64 v38; // rsi
  __int64 (__fastcall *v39)(__int64, int); // rax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // r13
  __int64 v44; // rsi
  __int64 (__fastcall *v45)(__int64, int); // rax
  int v46; // eax
  char *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdi
  unsigned __int64 v50; // r12
  __int64 v51; // r13
  unsigned __int8 v52; // al
  size_t v53; // r10
  __int64 v54; // r9
  __int64 v55; // rsi
  size_t v56; // r8
  __int64 v57; // r10
  __int64 v58; // r9
  __int64 v59; // rsi
  const void **v60; // rax
  unsigned __int64 v61; // r12
  size_t v62; // r8
  const void *v63; // r9
  void *v64; // rdi
  __int64 v65; // r12
  unsigned __int8 v66; // al
  int v67; // [rsp+8h] [rbp-2F8h]
  __int64 v68; // [rsp+8h] [rbp-2F8h]
  __int64 v69; // [rsp+8h] [rbp-2F8h]
  size_t n; // [rsp+10h] [rbp-2F0h]
  size_t na; // [rsp+10h] [rbp-2F0h]
  size_t nb; // [rsp+10h] [rbp-2F0h]
  size_t nc; // [rsp+10h] [rbp-2F0h]
  __int64 v74; // [rsp+18h] [rbp-2E8h]
  __int64 v75; // [rsp+18h] [rbp-2E8h]
  __int64 v76; // [rsp+18h] [rbp-2E8h]
  __int64 v77; // [rsp+18h] [rbp-2E8h]
  int v78; // [rsp+20h] [rbp-2E0h]
  int v79; // [rsp+30h] [rbp-2D0h]
  int v80; // [rsp+3Ch] [rbp-2C4h]
  int v81; // [rsp+3Ch] [rbp-2C4h]
  __int64 v82; // [rsp+40h] [rbp-2C0h]
  char v83; // [rsp+50h] [rbp-2B0h]
  int v84; // [rsp+58h] [rbp-2A8h]
  char v85; // [rsp+58h] [rbp-2A8h]
  char v86; // [rsp+63h] [rbp-29Dh]
  int v87; // [rsp+64h] [rbp-29Ch]
  int dtype_size; // [rsp+78h] [rbp-288h]
  unsigned __int16 v89; // [rsp+78h] [rbp-288h]
  __int64 v90; // [rsp+80h] [rbp-280h] BYREF
  __int64 v91; // [rsp+88h] [rbp-278h]
  _DWORD *v92; // [rsp+90h] [rbp-270h] BYREF
  __int128 v93; // [rsp+98h] [rbp-268h]
  _BYTE src[24]; // [rsp+B0h] [rbp-250h] BYREF
  __int128 v95; // [rsp+C8h] [rbp-238h]
  _BYTE v96[80]; // [rsp+E0h] [rbp-220h] BYREF
  char v97[4]; // [rsp+130h] [rbp-1D0h] BYREF
  int v98; // [rsp+134h] [rbp-1CCh]
  _BYTE v99[160]; // [rsp+180h] [rbp-180h] BYREF
  _BYTE v100[16]; // [rsp+220h] [rbp-E0h] BYREF
  __int64 v101; // [rsp+230h] [rbp-D0h]
  void *dest; // [rsp+240h] [rbp-C0h]
  unsigned __int64 v103; // [rsp+248h] [rbp-B8h]
  unsigned __int64 v104; // [rsp+250h] [rbp-B0h]
  int v105; // [rsp+268h] [rbp-98h]
  char v106; // [rsp+2C0h] [rbp-40h] BYREF
  unsigned __int64 v107; // [rsp+2C8h] [rbp-38h]

  v2 = 0;
  v4 = *(_WORD *)(a1 + 48);
  v107 = __readfsqword(0x28u);
  while ( v4 != *((_WORD *)a2 + v2 + 4) )
  {
    if ( ++v2 == 6 )
      return 0;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v82 = *(_QWORD *)(a1 + 40);
  v8 = (__m128 *)v96;
  do
  {
    v8->m128_i32[1] = -1;
    v8 += 5;
    v8[-5].m128_i16[0] = 0;
    v8[-5].m128_i16[1] = 0;
    v8[-5].m128_u64[1] = 0;
    v8[-4] = si128;
    v8[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v8[-3] + 8) = 0;
    v8[-2].m128_i32[2] = 0;
    v8[-1].m128_u64[0] = 0;
    v8[-1].m128_i32[2] = 0;
  }
  while ( &v106 != (char *)v8 );
  v9 = *a2;
  v80 = v2;
  v84 = *(unsigned __int8 *)*a2 - 67;
  if ( **a2 == 67 )
  {
    v84 = *((unsigned __int8 *)v9 + 1) - 65;
    if ( v9[1] == 65 )
      v84 = *((unsigned __int8 *)v9 + 2) - 83;
  }
  v86 = v9[3];
  v83 = (int)v2 <= 3;
  v79 = strcmp(v9, "load");
  if ( v80 <= 3 && v79 )
  {
    if ( v84 || (v10 = 4, v86 != 80) )
      v10 = 2;
  }
  else
  {
    v10 = 1;
  }
  dtype_size = get_dtype_size();
  v11 = dtype_size;
  v78 = sub_3FB520(a1, v10, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 624LL), 0.0);
  v12 = sub_3F6F80(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL), a1 + 64, v86 == 80, 0.0);
  v13 = *a2;
  v87 = v12;
  v90 = 0;
  v91 = 0;
  if ( !strcmp(v13, "exchange")
    && ((unsigned __int8)get_op_tinfo() || (unsigned __int8)get_op_tinfo())
    && dtype_size == get_tinfo_size() )
  {
    sub_32C870(src, *(_QWORD *)(a1 + 832), &v90);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    if ( v86 == 80 )
      v11 = 2 * dtype_size;
    sub_32C760((__int64 *)src, *(_QWORD *)(a1 + 832), v11, 2);
    copy_tinfo_t();
    clear_tinfo_t();
    if ( v11 == 1 )
    {
      v15 = "atomic_uchar";
    }
    else
    {
      v14 = *(unsigned __int8 **)(a1 + 800);
      if ( v11 == v14[134] )
      {
        v15 = "atomic_ushort";
      }
      else if ( v11 == v14[130] )
      {
        v15 = "atomic_uint";
      }
      else if ( v11 == v14[136] )
      {
        v15 = "atomic_ullong";
      }
      else if ( v11 == v14[135] )
      {
        v15 = "atomic_ulong";
      }
      else
      {
        switch ( v11 )
        {
          case 8:
            v15 = "atomic_uint64";
            break;
          case 16:
            v15 = "atomic_uint128";
            break;
          case 4:
            v15 = "atomic_uint32";
            break;
          default:
            if ( !under_debugger )
              sub_3835A0(0xCD01u, 0.0);
            BUG();
        }
      }
    }
    sub_32AFE0(&v92, (__int64)v15);
    sub_32C870(src, *(_QWORD *)(a1 + 832), &v92);
    copy_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  v16 = v91;
  if ( (_BYTE)v91 )
  {
    LOBYTE(v16) = v91 | 0x80;
    v91 = v16;
  }
  sub_32F3F0((__int64)v96, v78, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
  sub_32F3F0((__int64)v97, v87, v11);
  if ( !strcmp(*a2, "fetch_and") )
    sub_120220(v97, *(_QWORD *)(a1 + 832), 7, v82, v98);
  v93 = 0;
  v92 = nullptr;
  v17 = (_DWORD *)qvector_reserve();
  v92 = v17;
  *(_QWORD *)&v93 = 8;
  *v17 = 1836020833;
  *(_DWORD *)((char *)v17 + 3) = 1600350573;
  *((_BYTE *)v92 + 7) = 0;
  if ( !v84 )
  {
    v18 = 24;
    memset(src, 0, sizeof(src));
    v19 = 23;
    v20 = "compare_exchange_strong";
LABEL_38:
    n = v19;
    v74 = v18;
    *(_QWORD *)src = qvector_reserve();
    *(_QWORD *)&src[8] = v74;
    memmove(*(void **)src, v20, n);
    *(_BYTE *)(*(_QWORD *)src + n) = 0;
    v21 = *(_QWORD *)&src[8];
    if ( *(_QWORD *)&src[8] )
    {
      v22 = *(_QWORD *)&src[8] - 1LL;
      if ( *(_QWORD *)&src[8] != 1 )
      {
        v53 = v93;
        v54 = *(_QWORD *)&src[8] - 1LL;
        if ( (_QWORD)v93 )
        {
          v53 = v93 - 1;
          v54 = v22 + v93 - 1;
          v21 = *(_QWORD *)&src[8] + v93 - 1;
        }
        v55 = (__int64)v92;
        if ( *((_QWORD *)&v93 + 1) < v21 )
        {
          v68 = v54;
          na = v53;
          v76 = *(_QWORD *)&src[8] - 1LL;
          v92 = (_DWORD *)qvector_reserve();
          v54 = v68;
          v55 = (__int64)v92;
          v53 = na;
          v22 = v76;
        }
        *(_QWORD *)&v93 = v21;
        *(_BYTE *)(v55 + v54) = 0;
        memcpy((char *)v92 + v53, *(const void **)src, v22);
      }
    }
    if ( *(_QWORD *)src )
    {
      *(_QWORD *)&src[8] = 0;
      qfree();
    }
    v81 = dword_42E5D0[v80];
    if ( v81 == 5 )
    {
      v23 = 3;
      if ( !v84 )
      {
LABEL_44:
        sub_32F430((__int64)v97, *(_QWORD *)(a1 + 832), v87, v11, v11, v11, 2);
        sub_32C870(src, *(_QWORD *)(a1 + 832), &v90);
        copy_tinfo_t();
        clear_tinfo_t();
        v24 = 104;
        if ( v86 == 80 )
          v24 = 144;
        v25 = sub_3F6F80(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 620LL), a1 + v24, v86 == 80, 0.0);
        sub_32F3F0((__int64)v99, v25, v11);
        v26 = *(_QWORD *)(a1 + 8);
        goto LABEL_47;
      }
      goto LABEL_75;
    }
    goto LABEL_78;
  }
  v20 = *a2;
  memset(src, 0, sizeof(src));
  if ( v20 )
  {
    v19 = strlen(v20);
    v18 = v19 + 1;
    goto LABEL_38;
  }
  v81 = dword_42E5D0[v80];
  if ( v81 == 5 )
  {
LABEL_75:
    v23 = 2;
    v83 |= v79 == 0;
    goto LABEL_76;
  }
LABEL_78:
  memset(src, 0, sizeof(src));
  v48 = qvector_reserve();
  *(_QWORD *)src = v48;
  *(_QWORD *)&src[8] = 10;
  *(_QWORD *)v48 = 0x6963696C7078655FLL;
  *(_BYTE *)(v48 + 8) = 116;
  v49 = *(_QWORD *)src;
  *(_BYTE *)(*(_QWORD *)src + 9LL) = 0;
  v50 = *(_QWORD *)&src[8];
  if ( *(_QWORD *)&src[8] )
  {
    v56 = *(_QWORD *)&src[8] - 1LL;
    if ( *(_QWORD *)&src[8] != 1 )
    {
      v57 = v93;
      v58 = *(_QWORD *)&src[8] - 1LL;
      if ( (_QWORD)v93 )
      {
        v57 = v93 - 1;
        v58 = v56 + v93 - 1;
        v50 = *(_QWORD *)&src[8] + v93 - 1;
      }
      v59 = (__int64)v92;
      if ( *((_QWORD *)&v93 + 1) < v50 )
      {
        v69 = v57;
        nb = *(_QWORD *)&src[8] - 1LL;
        v77 = v58;
        v92 = (_DWORD *)qvector_reserve();
        v57 = v69;
        v59 = (__int64)v92;
        v56 = nb;
        v58 = v77;
      }
      *(_QWORD *)&v93 = v50;
      *(_BYTE *)(v59 + v58) = 0;
      memcpy((char *)v92 + v57, *(const void **)src, v56);
      v49 = *(_QWORD *)src;
    }
  }
  if ( v49 )
  {
    *(_QWORD *)&src[8] = 0;
    qfree();
  }
  if ( v79 )
  {
    if ( v84 )
    {
      v67 = 2;
      v75 = 160;
    }
    else
    {
      v67 = 3;
      v75 = 240;
    }
  }
  else
  {
    v67 = 1;
    v75 = 80;
  }
  *(_QWORD *)src = 7;
  v51 = *(_QWORD *)(a1 + 832);
  copy_tinfo_t();
  clear_tinfo_t();
  v52 = getinf();
  sub_120450((__int64)&v96[v75], v51, v81, v52, v82, 0);
  sub_3EFF50(v51);
  copy_tinfo_t();
  if ( !v79 )
  {
    if ( v84 )
    {
      v26 = *(_QWORD *)(a1 + 8);
      v23 = 2;
      goto LABEL_87;
    }
LABEL_105:
    sub_124BC0((__int64)v100, &v96[v75]);
    v101 = *(_QWORD *)&v96[80 * v67 + 16];
    copy_tinfo_t();
    v61 = *(_QWORD *)&v96[v75 + 40];
    if ( v61 && (v62 = v61 - 1, v61 != 1) )
    {
      v60 = (const void **)&v96[v75 + 32];
      v63 = *v60;
      v64 = dest;
      if ( v104 < v61 )
      {
        nc = (size_t)*v60;
        dest = (void *)qvector_reserve();
        v63 = (const void *)nc;
        v64 = dest;
        v62 = v61 - 1;
      }
      v103 = v61;
      memmove(v64, v63, v62);
      *((char *)dest + v61 - 1) = 0;
    }
    else
    {
      v103 = 0;
    }
    copy_argloc();
    v105 = *(_DWORD *)&v96[80 * v67 + 72];
    if ( v81 == 3 )
    {
      *(_QWORD *)src = 7;
      v65 = *(_QWORD *)(a1 + 832);
      copy_tinfo_t();
      clear_tinfo_t();
      v66 = getinf();
      sub_120450((__int64)v100, v65, 0, v66, v82, 0);
      sub_3EFF50(v65);
      copy_tinfo_t();
    }
    v23 = 5;
    goto LABEL_44;
  }
  v23 = 3;
  if ( !v84 )
    goto LABEL_105;
LABEL_76:
  v26 = *(_QWORD *)(a1 + 8);
  v87 = -1;
  if ( !v83 )
  {
LABEL_47:
    *(_QWORD *)src = 1;
    v27 = 0;
    v85 = 0;
    goto LABEL_48;
  }
LABEL_87:
  *(_QWORD *)src = 0;
  copy_tinfo_t();
  v87 = -1;
  v27 = 1;
  v85 = 1;
LABEL_48:
  v28 = sub_335C70(v26, v82, (__int64)v92, src, v23, (__int64)v96, v27);
  clear_tinfo_t();
  v29 = *(_QWORD *)(v28 + 72);
  *(_DWORD *)(v29 + 280) |= 4u;
  memset(src, 0, sizeof(src));
  v95 = 0;
  *(_QWORD *)&src[16] = qvector_reserve();
  *(__m128i *)(*(_QWORD *)&src[16] + 16 * v95) = _mm_load_si128((const __m128i *)&xmmword_41F900);
  *(_QWORD *)&v95 = v95 + 1;
  sub_63C80((__int64 *)(v29 + 136), (__int64 *)src);
  sub_317070((__int64 *)(v29 + 152), (__int64 **)&src[16]);
  if ( *(_QWORD *)&src[16] )
  {
    *(_QWORD *)&v95 = 0;
    qfree();
  }
  qfree();
  *(__m128i *)src = _mm_load_si128((const __m128i *)&xmmword_41F900);
  sub_316F70((__int64 *)(v29 + 216), (__m128i *)src, 0.0, si128);
  *(_DWORD *)(v28 + 4) |= 0x80000u;
  if ( !v85 )
    goto LABEL_54;
  v30 = sub_122530(*(_QWORD *)(a1 + 832), *(unsigned __int16 *)(a1 + 40LL * (v79 != 0) + 70));
  v31 = _mm_cvtsi32_si128(*(_DWORD *)(v28 + 68));
  *(_DWORD *)src = 1;
  *(_QWORD *)&src[4] = _mm_unpacklo_epi32(v31, _mm_cvtsi32_si128(v30)).m128i_u64[0];
  v28 = (__int64)sub_124CA0(v28, src);
  sub_11C7E0((__int64)src);
  v32 = sub_3F0900(a1 + 24);
  v33 = *(_DWORD *)(v28 + 68);
  v34 = *(_QWORD *)(a1 + 832);
  if ( !v32 || (v35 = *(_DWORD *)(v34 + 80), v35 <= v33) )
  {
    v89 = *(_WORD *)(a1 + 70);
    if ( !sub_11E2E0(4u) || *(_DWORD *)(v34 + 80) != 8 || (unsigned int)v89 - 8 > 0x107 || v33 != 4 )
      goto LABEL_54;
    v34 = *(_QWORD *)(a1 + 832);
    v35 = *(_DWORD *)(v34 + 80);
  }
  sub_12B130(v28, v34, 9, v35, 1);
LABEL_54:
  sub_B4CD0(*(_QWORD **)(a1 + 16), v28);
  if ( v86 == 80 && v87 != -1 )
  {
    v36 = *(_QWORD *)(a1 + 832);
    v37 = *(unsigned __int8 *)(a1 + 69);
    v38 = *(unsigned __int16 *)(a1 + 70);
    v39 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v36 + 168LL);
    if ( v39 == sub_3EA010 )
      v40 = sub_3EA010(v36, v38);
    else
      v40 = v39(v36, v38);
    sub_3F56D0(a1, 4u, v37, v87, 0x3BEA45E214ADDC55LL, v40, 0);
    v41 = get_dtype_size();
    v42 = *(_QWORD *)(a1 + 832);
    v43 = v41;
    v44 = (unsigned int)*(unsigned __int16 *)(a1 + 70) + 1;
    v45 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v42 + 168LL);
    if ( v45 == sub_3EA010 )
      v46 = sub_3EA010(v42, v44);
    else
      v46 = v45(v42, v44);
    sub_3F56D0(a1, 4u, v37, v43 + v87, 0x3BEA45E214ADDC55LL, v46, 0);
  }
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree();
  }
  clear_tinfo_t();
  clear_tinfo_t();
  v47 = &v106;
  do
  {
    v47 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v47 + 4) )
    {
      *((_QWORD *)v47 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11C7E0((__int64)v47);
  }
  while ( v47 != v96 );
  return 1;
}

