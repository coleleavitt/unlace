__int64 __fastcall sub_F9F0(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned __int64 a9,
        unsigned __int16 a10,
        int a11,
        __int128 a12,
        __int128 a13,
        __int32 a14,
        __int64 a15,
        int a16,
        int a17,
        int a18,
        int a19,
        char a20)
{
  char *v20; // r15
  __int64 *v22; // r13
  __int8 v23; // al
  unsigned int v25; // r12d
  __m128i v27; // xmm0
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned int v32; // r9d
  int v33; // eax
  __int64 v34; // rsi
  __int64 *v35; // rax
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int32 v38; // eax
  __m128i v39; // xmm0
  __int32 v40; // eax
  __int64 v41; // rdx
  unsigned __int64 v42; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v43; // [rsp+8h] [rbp-F0h]
  char v44; // [rsp+18h] [rbp-E0h]
  int v45; // [rsp+1Ch] [rbp-DCh]
  __int128 v46; // [rsp+20h] [rbp-D8h]
  __int64 v47; // [rsp+30h] [rbp-C8h]
  __int64 v48; // [rsp+38h] [rbp-C0h]
  int v49; // [rsp+40h] [rbp-B8h]
  int v50; // [rsp+50h] [rbp-A8h] BYREF
  void *v51; // [rsp+58h] [rbp-A0h]
  int *v52; // [rsp+60h] [rbp-98h]
  int *v53; // [rsp+68h] [rbp-90h]
  __int64 v54; // [rsp+70h] [rbp-88h]
  int v55; // [rsp+80h] [rbp-78h] BYREF
  void *v56; // [rsp+88h] [rbp-70h]
  int *v57; // [rsp+90h] [rbp-68h]
  int *v58; // [rsp+98h] [rbp-60h]
  __int64 v59; // [rsp+A0h] [rbp-58h]
  char v60; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v61; // [rsp+B8h] [rbp-40h]

  v22 = a2;
  v23 = a4->m128i_i8[1];
  v61 = __readfsqword(0x28u);
  if ( v23 == 1 )
  {
    v25 = 0;
    if ( a4->m128i_i16[3] > 0xFu )
      return v25;
  }
  else
  {
    v25 = 0;
    if ( v23 != 4 )
      return v25;
  }
  v44 = 0;
  v52 = &v50;
  v53 = &v50;
  v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v60, (__m128i)(unsigned __int64)&v42);
  v27.m128i_i64[0] = 0;
  v42 = a9;
  v45 = 0;
  v47 = a9;
  v48 = -1;
  v49 = 0;
  v50 = 0;
  v51 = nullptr;
  v54 = 0;
  v55 = 0;
  v56 = nullptr;
  v57 = &v55;
  v58 = &v55;
  v59 = 0;
  v46 = 0;
  *(_QWORD *)&v46 = get_func(a9);
  if ( !(_QWORD)v46 )
  {
    *((_QWORD *)&v46 + 1) = getseg(v47);
    if ( !*((_QWORD *)&v46 + 1) )
    {
      if ( under_debugger )
        BUG();
      v33 = interr(10183);
      goto LABEL_56;
    }
  }
  v20 = &a20;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_7:
      if ( !(unsigned int)sub_F180(&v42, a2, v28, v29, v30)
        || (int)decode_insn(&a7, v42, v31, *(double *)v27.m128i_i64) <= 0 )
      {
        goto LABEL_36;
      }
      v33 = a10;
      v28 = a4->m128i_u8[1];
      if ( a10 == 34 )
      {
        v29 = (unsigned __int64)&a12;
      }
      else
      {
        v29 = (unsigned int)a10 - 118;
        if ( (unsigned __int16)(a10 - 118) > 0xDu )
          goto LABEL_34;
        v34 = 8833;
        if ( !_bittest64(&v34, v29) )
          goto LABEL_34;
        v29 = (unsigned __int64)&a15;
      }
      if ( (_BYTE)v28 == *(_BYTE *)(v29 + 1) )
        break;
