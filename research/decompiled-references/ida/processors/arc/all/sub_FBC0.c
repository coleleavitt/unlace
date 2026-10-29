__int64 __fastcall sub_FBC0(__int64 *a1, __int64 a2, unsigned __int64 a3, int a4, __m128i *a5, int a6)
{
  unsigned int v6; // r12d
  void *v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rbp
  void *v18; // r12
  __int64 v19; // rdi
  __m128i v20; // xmm0
  __int16 v21; // ax
  __int64 *v22; // rbp
  __int64 *v23; // r15
  unsigned __int64 *v24; // rax
  __int128 *v25; // rbp
  __int64 flags; // rax
  __int64 v27; // rsi
  int v28; // r9d
  unsigned __int16 v29; // dx
  int v30; // ecx
  char v31; // dl
  __int64 v32; // r9
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rbp
  void *v36; // r14
  unsigned __int64 v37; // rbx
  __m128i v38; // xmm0
  _QWORD *v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rdx
  char v42; // al
  __int64 v43; // rdx
  int v44; // r15d
  __int64 v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 *v49; // rdx
  int v50; // r15d
  int v51; // r9d
  __int64 v52; // rax
  __int64 v53; // rdi
  unsigned int dword; // eax
  __int64 v55; // rax
  __int64 v56; // r12
  char v57; // al
  __m128i v58; // [rsp+0h] [rbp-278h] BYREF
  int v59; // [rsp+10h] [rbp-268h]
  __int64 v60; // [rsp+18h] [rbp-260h]
  __int64 *v61; // [rsp+20h] [rbp-258h]
  __int64 v62; // [rsp+28h] [rbp-250h]
  int *v63; // [rsp+30h] [rbp-248h]
  unsigned __int64 v64; // [rsp+38h] [rbp-240h] BYREF
  __m128i si128; // [rsp+40h] [rbp-238h] BYREF
  void *src; // [rsp+50h] [rbp-228h] BYREF
  __int128 v67; // [rsp+58h] [rbp-220h]
  int v68; // [rsp+68h] [rbp-210h]
  __m128i v69; // [rsp+70h] [rbp-208h] BYREF
  __int64 v70; // [rsp+80h] [rbp-1F8h]
  __int128 v71; // [rsp+88h] [rbp-1F0h]
  int v72; // [rsp+98h] [rbp-1E0h]
  __m128i v73; // [rsp+A0h] [rbp-1D8h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-1C8h]
  __int128 v75; // [rsp+B8h] [rbp-1C0h]
  int v76; // [rsp+C8h] [rbp-1B0h]
  __int128 v77; // [rsp+D0h] [rbp-1A8h] BYREF
  __int64 v78; // [rsp+E0h] [rbp-198h]
  __int64 v79; // [rsp+E8h] [rbp-190h]
  __int64 v80; // [rsp+F0h] [rbp-188h]
  int v81; // [rsp+F8h] [rbp-180h] BYREF
  unsigned __int16 v82; // [rsp+FEh] [rbp-17Ah]
  int v83; // [rsp+100h] [rbp-178h]
  int v84; // [rsp+108h] [rbp-170h]
  int v85; // [rsp+110h] [rbp-168h]
  int v86; // [rsp+118h] [rbp-160h]
  __int64 v87; // [rsp+120h] [rbp-158h] BYREF
  int v88; // [rsp+128h] [rbp-150h]
  __int64 v89; // [rsp+130h] [rbp-148h]
  int v90; // [rsp+138h] [rbp-140h]
  int v91; // [rsp+140h] [rbp-138h]
  _DWORD v92[58]; // [rsp+148h] [rbp-130h] BYREF
  __int64 v93; // [rsp+230h] [rbp-48h]
  unsigned __int64 v94; // [rsp+238h] [rbp-40h] BYREF

  v61 = a1;
  v64 = a3;
  HIDWORD(v62) = a6;
  v94 = __readfsqword(0x28u);
  if ( a6 > 200 )
    return 0;
  LOWORD(v68) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1F660);
  src = nullptr;
  v67 = 0;
  LOBYTE(v6) = a4 == 68 || a4 == 63;
  if ( (_BYTE)v6 )
  {
    v13 = *(_QWORD *)(a2 + 8);
    if ( a4 == 63 )
      v14 = v13 & 0xFFFFFFFFFFFFFFFCLL;
    else
      v14 = *(unsigned __int16 *)(a2 + 26) + v13;
    v15 = *(_QWORD *)(a2 + 16);
    v16 = *(_QWORD *)(*(_QWORD *)(*v61 + 32) + 16LL) & v14;
    BYTE1(v68) = 5;
    si128.m128i_i64[0] = v16;
    v10 = (void *)qvector_reserve(&src, 0, 1, 8);
    src = v10;
    *((_QWORD *)v10 + v67) = v15;
    *(_QWORD *)&v67 = v67 + 1;
    goto LABEL_7;
  }
  if ( a4 == 26 || (unsigned int)(a4 - 69) <= 3 )
  {
    si128.m128i_i64[0] = get_sreg(v64);
    if ( si128.m128i_i64[0] != -1 )
    {
      LODWORD(v10) = BYTE1(v68) & 0xF8 | 5;
      BYTE1(v68) = BYTE1(v68) & 0xF8 | 5;
LABEL_7:
      v6 = 1;
      goto LABEL_8;
    }
  }
  if ( (unsigned int)a4 > 0x3B )
    goto LABEL_9;
  v22 = (__int64 *)v61[3];
  if ( v22 )
  {
    v23 = v61 + 2;
    do
    {
      if ( v22[4] >= v64 )
      {
        v23 = v22;
        v22 = (__int64 *)v22[2];
      }
      else
      {
        v22 = (__int64 *)v22[3];
      }
    }
    while ( v22 );
    if ( v61 + 2 != v23 && v64 >= v23[4] && (v23[6 * a4 + 10] & 0x300) != 0 )
      goto LABEL_9;
  }
  v24 = (unsigned __int64 *)&v81;
  v78 = -1;
  v79 = 0;
  v80 = 0;
  v63 = &v81;
  v77 = -1;
  do
  {
    *(_WORD *)v24 = 0;
    v24 += 5;
    *((_WORD *)v24 - 19) = 0;
    *((_WORD *)v24 - 18) = 0;
    *((_DWORD *)v24 - 2) = 0;
    *((_WORD *)v24 - 17) = 0;
    *((_OWORD *)v24 - 2) = 0;
    *(v24 - 2) = 0;
  }
  while ( &v94 != v24 );
  v25 = (__int128 *)a2;
  v58.m128i_i64[0] = (__int64)&v73;
  while ( 1 )
  {
    while ( 1 )
    {
      flags = get_flags_ex(*((_QWORD *)v25 + 2), 4);
      v27 = *((_QWORD *)v25 + 2);
      if ( (flags & 0x1000) != 0 || (flags & 0x10000) == 0 )
      {
        v42 = xrefblk_t_first_to(v58.m128i_i64[0], v27, 4, 0.0);
        v60 = -1;
        v44 = 0;
        while ( v44 != 2 && v42 )
        {
          if ( v73.m128i_i64[0] < *((_QWORD *)v25 + 2) )
          {
            if ( (unsigned __int8)(BYTE1(v74) - 16) <= 1u )
              goto LABEL_63;
            v60 = v73.m128i_i64[0];
            ++v44;
          }
          v42 = xrefblk_t_next_to(v58.m128i_i64[0]);
        }
        if ( v44 != 1 || v60 == -1 || (v25 = &v77, !(unsigned int)decode_insn(&v77, v60, v43, 0.0)) )
        {
LABEL_63:
          v31 = 2;
          v32 = *v61;
          goto LABEL_46;
        }
      }
      else
      {
        v25 = &v77;
        if ( decode_prev_insn(&v77, v27, 0.0) == -1 )
          goto LABEL_63;
      }
      v29 = *(_WORD *)(a2 + 24);
      if ( v29 <= 4u )
        break;
      v30 = *(_DWORD *)(a2 + 28);
      if ( (v30 & 0x1F) == 0 || v29 == 43 )
        break;
      if ( (unsigned __int16)v79 > 4u
        && (_WORD)v79 != 43
        && (v79 & 0x1F00000000LL) != 0
        && ((BYTE4(v79) ^ (unsigned __int8)v30) & 0x1F) == 0 )
      {
        if ( (_WORD)v79 == 251
          || (_WORD)v79 == 55
          || (_WORD)v79 == 5
          || (unsigned __int16)(v79 - 301) <= 1u
          || (v79 & 0x10000000000LL) != 0 )
        {
          v6 = 0;
          v31 = 2;
          v32 = *v61;
          goto LABEL_46;
        }
        if ( BYTE1(v81) == 1 && a4 == v82 )
        {
LABEL_70:
          if ( (unsigned __int16)(v79 - 6) <= 0x3Au )
          {
            v45 = 0x4000000009EA043LL;
            if ( _bittest64(&v45, (unsigned int)(unsigned __int16)v79 - 6) )
            {
              v70 = 0;
              LOWORD(v72) = 0;
              v74 = 0;
              LOWORD(v76) = 0;
              v69 = _mm_load_si128((const __m128i *)&xmmword_1F660);
              v71 = 0;
              v73 = v69;
              v75 = 0;
              if ( BYTE1(v92[0]) )
              {
                v49 = &v87;
                v60 = (__int64)v92;
              }
              else
              {
                LODWORD(v49) = (_DWORD)v63;
                v60 = (__int64)&v87;
              }
              v50 = HIDWORD(v62) + 1;
              if ( (unsigned __int8)sub_10C40(
                                      (_DWORD)v61,
                                      (unsigned int)&v77,
                                      (_DWORD)v49,
                                      (unsigned int)&v69,
                                      HIDWORD(v62) + 1,
                                      v28,
                                      v58.m128i_i32[0],
                                      v58.m128i_i32[2],
                                      v59,
                                      v60,
                                      (_DWORD)v61,
                                      v62,
                                      (_DWORD)v63,
                                      v64,
                                      si128.m128i_i32[0],
                                      si128.m128i_i32[2],
                                      (__int64)src)
                && (unsigned __int8)sub_10C40(
                                      (_DWORD)v61,
                                      (unsigned int)&v77,
                                      v60,
                                      (unsigned int)&v73,
                                      v50,
                                      v51,
                                      v58.m128i_i32[0],
                                      v58.m128i_i32[2],
                                      v59,
                                      v60,
                                      (_DWORD)v61,
                                      v62,
                                      (_DWORD)v63,
                                      v64,
                                      si128.m128i_i32[0],
                                      si128.m128i_i32[2],
                                      (__int64)src) )
              {
                switch ( (__int16)v79 )
                {
                  case 6:
                    si128.m128i_i64[0] = v69.m128i_i32[0] >> v73.m128i_i8[0];
                    break;
                  case 7:
                    si128.m128i_i64[0] = (unsigned __int32)v69.m128i_i32[0] >> v73.m128i_i8[0];
                    break;
                  case 12:
                    v57 = v73.m128i_i8[0] & 0x1F;
                    v73.m128i_i64[0] = v73.m128i_i8[0] & 0x1F;
                    si128.m128i_i64[0] = ((unsigned __int64)v69.m128i_i64[0] >> v57) | (v69.m128i_i64[0] << (32 - v57));
                    break;
                  case 19:
                    si128.m128i_i64[0] = v69.m128i_i64[0] + v73.m128i_i64[0];
                    break;
                  case 21:
                    si128.m128i_i64[0] = v69.m128i_i64[0] - v73.m128i_i64[0];
                    break;
                  case 23:
                    si128.m128i_i64[0] = v73.m128i_i64[0] & v69.m128i_i64[0];
                    break;
                  case 24:
                    si128.m128i_i64[0] = v73.m128i_i64[0] | v69.m128i_i64[0];
                    break;
                  case 25:
                    si128.m128i_i64[0] = v69.m128i_i64[0] & ~v73.m128i_i64[0];
                    break;
                  case 26:
                    si128.m128i_i64[0] = v73.m128i_i64[0] ^ v69.m128i_i64[0];
                    break;
                  case 29:
                    si128.m128i_i64[0] = v69.m128i_i64[0] << v73.m128i_i8[0];
                    break;
                  case 64:
                    si128.m128i_i64[0] = v73.m128i_i64[0] - v69.m128i_i64[0];
                    break;
                  default:
                    break;
                }
                if ( (v72 & 0x400) != 0 && (v76 & 0x400) != 0 )
                  BYTE1(v68) |= 4u;
                v55 = v67;
                v56 = v78;
                if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 1) )
                {
                  src = (void *)qvector_reserve(&src, src, v67 + 1, 8);
                  v55 = v67;
                }
                *((_QWORD *)src + v55) = v56;
                *(_QWORD *)&v67 = v67 + 1;
                if ( v74 )
                {
                  *(_QWORD *)&v75 = 0;
                  qfree(v74);
                }
                if ( v70 )
                {
                  *(_QWORD *)&v71 = 0;
                  qfree(v70);
                }
                goto LABEL_75;
              }
              if ( v74 )
              {
                *(_QWORD *)&v75 = 0;
                qfree(v74);
              }
              if ( v70 )
              {
                *(_QWORD *)&v71 = 0;
                qfree(v70);
              }
            }
            else if ( (_WORD)v79 == 27
                   && (unsigned __int8)sub_10C40(
                                         (_DWORD)v61,
                                         (unsigned int)&v77,
                                         (unsigned int)&v87,
                                         (unsigned int)&si128,
                                         HIDWORD(v62) + 1,
                                         v28,
                                         v58.m128i_i32[0],
                                         v58.m128i_i32[2],
                                         v59,
                                         v60,
                                         (_DWORD)v61,
                                         v62,
                                         (_DWORD)v63,
                                         v64,
                                         si128.m128i_i32[0],
                                         si128.m128i_i32[2],
                                         (__int64)src) )
            {
              if ( (_WORD)v79 == 27 && BYTE1(v87) == 5 )
              {
                LOBYTE(v68) = 1;
                si128.m128i_i64[1] = v78;
              }
              goto LABEL_75;
            }
          }
          goto LABEL_54;
        }
        goto LABEL_52;
      }
    }
    if ( BYTE1(v81) == 1 && a4 == v82 )
      break;
