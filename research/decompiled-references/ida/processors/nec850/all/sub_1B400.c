__int64 __fastcall sub_1B400(__int64 a1, __int64 a2)
{
  struct _Unwind_Exception *v2; // rbx
  __int64 v3; // r13
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r12d
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  unsigned __int64 v19; // rbx
  __m128i v20; // xmm0
  int v21; // ebp
  unsigned __int64 i; // rbx
  int v23; // eax
  int v24; // ecx
  _DWORD *v25; // rax
  _DWORD *v26; // rdx
  _DWORD *v27; // rsi
  __int64 v28; // r12
  unsigned int v29; // r13d
  unsigned __int64 v30; // r12
  unsigned __int16 v31; // di
  __int64 v32; // r9
  _DWORD *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 *v39; // rax
  __m128i v40; // xmm0
  int v41; // ebp
  unsigned __int64 j; // rbx
  int v43; // eax
  int v44; // ecx
  _DWORD *v45; // rax
  _DWORD *v46; // rdx
  _DWORD *v47; // rsi
  __int64 v48; // rax
  _DWORD *v49; // rax
  unsigned __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // r15
  const __m128i *v55; // rax
  __int64 v56; // rcx
  const __m128i *v57; // rdi
  __int64 v58; // rdx
  __m128i v59; // xmm0
  __int64 v61; // rax
  int v62; // [rsp+14h] [rbp-84h] BYREF
  unsigned __int64 v63; // [rsp+18h] [rbp-80h] BYREF
  __int64 v64; // [rsp+20h] [rbp-78h] BYREF
  __int64 v65; // [rsp+28h] [rbp-70h] BYREF
  __int128 v66; // [rsp+30h] [rbp-68h] BYREF
  __m128i v67; // [rsp+40h] [rbp-58h]
  unsigned __int64 v68; // [rsp+58h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_F4E0(a2) )
  {
    v14 = *(_QWORD *)a1;
    v63 = 0;
    v12 = 1;
    if ( (unsigned int)sub_21D20(v14, &v63, &v64, a2) != 5 )
      return v12;
    v8 = v63;
    v15 = (int)(4 * bitcount(v63));
    if ( *(_QWORD *)(a1 + 80) )
    {
      v16 = *(_QWORD *)(a1 + 72);
      if ( *(_DWORD *)v16 == 3 && *(_DWORD *)(v16 + 4) == 3 )
      {
        v17 = *(_QWORD *)(a2 + 16);
        v65 = *(_QWORD *)(v16 + 8) - v15;
        if ( !(unsigned __int8)sub_1B080((_QWORD *)a1, 3u, v65 - v64, v17) )
          return v12;
        v67 = 0u;
        v66 = 0;
        v18 = (__int64 *)operator new(0x18u);
        v18[2] = a2;
        v19 = v63;
        v20 = _mm_loadl_epi64((const __m128i *)off_2D898);
        *v18 = a1;
        v18[1] = (__int64)&v65;
        *(_QWORD *)&v66 = v18;
        v67 = _mm_unpacklo_epi64(v20, (__m128i)(unsigned __int64)sub_1BC10);
        v21 = bitcountr_zero(v19);
        for ( i = v19 >> v21; i; i >>= 1 )
        {
          while ( (i & 1) == 0 )
          {
            ++v21;
            i >>= 1;
          }
          if ( v21 > 31 )
            v23 = -1;
          else
            v23 = v21;
          v62 = v23;
          if ( !v67.m128i_i64[0] )
            std::__throw_bad_function_call();
          if ( ((unsigned int (__fastcall *)(__int128 *, int *))v67.m128i_i64[1])(&v66, &v62) )
            break;
          ++v21;
        }
        if ( v67.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v67.m128i_i64[0])(&v66, &v66, 3);
        return 0;
      }
    }
    goto LABEL_108;
  }
  v6 = *(_WORD *)(a2 + 24);
  if ( v6 <= 0x26u )
  {
    if ( v6 > 8u )
    {
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 9:
        case 0x26:
          if ( *(_BYTE *)(a2 + 41) != 1 )
            return 2;
          v29 = *(unsigned __int16 *)(a2 + 86);
          v30 = *(unsigned __int16 *)(a2 + 46);
          v31 = *(_WORD *)(a2 + 86);
          if ( (_DWORD)v30 == v29 )
            return 0;
          v32 = *(_QWORD *)(a1 + 96);
          if ( (unsigned __int16)v30 <= 0x1Fu && _bittest64(&v32, v30) )
          {
            *(_DWORD *)(a1 + 104) = v30;
            v33 = (_DWORD *)(a1 + 104);
          }
          else
          {
            v34 = *(_QWORD *)(a1 + 80);
            v35 = *(_QWORD *)(a1 + 72);
            v37 = v35 + 16 * v34;
            if ( v35 == v37 )
            {
              if ( v29 == 3 )
                return 1;
              if ( v31 > 0x1Fu )
              {
                *(_QWORD *)(a1 + 96) = v32;
                v36 = 0x8000000000000000LL;
LABEL_94:
                v50 = *(_QWORD *)(a1 + 88);
                if ( v50 < v34 + 1 )
                {
                  v51 = qvector_reserve(a1 + 72, 0, v34 + 1, 16);
                  v52 = *(_QWORD *)(a1 + 80);
                  v53 = *(_QWORD *)(a1 + 88);
                  *(_QWORD *)(a1 + 88) = v50;
                  v54 = v51;
                  v55 = *(const __m128i **)(a1 + 72);
                  v56 = v54;
                  v57 = v55;
                  v58 = v52 - 1;
                  if ( v58 >= 0 )
                  {
                    do
                    {
                      v59 = _mm_loadu_si128(v57);
                      v56 += 16;
                      ++v57;
                      *(__m128i *)(v56 - 16) = v59;
                    }
                    while ( v58-- != 0 );
                    v55 = *(const __m128i **)(a1 + 72);
                  }
                  qfree(v55);
                  v61 = *(_QWORD *)(a1 + 80);
                  *(_QWORD *)(a1 + 72) = v54;
                  *(_QWORD *)(a1 + 88) = v53;
                  v37 = v54 + 16 * v61;
                }
                *(_DWORD *)v37 = v29;
                *(_DWORD *)(v37 + 4) = v30;
                *(_QWORD *)(v37 + 8) = v36;
                ++*(_QWORD *)(a1 + 80);
                return 0;
              }
              v36 = 0x8000000000000000LL;
LABEL_55:
              v32 &= __ROL8__(-2, v29);
LABEL_56:
              *(_QWORD *)(a1 + 96) = v32;
              if ( v35 != v37 )
              {
                v38 = v35;
                do
                {
                  if ( v29 == *(_DWORD *)v38 )
                  {
                    *(_DWORD *)(v38 + 4) = v30;
                    *(_QWORD *)(v38 + 8) = v36;
                    return 0;
                  }
                  v38 += 16;
                }
                while ( v37 != v38 );
              }
              goto LABEL_94;
            }
            v49 = *(_DWORD **)(a1 + 72);
            while ( 1 )
            {
              v33 = v49;
              if ( (_DWORD)v30 == *v49 )
                break;
              v49 += 4;
              if ( (_DWORD *)v37 == v49 )
                goto LABEL_87;
            }
            if ( !v49 )
            {
LABEL_87:
              v36 = 0x8000000000000000LL;
              if ( v29 == 3 )
                return 1;
LABEL_54:
              if ( v31 > 0x1Fu )
                goto LABEL_56;
              goto LABEL_55;
            }
          }
          LODWORD(v30) = v33[1];
          if ( (_DWORD)v30 == 3 )
            return (unsigned __int8)sub_1B080((_QWORD *)a1, v29, *((_QWORD *)v33 + 1), *(_QWORD *)(a2 + 16)) ^ 1u;
          if ( v29 == 3 )
            return 1;
          if ( (_DWORD)v30 != -1 )
          {
            v34 = *(_QWORD *)(a1 + 80);
            v35 = *(_QWORD *)(a1 + 72);
            v36 = *((_QWORD *)v33 + 1);
            v37 = v35 + 16 * v34;
            goto LABEL_54;
          }
          if ( v31 <= 0x1Fu )
            v32 |= 1LL << v29;
          *(_QWORD *)(a1 + 96) = v32;
          break;
        case 0xC:
        case 0xF:
          goto LABEL_32;
        case 0x25:
          goto LABEL_14;
        default:
          return 2;
      }
      return 0;
    }
    return 2;
  }
  if ( v6 > 0x55u )
  {
    if ( v6 == 208 )
    {
LABEL_32:
      v24 = *(unsigned __int16 *)(a2 + 86);
      if ( (unsigned __int16)v24 <= 0x1Fu && (*(_QWORD *)(a1 + 96) & (1LL << v24)) != 0 )
      {
        *(_DWORD *)(a1 + 104) = v24;
        v27 = (_DWORD *)(a1 + 104);
      }
      else
      {
        v25 = *(_DWORD **)(a1 + 72);
        v26 = &v25[4 * *(_QWORD *)(a1 + 80)];
        if ( v25 == v26 )
          return 2;
        while ( 1 )
        {
          v27 = v25;
          if ( v24 == *v25 )
            break;
          v25 += 4;
          if ( v26 == v25 )
            return 2;
        }
        if ( !v25 )
          return 2;
      }
      if ( v27[1] == 3 )
      {
        v28 = *((_QWORD *)v27 + 1);
        if ( *(_BYTE *)(a2 + 81) == 4 )
          v28 += *(_QWORD *)(a2 + 96);
        sub_1B290(a1, *(unsigned __int16 *)(a2 + 46), v28, 4, a2);
        if ( *(_WORD *)(a2 + 24) == 208 )
          sub_1B290(a1, (unsigned int)*(unsigned __int16 *)(a2 + 46) + 1, v28 + 4, 4, a2);
        return 0;
      }
    }
    return 2;
  }
  if ( v6 > 0x53u )
  {
    if ( *(_BYTE *)(a2 + 41) != 9 )
      goto LABEL_109;
    v7 = *(_QWORD *)(a2 + 48);
    v8 = v7;
    v9 = 4 * (*(_QWORD *)(a2 + 88) + (int)bitcount(v7));
    if ( *(_QWORD *)(a1 + 80) )
    {
      v10 = *(_QWORD *)(a1 + 72);
      if ( *(_DWORD *)v10 == 3 && *(_DWORD *)(v10 + 4) == 3 )
      {
        v11 = *(_QWORD *)(a2 + 16);
        v65 = *(_QWORD *)(v10 + 8);
        if ( !(unsigned __int8)sub_1B080((_QWORD *)a1, 3u, v65 - v9, v11) )
          return 1;
        v66 = 0;
        v39 = (__int64 *)operator new(0x18u);
        *v39 = a1;
        v40 = _mm_loadl_epi64((const __m128i *)off_2D8A0);
        v39[1] = (__int64)&v65;
        v39[2] = a2;
        *(_QWORD *)&v66 = v39;
        v67 = _mm_unpacklo_epi64(v40, (__m128i)(unsigned __int64)sub_1BBE0);
        v41 = bitcountr_zero(v7);
        for ( j = v7 >> v41; j; j >>= 1 )
        {
          while ( (j & 1) == 0 )
          {
            ++v41;
            j >>= 1;
          }
          if ( v41 > 31 )
            v43 = -1;
          else
            v43 = v41;
          LODWORD(v64) = v43;
          if ( !v67.m128i_i64[0] )
            std::__throw_bad_function_call();
          if ( ((unsigned int (__fastcall *)(__int128 *, __int64 *))v67.m128i_i64[1])(&v66, &v64) )
            break;
          ++v41;
        }
        if ( v67.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v67.m128i_i64[0])(&v66, &v66, 3);
        return 0;
      }
    }
LABEL_108:
    sub_1A5B0(v8);
LABEL_109:
    if ( !under_debugger )
    {
      v2 = (struct _Unwind_Exception *)interr(10522);
      sub_12110(v3);
      _Unwind_Resume(v2);
    }
    BUG();
  }
  if ( (unsigned __int16)(v6 - 70) > 1u )
    return 2;
