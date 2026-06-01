__int64 __fastcall sub_F440(__int64 a1, const __m128i *a2, __int64 a3, double a4, double a5)
{
  int v7; // esi
  int v9; // esi
  const char *v11; // r13
  _QWORD *v12; // r14
  unsigned __int64 v13; // r13
  _DWORD *v14; // rcx
  int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // dl
  int v24; // r14d
  unsigned __int64 *v25; // rsi
  __int64 v26; // rdx
  unsigned __int64 *v27; // rcx
  unsigned __int64 *v28; // rax
  const char *v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  const char *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  __m128i *v37; // rsi
  __int64 v38; // rax
  __int32 v39; // eax
  __int64 v40; // rbp
  char v41; // al
  __int64 v42; // rax
  _DWORD *v43; // rcx
  unsigned __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rsi
  int v47; // ecx
  const char *v48; // rsi
  __int64 v49; // rcx
  int v50; // eax
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  const char *v55; // r13
  size_t v56; // rax
  size_t v57; // r15
  char *v58; // rdi
  char *v59; // rdx
  char *v60; // [rsp+0h] [rbp-148h]
  char v61; // [rsp+Bh] [rbp-13Dh]
  char *s1; // [rsp+20h] [rbp-128h]
  __int128 v63; // [rsp+28h] [rbp-120h]
  unsigned __int64 v64; // [rsp+48h] [rbp-100h]
  __int64 selector; // [rsp+70h] [rbp-D8h]

  v7 = *(_DWORD *)(a1 + 144);
  if ( !v7 || a2[1].m128i_i32[1] > *(_DWORD *)(a1 + 96) )
  {
    *(__m128i *)(a1 + 76) = _mm_loadu_si128(a2);
    *(__m128i *)(a1 + 92) = _mm_loadu_si128(a2 + 1);
    *(_QWORD *)(a1 + 108) = a2[2].m128i_i64[0];
  }
  v9 = v7 + 1;
  *(_DWORD *)(a1 + 144) = v9;
  netnode_supset();
  if ( a2[1].m128i_i32[1] == a3 || *(_BYTE *)(a1 + 151) )
  {
    if ( byte_349C0 )
      return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 151) = 1;
    sub_CD60(
      (__int64)"AUTOHIDE REGISTRY\n"
               "The input file has unaligned section pointers.\n"
               "Usually it means that it has been modified to hide its contents.\n",
      v9);
    if ( byte_349C0 )
      return 0;
  }
  v63 = 0;
  s1 = (char *)qvector_reserve();
  *(_QWORD *)&v63 = 9;
  *(_QWORD *)s1 = a2->m128i_i64[0];
  v11 = s1;
  s1[8] = 0;
  if ( *s1 != 47 )
    goto LABEL_45;
  v31 = strtol(s1 + 1, 0, 10);
  if ( v31 > 0 && (unsigned __int64)v31 < *(_QWORD *)(a1 + 48) )
  {
    v55 = (const char *)(**(_QWORD **)(a1 + 40) + v31);
    v56 = strlen(v55);
    v57 = v56;
    if ( !v56 )
    {
      *(_QWORD *)&v63 = 0;
      goto LABEL_10;
    }
    v58 = s1;
    v59 = (char *)(v56 + 1);
    if ( *((_QWORD *)&v63 + 1) < v56 + 1 )
    {
      v60 = (char *)(v56 + 1);
      s1 = (char *)qvector_reserve();
      v59 = v60;
      v58 = s1;
    }
    *(_QWORD *)&v63 = v59;
    memmove(v58, v55, v57);
    s1[v57] = 0;
  }
  if ( !(_QWORD)v63 )
  {
LABEL_10:
    v11 = ::s1;
    goto LABEL_11;
  }
  v11 = s1;
LABEL_45:
  if ( !strcmp(v11, ".E32_UID") )
    byte_349E2 = 1;