LABEL_52:
    if ( (v79 & 0xFFFD) == 1
      && BYTE1(v87) == 4
      && HIWORD(v87) == a4
      && (((BYTE4(v79) & 0x18) - 8) & 0xFFFFFFF0) == 0
      && (unsigned __int8)sub_FBC0(
                            (_DWORD)v61,
                            (unsigned int)&v77,
                            v78,
                            a4,
                            (unsigned int)&si128,
                            HIDWORD(v62) + 1,
                            v58.m128i_i32[0],
                            v58.m128i_i32[2],
                            v59,
                            v60,
                            (_DWORD)v61,
                            v62,
                            (_DWORD)v63,
                            v64,
                            si128.m128i_i32[0],
                            si128.m128i_i64[1],
                            (__int64)src,
                            v67,
                            DWORD2(v67),
                            v68,
                            v69.m128i_i32[0],
                            v69.m128i_i64[1],
                            v70,
                            v71,
                            DWORD2(v71),
                            v72,
                            v73.m128i_i32[0],
                            v73.m128i_i64[1],
                            v74,
                            v75,
                            DWORD2(v75),
                            v76,
                            v77,
                            DWORD2(v77),
                            v78,
                            v79,
                            v80,
                            v81,
                            v83,
                            v84,
                            v85,
                            v86,
                            v87,
                            v88,
                            v89,
                            v90,
                            v91,
                            v92[0],
                            v92[2],
                            v92[4],
                            v92[6],
                            v92[8],
                            v92[10],
                            v92[12],
                            v92[14],
                            v92[16],
                            v92[18],
                            v92[20],
                            v92[22],
                            v92[24],
                            v92[26],
                            v92[28],
                            v92[30],
                            v92[32],
                            v92[34],
                            v92[36],
                            v92[38],
                            v92[40],
                            v92[42],
                            v92[44],
                            v92[46],
                            v92[48],
                            v92[50],
                            v92[52],
                            v92[54],
                            v92[56],
                            v93) )
    {
      si128.m128i_i64[0] += v89;
      goto LABEL_81;
    }