LABEL_14:
  if ( *(_BYTE *)(a2 + 41) != 5 )
    return 2;
  v44 = *(unsigned __int16 *)(a2 + 86);
  if ( (unsigned __int16)v44 <= 0x1Fu && (*(_QWORD *)(a1 + 96) & (1LL << v44)) != 0 )
  {
    *(_DWORD *)(a1 + 104) = v44;
    v47 = (_DWORD *)(a1 + 104);
  }
  else
  {
    v45 = *(_DWORD **)(a1 + 72);
    v46 = &v45[4 * *(_QWORD *)(a1 + 80)];
    if ( v45 == v46 )
      return 2;
    while ( 1 )
    {
      v47 = v45;
      if ( v44 == *v45 )
        break;
      v45 += 4;
      if ( v46 == v45 )
        return 2;
    }
    if ( !v45 )
      return 2;
  }
  if ( v47[1] != 3 )
    return 2;
  v48 = a2 + 120;
  if ( !*(_BYTE *)(a2 + 121) )
    v48 = a2 + 80;
  return (unsigned __int8)sub_1B080(
                            (_QWORD *)a1,
                            *(unsigned __int16 *)(v48 + 6),
                            *(_QWORD *)(a2 + 48) + *((_QWORD *)v47 + 1),
                            *(_QWORD *)(a2 + 16))
       ^ 1u;
}