LABEL_11:
  if ( *(_BYTE *)(a1 + 149) )
  {
LABEL_16:
    v12 = *(_QWORD **)(a1 + 16);
    v13 = *(_QWORD *)(v12[77] + 16LL) & (*(_QWORD *)(a1 + 64) + a2->m128i_u32[3]);
    if ( !*(_BYTE *)(a1 + 150) )
      goto LABEL_17;
    goto LABEL_33;
  }
  if ( !*(_BYTE *)(a1 + 150) )
  {
    if ( (unsigned __int8)sub_77F0(a2[2].m128i_i32[1], v11) == *(_BYTE *)(a1 + 148) )
    {
      v12 = *(_QWORD **)(a1 + 16);
      v13 = *(_QWORD *)(v12[77] + 16LL) & (*(_QWORD *)(a1 + 64) + a2->m128i_u32[3]);
      goto LABEL_17;
    }
    if ( !(unsigned __int8)is_debugger_on() || *(_BYTE *)(a1 + 148) )
      goto LABEL_55;
    goto LABEL_16;
  }
  v12 = *(_QWORD **)(a1 + 16);
  v13 = *(_QWORD *)(v12[77] + 16LL) & (*(_QWORD *)(a1 + 64) + a2->m128i_u32[3]);
LABEL_33:
  v25 = (unsigned __int64 *)v12[78];
  v26 = v12[79];
  v27 = &v25[v26];
  if ( v25 == v27 )
    goto LABEL_38;
  v28 = (unsigned __int64 *)v12[78];
  while ( v13 != *v28 )
  {
    if ( v27 == ++v28 )
      goto LABEL_38;
  }
  if ( v27 == v28 )
  {
LABEL_38:
    if ( v12[80] < (unsigned __int64)(v26 + 1) )
    {
      v53 = qvector_reserve();
      v54 = v12[79];
      v12[78] = v53;
      v27 = (unsigned __int64 *)(v53 + 8 * v54);
    }
    *v27 = v13;
    v29 = ::s1;
    ++v12[79];
    if ( (_QWORD)v63 )
      v29 = s1;
    if ( (int)sub_CFC0(1u, (__int64)"HIDECANCEL\nAUTOHIDE SESSION\nLoad section '%s' at 0x%a?", v29, 0.0) <= 0 )
      goto LABEL_55;
    v12 = *(_QWORD **)(a1 + 16);
  }
LABEL_17:
  v14 = *(_DWORD **)(a1 + 24);
  v15 = v14[14];
  if ( !v15 )
    v15 = 1;
  v16 = a2->m128i_u32[2];
  v17 = v16;
  if ( !v16 )
    v17 = a2[1].m128i_u32[0];
  v18 = v13 + ((v15 + v17 - 1) & -v15);
  v64 = v18;
  if ( *v14 == 23126 )
  {
    v49 = a2[1].m128i_u32[0];
    if ( v16 < (unsigned int)v49 )
    {
      v18 = v49 + v13;
      v64 = v49 + v13;
    }
  }
  v19 = v12[77];
  if ( *(_DWORD *)(v19 + 24) == 8 )
  {
    if ( v18 == -1 )
      goto LABEL_26;
  }
  else if ( v18 == 0x100000000LL )
  {
    goto LABEL_25;
  }
  v18 &= *(_QWORD *)(v19 + 16);
LABEL_25:
  v64 = v18;
  if ( v18 < v13 )
  {
    sub_A800((__int64)"AUTOHIDE SESSION\n%a..%a: virtual size overflow, skipping segment", NAN, a5);
    goto LABEL_55;
  }
LABEL_26:
  v20 = getseg();
  v23 = byte_349E1;
  if ( byte_349E1 )
  {
    v30 = 0;
    if ( v20 )
      v30 = *(_QWORD *)(v20 + 48);
    selector = v30;
  }
  else
  {
    if ( v20 && (*(_BYTE *)(v20 + 44) & 8) == 0 && *(_QWORD *)v20 == v13 )
    {
      sub_A800((__int64)"AUTOHIDE SESSION\n%a: a segment already starts here, skipping the new one", NAN);
      goto LABEL_55;
    }
    selector = allocate_selector();
    v23 = byte_349E1;
  }
  v24 = a2[2].m128i_i32[1];
  if ( (v24 & 0x20000000) != 0 )
  {
    if ( !(_QWORD)v63 )
    {
      v32 = ::s1;
      goto LABEL_60;
    }
LABEL_98:
    v61 = v23;
    LOBYTE(v60) = (_BYTE)s1;
    v50 = strcmp(s1, ".data");
    v32 = s1;
    v23 = v61;
    if ( !v50 || (v51 = strcmp(s1, "_DATA"), v32 = s1, v23 = v61, !v51) )
    {
      *(_QWORD *)(a1 + 56) = selector;
      v24 = a2[2].m128i_i32[1];
    }
    goto LABEL_60;
  }
  v32 = ::s1;
  if ( (_QWORD)v63 )
    goto LABEL_98;
