__int64 __fastcall sub_F4760(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v4; // eax
  unsigned int v5; // r12d
  unsigned __int64 v7; // rax
  __int64 v9; // rsi
  __m128i v10; // xmm2
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rbp
  __int64 v16; // rax
  __m128i *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r14
  int **v26; // r12
  int *v27; // rbp
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // r13
  __int64 v31; // rbp
  __int64 *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rbp
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // r12
  void *v40; // r14
  __int64 v41; // rdi
  int v42; // eax
  int flags; // eax
  signed int v44; // r15d
  int *v45; // rax
  int v46; // edx
  __int64 v47; // rcx
  _DWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rsi
  int v51; // ebp
  _QWORD *v52; // rbp
  int v53; // r12d
  __int64 v54; // rax
  __int64 v55; // rsi
  int v56; // esi
  unsigned int v57; // ebp
  __int64 v58; // r12
  char v59; // bp
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // eax
  __m128i v66; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v67; // [rsp+18h] [rbp-1D0h] BYREF
  _QWORD *v68[2]; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v69; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v70; // [rsp+40h] [rbp-1A8h]
  __int64 v71; // [rsp+48h] [rbp-1A0h]
  __int128 v72; // [rsp+50h] [rbp-198h]
  __int64 v73; // [rsp+60h] [rbp-188h]
  __int128 v74; // [rsp+68h] [rbp-180h]
  __int64 v75; // [rsp+78h] [rbp-170h]
  __int64 v76; // [rsp+80h] [rbp-168h]
  _BYTE v77[8]; // [rsp+88h] [rbp-160h] BYREF
  __int64 v78; // [rsp+90h] [rbp-158h]
  __int64 v79; // [rsp+98h] [rbp-150h]
  __int64 v80; // [rsp+A8h] [rbp-140h]
  __int64 v81; // [rsp+B0h] [rbp-138h]
  __int64 v82; // [rsp+E0h] [rbp-108h]
  __int64 v83; // [rsp+E8h] [rbp-100h]
  __int64 v84; // [rsp+F8h] [rbp-F0h]
  __int64 v85; // [rsp+100h] [rbp-E8h]
  __int64 v86; // [rsp+110h] [rbp-D8h]
  __int64 v87; // [rsp+118h] [rbp-D0h]
  __int64 v88; // [rsp+120h] [rbp-C8h]
  __int64 v89; // [rsp+128h] [rbp-C0h]
  __int64 v90; // [rsp+130h] [rbp-B8h]
  __int64 v91; // [rsp+138h] [rbp-B0h]
  __int128 v92; // [rsp+140h] [rbp-A8h]
  int v93; // [rsp+150h] [rbp-98h]
  __int16 v94; // [rsp+154h] [rbp-94h]
  __m128i si128; // [rsp+158h] [rbp-90h] BYREF
  __int128 v96; // [rsp+168h] [rbp-80h]
  __m128i v97; // [rsp+178h] [rbp-70h]
  __int64 v98; // [rsp+188h] [rbp-60h]
  int v99; // [rsp+190h] [rbp-58h]
  int v100; // [rsp+194h] [rbp-54h]
  int v101; // [rsp+198h] [rbp-50h]
  __int16 v102; // [rsp+19Ch] [rbp-4Ch]
  char v103; // [rsp+19Eh] [rbp-4Ah]
  unsigned __int64 v104; // [rsp+1A8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 56);
  v104 = __readfsqword(0x28u);
  if ( *(_BYTE *)(v2 + 32) == 11 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    v5 = 0;
    if ( (v4 & 0x800) == 0 )
    {
      BYTE1(v4) |= 8u;
      v5 = 1;
      *(_DWORD *)(a1 + 24) = v4;
    }
    return v5;
  }
  v7 = *(_QWORD *)(a1 + 64);
  v9 = *(_QWORD *)(a1 + 480);
  v67 = 0;
  v71 = 0;
  v10 = (__m128i)v7;
  v11 = *(_QWORD *)(v7 + 1496);
  v73 = 0;
  v69 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, v10);
  v70 = v11;
  v75 = 0;
  v76 = 0;
  v72 = 0;
  v74 = 0;
  sub_D10B0((__int64)v77, v9, 0);
  v86 = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v93 = -1;
  v94 = 0;
  v98 = 0;
  v99 = 0;
  v100 = a2;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v92 = 0;
  v96 = -1;
  v97 = 0;
  v12 = sub_D7360(v69.m128i_i64[0], *(_QWORD *)(v69.m128i_i64[0] + 56));
  v13 = *(_QWORD *)(a1 + 480);
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
  v97 = v14;
  sub_33E140(v13, 0x10u, a1, &si128, &v67);
  if ( !v67 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      HIDWORD(v98) = get_tinfo_property();
    }
    else
    {
      sub_E9680(&v69, *(_QWORD *)(a1 + 56), 0, *(double *)v14.m128i_i64);
      if ( !si128.m128i_i8[0] )
        goto LABEL_56;
      if ( (a2 & 2) == 0 )
      {
        v65 = get_tinfo_property() & 0xFFFFFFF0;
        if ( v65 == 64 || v65 == 208 )
          goto LABEL_73;
      }
    }
    v42 = *(_DWORD *)(a1 + 24);
    BYTE1(v42) &= ~2u;
    LOBYTE(v42) = v42 | 0x80;
    *(_DWORD *)(a1 + 24) = v42;
    v67 = sub_EFB00((__int64)&v69);
    if ( v67 )
      goto LABEL_6;