LABEL_54:
    if ( sub_CF60(*v61, (__int64)&v77, a4) )
      goto LABEL_55;
  }
  if ( (_WORD)v79 != 1 )
    goto LABEL_70;
  if ( (v87 & 0xFF000000FF00LL) != 0x20000000200LL )
  {
    if ( (unsigned __int8)(BYTE1(v87) - 3) <= 1u
      && (unsigned __int8)sub_108A0(v61, &v77, &v87, &si128, (unsigned int)(HIDWORD(v62) + 1))
      && (BYTE1(v68) & 3) == 1 )
    {
      goto LABEL_81;
    }
    goto LABEL_54;
  }
  v52 = v89 + 16 * v77;
  v53 = *(_QWORD *)(*(_QWORD *)(*v61 + 32) + 16LL);
  if ( v52 != v53 )
  {
    v53 &= v52;
    if ( v52 == -1 )
      v53 = -1;
  }
  si128.m128i_i64[1] = v53;
  if ( !(unsigned __int8)is_loaded() || !(unsigned __int8)sub_B8D0(si128.m128i_i64[1]) )
    goto LABEL_54;
  dword = get_dword(si128.m128i_i64[1]);
  BYTE1(v68) |= 4u;
  si128.m128i_i64[0] = dword;
LABEL_81:
  v47 = v67;
  v48 = v78;
  if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 1) )
  {
    src = (void *)qvector_reserve(&src, src, v67 + 1, 8);
    v47 = v67;
  }
  *((_QWORD *)src + v47) = v48;
  *(_QWORD *)&v67 = v67 + 1;
