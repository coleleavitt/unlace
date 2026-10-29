__int64 __fastcall sub_30CC0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(const char *, __int64, double),
        __int64 a5)
{
  unsigned __int64 v7; // rdi
  char v8; // bp
  unsigned __int64 *func; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 *v11; // rax
  int v12; // eax
  int v13; // r14d
  unsigned __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r15
  char v20; // r9
  const char *v21; // rdi
  __int64 v22; // r14
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v26; // r8
  char v27; // r9
  unsigned int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __m128i *v33; // rsi
  __int64 v34; // r14
  const __m128i *v35; // rax
  __m128i v36; // xmm0
  char v37; // r15
  __m128i v38; // xmm2
  unsigned __int64 v39; // r14
  __m128i v40; // xmm1
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // r15
  __m128i si128; // xmm0
  __int8 v46; // r14
  __int64 v47; // rsi
  __int64 v48; // rax
  int v50; // eax
  int v51; // eax
  const __m128i *v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 *v58; // rax
  __int64 *v59; // rax
  __m128i v60; // [rsp+0h] [rbp-208h] BYREF
  __int64 (__fastcall *v61)(const char *, __int64, double); // [rsp+10h] [rbp-1F8h]
  __int64 v62; // [rsp+18h] [rbp-1F0h]
  __int64 v63; // [rsp+20h] [rbp-1E8h]
  char v64; // [rsp+2Fh] [rbp-1D9h]
  unsigned __int64 v65; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v66; // [rsp+38h] [rbp-1D0h] BYREF
  _BYTE v67[24]; // [rsp+40h] [rbp-1C8h] BYREF
  char v68; // [rsp+58h] [rbp-1B0h]
  __int128 v69; // [rsp+60h] [rbp-1A8h]
  __int64 v70; // [rsp+70h] [rbp-198h]
  __int64 v71; // [rsp+78h] [rbp-190h]
  __int64 v72; // [rsp+80h] [rbp-188h]
  char v73; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int8 v74; // [rsp+89h] [rbp-17Fh]
  unsigned __int16 v75; // [rsp+8Eh] [rbp-17Ah]
  unsigned __int8 v76; // [rsp+A0h] [rbp-168h]
  unsigned __int64 v77; // [rsp+1C8h] [rbp-40h] BYREF

  v61 = a4;
  v62 = a5;
  v77 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(((__int64 (__fastcall *)(const char *, __int64))a4)("PC", a5) + 8);
  v65 = v7;
  if ( v7 == -1 )
    return 0;
  v66 = -1;
  v60.m128i_i8[0] = sub_55C30(v7);
  v8 = v60.m128i_i8[0];
  *(_QWORD *)v67 = v65;
  func = (unsigned __int64 *)get_func();
  if ( !func || (unsigned int)get_func_chunknum() )
  {
    v10 = *(_QWORD *)v67;
    if ( !get_debug_name() )
      return 0;
  }
  else
  {
    v10 = *func;
    *(_QWORD *)v67 = *func;
  }
  v70 = -1;
  v11 = (unsigned __int64 *)&v73;
  v71 = 0;
  v72 = 0;
  v69 = -1;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 5;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *(v11 - 2) = 0;
  }
  while ( &v77 != v11 );
  if ( v10 < v65 )
  {
    v12 = -(v60.m128i_i8[0] == 0);
    v13 = 0;
    LOBYTE(v12) = v12 & 0x69;
    LODWORD(v63) = v12 + 158;
    while ( 1 )
    {
      v15 = decode_insn();
      if ( v15 <= 0 )
        return 0;
      v10 += v15;
      v16 = (unsigned __int16)v71;
      if ( (_WORD)v71 == 42 )
      {
        v50 = v74;
        if ( v74 == 1 )
        {
          LOBYTE(v50) = v75 != 7;
          v13 &= v50;
        }
        else if ( v74 == 9 )
        {
          v13 = !(v76 >> 7) & (unsigned __int8)v13;
        }
        goto LABEL_11;
      }
      if ( (unsigned __int16)v71 <= 0x2Au )
        break;
      if ( (_WORD)v71 == 474 && v74 == 1 )
      {
        v14 = v65;
        LOBYTE(v16) = v75 != 158;
        v13 &= v16;
        if ( v10 >= v65 )
        {
LABEL_18:
          v63 = v14;
          v17 = (__int64 *)get_func();
          v18 = v63;
          if ( v17 )
          {
            v19 = *v17;
            v20 = 1;
          }
          else
          {
            v58 = (__int64 *)getseg();
            if ( !v58 )
              return 0;
            v19 = *v58;
            v18 = v63;
            v20 = 0;
          }
          if ( !(_BYTE)v13 )
            goto LABEL_48;
          v64 = v20;
          v21 = "R7";
          if ( v60.m128i_i8[0] )
            v21 = "X29";
          v63 = v18;
          v22 = *(_QWORD *)(v61(v21, v62, 0.0) + 8);
          v25 = sub_21E00(&v65, (__int64)&v66, v22, v8, v23, v24);
          v26 = v63;
          v27 = v64;
          v28 = v25;
          goto LABEL_24;
        }
      }
      else
      {
LABEL_11:
        v14 = v65;
        if ( v10 >= v65 )
          goto LABEL_18;
      }
    }
    if ( ((v71 & 0xFFFD) == 0xC || (_WORD)v71 == 23) && v74 == 1 )
    {
      v51 = v75;
      LOBYTE(v51) = v75 == (_DWORD)v63;
      v13 |= v51;
    }
    goto LABEL_11;
  }
  v63 = v65;
  v53 = (__int64 *)get_func();
  v18 = v65;
  if ( !v53 )
  {
    v59 = (__int64 *)getseg();
    if ( v59 )
    {
      v19 = *v59;
      v18 = v63;
      v20 = 0;
      goto LABEL_48;
    }
    return 0;
  }
  v19 = *v53;
  v20 = 1;