LABEL_60:
  if ( !v23 && v64 != v13 )
  {
    if ( *(_BYTE *)(a1 + 149) )
      sub_77F0(v24, v32);
    if ( (unsigned int)get_segm_qty() == 64 )
      sub_6F70((__int64)"Too many sections, future segment addition messages will not be displayed...\n");
    add_segm_ex();
    netnode_supset();
    if ( *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL) == 452 )
      sub_D0A0();
    v33 = a2[1].m128i_u32[1];
    if ( !(_DWORD)v33 )
      goto LABEL_69;
LABEL_77:
    v42 = a2[1].m128i_u32[0];
    if ( !(_DWORD)v42 || (word_349D0 & 0x800) != 0 )
    {
LABEL_69:
      if ( !byte_349E1 && v64 != v13 )
      {
        v34 = *(_QWORD *)(a1 + 128);
        v35 = *(_QWORD *)(a1 + 120);
        v36 = v34 + 1;
        if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(v34 + 1) )
        {
          v52 = qvector_reserve();
          *(_QWORD *)(a1 + 120) = v52;
          v35 = v52;
          v34 = *(_QWORD *)(a1 + 128);
          v36 = v34 + 1;
        }
        *(_QWORD *)(a1 + 128) = v36;
        v37 = (__m128i *)((v34 << 6) + v35);
        *v37 = _mm_loadu_si128(a2);
        v37[1] = _mm_loadu_si128(a2 + 1);
        v38 = a2[2].m128i_i64[0];
        v37[2].m128i_i64[1] = a3;
        v37[2].m128i_i64[0] = v38;
        v37[3].m128i_i64[0] = v13;
        v39 = *(_DWORD *)(a1 + 144);
        v37[3].m128i_i32[2] = v39;
        if ( *(_BYTE *)(a1 + 149) && v39 == 1 )
        {
          v40 = *(_QWORD *)(a1 + 16);
          v41 = getinf_flag();
          sub_F1A0(v40, *(_QWORD *)(a1 + 8), v41);
        }
      }
      goto LABEL_55;
    }
    if ( __CFADD__((_DWORD)v33, (_DWORD)v42) )
      sub_DA00(
        (__int64)"Bad input file: invalid section size 0x%X at file offset 0x%X",
        (unsigned int)v42,
        v33,
        0,
        v21,
        v22,
        (char)v60);
    v43 = *(_DWORD **)(a1 + 24);
    v44 = ((v43[15] + (_DWORD)v33 + (_DWORD)v42 - 1) & (unsigned int)-v43[15]) - a3;
    if ( v44 > v64 - v13 )
      v44 = v64 - v13;
    if ( *v43 == 23126 )
    {
      a3 += 40 - *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 6LL);
      v45 = *(unsigned int *)(a1 + 72);
      v46 = a3 + v44;
      if ( v45 < (__int64)(a3 + v44) )
        goto LABEL_109;
    }
    else
    {
      v45 = *(unsigned int *)(a1 + 72);
      v46 = a3 + v44;
      v47 = *(_DWORD *)(a1 + 72);
      if ( v45 < (__int64)(a3 + v44) )
      {
        if ( v45 >= a3 + v42 && v45 - a3 >= (unsigned __int64)a2->m128i_u32[2] )
        {
          if ( a3 > v45 )
          {
LABEL_87:
            v48 = ::s1;
            if ( (_QWORD)v63 )
              v48 = s1;
            sub_A800(
              (__int64)"AUTOHIDE SESSION\nTruncated section '%s' at file offsets 0x%X..0x%X\nWill read 0x%a bytes",
              v48,
              a3,
              v47,
              NAN);
          }
LABEL_90:
          if ( (unsigned int)change_storage_type() && !byte_349E1 )
          {
            if ( !under_debugger )
              interr();
            BUG();
          }
          file2base();
          goto LABEL_69;
        }
LABEL_109:
        if ( a3 > v45 )
          goto LABEL_110;
        goto LABEL_108;
      }
    }
    if ( a3 > v45 )
    {
LABEL_110:
      v47 = v46;
      goto LABEL_87;
    }
    if ( v46 >= a3 )
      goto LABEL_90;
LABEL_108:
    v47 = v46;
    goto LABEL_87;
  }
  v33 = a2[1].m128i_u32[1];
  if ( (_DWORD)v33 )
    goto LABEL_77;
LABEL_55:
  if ( s1 )
    qfree();
  return 0;
}