LABEL_75:
  LOBYTE(v46) = sub_CF60(*v61, (__int64)&v77, a4);
  v6 = v46;
  if ( (_BYTE)v46 )
  {
LABEL_55:
    v31 = 2 - v6;
    goto LABEL_46;
  }
  v31 = 1;
  v6 = 1;
LABEL_46:
  si128.m128i_i64[0] &= *(_QWORD *)(*(_QWORD *)(v32 + 32) + 16LL);
  BYTE1(v68) = v31 | BYTE1(v68) & 0xFC;
  v33 = sub_F940(v61 + 1, &v64);
  v34 = a4;
  v35 = v33;
  v36 = nullptr;
  *(__m128i *)&v33[6 * a4] = si128;
  v37 = v67;
  if ( (_QWORD)v67 )
  {
    v58.m128i_i64[0] = v34;
    v36 = (void *)qalloc_or_throw(8 * v67);
    memcpy(v36, src, 8 * v37);
    v34 = v58.m128i_i64[0];
  }
  v38 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
  v39 = &v35[6 * v34];
  v40 = v39[2];
  if ( v40 )
  {
    v39[3] = 0;
    v60 = v34;
    v58 = v38;
    qfree(v40);
    v34 = v60;
    v38 = _mm_load_si128(&v58);
  }
  v41 = &v35[6 * v34];
  v41[2] = v36;
  *(__m128i *)(v41 + 3) = v38;
  *((_BYTE *)v41 + 40) = v68;
  LODWORD(v10) = BYTE1(v68);
  *((_BYTE *)v41 + 41) = BYTE1(v68);
LABEL_8:
  LOBYTE(v10) = v6 & (a5 != nullptr);
  v11 = (unsigned int)v10;
  if ( (_BYTE)v10 )
  {
    v17 = v67;
    v18 = nullptr;
    *a5 = _mm_load_si128(&si128);
    if ( v17 )
    {
      v18 = (void *)qalloc_or_throw(8 * v17);
      memcpy(v18, src, 8 * v17);
    }
    v19 = a5[1].m128i_i64[0];
    v20 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
    if ( v19 )
    {
      a5[1].m128i_i64[1] = 0;
      v58 = v20;
      qfree(v19);
      v20 = _mm_load_si128(&v58);
    }
    v21 = v68;
    a5[1].m128i_i64[0] = (__int64)v18;
    v6 = v11;
    *(__m128i *)((char *)a5 + 24) = v20;
    a5[2].m128i_i16[4] = v21;
  }
LABEL_9:
  if ( src )
  {
    *(_QWORD *)&v67 = 0;
    qfree(src);
  }
  return v6;
}