LABEL_48:
  if ( v60.m128i_i8[0] )
  {
    v60.m128i_i64[0] = v18;
    LOBYTE(v63) = v20;
    v66 = *(_QWORD *)(v61("X29", v62, 0.0) + 8);
    v57 = ((__int64 (__fastcall *)(const char *, __int64))v61)("X30", v62);
    v27 = v63;
    v26 = v60.m128i_i64[0];
    v55 = *(_QWORD *)(v57 + 8);
    if ( v55 > 0xFFFFFFFFFLL )
      v55 &= 0xFFFFFFFFFuLL;
  }
  else
  {
    v60.m128i_i64[0] = v18;
    LOBYTE(v63) = v20;
    v66 = *(_QWORD *)(v61("R7", v62, 0.0) + 8);
    v54 = ((__int64 (__fastcall *)(char *, __int64))v61)("LR", v62);
    v26 = v60.m128i_i64[0];
    v27 = v63;
    v55 = *(_QWORD *)(v54 + 8);
  }
  v65 = v55;
  v22 = -1;
  v28 = 1;
LABEL_24:
  v29 = a2[1];
  v30 = *a2;
  if ( a2[2] < (unsigned __int64)(v29 + 1) )
  {
    LOBYTE(v61) = v27;
    v60.m128i_i64[0] = v26;
    v56 = qvector_reserve();
    v27 = (char)v61;
    v26 = v60.m128i_i64[0];
    *a2 = v56;
    v30 = v56;
    v29 = a2[1];
  }
  v31 = 32 * v29 + v30;
  *(_QWORD *)v31 = v26;
  *(_QWORD *)(v31 + 8) = v19;
  *(_QWORD *)(v31 + 16) = v22;
  *(_BYTE *)(v31 + 24) = v27;
  ++a2[1];
  if ( !(_BYTE)v28 )
    return 0;
  do
  {
    if ( !v65 )
      break;
    v34 = v66;
    v35 = (const __m128i *)get_func();
    if ( v35 )
    {
      v36 = _mm_loadl_epi64(v35);
      v37 = 1;
    }
    else
    {
      v52 = (const __m128i *)getseg();
      if ( !v52 )
        return v28;
      v36 = _mm_loadl_epi64(v52);
      v37 = 0;
    }
    v38 = (__m128i)(unsigned __int64)v34;
    v39 = v65;
    v60 = _mm_unpacklo_epi64(v36, v38);
    if ( !(unsigned __int8)is_mapped() )
      break;
    v40 = _mm_load_si128(&v60);
    v68 = v37;
    *(__m128i *)&v67[8] = v40;
    sub_2D040(a1, v67, v39, v8);
    v43 = a2[1];
    v44 = *(_QWORD *)&v67[16];
    si128 = _mm_load_si128((const __m128i *)v67);
    v46 = v68;
    v47 = *a2;
    if ( a2[2] < (unsigned __int64)(v43 + 1) )
    {
      v60 = si128;
      v48 = qvector_reserve();
      si128 = _mm_load_si128(&v60);
      *a2 = v48;
      v47 = v48;
      v43 = a2[1];
    }
    v32 = v66;
    v33 = (__m128i *)(32 * v43 + v47);
    v33[1].m128i_i64[0] = v44;
    v33[1].m128i_i8[8] = v46;
    *v33 = si128;
    ++a2[1];
  }
  while ( (unsigned __int8)sub_21E00(&v65, (__int64)&v66, v32, v8, v41, v42) );
  return v28;
}

