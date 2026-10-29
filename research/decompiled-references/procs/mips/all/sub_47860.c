__int64 __fastcall sub_47860(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r13d
  __int64 v10; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r10
  unsigned int v15; // esi
  char v16; // dl
  __int64 v17; // rcx
  _BYTE *v18; // r11
  int v19; // edx
  __int64 v20; // rax
  int v21; // r13d
  __int64 v22; // r15
  int v23; // r14d
  bool v24; // zf
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  bool v27; // dl
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r15
  int v32; // r12d
  __int64 v33; // r14
  int v34; // r13d
  int v35; // r12d
  int v36; // r13d
  __m128i v37; // xmm0
  unsigned __int8 v38; // r13
  unsigned int dtype_size; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __m128i v49; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v50[24]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v51; // [rsp+28h] [rbp-50h]
  int v52; // [rsp+30h] [rbp-48h]
  unsigned __int64 v53; // [rsp+38h] [rbp-40h]

  v8 = *a3;
  v53 = __readfsqword(0x28u);
  if ( v8 < 0 )
    return reg_finder_may_modify_stkvar(a1, a2, (unsigned int)v8, a4);
  v10 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a4 + 41) != 1 || (unsigned __int16)v8 != *(unsigned __int16 *)(a4 + 46) )
  {
    if ( (unsigned __int16)v8 == 29 )
    {
      v19 = *(unsigned __int16 *)(a4 + 24);
      if ( (unsigned int)(v19 - 544) <= 1 )
      {
        v51 = 0;
        *(_QWORD *)v50 = 0x1D000000000100LL;
        v27 = (_WORD)v19 == 544;
        v28 = 7;
        v52 = 0;
        *(_OWORD *)&v50[8] = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 24LL) == 4 )
          v28 = 2;
        v50[5] = v28;
        reg_finder_emulate_binary_op(a1, a2, v27, v50, a4 + 80, a4, a5, a6, 0, 0);
        return 1;
      }
      *(_QWORD *)v50 = 0;
      sub_2AAE0(v10, (unsigned __int64 *)v50, a4, -1);
      v20 = *(_QWORD *)v50;
      goto LABEL_22;
    }
    goto LABEL_4;
  }
  v12 = *(unsigned __int16 *)(a4 + 24);
  if ( (unsigned __int16)v12 > 0xC5u )
  {
    if ( (_WORD)v12 != 495 )
    {
      if ( (unsigned __int16)v12 <= 0x1EFu )
      {
        if ( (_WORD)v12 != 204 )
        {
          if ( (_WORD)v12 != 205 )
            goto LABEL_4;
          goto LABEL_45;
        }
LABEL_67:
        v31 = *(_QWORD *)(a4 + 88);
LABEL_46:
        *(_BYTE *)(a2 + 24) = 10;
        v32 = 0;
        *(_QWORD *)(a2 + 8) = 0;
        *(_QWORD *)v50 = v31;
        v33 = *(_QWORD *)(a4 + 16);
        *(_QWORD *)&v50[8] = v33;
        v34 = *(unsigned __int16 *)(a4 + 24);
        *(_WORD *)&v50[16] = *(_WORD *)(a4 + 24);
        if ( *(_BYTE *)(a4 + 81) == 5 )
          v32 = *(_BYTE *)(a4 + 121) == 0;
        *(_WORD *)&v50[18] = v32;
        v25 = *(_QWORD *)a2;
        v26 = *(_QWORD *)(a2 + 16);
        if ( (unsigned __int64)v50 >= *(_QWORD *)a2 && (unsigned __int64)v50 < v25 + 24 * v26 )
        {
          if ( !v26 )
          {
            v45 = qvector_reserve(a2, v25, 1, 24);
            v46 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v45;
            v25 = v45 + 24 * v46;
          }
          *(_QWORD *)v25 = v31;
          *(_QWORD *)(v25 + 8) = v33;
          *(_DWORD *)(v25 + 16) = v34 | (v32 << 16);
          goto LABEL_30;
        }
        goto LABEL_27;
      }
      if ( (_WORD)v12 == 838 )
        goto LABEL_67;
      if ( (_WORD)v12 != 1740 )
        goto LABEL_4;
    }
LABEL_45:
    v31 = *(_QWORD *)(a4 + 96);
    goto LABEL_46;
  }
  if ( (unsigned __int16)v12 > 0xC3u )
  {
    reg_finder_emulate_unary_op(a1, a2, 10, (unsigned __int16)v8, a4, a5, a6);
    return 1;
  }
  if ( (_WORD)v12 == 126 )
    goto LABEL_66;
  if ( (unsigned __int16)v12 > 0x7Eu )
  {
    if ( (unsigned __int16)v12 > 0x86u )
    {
      if ( (_WORD)v12 == 135 )
      {
        *(_BYTE *)(a2 + 24) = 10;
        v35 = 0;
        *(_QWORD *)(a2 + 8) = 0;
        v24 = *(_BYTE *)(a4 + 81) == 5;
        v36 = *(unsigned __int16 *)(a4 + 24);
        v37 = (__m128i)_mm_loadh_ps((const double *)(a4 + 16));
        *(_WORD *)&v50[16] = *(_WORD *)(a4 + 24);
        *(__m128i *)v50 = v37;
        if ( v24 )
          v35 = *(_BYTE *)(a4 + 121) == 0;
        v25 = *(_QWORD *)a2;
        *(_WORD *)&v50[18] = v35;
        v26 = *(_QWORD *)(a2 + 16);
        if ( (unsigned __int64)v50 >= v25 && (unsigned __int64)v50 < v25 + 24 * v26 )
        {
          if ( !v26 )
          {
            v49 = v37;
            v47 = qvector_reserve(a2, v25, 1, 24);
            v48 = *(_QWORD *)(a2 + 8);
            v37 = _mm_load_si128(&v49);
            *(_QWORD *)a2 = v47;
            v25 = v47 + 24 * v48;
          }
          *(__m128i *)v25 = v37;
          *(_DWORD *)(v25 + 16) = v36 | (v35 << 16);
          goto LABEL_30;
        }
        goto LABEL_27;
      }
      goto LABEL_4;
    }
    if ( (unsigned __int16)v12 > 0x82u )
      goto LABEL_66;
  }
  else
  {
    if ( (unsigned __int16)v12 <= 0x26u )
    {
      if ( (unsigned __int16)v12 > 1u )
      {
        v13 = 0x73C0FFE2ACLL;
        v14 = (unsigned __int16)v12;
        if ( _bittest64(&v13, v12) )
        {
          v15 = 0;
          if ( (unsigned __int16)(v12 - 3) <= 0x23u )
            v15 = byte_5DEE0[(unsigned __int16)(v12 - 3)];
          v16 = *(_BYTE *)(a4 + 121);
          v17 = a4 + 80;
          if ( !v16 )
          {
            v16 = *(_BYTE *)(a4 + 81);
            v17 = a4 + 40;
          }
          v52 = 0;
          v18 = (_BYTE *)(v17 + 40);
          memset(v50, 0, sizeof(v50));
          v51 = 0;
          if ( v16 == 5 && (unsigned __int16)v12 <= 0x14u )
          {
            v42 = 1376256;
            if ( _bittest64(&v42, v14) )
            {
              v43 = *(_QWORD *)(v17 + 48);
              v50[1] = 5;
              *(_QWORD *)&v50[8] = v43 + 32;
              v44 = 7;
              if ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 24LL) == 4 )
                v44 = 2;
              v50[5] = v44;
              v18 = v50;
            }
          }
          reg_finder_emulate_binary_op(a1, a2, v15, v17, v18, a4, a5, a6, 0, 0);
          return 1;
        }
      }
      goto LABEL_4;
    }
    if ( (unsigned __int16)(v12 - 120) <= 1u )
    {
LABEL_66:
      reg_finder_calc_op_addr(a1, a2, a4 + 80, a4);
      v38 = sub_46FF0(*(_WORD *)(a4 + 24));
      dtype_size = get_dtype_size(*(unsigned __int8 *)(a4 + 85));
      reg_finder_emulate_mem_read(a1, a2, a2, dtype_size, v38, a4);
      return 1;
    }
  }
