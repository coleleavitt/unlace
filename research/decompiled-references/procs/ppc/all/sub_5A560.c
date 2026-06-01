__int64 __fastcall sub_5A560(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v9; // edx
  int v10; // ebp
  __int64 v11; // r15
  bool v13; // al
  unsigned int v14; // r11d
  unsigned __int16 v15; // ax
  __int16 v16; // r15
  _BYTE *v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  int v22; // ebp
  __int64 v23; // r14
  int v24; // r13d
  bool v25; // zf
  __int64 *v26; // rsi
  __int64 v27; // rax
  unsigned __int16 v28; // ax
  __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // al
  unsigned __int8 v32; // bp
  unsigned int dtype_size; // eax
  __int64 v34; // rdi
  int v35; // eax
  int v36; // ecx
  unsigned __int8 v37; // al
  _BYTE *v38; // r8
  unsigned int v39; // r10d
  char v40; // al
  _BYTE *v41; // rsi
  _BYTE *v42; // rax
  unsigned __int64 v43; // rax
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // rdx
  __int16 v47; // dx
  __int64 v48; // rax
  int v49; // ebp
  int v50; // r13d
  __m128i v51; // xmm0
  __m128 *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdi
  int dword; // eax
  unsigned __int16 v57; // ax
  __int64 v58; // rsi
  int v59; // edx
  unsigned __int16 v60; // cx
  int v61; // ecx
  int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  char v66; // al
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // r9
  __int64 v71; // rax
  char v72; // al
  __int64 v73; // rax
  __m128i v74; // [rsp+0h] [rbp-98h] BYREF
  __int64 v75; // [rsp+10h] [rbp-88h]
  _BYTE *v76; // [rsp+18h] [rbp-80h]
  int v77; // [rsp+24h] [rbp-74h]
  unsigned int v78; // [rsp+28h] [rbp-70h]
  char v79; // [rsp+2Fh] [rbp-69h]
  _BYTE v80[24]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v81; // [rsp+48h] [rbp-50h]
  int v82; // [rsp+50h] [rbp-48h]
  unsigned __int64 v83; // [rsp+58h] [rbp-40h]

  v9 = *a3;
  v74.m128i_i64[0] = a5;
  v83 = __readfsqword(0x28u);
  if ( v9 < 0 )
    return reg_finder_may_modify_stkvar();
  v10 = (unsigned __int16)v9;
  v11 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int16)v9 == 0xFFFF )
  {
    v18 = *(_DWORD *)(a4 + 28);
    if ( (v18 & 8) != 0 && (v18 & 0x300) != 0 )
    {
      v19 = *(unsigned int *)(v11 + 288);
      if ( (unsigned int)v19 <= 9 )
      {
        v20 = 790;
        if ( _bittest64(&v20, v19) )
          return 0;
      }
    }
  }
  v13 = sub_3FE10(*(_QWORD *)(a1 + 8), a4, v10);
  if ( !v13 )
    return 0;
  LOBYTE(v75) = v13;
  v15 = sub_35120(a4);
  v14 = (unsigned __int8)v75;
  if ( v15 == 0xFFFF )
  {
    if ( (unsigned int)(v10 - 280) <= 1 )
    {
      if ( v10 == 280 && (*(_BYTE *)(a4 + 28) & 8) != 0 )
      {
        if ( (*(_QWORD *)(a4 + 24) & 0x80000FFFFLL) != 0x80000000DLL
          || (v55 = *(_QWORD *)(a4 + 56),
              v74.m128i_i8[0] = v75,
              dword = get_dword(v55),
              v14 = (unsigned __int8)v75,
              dword != 1317011489)
          || *(_QWORD *)(a4 + 56) == -5 )
        {
          v47 = *(_WORD *)(a4 + 24);
          v48 = *(_QWORD *)(a4 + 16) + *(unsigned __int16 *)(a4 + 26);
          if ( v47 == 13 )
          {
            if ( v48 != *(_QWORD *)(a4 + 56) )
              goto LABEL_25;
          }
          else if ( v47 != 14 || v48 != *(_QWORD *)(a4 + 136) )
          {
            goto LABEL_25;
          }
          if ( v48 == -1 )
            goto LABEL_25;
        }
        *(_BYTE *)(a2 + 24) = 10;
        v49 = 16;
        *(_QWORD *)(a2 + 8) = 0;
        v50 = *(unsigned __int16 *)(a4 + 24);
        v25 = *(_BYTE *)(a4 + 81) == 5;
        *(_WORD *)&v80[16] = *(_WORD *)(a4 + 24);
        v51 = (__m128i)_mm_loadh_ps((const double *)(a4 + 16));
        *(__m128i *)v80 = v51;
        if ( v25 )
          v49 = (*(_BYTE *)(a4 + 121) == 0) | 0x10;
        v26 = *(__int64 **)a2;
        *(_WORD *)&v80[18] = v49;
        v27 = *(_QWORD *)(a2 + 16);
        if ( v80 >= (_BYTE *)v26 && v80 < (_BYTE *)&v26[3 * v27] )
        {
          if ( !v27 )
          {
            v74 = v51;
            LOBYTE(v75) = v14;
            v69 = qvector_reserve(a2, v26, 1, 24);
            v14 = (unsigned __int8)v75;
            v51 = _mm_load_si128(&v74);
            *(_QWORD *)a2 = v69;
            v26 = (__int64 *)v69;
          }
          v52 = (__m128 *)&v26[3 * *(_QWORD *)(a2 + 8)];
          *v52 = (__m128)v51;
          v52[1].m128_i32[0] = v50 | (v49 << 16);
          goto LABEL_32;
        }
        goto LABEL_29;
      }
LABEL_25:
      *(_BYTE *)(a2 + 24) = 4;
      v22 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v23 = *(_QWORD *)(a4 + 16);
      v24 = *(unsigned __int16 *)(a4 + 24);
      v25 = *(_BYTE *)(a4 + 81) == 5;
      *(_QWORD *)v80 = -1;
      *(_QWORD *)&v80[8] = v23;
      *(_WORD *)&v80[16] = v24;
      if ( v25 )
        v22 = *(_BYTE *)(a4 + 121) == 0;
      v26 = *(__int64 **)a2;
      *(_WORD *)&v80[18] = v22;
      v27 = *(_QWORD *)(a2 + 16);
      if ( v80 >= (_BYTE *)v26 && v80 < (_BYTE *)&v26[3 * v27] )
      {
        if ( !v27 )
        {
          v74.m128i_i8[0] = v14;
          v53 = qvector_reserve(a2, v26, 1, 24);
          v54 = *(_QWORD *)(a2 + 8);
          v14 = v74.m128i_u8[0];
          *(_QWORD *)a2 = v53;
          v26 = (__int64 *)(v53 + 24 * v54);
        }
        *v26 = -1;
        v26[1] = v23;
        *((_DWORD *)v26 + 4) = v24 | (v22 << 16);
        goto LABEL_32;
      }
LABEL_29:
      if ( !v27 )
      {
        v74.m128i_i8[0] = v14;
        v45 = qvector_reserve(a2, v26, 1, 24);
        v46 = *(_QWORD *)(a2 + 8);
        v14 = v74.m128i_u8[0];
        *(_QWORD *)a2 = v45;
        v26 = (__int64 *)(v45 + 24 * v46);
      }
      *(__m128i *)v26 = _mm_load_si128((const __m128i *)v80);
      v26[2] = *(_QWORD *)&v80[16];
LABEL_32:
      ++*(_QWORD *)(a2 + 8);
      return v14;
    }
    if ( *(_BYTE *)(a4 + 41) != 1 || v10 != *(unsigned __int16 *)(a4 + 46) )
      goto LABEL_25;
    v34 = *(unsigned __int16 *)(a4 + 24);
    LOWORD(v35) = sub_35600(v34);
    v14 = (unsigned __int8)v75;
    v36 = v35;
    if ( (_WORD)v35 != 0xFFFF )
    {
      v37 = (v35 & 0xF) - 1;
      if ( v37 <= 5u )
      {
        v38 = (_BYTE *)(a4 + 80);
        v39 = dword_7ADA0[v37];
        v40 = *(_BYTE *)(a4 + 121);
        if ( !v40 )
        {
          v40 = *(_BYTE *)(a4 + 81);
          v38 = (_BYTE *)(a4 + 40);
        }
        v82 = 0;
        v41 = v38 + 40;
        memset(v80, 0, sizeof(v80));
        v81 = 0;
        if ( v40 == 5 )
        {
          v70 = *(_QWORD *)(a1 + 8);
          v79 = v75;
          v78 = v39;
          v77 = v36;
          v76 = v38;
          v75 = v70;
          v71 = sub_34AD0(a4, (__int64)v41, nullptr);
          v80[1] = 5;
          v38 = v76;
          BYTE1(v36) = BYTE1(v77);
          *(_QWORD *)&v80[8] = v71;
          v72 = 7;
          v39 = v78;
          LOBYTE(v14) = v79;
          if ( *(_DWORD *)(*(_QWORD *)(v75 + 32) + 24LL) == 4 )
            v72 = 2;
          v80[5] = v72;
          v41 = v80;
        }
        if ( (v36 & 0x200) == 0 )
        {
          v42 = v41;
          v41 = v38;
          v38 = v42;
        }
        LOBYTE(v75) = v14;
        reg_finder_emulate_binary_op(a1, a2, v39, v41, v38, a4, v74.m128i_i64[0], a6, 0, 0);
        v14 = (unsigned __int8)v75;
        if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u && *(_QWORD *)(a2 + 8) == 1 && v10 == 2 )
        {
          v43 = *(_QWORD *)(a4 + 16);
          if ( v43 > 3 )
          {
            v74.m128i_i8[0] = v75;
            v44 = sub_35950(v11, v43 - 4, nullptr);
            v14 = (unsigned __int8)v75;
            if ( v44 )
            {
              sub_5A430(a2, **(_QWORD **)a2, a4, 32);
              return v74.m128i_u8[0];
            }
          }
        }
        return v14;
      }
      goto LABEL_25;
    }
    v57 = *(_WORD *)(a4 + 24);
    if ( v57 == 286 )
    {
      v68 = *(__int16 *)(a4 + 88);
      v74.m128i_i8[0] = v75;
      v58 = v68 << 16;
      goto LABEL_83;
    }
    if ( v57 <= 0x11Eu )
    {
      if ( v57 == 152 )
      {
        v67 = a4 + 80;
        if ( !*(_BYTE *)(a4 + 81) )
          v67 = a4 + 40;
        reg_finder_emulate_unary_op(a1, a2, 10, *(unsigned __int16 *)(v67 + 6), a4, v74.m128i_i64[0], a6, v34);
        return (unsigned __int8)v75;
      }
      if ( v57 != 285 )
        goto LABEL_25;
      v74.m128i_i8[0] = v75;
      v58 = *(_QWORD *)(a4 + 88);
LABEL_83:
      sub_5A430(a2, v58, a4, 0);
      return v74.m128i_u8[0];
    }
    if ( v57 > 0x15Bu )
    {
      if ( (unsigned __int16)(v57 - 1193) > 1u )
        goto LABEL_25;
      v59 = *(unsigned __int16 *)(a4 + 126);
      v60 = *(_WORD *)(a4 + 126);
      if ( v57 == 1193 )
      {
        v61 = 64;
        goto LABEL_90;
      }
    }
    else
    {
      if ( v57 <= 0x159u )
        goto LABEL_25;
      v59 = *(unsigned __int16 *)(a4 + 126);
      v60 = *(_WORD *)(a4 + 126);
      if ( v57 == 346 )
      {
        v61 = 32;
LABEL_90:
        v62 = v61 - v59;
        v63 = 0;
        if ( (unsigned __int64)v62 <= 0x3F )
          v63 = 1LL << v62;
        v64 = v63 - 1;
LABEL_93:
        v65 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)&v80[8] = v64;
        *(_QWORD *)v80 = 1280;
        v66 = 7;
        *(_QWORD *)&v80[16] = 0;
        v81 = 0;
        v82 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v65 + 32) + 24LL) == 4 )
          v66 = 2;
        v80[5] = v66;
        reg_finder_emulate_binary_op(a1, a2, 3, a4 + 80, v80, a4, v74.m128i_i64[0], a6, 0, 0);
        return (unsigned __int8)v75;
      }
    }
    v73 = 0;
    if ( v60 <= 0x3Fu )
      v73 = 1LL << v59;
    v64 = -v73;
    goto LABEL_93;
  }
  if ( (v15 & 0x7F00) != 0 )
  {
    v16 = (HIBYTE(v15) & 0x7F) - 1;
    if ( ((unsigned __int8)((HIBYTE(v15) & 0x7F) - 1) <= 2u || (HIBYTE(v15) & 0x7F) == 8)
      && (v15 & 8) == 0
      && (v15 & 1) == 0
      && *(_BYTE *)(a4 + 41) == 1
      && *(unsigned __int16 *)(a4 + 46) == v10 )
    {
      if ( (v15 & 2) == 0 )
      {
        reg_finder_calc_op_addr(a1, a2, a4 + 80, a4, v74.m128i_i64[0], a6, 0);
        v32 = sub_592C0(*(unsigned __int16 *)(a4 + 24));
        dtype_size = get_dtype_size((unsigned int)(char)v16);
        reg_finder_emulate_mem_read(a1, a2, a2, dtype_size, v32, a4);
        return (unsigned __int8)v75;
      }
      goto LABEL_25;
    }
  }
  if ( (v15 & 4) == 0 || !v10 )
    goto LABEL_25;
  if ( (v15 & 2) != 0 )
  {
    v28 = *(_WORD *)(a4 + 86);
    if ( v28 == v10 )
    {
      *(_QWORD *)v80 = 768;
      v29 = *(_QWORD *)(a1 + 8);
      *(_WORD *)&v80[6] = v28;
      v30 = *(unsigned __int16 *)(a4 + 126);
      *(_QWORD *)&v80[16] = 0;
      *(_QWORD *)&v80[8] = v30;
      v31 = 7;
      v81 = 0;
      v82 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v29 + 32) + 24LL) == 4 )
        v31 = 2;
      v17 = v80;
      v80[5] = v31;
      goto LABEL_16;
    }
    if ( under_debugger )
LABEL_115:
      BUG();
    interr(10472);
  }
  else
  {
    if ( *(_BYTE *)(a4 + 81) != 4 )
      goto LABEL_113;
    if ( *(unsigned __int16 *)(a4 + 86) == v10 )
    {
      if ( !*(_QWORD *)(a4 + 96) )
        return 0;
      v17 = (_BYTE *)(a4 + 80);
LABEL_16:
      reg_finder_calc_op_addr(a1, a2, v17, a4, v74.m128i_i64[0], a6, 0);
      return (unsigned __int8)v75;
    }
  }
  if ( under_debugger )
    goto LABEL_115;
  interr(10473);
LABEL_113:
  if ( under_debugger )
    goto LABEL_115;
  interr(10474);
  return sub_5AE90();
}
