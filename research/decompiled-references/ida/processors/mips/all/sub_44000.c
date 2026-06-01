__int64 __fastcall sub_44000(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned __int16 v4; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // dl
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r9
  __int64 v14; // rcx
  __int16 v15; // di
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int16 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v27; // rdx
  __int16 v28; // si
  __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r12
  __int64 v32; // r14
  char v33; // al
  __m128i v34; // xmm0
  __int32 v35; // r15d
  __int64 v36; // r12
  __int64 v37; // rdx
  char v38; // al
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  bool v43; // zf
  char v44; // al
  int v45; // r14d
  char v46; // al
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // r13
  __int64 dtype_size; // rax
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  unsigned int v66; // eax
  __int64 v67; // rcx
  int v68; // ecx
  __int64 v69; // [rsp+8h] [rbp-60h]
  __int64 v70; // [rsp+10h] [rbp-58h] BYREF
  __m128i v71; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v72; // [rsp+28h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 148);
  v4 = *(_WORD *)(a2 + 46);
  v72 = __readfsqword(0x28u);
  if ( v3 )
    goto LABEL_24;
  v6 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v6 <= 0x21u )
  {
    v7 = 0x3C0000036LL;
    if ( _bittest64(&v7, v6) )
    {
      v8 = *(_BYTE *)(a2 + 81);
      if ( v8 == 1 && *(_WORD *)(a2 + 86) == 25 || *(_BYTE *)(a2 + 121) == 1 && *(_WORD *)(a2 + 126) == 25 )
      {
        *(_DWORD *)(a1 + 148) = 2;
LABEL_24:
        LOWORD(v6) = *(_WORD *)(a2 + 24);
        if ( (_WORD)v6 != 204 )
        {
          if ( (unsigned __int16)v6 <= 0xCCu )
          {
            if ( (unsigned __int16)v6 <= 0x21u )
            {
              if ( (unsigned __int16)v6 <= 1u )
                return 3;
              if ( ((1LL << v6) & 0x3C0000000LL) == 0 )
              {
                if ( ((1LL << v6) & 0x20A4) == 0 )
                  return 3;
                goto LABEL_30;
              }
              goto LABEL_13;
            }
            goto LABEL_80;
          }
          goto LABEL_46;
        }
        v4 = *(_WORD *)(a2 + 46);
        goto LABEL_96;
      }
      if ( (unsigned __int16)v6 <= 1u )
        return 3;
      if ( ((1LL << v6) & 0x20A4) != 0 )
        goto LABEL_30;
      if ( ((1LL << v6) & 0x3C0000000LL) == 0 )
        return 3;
    }
    else
    {
      if ( (unsigned __int16)v6 <= 1u )
        return 3;
      if ( ((1LL << v6) & 0x20A4) != 0 )
      {
LABEL_30:
        if ( v4 == 29 && (unsigned int)(*(_DWORD *)(a1 + 144) - 1) <= 1 )
          return 2;
        v13 = a2 + 80;
        if ( !*(_BYTE *)(a2 + 121) )
          v13 = a2 + 40;
        v14 = *(_QWORD *)(a1 + 72);
        v15 = *(_WORD *)(v13 + 6);
        v16 = v14 + 16LL * *(_QWORD *)(a1 + 80);
        if ( v14 != v16 )
        {
          v17 = *(_QWORD *)(a1 + 72);
          do
          {
            v18 = (__int64 *)v17;
            if ( v15 == *(_WORD *)(v17 + 8) )
            {
              v19 = *(_WORD *)(v13 + 46);
              if ( !v17 )
                goto LABEL_102;
              v20 = *(_QWORD *)(a1 + 96);
              v21 = v20 + 16LL * *(_QWORD *)(a1 + 104);
              if ( v20 == v21 )
                return 3;
              while ( 1 )
              {
                v22 = (__int64 *)v20;
                if ( *(_WORD *)(v20 + 8) == v19 )
                  break;
                v20 += 16;
                if ( v21 == v20 )
                  return 3;
              }
              goto LABEL_42;
            }
            v17 += 16;
          }
          while ( v16 != v17 );
          v19 = *(_WORD *)(v13 + 46);
LABEL_102:
          while ( 1 )
          {
            v18 = (__int64 *)v14;
            if ( *(_WORD *)(v14 + 8) == v19 )
              break;
            v14 += 16;
            if ( v16 == v14 )
              return 3;
          }
          if ( !v14 )
            return 3;
          v57 = *(_QWORD *)(a1 + 96);
          v58 = v57 + 16LL * *(_QWORD *)(a1 + 104);
          if ( v57 == v58 )
            return 3;
          while ( 1 )
          {
            v22 = (__int64 *)v57;
            if ( v15 == *(_WORD *)(v57 + 8) )
              break;
            v57 += 16;
            if ( v58 == v57 )
              return 3;
          }
LABEL_42:
          if ( !v22 )
            return 3;
          v23 = *v18;
          v24 = *v22;
          if ( (_WORD)v6 == 2 || (v25 = v23 - v24, (_WORD)v6 == 5) )
            v25 = v23 + v24;
          return 2 * ((unsigned __int8)sub_43D60((_QWORD *)a1, v4, v25, *(_QWORD *)(a2 + 16), (__int64)v18) ^ 1u);
        }
        return 3;
      }
      if ( ((1LL << v6) & 0x3C0000000LL) == 0 )
        return 3;
      v8 = *(_BYTE *)(a2 + 81);
    }
    if ( v8 == 1 && *(_WORD *)(a2 + 86) == 25 || *(_BYTE *)(a2 + 121) == 1 && *(_WORD *)(a2 + 126) == 25 )
      *(_DWORD *)(a1 + 148) = 2;
LABEL_13:
    if ( v4 == 29 && (unsigned int)(*(_DWORD *)(a1 + 144) - 2) <= 1 )
      return 2;
    v9 = a2 + 80;
    if ( !*(_BYTE *)(a2 + 121) )
      v9 = a2 + 40;
    v10 = *(_QWORD *)(a1 + 72);
    v11 = v10 + 16LL * *(_QWORD *)(a1 + 80);
    if ( v10 == v11 )
      return 3;
    while ( *(_WORD *)(v9 + 6) != *(_WORD *)(v10 + 8) )
    {
      v10 += 16;
      if ( v11 == v10 )
        return 3;
    }
    if ( !v10 )
      return 3;
    v12 = *(_QWORD *)v10 + *(_QWORD *)(v9 + 48);
LABEL_120:
    if ( (unsigned __int8)sub_43D60((_QWORD *)a1, v4, v12, *(_QWORD *)(a2 + 16), v10) )
    {
      if ( *(unsigned __int16 *)(a2 + 46) == ((*(_BYTE *)(a2 + 33) & 4) == 0 ? 30 : 17)
        && (unsigned int)(*(_DWORD *)(a1 + 144) - 1) <= 1 )
      {
        *(_QWORD *)(a1 + 128) = v12;
        v60 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(a1 + 144) = 2;
        *(_QWORD *)(a1 + 136) = v60;
        return 0;
      }
      return 0;
    }
    return 2;
  }
  if ( (_WORD)v6 != 204 )
  {
    if ( (unsigned __int16)v6 <= 0xCCu )
    {
LABEL_80:
      if ( (_WORD)v6 == 150 )
      {
LABEL_84:
        v47 = *(_QWORD *)(a1 + 72);
        v48 = *(unsigned __int16 *)(a2 + 86);
        v49 = v47 + 16LL * *(_QWORD *)(a1 + 80);
        if ( v47 != v49 )
        {
          while ( (_WORD)v48 != *(_WORD *)(v47 + 8) )
          {
            v47 += 16;
            if ( v49 == v47 )
              return 3;
          }
          if ( v47 )
          {
            if ( v48 == ((*(_BYTE *)(a2 + 33) & 4) == 0 ? 30 : 17) )
              *(_DWORD *)(a1 + 144) = 3;
            if ( *(_BYTE *)(a2 + 41) == 9 && *(_BYTE *)(a2 + 73) == 4 )
              v4 += 32;
            v50 = *(_QWORD *)v47 + *(_QWORD *)(a2 + 96);
            dtype_size = get_dtype_size(*(unsigned __int8 *)(a2 + 85));
            sub_43ED0(a1, v4, v50, dtype_size, a2);
            return 0;
          }
        }
        return 3;
      }
      if ( (unsigned __int16)v6 <= 0x96u )
      {
        if ( (unsigned __int16)v6 <= 0x91u )
        {
          if ( (unsigned __int16)v6 <= 0x8Fu )
            return 3;
        }
        else if ( (_WORD)v6 != 148 )
        {
          return 3;
        }
        goto LABEL_84;
      }
      if ( (_WORD)v6 != 195 )
        return 3;
LABEL_114:
      v10 = *(_QWORD *)(a1 + 72);
      v59 = v10 + 16LL * *(_QWORD *)(a1 + 80);
      if ( v10 == v59 )
        return 3;
      while ( *(_WORD *)(a2 + 86) != *(_WORD *)(v10 + 8) )
      {
        v10 += 16;
        if ( v59 == v10 )
          return 3;
      }
      if ( !v10 )
        return 3;
      v12 = *(_QWORD *)v10;
      goto LABEL_120;
    }
LABEL_46:
    if ( (_WORD)v6 == 545 )
      return 2;
    if ( (unsigned __int16)v6 > 0x221u )
    {
      if ( (_WORD)v6 == 1738 )
        return 2;
      if ( (unsigned __int16)v6 > 0x6CAu )
      {
        if ( (_WORD)v6 != 1765 || !*(_WORD *)(a2 + 46) )
          return 3;
        LOWORD(v6) = 1765;
      }
      else
      {
        if ( (unsigned __int16)v6 > 0x33Du )
        {
          if ( (_WORD)v6 != 834 )
            return 3;
          return 2;
        }
        if ( (unsigned __int16)v6 <= 0x33Bu )
          return 3;
      }
      v27 = *(__int64 **)(a1 + 72);
      v28 = *(_WORD *)(a2 + 86);
      v29 = &v27[2 * *(_QWORD *)(a1 + 80)];
      if ( v27 == v29 )
        return 3;
      while ( v28 != *((_WORD *)v27 + 4) )
      {
        v27 += 2;
        if ( v29 == v27 )
          return 3;
      }
      if ( !v27 )
        return 3;
      v30 = *v27;
      v31 = *(_QWORD *)(a2 + 96);
      if ( (_WORD)v6 == 1765 )
      {
        v66 = *(unsigned __int16 *)(a2 + 46);
        v67 = *(_QWORD *)(a2 + 128);
        if ( (unsigned __int16)v66 > 0x1Fu || (unsigned int)(v67 - 1) > 0xF )
          return 0;
        v32 = 0;
        v34 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v66), _mm_cvtsi32_si128(v67));
        v35 = 1;
      }
      else
      {
        v32 = *(_QWORD *)(a2 + 64);
        if ( !v32 )
          return 0;
        v69 = v30;
        v70 = *(_QWORD *)(a2 + 64);
        v71.m128i_i64[0] = 0xFFFFFFFFLL;
        v71.m128i_i32[2] = 0;
        v33 = sub_37FC0(&v70);
        v34 = _mm_loadl_epi64(&v71);
        if ( !v33 )
          return 0;
        v30 = v69;
        v35 = 0;
      }
      v36 = v30 + v31;
      do
      {
        v37 = v36;
        v36 += 4;
        sub_43ED0(a1, _mm_cvtsi128_si32(v34), v37, 4, a2);
        v70 = v32;
        v71.m128i_i32[2] = v35;
        v71.m128i_i64[0] = v34.m128i_i64[0];
        v38 = sub_37FC0(&v70);
        v34 = _mm_loadl_epi64(&v71);
      }
      while ( v38 );
      return 0;
    }
    if ( (_WORD)v6 != 473 )
    {
      if ( (_WORD)v6 != 544 )
        return 3;
      v39 = *(_QWORD *)(a1 + 72);
      v40 = v39 + 16LL * *(_QWORD *)(a1 + 80);
      if ( v39 == v40 )
        goto LABEL_164;
      while ( *(_WORD *)(v39 + 8) != 29 )
      {
        v39 += 16;
        if ( v40 == v39 )
          goto LABEL_164;
      }
      if ( !v39 )
      {
LABEL_164:
        sub_43050();
        return sub_44A50();
      }
      v41 = *(_QWORD *)v39;
      sub_43D60((_QWORD *)a1, 0x1Du, *(_QWORD *)v39 - *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 16), v39);
      v42 = *(_QWORD *)(a2 + 144);
      v43 = *(_DWORD *)(*(_QWORD *)a1 + 260LL) == 2;
      v70 = v42;
      if ( v43 )
      {
        *(__int64 *)((char *)v71.m128i_i64 + 4) = 0x400000000LL;
        if ( !v42 )
          return 0;
        if ( (~(_DWORD)v42 & 0x80010000) != 0 )
        {
          v65 = bitcountr_zero(v42);
          v45 = v65;
          if ( v65 > 63 )
          {
            v45 = -1;
          }
          else if ( v65 == 28 && (v42 & 0x10000000) != 0 && (v42 & 0x28000000) == 0 )
          {
            if ( (v42 & 0x40000000) != 0 )
            {
              v45 = 30;
            }
            else if ( (int)v42 < 0 )
            {
              v45 = 31;
            }
          }
        }
        else
        {
          v68 = 30;
          while ( (v42 & (1LL << v68)) != 0 )
          {
            if ( --v68 == 0x7FFFFFFF )
            {
              v45 = 0x80000000;
              goto LABEL_75;
            }
          }
          v45 = v68 + 1;
        }
      }
      else
      {
        *(__int64 *)((char *)v71.m128i_i64 + 4) = 0x300000000LL;
        if ( !v42 )
          return 0;
        if ( (v42 & 0xFFFFFFFF3F00FF0FLL) != 0 )
          return 0;
        v71.m128i_i32[0] = 32;
        v44 = sub_37FC0(&v70);
        v45 = v71.m128i_i32[0];
        if ( !v44 )
          return 0;
      }
