const char *__fastcall sub_9670(_BYTE *a1, __int64 *a2, _BYTE *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  size_t v10; // r9
  const char *v11; // r10
  __int64 v12; // rsi
  const char *(*v13)(); // rax
  __int64 v14; // r8
  size_t v15; // r11
  size_t v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 (*v28)(); // r9
  __int64 (*v29)(); // rax
  char v30; // al
  __int64 ph; // rbx
  int v32; // eax
  const char *(*v33)(); // rax
  const char *v34; // rax
  size_t v35; // rax
  size_t v36; // [rsp+8h] [rbp-980h]
  unsigned __int64 v37; // [rsp+8h] [rbp-980h]
  const char *v38; // [rsp+8h] [rbp-980h]
  size_t v39; // [rsp+10h] [rbp-978h]
  __int64 v40; // [rsp+10h] [rbp-978h]
  size_t v41; // [rsp+18h] [rbp-970h]
  __int64 v42; // [rsp+18h] [rbp-970h]
  const char *v43; // [rsp+20h] [rbp-968h]
  __int64 v44; // [rsp+28h] [rbp-960h]
  __int64 v45; // [rsp+30h] [rbp-958h]
  __int64 v46; // [rsp+38h] [rbp-950h] BYREF
  __int64 v47; // [rsp+40h] [rbp-948h]
  __int64 v48; // [rsp+48h] [rbp-940h]
  __int64 v49; // [rsp+50h] [rbp-938h]
  __int64 v50; // [rsp+58h] [rbp-930h]
  __int64 v51; // [rsp+60h] [rbp-928h]
  __int128 v52; // [rsp+68h] [rbp-920h]
  __m128 v53; // [rsp+80h] [rbp-908h]
  __int128 v54; // [rsp+90h] [rbp-8F8h]
  __int64 v55; // [rsp+A0h] [rbp-8E8h]
  __int64 v56; // [rsp+A8h] [rbp-8E0h]
  __int64 v57; // [rsp+B0h] [rbp-8D8h]
  __int128 v58; // [rsp+B8h] [rbp-8D0h]
  __int128 v59; // [rsp+C8h] [rbp-8C0h]
  __int128 v60; // [rsp+D8h] [rbp-8B0h]
  __int128 v61; // [rsp+E8h] [rbp-8A0h]
  __int128 v62; // [rsp+F8h] [rbp-890h]
  __int128 v63; // [rsp+108h] [rbp-880h]
  __int128 v64; // [rsp+118h] [rbp-870h]
  __int128 v65; // [rsp+128h] [rbp-860h]
  unsigned __int64 v66; // [rsp+138h] [rbp-850h]
  _BYTE v67[1024]; // [rsp+140h] [rbp-848h] BYREF
  int v68; // [rsp+540h] [rbp-448h] BYREF
  __int16 v69; // [rsp+544h] [rbp-444h]
  char v70; // [rsp+93Fh] [rbp-49h]
  unsigned __int64 v71; // [rsp+948h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  if ( *a3 == 59 )
    return "syntax error";
  v67[1023] = 0;
  v70 = 0;
  if ( (unsigned int)qsscanf() != 4 )
    return "syntax error";
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v52 = 0;
  v6 = qvector_reserve();
  v51 = v6;
  v10 = 6;
  *(_QWORD *)&v52 = 27;
  v11 = "EEPROM";
  *(__m128i *)v6 = _mm_load_si128((const __m128i *)&xmmword_C610);
  v12 = v51;
  *(__m128i *)(v6 + 10) = _mm_load_si128((const __m128i *)&xmmword_C620);
  *(_BYTE *)(v12 + 26) = 0;
  v13 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
  if ( v13 != sub_7560 )
  {
    v34 = (const char *)((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64, __int64))v13)(
                          a1,
                          v12,
                          v7,
                          v8,
                          v9,
                          6);
    if ( !v34 )
      goto LABEL_10;
    v38 = v34;
    v35 = strlen(v34);
    v12 = v51;
    v11 = v38;
    v10 = v35;
  }
  v14 = v52;
  v15 = v10;
  if ( (_QWORD)v52 )
  {
    v14 = v52 - 1;
    v15 = v10 + v52 - 1;
  }
  v16 = v15 + 1;
  if ( *((_QWORD *)&v52 + 1) < v15 + 1 )
  {
    v44 = v14;
    v43 = v11;
    v41 = v15;
    v39 = v10;
    v36 = v15 + 1;
    v51 = qvector_reserve();
    v14 = v44;
    v12 = v51;
    v11 = v43;
    v15 = v41;
    v10 = v39;
    v16 = v36;
  }
  *(_QWORD *)&v52 = v16;
  *(_BYTE *)(v12 + v15) = 0;
  memmove((void *)(v14 + v51), v11, v10);
