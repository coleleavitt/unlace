__int64 __fastcall sub_F0560(__int64 a1, int a2)
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
  int v14; // r9d
  __int64 v15; // rbp
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __m128i *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // edx
  char v25; // al
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r14
  int **v30; // r12
  int *v31; // rbp
  int v32; // eax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rdi
  __int64 v37; // r13
  __int64 v38; // rbp
  _QWORD *v39; // rbx
  __int64 v40; // rbp
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  unsigned __int64 v44; // r12
  void *v45; // r14
  __m128i v46; // xmm0
  int v47; // eax
  int flags; // eax
  signed int v49; // r15d
  int *v50; // rax
  int v51; // edx
  __int64 v52; // rcx
  _DWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rsi
  int v56; // ebp
  _QWORD *v57; // rbp
  int v58; // r12d
  __int64 v59; // rax
  __int64 v60; // rsi
  int v61; // esi
  unsigned int v62; // ebp
  __int64 v63; // r12
  char v64; // bp
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // eax
  __m128i v71; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v72; // [rsp+10h] [rbp-1D8h]
  __int64 v73; // [rsp+18h] [rbp-1D0h] BYREF
  unsigned __int64 *v74; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v75; // [rsp+28h] [rbp-1C0h]
  __m128i v76; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v77; // [rsp+40h] [rbp-1A8h]
  __int64 v78; // [rsp+48h] [rbp-1A0h]
  __int128 v79; // [rsp+50h] [rbp-198h]
  __int64 v80; // [rsp+60h] [rbp-188h]
  __int128 v81; // [rsp+68h] [rbp-180h]
  __int64 v82; // [rsp+78h] [rbp-170h]
  __int64 v83; // [rsp+80h] [rbp-168h]
  _BYTE v84[8]; // [rsp+88h] [rbp-160h] BYREF
  __int64 v85; // [rsp+90h] [rbp-158h]
  __int64 v86; // [rsp+98h] [rbp-150h]
  __int64 v87; // [rsp+A8h] [rbp-140h]
  __int64 v88; // [rsp+B0h] [rbp-138h]
  __int64 v89; // [rsp+E0h] [rbp-108h]
  __int64 v90; // [rsp+E8h] [rbp-100h]
  __int64 v91; // [rsp+F8h] [rbp-F0h]
  __int64 v92; // [rsp+100h] [rbp-E8h]
  __int64 v93; // [rsp+110h] [rbp-D8h]
  __int64 v94; // [rsp+118h] [rbp-D0h]
  __int64 v95; // [rsp+120h] [rbp-C8h]
  __int64 v96; // [rsp+128h] [rbp-C0h]
  __int64 v97; // [rsp+130h] [rbp-B8h]
  __int64 v98; // [rsp+138h] [rbp-B0h]
  __int128 v99; // [rsp+140h] [rbp-A8h]
  int v100; // [rsp+150h] [rbp-98h]
  __int16 v101; // [rsp+154h] [rbp-94h]
  __m128i si128; // [rsp+158h] [rbp-90h] BYREF
  __int128 v103; // [rsp+168h] [rbp-80h]
  __m128i v104; // [rsp+178h] [rbp-70h]
  __int64 v105; // [rsp+188h] [rbp-60h]
  int v106; // [rsp+190h] [rbp-58h]
  int v107; // [rsp+194h] [rbp-54h]
  int v108; // [rsp+198h] [rbp-50h]
  __int16 v109; // [rsp+19Ch] [rbp-4Ch]
  char v110; // [rsp+19Eh] [rbp-4Ah]
  unsigned __int64 v111; // [rsp+1A8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 56);
  v111 = __readfsqword(0x28u);
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
  v73 = 0;
  v78 = 0;
  v10 = (__m128i)v7;
  v11 = *(_QWORD *)(v7 + 1496);
  v80 = 0;
  v76 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, v10);
  v77 = v11;
  v82 = 0;
  v83 = 0;
  v79 = 0;
  v81 = 0;
  sub_CCEB0((__int64)v84, v9, 0);
  v93 = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_407240);
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v100 = -1;
  v101 = 0;
  v105 = 0;
  v106 = 0;
  v107 = a2;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  v99 = 0;
  v103 = -1;
  v104 = 0;
  v12 = sub_D3160(v76.m128i_i64[0], *(_QWORD *)(v76.m128i_i64[0] + 56));
  v13 = *(_QWORD *)(a1 + 480);
  v104 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
  sub_339220(v13, 16, a1, (unsigned int)&si128, (unsigned int)&v73, v14, v71.m128i_i8[0]);
  if ( !v73 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      HIDWORD(v105) = get_tinfo_property();
    }
    else
    {
      sub_E5480(&v76, *(_QWORD *)(a1 + 56), 0);
      if ( !si128.m128i_i8[0] )
        goto LABEL_56;
      if ( (a2 & 2) == 0 )
      {
        v70 = get_tinfo_property() & 0xFFFFFFF0;
        if ( v70 == 64 || v70 == 208 )
          goto LABEL_73;
      }
    }
    v47 = *(_DWORD *)(a1 + 24);
    BYTE1(v47) &= ~2u;
    LOBYTE(v47) = v47 | 0x80;
    *(_DWORD *)(a1 + 24) = v47;
    v73 = sub_EB900((__int64)&v76);
    if ( v73 )
      goto LABEL_6;