LABEL_75:
      *(_DWORD *)(a1 + 16) |= 2u;
      do
      {
        v41 -= 4;
        sub_43ED0(a1, v45, v41, 4, a2);
        v71.m128i_i32[0] = v45;
        v46 = sub_37FC0(&v70);
        v45 = v71.m128i_i32[0];
      }
      while ( v46 );
      return 0;
    }
    goto LABEL_114;
  }
LABEL_96:
  v52 = *(_QWORD *)(a1 + 96);
  v53 = *(_QWORD *)(a2 + 88);
  v54 = v52 + 16LL * *(_QWORD *)(a1 + 104);
  if ( v52 == v54 )
  {
LABEL_128:
    v61 = *(_QWORD *)(a1 + 104) + 1LL;
    if ( *(_QWORD *)(a1 + 112) < v61 )
    {
      v62 = qvector_reserve(a1 + 96, *(_QWORD *)(a1 + 96), v61, 16);
      v63 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 96) = v62;
      v64 = v63;
      v61 = v63 + 1;
      v54 = v62 + 16 * v64;
    }
    *(_QWORD *)(a1 + 104) = v61;
    v56 = (_QWORD *)v54;
    *(_WORD *)(v54 + 8) = v4;
  }
  else
  {
    v55 = *(_QWORD *)(a1 + 96);
    while ( 1 )
    {
      v56 = (_QWORD *)v55;
      if ( *(_WORD *)(v55 + 8) == v4 )
        break;
      v55 += 16;
      if ( v54 == v55 )
        goto LABEL_128;
    }
  }
  *v56 = v53;
  return 1;
}

