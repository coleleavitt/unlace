__int64 __fastcall sub_8AC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        char a41)
{
  __int64 *v42; // rbp
  unsigned __int8 i; // al
  int v45; // ecx
  char v46; // al
  int v47; // edi
  __int64 v48; // rsi
  int v49; // eax
  int v50; // edi
  int v51; // ecx
  __int64 v52; // rsi
  int v53; // eax
  char v54; // dl
  void (__fastcall *v55)(__int64 *, _QWORD, __int64, __int64); // rax
  void (__fastcall *v56)(__int64 *, _QWORD, __int64, __int64); // rax
  void (__fastcall *v57)(__int64 *, _QWORD, __int64, __int64); // rax
  unsigned __int16 v58; // ax
  char v60; // bp
  _BYTE *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rbp
  __int64 v64; // r12
  char *v65; // rax
  _BYTE *v66; // rdx
  _BYTE *v67; // rax
  __int64 v68; // r12
  __int64 v69; // r15
  int v70; // ebp
  int v71; // eax
  __int64 v72; // r15
  unsigned __int8 (__fastcall *v73)(_BYTE *, _BYTE *); // rax
  unsigned __int64 v74; // r14
  unsigned __int64 v75; // r13
  __int64 v76; // r12
  int v77; // edx
  __int64 v78; // rdx
  __m128i v79; // xmm0
  __int64 v80; // rdx
  __m128i v81; // xmm0
  __int64 v82; // rdx
  __m128i v83; // xmm0
  _UNKNOWN ***v84; // [rsp+0h] [rbp-628h]
  unsigned __int64 v85; // [rsp+10h] [rbp-618h]
  _BYTE v86[360]; // [rsp+30h] [rbp-5F8h] BYREF
  char v87; // [rsp+198h] [rbp-490h] BYREF
  _BYTE v88[360]; // [rsp+1A0h] [rbp-488h] BYREF
  _BYTE v89[720]; // [rsp+308h] [rbp-320h] BYREF
  int v90; // [rsp+5D8h] [rbp-50h]
  int v91; // [rsp+5DCh] [rbp-4Ch]
  unsigned __int64 v92; // [rsp+5E8h] [rbp-40h]

  v42 = &qword_12E20;
  v92 = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 24) = 0;
  do
  {
    for ( i = insn_get_next_byte(); (v42[7] & 0xFFFFFFFFFFFFLL) != 0; v42 += 6 )
    {
      if ( i < *((int *)v42 + 14) )
        break;
    }
    if ( !*(_WORD *)(a2 + 24) )
      *(_WORD *)(a2 + 24) = *((_WORD *)v42 + 6);
    *(_DWORD *)&v88[8] = i - *((_DWORD *)v42 + 2);
    v45 = *(_DWORD *)&v88[8];
    *(_QWORD *)v88 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*(unsigned int *)&v88[8]), 224).m128i_u64[0];
    v46 = *((_BYTE *)v42 + 40);
    if ( v46 )
    {
      v47 = *((char *)v42 + 41);
      if ( *((_BYTE *)v42 + 41) )
        *(_DWORD *)&v88[4 * v46 - 4] = *(_DWORD *)&v88[8] % (char)v47;
      if ( *((_BYTE *)v42 + 42) )
      {
        v48 = *((char *)v42 + 42) - 1;
        v49 = v45 / v47;
        *(_DWORD *)&v88[4 * v48] = v45 / v47;
        v50 = *((char *)v42 + 43);
        v51 = v49;
        if ( *((_BYTE *)v42 + 43) )
          *(_DWORD *)&v88[4 * v48] = v49 % (char)v50;
        if ( *((_BYTE *)v42 + 44) )
        {
          v52 = *((char *)v42 + 44) - 1;
          v53 = v49 / v50;
          *(_DWORD *)&v88[4 * v52] = v51 / v50;
          v54 = *((_BYTE *)v42 + 45);
          if ( v54 )
            *(_DWORD *)&v88[4 * v52] = v53 % v54;
        }
      }
    }
    v55 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))v42[2];
    if ( v55 )
      v55(v42, *(unsigned int *)v88, a2 + 40, a2);
    v56 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))v42[3];
    if ( v56 )
      v56(v42, *(unsigned int *)&v88[4], a2 + 80, a2);
    v57 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))v42[4];
    if ( v57 )
      v57(v42, *(unsigned int *)&v88[8], a2 + 120, a2);
    v42 = (__int64 *)*v42;
  }
  while ( v42 );
  v58 = *(_WORD *)(a2 + 24) - 120;
  if ( v58 <= 3u )
  {
    *(_QWORD *)&v88[24] = 0;
    v60 = byte_F5AB[v58];
    v61 = &v88[40];
    *(_QWORD *)&v88[32] = 0;
    memset(v88, 255, 24);
    do
    {
      *(_WORD *)v61 = 0;
      v61 += 40;
      *((_WORD *)v61 - 19) = 0;
      *((_WORD *)v61 - 18) = 0;
      *((_DWORD *)v61 - 2) = 0;
      *((_WORD *)v61 - 17) = 0;
      *((_OWORD *)v61 - 2) = 0;
      *((_QWORD *)v61 - 2) = 0;
    }
    while ( v89 != v61 );
    if ( (int)decode_insn() > 0 && v88[32] && v88[32] != v60 )
    {
      v62 = *(_QWORD *)(a2 + 16);
      v88[29] = v60;
      *(_QWORD *)&v88[16] = v62;
      *(_WORD *)&v88[26] += *(_WORD *)(a2 + 26);
      qmemcpy((void *)a2, v88, 0x168u);
    }
  }
  if ( (*(_BYTE *)(a1 + 242) & 1) != 0 )
  {
    v65 = &v86[40];
    do
    {
      *(_WORD *)v65 = 0;
      v65 += 40;
      *((_WORD *)v65 - 19) = 0;
      *((_WORD *)v65 - 18) = 0;
      *((_DWORD *)v65 - 2) = 0;
      *((_WORD *)v65 - 17) = 0;
      *((_OWORD *)v65 - 2) = 0;
      *((_QWORD *)v65 - 2) = 0;
    }
    while ( v65 != &v87 );
    v66 = v89;
    qmemcpy(v86, (const void *)a2, sizeof(v86));
    do
    {
      *((_QWORD *)v66 - 43) = -1;
      v67 = v66 - 320;
      *((_DWORD *)v66 - 84) = 0;
      *((_DWORD *)v66 - 83) = 0;
      *((_WORD *)v66 - 164) = 0;
      *((_WORD *)v66 - 163) = 0;
      *(_OWORD *)(v66 - 360) = -1;
      do
      {
        *(_WORD *)v67 = 0;
        v67 += 40;
        *((_WORD *)v67 - 19) = 0;
        *((_WORD *)v67 - 18) = 0;
        *((_DWORD *)v67 - 2) = 0;
        *((_WORD *)v67 - 17) = 0;
        *((_OWORD *)v67 - 2) = 0;
        *((_QWORD *)v67 - 2) = 0;
      }
      while ( v67 != v66 );
      v66 = v67 + 360;
    }
    while ( &a41 != v67 + 360 );
    v84 = &off_12100;
    qmemcpy(v88, (const void *)a2, sizeof(v88));
    v90 = 1;
    do
    {
      v91 = 0;
      v68 = (__int64)*v84;
      if ( *((_WORD *)*v84 + 12) )
      {
        v69 = 0;
        v70 = 0;
        while ( 1 )
        {
          if ( v90 == (_DWORD)v69 )
          {
            if ( (int)v69 <= 0 || (int)decode_insn() <= 0 )
              break;
            ++v90;
            v69 = v91;
          }
          v71 = v69 + 1;
          v72 = 360 * v69;
          v91 = v71;
          v70 += *(unsigned __int16 *)&v88[v72 + 26];
          if ( *(_WORD *)&v88[v72 + 24] != *(_WORD *)(v68 + 24)
            || *(_QWORD *)v68 && !(*(unsigned __int8 (__fastcall **)(_BYTE *, _BYTE *))v68)(&v88[v72], &v88[v72 + 40]) )
          {
            break;
          }
          v73 = *(unsigned __int8 (__fastcall **)(_BYTE *, _BYTE *))(v68 + 8);
          if ( v73 )
          {
            if ( !v73(&v88[v72], &v88[v72 + 80]) )
              break;
          }
          if ( *(_QWORD *)(v68 + 16)
            && !(*(unsigned __int8 (__fastcall **)(_BYTE *, _BYTE *))(v68 + 8))(&v88[v72], &v88[v72 + 120]) )
          {
            break;
          }
          if ( !*(_WORD *)(v68 + 56) )
          {
            v74 = *(_QWORD *)&v88[16];
            v75 = *(_QWORD *)&v88[16] + v70;
            v76 = *(_QWORD *)&v88[16];
            if ( *(_QWORD *)&v88[16] >= v75 )
            {
LABEL_66:
              qmemcpy(v86, &v88[360 * *((char *)v84 + 10) - 360], sizeof(v86));
              v77 = *((unsigned __int16 *)v84 + 4);
              *(_QWORD *)&v86[16] = v74;
              *(_DWORD *)&v86[24] = v77 | (v70 << 16);
              if ( *((_BYTE *)v84 + 11) )
              {
                v78 = 360LL * (*((char *)v84 + 11) - 1) + 40LL * (*((char *)v84 + 12) - 1);
                *(__m128i *)&v86[40] = _mm_loadu_si128((const __m128i *)&v88[v78 + 40]);
                v79 = _mm_loadu_si128((const __m128i *)&v88[v78 + 56]);
                *(_DWORD *)&v86[72] = *(_DWORD *)&v88[v78 + 72];
                *(__m128i *)&v86[56] = v79;
              }
              else
              {
                v86[41] = 0;
              }
              v86[40] = 1;
              if ( *((_BYTE *)v84 + 13) )
              {
                v80 = 360LL * (*((char *)v84 + 13) - 1) + 40LL * (*((char *)v84 + 14) - 1);
                *(__m128i *)&v86[80] = _mm_loadu_si128((const __m128i *)&v88[v80 + 40]);
                v81 = _mm_loadu_si128((const __m128i *)&v88[v80 + 56]);
                *(_DWORD *)&v86[112] = *(_DWORD *)&v88[v80 + 72];
                *(__m128i *)&v86[96] = v81;
              }
              else
              {
                v86[81] = 0;
              }
              v86[80] = 2;
              if ( *((_BYTE *)v84 + 15) )
              {
                v82 = 360LL * (*((char *)v84 + 15) - 1) + 40LL * (*((char *)v84 + 16) - 1);
                *(__m128i *)&v86[120] = _mm_loadu_si128((const __m128i *)&v88[v82 + 40]);
                v83 = _mm_loadu_si128((const __m128i *)&v88[v82 + 56]);
                *(_DWORD *)&v86[152] = *(_DWORD *)&v88[v82 + 72];
                *(__m128i *)&v86[136] = v83;
              }
              else
              {
                v86[121] = 0;
              }
              v86[120] = 3;
              qmemcpy((void *)a2, v86, 0x168u);
            }
            else
            {
              while ( !(unsigned __int8)xrefblk_t_first_to() )
              {
LABEL_65:
                if ( v75 == ++v76 )
                  goto LABEL_66;
              }
              while ( v85 < v75 && v85 >= v74 )
              {
                if ( !(unsigned __int8)xrefblk_t_next_to() )
                  goto LABEL_65;
              }
            }
            goto LABEL_26;
          }
          v69 = v91;
          v68 += 32;
        }
      }
      v84 += 3;
    }
    while ( *((_WORD *)v84 + 4) );
  }
LABEL_26:
  if ( (get_flags_ex() & 0x400) == 0 )
    return v92 - __readfsqword(0x28u);
  v63 = *(_QWORD *)(a2 + 16);
  v64 = *(unsigned __int16 *)(a2 + 26);
  if ( v64 == get_item_end() - v63 )
    return v92 - __readfsqword(0x28u);
  del_items();
  return auto_mark_range();
}