LABEL_34:
      if ( (_BYTE)v28 == 1 )
      {
LABEL_35:
        a2 = &a7;
        if ( (unsigned __int8)sub_CD10(a1, (__int64)&a7, a4->m128i_u16[3], v29, v30, v32) )
          goto LABEL_36;
      }
      else
      {
LABEL_17:
        v29 = *(_QWORD *)(a1 + 16);
        a2 = (__int64 *)*(unsigned int *)(v29 + 104);
        if ( v33 >= (int)a2 && v33 < *(_DWORD *)(v29 + 108) )
        {
          a2 = (__int64 *)*(unsigned int *)(*(_QWORD *)(v29 + 112) + 16LL * (v33 - (int)a2) + 8);
          if ( (_DWORD)a2 )
          {
            v29 = (unsigned __int64)dword_16E60;
            v35 = &a7;
            while ( (*(_DWORD *)v29 & (unsigned int)a2) == 0
                 || *((_BYTE *)v35 + 41) != 4
                 || (_BYTE)v28 != 4
                 || *((_WORD *)v35 + 23) != a4->m128i_i16[3]
                 || v35[7] != a4[1].m128i_i64[0] )
            {
              v35 += 5;
              v29 += 4LL;
              if ( v20 == (char *)v35 )
                goto LABEL_7;
            }
LABEL_36:
            v25 = 0;
            goto LABEL_37;
          }
        }
      }
    }
    if ( (_BYTE)v28 == 1 )
    {
      if ( *(_WORD *)(v29 + 6) != a4->m128i_i16[3] )
        goto LABEL_35;
      a2 = (__int64 *)a4->m128i_u8[5];
      if ( *(_BYTE *)(v29 + 5) < (unsigned __int8)a2 )
        goto LABEL_35;
    }
    else
    {
      if ( (_BYTE)v28 != 4 )
        goto LABEL_17;
      if ( *(_WORD *)(v29 + 6) != a4->m128i_i16[3] )
        goto LABEL_17;
      if ( *(_QWORD *)(v29 + 16) != a4[1].m128i_i64[0] )
        goto LABEL_17;
      a2 = (__int64 *)a4->m128i_u8[5];
      if ( *(_BYTE *)(v29 + 5) < (unsigned __int8)a2 )
        goto LABEL_17;
    }
    if ( a10 != 125 )
      break;
LABEL_50:
    v29 = BYTE1(a12);
    if ( BYTE1(a12) == 1 )
    {
      if ( WORD3(a12) > 0xFu )
        goto LABEL_34;
    }
    else if ( BYTE1(a12) != 4 )
    {
      goto LABEL_34;
    }
    v40 = a14;
    *a4 = _mm_loadu_si128((const __m128i *)&a12);
    v27 = _mm_loadu_si128((const __m128i *)&a13);
    a4[2].m128i_i32[0] = v40;
    a4[1] = v27;
  }
  if ( a10 > 0x7Du )
  {
    if ( a10 != 127 )
    {
      if ( a10 == 131 && BYTE1(a12) == 5 )
      {
        v36 = *((_QWORD *)&a12 + 1);
        goto LABEL_49;
      }
      goto LABEL_34;
    }
    goto LABEL_50;
  }
  if ( a10 == 34 )
  {
    v29 = BYTE1(a12);
    if ( BYTE1(a12) == 1 )
    {
LABEL_56:
      if ( WORD3(a12) <= 0xFu )
      {
LABEL_48:
        v36 = 0;
        goto LABEL_49;
      }
    }
    else if ( BYTE1(a12) == 4 )
    {
      goto LABEL_48;
    }
    goto LABEL_34;
  }
  if ( a10 != 118 || BYTE1(a12) != 2 )
    goto LABEL_34;
  v36 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v41 = a13 + 16 * a7;
  if ( v41 != v36 )
  {
    v36 &= v41;
    if ( v41 == -1 )
      v36 = -1;
  }
LABEL_49:
  *v22 = v36;
  v25 = 1;
  v37 = _mm_loadu_si128((const __m128i *)&a12);
  *a3 = a9;
  v38 = a14;
  *a4 = v37;
  v39 = _mm_loadu_si128((const __m128i *)&a13);
  a4[2].m128i_i32[0] = v38;
  a4[1] = v39;
LABEL_37:
  sub_B240(v56);
  sub_B410(v51);
  return v25;
}

