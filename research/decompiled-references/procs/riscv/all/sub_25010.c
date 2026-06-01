__int64 __fastcall sub_25010(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v10; // rdi
  __int8 v11; // al
  unsigned __int16 v13; // si
  unsigned __int16 v14; // cx
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  __int8 v18; // al
  __m128i *v19; // rdx
  __int16 v20; // cx
  __int64 v21; // rax
  int v22; // r12d
  __int64 v23; // r14
  int v24; // r13d
  __m128i *v25; // rsi
  __int64 v26; // rax
  unsigned __int8 v27; // r13
  __int16 v28; // ax
  __int64 v29; // rdi
  unsigned int dtype_size; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // r12d
  int v34; // r13d
  __m128i v35; // xmm0
  __m128 *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int8 v39; // al
  int v40; // r13d
  int v41; // r14d
  __m128i v42; // xmm0
  __m128i *v43; // rsi
  __int64 v44; // rax
  __m128 *v45; // rdx
  unsigned __int8 v46; // al
  int v47; // r12d
  __m128i v48; // xmm0
  int v49; // ebx
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  __m128 *v52; // rsi
  int v53; // r12d
  int v54; // r13d
  __m128i v55; // xmm0
  __int64 v56; // rax
  __m128 *v57; // rsi
  __m128i *v58; // rdx
  __int16 v59; // ax
  __int8 v60; // al
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __m128i *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __m128i v70; // [rsp+0h] [rbp-68h] BYREF
  __m128i v71[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v72; // [rsp+30h] [rbp-38h]
  unsigned __int64 v73; // [rsp+38h] [rbp-30h]

  v8 = *a3;
  v73 = __readfsqword(0x28u);
  if ( (int)v8 < 0 )
    return reg_finder_may_modify_stkvar(a1, a2, v8, a4);
  v10 = *(_QWORD *)(a1 + 8);
  if ( a4[2].m128i_i8[9] == 1 && (unsigned __int16)v8 == a4[2].m128i_u16[7] )
  {
    v20 = a4[1].m128i_i16[4];
    if ( v20 == 430 )
    {
      reg_finder_emulate_binary_op(a1, a2, 0, &a4[5], &a4[7].m128i_u64[1], a4, a5, a6, sub_26E40, 0);
      return 1;
    }
    if ( (unsigned __int16)v20 > 0x1AEu )
    {
      if ( (unsigned __int16)v20 > 0x216u )
      {
        if ( v20 == 539 )
        {
          if ( sub_1FA90(v10, a4[1].m128i_i64[0]) == -1 )
            return 0;
          v33 = 0;
          *(_BYTE *)(a2 + 24) = 10;
          *(_QWORD *)(a2 + 8) = 0;
          v16 = a4[5].m128i_i8[1] == 5;
          v34 = a4[1].m128i_u16[4];
          v35 = (__m128i)_mm_loadh_ps((const double *)a4[1].m128i_i64);
          v71[1].m128i_i16[0] = a4[1].m128i_i16[4];
          v71[0] = v35;
          if ( v16 )
            v33 = a4[7].m128i_i8[9] == 0;
          v25 = *(__m128i **)a2;
          v71[1].m128i_i16[1] = v33;
          v26 = *(_QWORD *)(a2 + 16);
          if ( v71 >= v25 && v71 < (__m128i *)((char *)v25 + 24 * v26) )
          {
            if ( !v26 )
            {
              v70 = v35;
              v67 = qvector_reserve(a2, v25, 1, 24);
              v35 = _mm_load_si128(&v70);
              *(_QWORD *)a2 = v67;
              v25 = (__m128i *)v67;
            }
            v36 = (__m128 *)((char *)v25 + 24 * *(_QWORD *)(a2 + 8));
            *v36 = (__m128)v35;
            v36[1].m128_i32[0] = v34 | (v33 << 16);
            goto LABEL_31;
          }
LABEL_28:
          if ( !v26 )
          {
            v31 = qvector_reserve(a2, v25, 1, 24);
            v32 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v31;
            v25 = (__m128i *)(v31 + 24 * v32);
          }
LABEL_30:
          *v25 = _mm_load_si128(v71);
          v25[1].m128i_i64[0] = v71[1].m128i_i64[0];
LABEL_31:
          ++*(_QWORD *)(a2 + 8);
          return 1;
        }
      }
      else
      {
        if ( (unsigned __int16)v20 > 0x20Fu )
        {
LABEL_64:
          if ( sub_1FA90(v10, -1) == -1 )
            return 0;
          v40 = 0;
          *(_BYTE *)(a2 + 24) = 10;
          *(_QWORD *)(a2 + 8) = 0;
          v16 = a4[5].m128i_i8[1] == 5;
          v41 = a4[1].m128i_u16[4];
          v42 = (__m128i)_mm_loadh_ps((const double *)a4[1].m128i_i64);
          v71[1].m128i_i16[0] = a4[1].m128i_i16[4];
          v71[0] = v42;
          if ( v16 )
            v40 = a4[7].m128i_i8[9] == 0;
          v43 = *(__m128i **)a2;
          v71[1].m128i_i16[1] = v40;
          v44 = *(_QWORD *)(a2 + 16);
          if ( v71 < v43 || v71 >= (__m128i *)((char *)v43 + 24 * v44) )
          {
            if ( !v44 )
            {
              v62 = qvector_reserve(a2, v43, 1, 24);
              v63 = *(_QWORD *)(a2 + 8);
              *(_QWORD *)a2 = v62;
              v43 = (__m128i *)(v62 + 24 * v63);
            }
            *v43 = _mm_load_si128(v71);
            v43[1].m128i_i64[0] = v71[1].m128i_i64[0];
          }
          else
          {
            if ( !v44 )
            {
              v70 = v42;
              v66 = qvector_reserve(a2, v43, 1, 24);
              v42 = _mm_load_si128(&v70);
              *(_QWORD *)a2 = v66;
              v43 = (__m128i *)v66;
            }
            v45 = (__m128 *)((char *)v43 + 24 * *(_QWORD *)(a2 + 8));
            *v45 = (__m128)v42;
            v45[1].m128_i32[0] = v41 | (v40 << 16);
          }
          ++*(_QWORD *)(a2 + 8);
          goto LABEL_73;
        }
        if ( (unsigned __int16)v20 <= 0x1C8u )
        {
          if ( (unsigned __int16)v20 > 0x1BAu )
            goto LABEL_60;
        }
        else if ( (unsigned __int16)(v20 - 465) <= 6u )
        {
          reg_finder_emulate_binary_op(a1, a2, 0, &a4[5], &a4[7].m128i_u64[1], a4, a5, a6, sub_26E40, 0);
          v27 = sub_24740(a4[1].m128i_i16[4]);
          v28 = a4[1].m128i_i16[4];
          if ( (unsigned __int16)v28 > 0x1D4u )
          {
            v29 = (unsigned __int16)(v28 - 469) < 2u ? 2 : 7;
          }
          else
          {
            v29 = 1;
            if ( (unsigned __int16)v28 <= 0x1D2u )
              v29 = (unsigned __int16)(v28 - 465) >= 2u ? 7 : 0;
          }
          goto LABEL_40;
        }
      }
    }
    else
    {
      if ( (unsigned __int16)v20 > 0x38u )
      {
        if ( (unsigned __int16)v20 > 0x7Eu )
        {
          if ( v20 != 162 )
            goto LABEL_4;
        }
        else
        {
          if ( (unsigned __int16)v20 > 0x7Cu )
          {
            reg_finder_emulate_unary_op(a1, a2, 10, (unsigned __int16)v8, a4, a5, a6);
            return 1;
          }
          if ( v20 != 122 )
            goto LABEL_4;
        }
LABEL_86:
        *(_BYTE *)(a2 + 24) = 10;
        v53 = 0;
        *(_QWORD *)(a2 + 8) = 0;
        v54 = a4[1].m128i_u16[4];
        v16 = a4[5].m128i_i8[1] == 5;
        v71[1].m128i_i16[0] = a4[1].m128i_i16[4];
        v55 = (__m128i)_mm_loadh_ps((const double *)a4[1].m128i_i64);
        v71[0] = v55;
        if ( v16 )
          v53 = a4[7].m128i_i8[9] == 0;
        v25 = *(__m128i **)a2;
        v71[1].m128i_i16[1] = v53;
        v56 = *(_QWORD *)(a2 + 16);
        if ( v71 >= v25 && v71 < (__m128i *)((char *)v25 + 24 * v56) )
        {
          if ( !v56 )
          {
            v70 = v55;
            v68 = qvector_reserve(a2, v25, 1, 24);
            v55 = _mm_load_si128(&v70);
            *(_QWORD *)a2 = v68;
            v25 = (__m128i *)v68;
          }
          v57 = (__m128 *)((char *)v25 + 24 * *(_QWORD *)(a2 + 8));
          *v57 = (__m128)v55;
          v57[1].m128_i32[0] = v54 | (v53 << 16);
          goto LABEL_31;
        }
        if ( !v56 )
        {
          v61 = qvector_reserve(a2, v25, 1, 24);
          *(_QWORD *)a2 = v61;
          v25 = (__m128i *)(24LL * *(_QWORD *)(a2 + 8) + v61);
        }
        goto LABEL_30;
      }
      if ( v20 )
      {
        v21 = 1LL << v20;
        if ( ((1LL << v20) & 0x300000000F800LL) == 0 )
        {
          if ( (v21 & 0x188000030080000LL) != 0 )
          {
            reg_finder_emulate_binary_op(
              a1,
              a2,
              (v20 == 56) | (unsigned __int8)(v20 == 29),
              &a4[5],
              &a4[7].m128i_u64[1],
              a4,
              a5,
              a6,
              0,
              0);
            return 1;
          }
          if ( (v21 & 6) != 0 )
          {
            if ( v20 != 1 )
            {
              if ( v20 == 2 )
              {
                *(_BYTE *)(a2 + 24) = 10;
                *(_QWORD *)(a2 + 8) = 0;
                v16 = a4[5].m128i_i8[1] == 5;
                v47 = a4[1].m128i_u16[4];
                v48 = (__m128i)_mm_loadh_ps((const double *)a4[1].m128i_i64);
                v71[1].m128i_i16[0] = a4[1].m128i_i16[4];
                v71[0] = v48;
                if ( v16 )
                  v49 = (a4[7].m128i_i8[9] == 0) | 0x10;
                else
                  v49 = 16;
                v50 = *(_QWORD *)a2;
                v71[1].m128i_i16[1] = v49;
                v51 = *(_QWORD *)(a2 + 16);
                if ( (unsigned __int64)v71 < v50 || (unsigned __int64)v71 >= v50 + 24 * v51 )
                {
                  if ( !v51 )
                  {
                    v65 = qvector_reserve(a2, v50, 1, 24);
                    *(_QWORD *)a2 = v65;
                    v50 = v65;
                  }
                  v64 = (__m128i *)(v50 + 24LL * *(_QWORD *)(a2 + 8));
                  *v64 = _mm_load_si128(v71);
                  v64[1].m128i_i64[0] = v71[1].m128i_i64[0];
                }
                else
                {
                  if ( !v51 )
                  {
                    v70 = v48;
                    v69 = qvector_reserve(a2, v50, 1, 24);
                    v48 = _mm_load_si128(&v70);
                    *(_QWORD *)a2 = v69;
                    v50 = v69;
                  }
                  v52 = (__m128 *)(24LL * *(_QWORD *)(a2 + 8) + v50);
                  *v52 = (__m128)v48;
                  v52[1].m128_i32[0] = v47 | (v49 << 16);
                }
                goto LABEL_31;
              }
              return 0;
            }
            goto LABEL_86;
          }
          goto LABEL_4;
        }
LABEL_60:
        v39 = a4[5].m128i_i8[1];
        memset(v71, 0, sizeof(v71));
        LODWORD(v72) = 0;
        if ( v39 == 3 )
        {
          v59 = a4[5].m128i_i16[3];
          v71[0].m128i_i8[1] = 4;
          v71[0].m128i_i16[3] = v59;
          v60 = 7;
          if ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 24LL) == 4 )
            v60 = 2;
          v71[0].m128i_i8[5] = v60;
          v58 = v71;
        }
        else
        {
          if ( ((v39 - 2) & 0xFD) != 0 )
          {
            if ( under_debugger )
              BUG();
            v10 = 10493;
            interr(10493);
            goto LABEL_64;
          }
          v58 = (__m128i *)&a4[5];
        }
        reg_finder_calc_op_addr(a1, a2, v58, a4);
LABEL_73:
        v46 = sub_24740(a4[1].m128i_i16[4]);
        v29 = a4[5].m128i_u8[5];
        v27 = v46;
LABEL_40:
        dtype_size = get_dtype_size(v29);
        reg_finder_emulate_mem_read(
          a1,
          a2,
          a2,
          dtype_size,
          v27,
          a4,
          v70.m128i_i64[0],
          v70.m128i_i64[1],
          v71[0].m128i_i64[0],
          v71[0].m128i_i64[1]);
        return 1;
      }
    }
LABEL_4:
    if ( !(unsigned __int8)sub_17AE0(v10, (__int64)a4, (unsigned __int16)v8) )
      return 0;
    *(_BYTE *)(a2 + 24) = 4;
    v22 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    v23 = a4[1].m128i_i64[0];
    v24 = a4[1].m128i_u16[4];
    v16 = a4[5].m128i_i8[1] == 5;
    v71[0].m128i_i64[0] = -1;
    v71[0].m128i_i64[1] = v23;
    v71[1].m128i_i16[0] = v24;
    if ( v16 )
      v22 = a4[7].m128i_i8[9] == 0;
    v25 = *(__m128i **)a2;
    v71[1].m128i_i16[1] = v22;
    v26 = *(_QWORD *)(a2 + 16);
    if ( v71 >= v25 && v71 < (__m128i *)((char *)v25 + 24 * v26) )
    {
      if ( !v26 )
      {
        v37 = qvector_reserve(a2, v25, 1, 24);
        v38 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v37;
        v25 = (__m128i *)(v37 + 24 * v38);
      }
      v25->m128i_i64[0] = -1;
      v25->m128i_i64[1] = v23;
      v25[1].m128i_i32[0] = v24 | (v22 << 16);
      goto LABEL_31;
    }
    goto LABEL_28;
  }
  v11 = a4[5].m128i_i8[1];
  if ( (unsigned __int8)(v11 - 3) > 1u )
    goto LABEL_4;
  v13 = a4[5].m128i_u16[3];
  if ( v13 != (unsigned __int16)v8 )
    goto LABEL_4;
  v14 = a4[1].m128i_i16[4] - 443;
  if ( v14 > 0x15u )
    goto LABEL_4;
  if ( ((1LL << v14) & 0x2AAAAA) == 0 )
  {
    if ( ((1LL << v14) & 0x155555) == 0 )
      goto LABEL_4;
    v15 = a4[7].m128i_i64[0];
    v16 = a4[10].m128i_i8[1] == 0;
    v71[0] = _mm_loadu_si128(a4 + 5);
    v72 = v15;
    v17 = a4[8].m128i_i64[0];
    v71[1] = _mm_loadu_si128(a4 + 6);
    if ( !v16 )
      v17 <<= a4[10].m128i_i64[1];
    v71[1].m128i_i64[0] = v17;
    v18 = 7;
    v71[0].m128i_i8[1] = 4;
    if ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 24LL) != 4 )
      goto LABEL_13;
    goto LABEL_46;
  }
  LODWORD(v72) = 0;
  v19 = (__m128i *)&a4[5];
  memset(v71, 0, sizeof(v71));
  if ( v11 == 4 )
    goto LABEL_14;
  v71[0].m128i_i8[1] = 4;
  v18 = 7;
  v71[0].m128i_i16[3] = v13;
  if ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 24LL) == 4 )
LABEL_46:
    v18 = 2;
LABEL_13:
  v71[0].m128i_i8[5] = v18;
  v19 = v71;
LABEL_14:
  reg_finder_calc_op_addr(a1, a2, v19, a4);
  return 1;
}
