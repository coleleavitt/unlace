__int64 __fastcall sub_22E60(__int64 a1, __m128i *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int16 v7; // ax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int32 v11; // eax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 not_tail; // rbp
  __int8 v15; // al
  __int64 v16; // rbp
  __m128i v17; // xmm0
  __int32 v18; // eax
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int32 v21; // eax
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rbp
  unsigned __int64 flags; // r13
  unsigned int v27; // r14d
  __int16 v28; // dx
  char v29; // al
  __int64 v30; // rbp
  __m128i v31; // xmm0
  __int32 v32; // eax
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __int32 v35; // eax
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __int32 v38; // eax
  __m128i v39; // xmm0
  bool v40; // zf
  __int64 v41; // rsi
  __int64 v42; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+18h] [rbp-50h]
  __int64 v45; // [rsp+20h] [rbp-48h]
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]

  v2 = a2[1].m128i_u16[4];
  v46 = __readfsqword(0x28u);
  if ( (unsigned __int16)v2 <= 0xDu )
  {
    v4 = 13046;
    if ( _bittest64(&v4, v2) && a2[7].m128i_i8[9] == 1 && !a2[7].m128i_i16[7] )
    {
      a2[7].m128i_i8[9] = 0;
      a2[1].m128i_i16[4] = 195;
      return v46 - __readfsqword(0x28u);
    }
    v5 = a2[7].m128i_u8[9];
    if ( (unsigned __int8)v5 > 9u )
    {
LABEL_44:
      if ( !(_WORD)v2 )
        return v46 - __readfsqword(0x28u);
      goto LABEL_45;
    }
    v6 = 546;
    if ( !_bittest64(&v6, v5) )
    {
LABEL_15:
      if ( (unsigned __int16)v2 > 0x62u )
        goto LABEL_16;
      if ( (unsigned __int16)v2 > 0x21u )
        goto LABEL_66;
      goto LABEL_44;
    }
LABEL_6:
    if ( (a2[2].m128i_i8[9] & 0xF7) == 1
      && ((a2[5].m128i_i64[0] ^ a2[2].m128i_i64[1]) & 0xFFFF00000000FF00LL) == 0
      && (a2[1].m128i_i8[12] & 0x10) == 0
      && !a2[12].m128i_i8[9] )
    {
      if ( a2[10].m128i_i8[1] )
      {
        memmove(&a2[5], &a2[7].m128i_u64[1], 0x50u);
        v13 = 3;
      }
      else
      {
        v11 = a2[9].m128i_i32[2];
        a2[5] = _mm_loadu_si128((__m128i *)((char *)a2 + 120));
        v12 = _mm_loadu_si128((__m128i *)((char *)a2 + 136));
        a2[7].m128i_i32[0] = v11;
        v13 = 2;
        a2[6] = v12;
      }
      a2[2].m128i_i8[40 * v13 + 9] = 0;
    }
LABEL_7:
    if ( (unsigned __int16)v2 > 0x94u )
    {
LABEL_8:
      if ( (_WORD)v2 == 517 )
      {
        v7 = a2[2].m128i_i16[7];
        if ( !v7 )
        {
          v31 = _mm_loadu_si128(a2 + 5);
          v32 = a2[7].m128i_i32[0];
          a2[5].m128i_i8[1] = 0;
          *(__m128i *)((char *)a2 + 40) = v31;
          v33 = _mm_loadu_si128(a2 + 6);
          a2[4].m128i_i32[2] = v32;
          a2[1].m128i_i16[4] = 518;
          *(__m128i *)((char *)a2 + 56) = v33;
          return v46 - __readfsqword(0x28u);
        }
LABEL_12:
        if ( v7 == 31 )
          a2[2].m128i_i8[12] &= ~8u;
        return v46 - __readfsqword(0x28u);
      }
      if ( (unsigned __int16)v2 <= 0x205u )
      {
        if ( (_WORD)v2 == 473 && !a2[2].m128i_i16[7] )
        {
          a2[2].m128i_i8[9] = 0;
          a2[1].m128i_i16[4] = 194;
          a2[5].m128i_i8[1] = 0;
        }
        return v46 - __readfsqword(0x28u);
      }
      if ( (unsigned __int16)(v2 - 835) <= 1u )
      {
        v7 = a2[2].m128i_i16[7];
        goto LABEL_12;
      }
      return v46 - __readfsqword(0x28u);
    }
    goto LABEL_15;
  }
  if ( (_WORD)v2 == 837 )
    return v46 - __readfsqword(0x28u);
  v9 = a2[7].m128i_u8[9];
  if ( (unsigned __int8)v9 <= 9u )
  {
    v10 = 546;
    if ( !_bittest64(&v10, v9) )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( (unsigned __int16)v2 > 0x94u )
    goto LABEL_8;
  if ( (unsigned __int16)v2 > 0x62u )
  {
LABEL_16:
    switch ( (int)v2 )
    {
      case 99:
        if ( !a2[2].m128i_i16[7] )
        {
          v17 = _mm_loadu_si128(a2 + 5);
          v18 = a2[7].m128i_i32[0];
          a2[5].m128i_i8[1] = 0;
          a2[1].m128i_i16[4] = 203;
          *(__m128i *)((char *)a2 + 40) = v17;
          v19 = _mm_loadu_si128(a2 + 6);
          a2[4].m128i_i32[2] = v18;
          *(__m128i *)((char *)a2 + 56) = v19;
        }
        return v46 - __readfsqword(0x28u);
      case 110:
      case 111:
      case 112:
      case 113:
        if ( a2[5].m128i_i8[1] == 1 && !a2[5].m128i_i16[3] )
          goto LABEL_61;
        return v46 - __readfsqword(0x28u);
      case 114:
        v7 = a2[2].m128i_i16[7];
        if ( v7 )
          goto LABEL_12;
        v20 = _mm_loadu_si128(a2 + 5);
        v21 = a2[7].m128i_i32[0];
        a2[5].m128i_i8[1] = 0;
        *(__m128i *)((char *)a2 + 40) = v20;
        v22 = _mm_loadu_si128(a2 + 6);
        a2[4].m128i_i32[2] = v21;
        a2[1].m128i_i16[4] = 116;
        *(__m128i *)((char *)a2 + 56) = v22;
        return v46 - __readfsqword(0x28u);
      case 126:
      case 131:
      case 148:
        if ( (a2[5].m128i_i64[0] & 0xFFFF00000000FF00LL) != 0x40000000000400LL )
          return v46 - __readfsqword(0x28u);
        not_tail = a2[1].m128i_i64[0];
        if ( *(_DWORD *)(a1 + 260) || !sub_1F290(a1, a2[1].m128i_u64[0]) )
          goto LABEL_34;
        if ( get_first_fcref_to(not_tail) == -1 )
        {
          not_tail = prev_not_tail(not_tail);
LABEL_34:
          if ( not_tail != -1 )
          {
            v15 = a2[5].m128i_i8[5];
            if ( v15 == 7 )
            {
              not_tail &= 0xFFFFFFFFFFFFFFF8LL;
            }
            else if ( v15 == 2 )
            {
              not_tail &= 0xFFFFFFFFFFFFFFFCLL;
            }
            v16 = a2[6].m128i_i16[0] + not_tail;
            if ( (unsigned __int8)is_mapped(v16) )
            {
              a2[1].m128i_i32[3] |= 8u;
              a2[5].m128i_i8[1] = 2;
              a2[6].m128i_i64[0] = v16;
            }
          }
        }
        break;
      default:
        return v46 - __readfsqword(0x28u);
    }
    return v46 - __readfsqword(0x28u);
  }
  if ( (unsigned __int16)v2 <= 0x21u )
  {
LABEL_45:
    v23 = 0x3C00032F6LL;
    if ( _bittest64(&v23, v2) )
    {
      if ( a2[5].m128i_i8[1] == 1 && !a2[5].m128i_i16[3] )
      {
LABEL_61:
        switch ( v2 )
        {
          case 1uLL:
          case 2uLL:
          case 4uLL:
          case 5uLL:
          case 9uLL:
            a2[1].m128i_i16[4] = 195;
            break;
          case 6uLL:
            a2[1].m128i_i16[4] = 555;
            break;
          case 7uLL:
            a2[1].m128i_i16[4] = 556;
            break;
          case 0xCuLL:
            a2[1].m128i_i16[4] = 196;
            break;
          case 0xDuLL:
            a2[1].m128i_i16[4] = 197;
            break;
          case 0x1EuLL:
          case 0x1FuLL:
          case 0x20uLL:
          case 0x21uLL:
            return sub_1BF10(a1, (unsigned __int64)a2, a2[8].m128i_i64[0], 1);
          case 0x6EuLL:
            v37 = _mm_loadu_si128((__m128i *)((char *)a2 + 120));
            v38 = a2[9].m128i_i32[2];
            a2[7].m128i_i8[9] = 0;
            v39 = _mm_loadu_si128((__m128i *)((char *)a2 + 136));
            v40 = a2[2].m128i_i16[7] == 0;
            a2[1].m128i_i16[4] = 200;
            a2[7].m128i_i32[0] = v38;
            a2[5] = v37;
            a2[6] = v39;
            if ( v40 )
            {
              a2[4].m128i_i32[2] = v38;
              a2[1].m128i_i16[4] = 202;
              a2[5].m128i_i8[1] = 0;
              *(__m128i *)((char *)a2 + 40) = v37;
              *(__m128i *)((char *)a2 + 56) = v39;
            }
            return v46 - __readfsqword(0x28u);
          case 0x6FuLL:
            a2[1].m128i_i16[4] = 201;
            break;
          case 0x70uLL:
            a2[1].m128i_i16[4] = 198;
            break;
          case 0x71uLL:
            a2[1].m128i_i16[4] = 199;
            break;
          default:
            break;
        }
        v34 = _mm_loadu_si128((__m128i *)((char *)a2 + 120));
        v35 = a2[9].m128i_i32[2];
        a2[7].m128i_i8[9] = 0;
        a2[5] = v34;
        v36 = _mm_loadu_si128((__m128i *)((char *)a2 + 136));
        a2[7].m128i_i32[0] = v35;
        a2[6] = v36;
        return v46 - __readfsqword(0x28u);
      }
      if ( (((_WORD)v2 - 31) & 0xFFFD) == 0
        && (a2[5].m128i_i64[0] & 0xFFFF00000000FF00LL) == 0x40000000000100LL
        && a2[7].m128i_i8[9] == 5 )
      {
        v24 = a2[1].m128i_i64[0];
        if ( !*(_DWORD *)(a1 + 260) && sub_1F290(a1, a2[1].m128i_u64[0]) )
        {
          if ( get_first_fcref_to(v24) != -1 )
            return v46 - __readfsqword(0x28u);
          v24 = prev_not_tail(v24);
        }
        if ( v24 != -1 )
        {
          v25 = a2[8].m128i_i64[0] + (v24 & 0xFFFFFFFFFFFFFFFCLL);
          flags = get_flags_ex(a2[1].m128i_i64[0], 0);
          v27 = (HIDWORD(flags) != 0) + 1;
          if ( (unsigned __int8)is_defarg(flags, v27) )
          {
            v41 = a2[1].m128i_i64[0];
            v42 = 0;
            v44 = 0;
            v45 = 0;
            si128 = _mm_load_si128((const __m128i *)&xmmword_595D0);
            if ( (!(unsigned __int8)get_fixup(&v42, v41)
               && (a2[1].m128i_i16[5] <= 2u
                || !(unsigned __int8)getinf_flag(3, 32)
                || !(unsigned __int8)get_fixup(&v42, a2[1].m128i_i64[0] + 2))
               || (v42 & 0x400000000LL) != 0)
              && (!(unsigned __int8)is_off(flags, v27) || !(unsigned __int8)get_refinfo(&v42, a2[1].m128i_i64[0], v27)) )
            {
              sub_1BF10(a1, (unsigned __int64)a2, v25, 0);
            }
          }
          else
          {
            if ( a2[1].m128i_i16[4] == 33 && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 )
            {
              v28 = 495;
              v29 = 7;
            }
            else
            {
              v28 = 205;
              v29 = 2;
            }
            a2[1].m128i_i16[4] = v28;
            a2[5].m128i_i8[5] = v29;
            a2[5].m128i_i8[1] = 2;
            v30 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v25;
            a2[7].m128i_i8[9] = 0;
            a2[6].m128i_i64[0] = v30;
          }
        }
        return v46 - __readfsqword(0x28u);
      }
    }
    return v46 - __readfsqword(0x28u);
  }
LABEL_66:
  if ( (_WORD)v2 != 37 || a2[5].m128i_i8[1] != 1 || a2[5].m128i_i16[3] )
    return v46 - __readfsqword(0x28u);
  return sub_1BF10(a1, (unsigned __int64)a2, a2[8].m128i_i64[0], 1);
}