LABEL_56:
    v5 = 2 * (unsigned __int8)v109;
    goto LABEL_26;
  }
LABEL_6:
  sub_118BA0(*(_QWORD *)(a1 + 56) + 64LL);
  v15 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(v15 + 68) = sub_32B240(
                            v73,
                            *(_QWORD *)(a1 + 64),
                            v16,
                            v17,
                            v18,
                            v19,
                            v71.m128i_i32[0],
                            v71.m128i_i32[2],
                            v72,
                            v73,
                            (_DWORD)v74,
                            v75,
                            v76.m128i_i32[0],
                            v76.m128i_i64[1],
                            v77,
                            v78,
                            v79,
                            DWORD2(v79),
                            v80);
  v20 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v20 + 72) = v73;
  *(_BYTE *)(v20 + 64) = 8;
  if ( (unsigned __int8)sub_118550(*(_QWORD *)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
  {
    v40 = v73;
    sub_606D0((__int64 *)(v73 + 240), (__int64 *)(v73 + 96));
    v44 = *(_QWORD *)(v40 + 120);
    v45 = nullptr;
    if ( v44 )
    {
      v45 = (void *)qalloc_or_throw();
      memcpy(v45, *(const void **)(v40 + 112), 16 * v44);
    }
    v46 = _mm_unpacklo_epi64((__m128i)v44, (__m128i)v44);
    if ( *(_QWORD *)(v40 + 256) )
    {
      *(_QWORD *)(v40 + 264) = 0;
      v71 = v46;
      qfree();
      v46 = _mm_load_si128(&v71);
    }
    *(_QWORD *)(v40 + 256) = v45;
    *(__m128i *)(v40 + 264) = v46;
    sub_FAAE0(
      a1,
      *(_QWORD *)(a1 + 56),
      *(_QWORD *)(a1 + 56),
      v41,
      v42,
      v43,
      v71.m128i_i32[0],
      v71.m128i_i32[2],
      v72,
      v73,
      (_DWORD)v74,
      v75,
      v76.m128i_i32[0],
      v76.m128i_i8[8],
      v77,
      v78,
      v79);
  }
  if ( *(int *)(*(_QWORD *)(a1 + 56) + 68LL) <= 0 )
    goto LABEL_25;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 56) + 65LL) |= 2u;
    v21 = *(__m128i **)(a1 + 64);
    v74 = (unsigned __int64 *)(*(_QWORD *)(a1 + 56) + 24LL);
    sub_C3DB0(v21 + 87, v74, &v74);
    copy_tinfo_t();
    if ( *((_QWORD *)&v103 + 1) == -1
      || ((flags = get_flags_ex(), (~(_WORD)flags & 0x600) != 0) || (flags & 0x10000000) == 0)
      && !(unsigned __int8)is_spec_ea() )
    {
      v22 = si128.m128i_i64[1];
    }
    else
    {
      v22 = *((_QWORD *)&v103 + 1);
    }
    v23 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(v23 + 40) == v22 )
      *(_DWORD *)(*(_QWORD *)(v23 + 944) + 68LL) |= 1u;
    LOBYTE(v24) = 2;
  }
  else
  {
    v24 = *(_DWORD *)(v73 + 80);
    if ( v24 == 2 )
    {
      v52 = *(_QWORD *)(v73 + 88);
      v53 = *(_DWORD **)v52;
      v54 = *(_QWORD *)v52 + 24LL * *(_QWORD *)(v52 + 8);
      if ( v53 == (_DWORD *)v54 )
      {
LABEL_71:
        LOBYTE(v24) = 3;
      }
      else
      {
        while ( *v53 != 1 )
        {
          v53 += 6;
          if ( (_DWORD *)v54 == v53 )
            goto LABEL_71;
        }
      }
    }
    else
    {
      LOBYTE(v24) = (v24 != 1) | 2;
    }
  }
  v25 = sub_EE330(a1, *(_QWORD *)(a1 + 56), v24);
  v26 = *(_QWORD *)(a1 + 56);
  if ( !v25 )
  {
    sub_118BA0(v26 + 64);
LABEL_73:
    v5 = 0;
    goto LABEL_26;
  }
  v27 = *(_DWORD *)(v26 + 4);
  if ( (v27 & 0x8000) != 0 )
  {
    BYTE1(v27) &= ~0x80u;
    *(_DWORD *)(v26 + 4) = v27;
    v28 = *(_QWORD *)(a1 + 376);
    if ( !(_DWORD)v28 )
    {
      v55 = *(_QWORD *)(a1 + 368);
      v56 = *(_DWORD *)(a1 + 72) + 1;
      if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v28 + 1) )
      {
        v69 = qvector_reserve();
        *(_QWORD *)(a1 + 368) = v69;
        v28 = *(_QWORD *)(a1 + 376);
        v55 = v69;
      }
      *(_DWORD *)(v55 + 4 * v28) = v56;
      v57 = *(_QWORD **)(a1 + 8);
      ++*(_QWORD *)(a1 + 376);
      v58 = *(_DWORD *)(a1 + 72);
      v59 = v57[44];
      v60 = v57[43];
      if ( v57[45] < (unsigned __int64)(v59 + 1) )
      {
        v68 = qvector_reserve();
        v57[43] = v68;
        v60 = v68;
        v59 = v57[44];
      }
      *(_DWORD *)(v60 + 4 * v59) = v58;
      ++v57[44];
    }
    v26 = *(_QWORD *)(a1 + 56);
  }
  if ( *(_BYTE *)(v26 + 64) != 15 )
    goto LABEL_25;
  v29 = *(_QWORD *)(a1 + 64);
  v30 = *(int ***)(*(_QWORD *)(v26 + 72) + 8LL);
  v31 = *v30;
  v32 = **v30;
  if ( v32 == 1 )
  {
    if ( v30[1] == (int *)&byte_1 )
      goto LABEL_25;
  }
  else if ( (unsigned int)(v32 - 3) <= 1 )
  {
    v49 = *(_DWORD *)(v26 + 68);
    if ( v49 <= (int)(2
                    * (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v29 + 1504) + 32LL))(
                        *(_QWORD *)(v29 + 1504),
                        *((unsigned __int16 *)v31 + 4))) )
    {
      v50 = v30[1];
      if ( v50 == (int *)&byte_1 )
        goto LABEL_25;
      if ( v50 == (int *)&unk_2 && (unsigned int)(v31[6] - 3) <= 1 )
      {
        v51 = *((unsigned __int16 *)v31 + 9);
        if ( *((unsigned __int16 *)v31 + 20) == v51 + *((unsigned __int16 *)v31 + 8)
          && *((unsigned __int16 *)v31 + 16) == v51 + *((unsigned __int16 *)v31 + 4) )
        {
          goto LABEL_25;
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 376) == 1 )
  {
    v61 = *(_DWORD *)(a1 + 72);
    v62 = *(_DWORD *)(v29 + 64);
    if ( v61 )
    {
      v63 = *(_QWORD *)(v29 + 784);
      v74 = nullptr;
      v75 = 0;
      sub_5FF90((__int64 *)&v74, v61);
      v64 = sub_6BA30(v63, (__int64 *)&v74, 0, v62 - 1);
      qfree();
      if ( v64 )
        goto LABEL_24;
      v62 = *(_DWORD *)(v29 + 64);
    }
    v65 = **(unsigned int **)(a1 + 368);
    if ( (unsigned int)v65 >= v62 )
      sub_ECD00();
    v66 = sub_10DEC0(*(_QWORD *)(*(_QWORD *)(v29 + 528) + 8 * v65), 1);
    if ( !v66 )
    {
      if ( !under_debugger )
        sub_37E160(52857);
      BUG();
    }
    v67 = *(_DWORD *)(v66 + 76);
    if ( v67 == 1 || v67 == 6 )
      goto LABEL_25;
  }
LABEL_24:
  sub_1C76C0(a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 56) + 64LL, 1);