LABEL_4:
  *(_QWORD *)v50 = 0;
  sub_2AAE0(v10, (unsigned __int64 *)v50, a4, -1);
  if ( (v8 & 0xFFC0) != 0 )
    return 0;
  v20 = *(_QWORD *)v50;
LABEL_22:
  if ( !_bittest64(&v20, (unsigned __int16)v8) )
    return 0;
  *(_BYTE *)(a2 + 24) = 4;
  v21 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  v22 = *(_QWORD *)(a4 + 16);
  v23 = *(unsigned __int16 *)(a4 + 24);
  v24 = *(_BYTE *)(a4 + 81) == 5;
  *(_QWORD *)v50 = -1;
  *(_QWORD *)&v50[8] = v22;
  *(_WORD *)&v50[16] = v23;
  if ( v24 )
    v21 = *(_BYTE *)(a4 + 121) == 0;
  v25 = *(_QWORD *)a2;
  v26 = *(_QWORD *)(a2 + 16);
  *(_WORD *)&v50[18] = v21;
  if ( (unsigned __int64)v50 >= v25 && (unsigned __int64)v50 < v25 + 24 * v26 )
  {
    if ( !v26 )
    {
      v40 = qvector_reserve(a2, v25, 1, 24);
      v41 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v40;
      v25 = v40 + 24 * v41;
    }
    *(_QWORD *)v25 = -1;
    *(_QWORD *)(v25 + 8) = v22;
    *(_DWORD *)(v25 + 16) = v23 | (v21 << 16);
    goto LABEL_30;
  }
LABEL_27:
  if ( !v26 )
  {
    v29 = qvector_reserve(a2, v25, 1, 24);
    v30 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v29;
    v25 = v29 + 24 * v30;
  }
  *(__m128i *)v25 = _mm_load_si128((const __m128i *)v50);
  *(_QWORD *)(v25 + 16) = *(_QWORD *)&v50[16];
LABEL_30:
  ++*(_QWORD *)(a2 + 8);
  return 1;
}