LABEL_56:
    v5 = 2 * (unsigned __int8)v102;
    goto LABEL_26;
  }
LABEL_6:
  sub_11CDA0(*(_QWORD *)(a1 + 56) + 64LL);
  v15 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(v15 + 68) = sub_330290(v67, *(_QWORD *)(a1 + 64));
  v16 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v16 + 72) = v67;
  *(_BYTE *)(v16 + 64) = 8;
  if ( (unsigned __int8)sub_11C750(*(int **)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
  {
    v35 = v67;
    v36 = v67 + 96;
    sub_648D0((__int64 *)(v67 + 240), (const void **)(v67 + 96), *(double *)v14.m128i_i64);
    v39 = *(_QWORD *)(v35 + 120);
    v40 = nullptr;
    if ( v39 )
    {
      v40 = (void *)qalloc_or_throw(16 * v39, v36, v37, v38);
      memcpy(v40, *(const void **)(v35 + 112), 16 * v39);
    }
    v41 = *(_QWORD *)(v35 + 256);
    v14 = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
    if ( v41 )
    {
      *(_QWORD *)(v35 + 264) = 0;
      v66 = v14;
      qfree(v41);
      v14 = _mm_load_si128(&v66);
    }
    *(_QWORD *)(v35 + 256) = v40;
    *(__m128i *)(v35 + 264) = v14;
    sub_FECE0(a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 56));
  }
  if ( *(int *)(*(_QWORD *)(a1 + 56) + 68LL) <= 0 )
    goto LABEL_25;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 56) + 65LL) |= 2u;
    v17 = *(__m128i **)(a1 + 64);
    v68[0] = (_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
    sub_C7FB0(v17 + 87, v68[0], v68);
    copy_tinfo_t();
    if ( *((_QWORD *)&v96 + 1) == -1
      || ((flags = get_flags_ex(), (~(_WORD)flags & 0x600) != 0) || (flags & 0x10000000) == 0)
      && !(unsigned __int8)is_spec_ea() )
    {
      v18 = si128.m128i_i64[1];
    }
    else
    {
      v18 = *((_QWORD *)&v96 + 1);
    }
    v19 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(v19 + 40) == v18 )
      *(_DWORD *)(*(_QWORD *)(v19 + 944) + 68LL) |= 1u;
    v20 = 2;
  }
  else
  {
    v20 = *(unsigned int *)(v67 + 80);
    if ( (_DWORD)v20 == 2 )
    {
      v47 = *(_QWORD *)(v67 + 88);
      v48 = *(_DWORD **)v47;
      v49 = *(_QWORD *)v47 + 24LL * *(_QWORD *)(v47 + 8);
      if ( v48 == (_DWORD *)v49 )
      {
LABEL_71:
        v20 = 3;
      }
      else
      {
        while ( *v48 != 1 )
        {
          v48 += 6;
          if ( (_DWORD *)v49 == v48 )
            goto LABEL_71;
        }
      }
    }
    else
    {
      v20 = ((_DWORD)v20 != 1) | 2u;
    }
  }
  v21 = sub_F2530(a1, *(_QWORD *)(a1 + 56), v20, *(double *)v14.m128i_i64);
  v22 = *(_QWORD *)(a1 + 56);
  if ( !v21 )
  {
    sub_11CDA0(v22 + 64);
LABEL_73:
    v5 = 0;
    goto LABEL_26;
  }
  v23 = *(_DWORD *)(v22 + 4);
  if ( (v23 & 0x8000) != 0 )
  {
    BYTE1(v23) &= ~0x80u;
    *(_DWORD *)(v22 + 4) = v23;
    v24 = *(_QWORD *)(a1 + 376);
    if ( !(_DWORD)v24 )
    {
      v50 = *(_QWORD *)(a1 + 368);
      v51 = *(_DWORD *)(a1 + 72) + 1;
      if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v24 + 1) )
      {
        v64 = qvector_reserve(a1 + 368, v50, v24 + 1, 4);
        *(_QWORD *)(a1 + 368) = v64;
        v24 = *(_QWORD *)(a1 + 376);
        v50 = v64;
      }
      *(_DWORD *)(v50 + 4 * v24) = v51;
      v52 = *(_QWORD **)(a1 + 8);
      ++*(_QWORD *)(a1 + 376);
      v53 = *(_DWORD *)(a1 + 72);
      v54 = v52[44];
      v55 = v52[43];
      if ( v52[45] < (unsigned __int64)(v54 + 1) )
      {
        v63 = qvector_reserve((__int64)(v52 + 43), v55, v54 + 1, 4);
        v52[43] = v63;
        v55 = v63;
        v54 = v52[44];
      }
      *(_DWORD *)(v55 + 4 * v54) = v53;
      ++v52[44];
    }
    v22 = *(_QWORD *)(a1 + 56);
  }
  if ( *(_BYTE *)(v22 + 64) != 15 )
    goto LABEL_25;
  v25 = *(_QWORD *)(a1 + 64);
  v26 = *(int ***)(*(_QWORD *)(v22 + 72) + 8LL);
  v27 = *v26;
  v28 = **v26;
  if ( v28 == 1 )
  {
    if ( v26[1] == (int *)&byte_1 )
      goto LABEL_25;
  }
  else if ( (unsigned int)(v28 - 3) <= 1 )
  {
    v44 = *(_DWORD *)(v22 + 68);
    if ( v44 <= (int)(2
                    * (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v25 + 1504) + 32LL))(
                        *(_QWORD *)(v25 + 1504),
                        *((unsigned __int16 *)v27 + 4))) )
    {
      v45 = v26[1];
      if ( v45 == (int *)&byte_1 )
        goto LABEL_25;
      if ( v45 == (int *)&word_2 && (unsigned int)(v27[6] - 3) <= 1 )
      {
        v46 = *((unsigned __int16 *)v27 + 9);
        if ( *((unsigned __int16 *)v27 + 20) == v46 + *((unsigned __int16 *)v27 + 8)
          && *((unsigned __int16 *)v27 + 16) == v46 + *((unsigned __int16 *)v27 + 4) )
        {
          goto LABEL_25;
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 376) == 1 )
  {
    v56 = *(_DWORD *)(a1 + 72);
    v57 = *(_DWORD *)(v25 + 64);
    if ( v56 )
    {
      v58 = *(_QWORD *)(v25 + 784);
      v68[0] = nullptr;
      v68[1] = nullptr;
      sub_64190((__int64 *)v68, v56, *(double *)v14.m128i_i64);
      v59 = sub_6FC30(v58, (__int64 *)v68, 0, v57 - 1, *(double *)v14.m128i_i64);
      qfree((__int64)v68[0]);
      if ( v59 )
        goto LABEL_24;
      v57 = *(_DWORD *)(v25 + 64);
    }
    v60 = **(unsigned int **)(a1 + 368);
    if ( (unsigned int)v60 >= v57 )
      sub_F0F00(*(double *)v14.m128i_i64);
    v61 = sub_1120C0(*(_QWORD *)(*(_QWORD *)(v25 + 528) + 8 * v60), 1);
    if ( !v61 )
    {
      if ( !under_debugger )
        sub_383060(0xCE79u, *(double *)v14.m128i_i64);
      BUG();
    }
    v62 = *(_DWORD *)(v61 + 76);
    if ( v62 == 1 || v62 == 6 )
      goto LABEL_25;
  }
LABEL_24:
  sub_1CBA80(a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 56) + 64LL, 1);