LABEL_25:
  *(_DWORD *)(a1 + 24) |= 0x800u;
  sub_9E320(a1, (__int64)"build_callinfo");
  sub_339220(*(_QWORD *)(a1 + 480), 17, a1, v33, v34, v35, v71.m128i_i8[0]);
  v5 = 1;
LABEL_26:
  clear_tinfo_t();
  if ( v98 )
  {
    *(_QWORD *)&v99 = 0;
    qfree();
  }
  qfree();
  qfree();
  if ( v91 )
  {
    v92 = 0;
    qfree();
  }
  if ( v89 )
  {
    v90 = 0;
    qfree();
  }
  if ( v87 )
  {
    v88 = 0;
    qfree();
  }
  if ( v85 )
  {
    v86 = 0;
    qfree();
  }
  qfree();
  v36 = v80;
  if ( v80 )
  {
    v37 = v81;
    if ( (_QWORD)v81 )
    {
      v38 = 0;
      do
      {
        v39 = (_QWORD *)(v36 + 48 * v38);
        if ( v39[3] )
        {
          v39[4] = 0;
          qfree();
        }
        if ( *v39 )
        {
          v39[1] = 0;
          qfree();
        }
        ++v38;
        v36 = v80;
      }
      while ( v37 != v38 );
    }
    *(_QWORD *)&v81 = 0;
    qfree();
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree();
  }
  return v5;
}