LABEL_10:
  v17 = v52;
  if ( (_QWORD)v52 )
  {
    v19 = v52 + 3;
    v18 = v52 + 4;
    v17 = v52 - 1;
  }
  else
  {
    v18 = 5;
    v19 = 4;
  }
  v20 = v51;
  if ( *((_QWORD *)&v52 + 1) < v18 )
  {
    v42 = v19;
    v40 = v17;
    v37 = v18;
    v51 = qvector_reserve();
    v19 = v42;
    v20 = v51;
    v17 = v40;
    v18 = v37;
  }
  *(_QWORD *)&v52 = v18;
  *(_BYTE *)(v20 + v19) = 0;
  *(_DWORD *)(v17 + v51) = 1970939197;
  qsscanf();
  v21 = v46 - v45;
  if ( stristr() )
  {
    v22 = v49;
    v23 = v50;
    v24 = v21 + v47;
    v47 += v21;
  }
  else
  {
    v33 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
    if ( v33 != sub_7560 )
      ((void (__fastcall *)(_BYTE *, const char *))v33)(a1, "EEPROM");
    if ( stristr() )
    {
      v24 = v47;
      v50 += v21;
      v22 = v49;
      v23 = v50;
    }
    else if ( stristr() )
    {
      v24 = v47;
      v49 += v21;
      v23 = v50;
      v22 = v49;
    }
    else
    {
      if ( stristr() )
        v48 += v21;
      v24 = v47;
      v22 = v49;
      v23 = v50;
    }
  }
  if ( v23 | v48 | v22 | v24 )
    sub_95B0(a2);
  else
    a2[1] = 0;
  if ( (a1[80] & 2) == 0 || !get_first_seg() )
    goto LABEL_30;
  v25 = *(_QWORD *)a1;
  v26 = v46;
  v27 = v45;
  v28 = *(__int64 (**)())(*(_QWORD *)a1 + 64LL);
  if ( v28 == sub_7580 )
    goto LABEL_21;
  if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64, _BYTE *, int *))v28)(a1, v45, v46, v67, &v68) )
  {
    v25 = *(_QWORD *)a1;
    v26 = v46;
    v27 = v45;
LABEL_21:
    v29 = *(__int64 (**)())(v25 + 72);
    if ( v29 == sub_7590
      || !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64, _BYTE *, int *))v29)(a1, v27, v26, v67, &v68) )
    {
      v55 = 0;
      v53 = 0;
      v54 = 0;
      v56 = 0;
      v57 = 0;
      v66 = 0xFFFFFFFF00000000LL;
      v58 = -1;
      v59 = -1;
      v60 = -1;
      v61 = -1;
      v62 = -1;
      v63 = -1;
      v64 = -1;
      v65 = -1;
      v57 = setup_selector();
      LOBYTE(v56) = 1;
      v53 = _mm_loadh_ps((const double *)&v46);
      if ( v68 != 1128354899 || (v30 = 5, v69 != 75) )
        v30 = 2;
      BYTE1(v56) = v30;
      ph = get_ph();
      if ( (unsigned __int8)getinf_flag() && (*(_DWORD *)(ph + 8) & 0x10000000) != 0 )
      {
        BYTE3(v56) = 2;
      }
      else
      {
        v32 = *(_DWORD *)(ph + 8) & 4;
        BYTE3(v56) = (*(_BYTE *)(ph + 8) & 4) != 0;
        if ( !v32 && v53.m128_u64[1] - v53.m128_u64[0] > 0xFFFF )
          BYTE3(v56) = 1;
      }
      is_loaded();
      add_segm_ex();
    }
  }
LABEL_30:
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  return nullptr;
}