LABEL_25:
  *(_DWORD *)(a1 + 24) |= 0x800u;
  sub_A2520(a1, "build_callinfo");
  sub_33E140(*(_QWORD *)(a1 + 480), 0x11u, a1);
  v5 = 1;
LABEL_26:
  clear_tinfo_t();
  if ( v91 )
  {
    *(_QWORD *)&v92 = 0;
    qfree(v91);
  }
  qfree(v89);
  qfree(v87);
  if ( v84 )
  {
    v85 = 0;
    qfree(v84);
  }
  if ( v82 )
  {
    v83 = 0;
    qfree(v82);
  }
  if ( v80 )
  {
    v81 = 0;
    qfree(v80);
  }
  if ( v78 )
  {
    v79 = 0;
    qfree(v78);
  }
  qfree(v75);
  v29 = v73;
  if ( v73 )
  {
    v30 = v74;
    if ( (_QWORD)v74 )
    {
      v31 = 0;
      do
      {
        v32 = (__int64 *)(v29 + 48 * v31);
        v33 = v32[3];
        if ( v33 )
        {
          v32[4] = 0;
          qfree(v33);
        }
        v34 = *v32;
        if ( *v32 )
        {
          v32[1] = 0;
          qfree(v34);
        }
        ++v31;
        v29 = v73;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v74 = 0;
    qfree(v29);
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71);
  }
  return v5;
}

