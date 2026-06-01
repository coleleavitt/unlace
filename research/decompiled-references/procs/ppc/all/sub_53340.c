const char *__fastcall sub_53340(_BYTE *a1, __int64 *a2, _BYTE *a3)
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
  const char *v21; // rsi
  const char *v22; // rdi
  const char *v23; // rsi
  __int64 v24; // r15
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 (*v30)(); // r9
  __int64 (*v31)(); // rax
  char v32; // al
  __int64 ph; // rbx
  int v34; // eax
  char v35; // al
  const char *(*v36)(); // rax
  const char *v37; // rax
  size_t v38; // rax
  size_t v39; // [rsp+8h] [rbp-980h]
  unsigned __int64 v40; // [rsp+8h] [rbp-980h]
  const char *v41; // [rsp+8h] [rbp-980h]
  size_t v42; // [rsp+10h] [rbp-978h]
  __int64 v43; // [rsp+10h] [rbp-978h]
  __int64 v44; // [rsp+10h] [rbp-978h]
  size_t v45; // [rsp+18h] [rbp-970h]
  __int64 v46; // [rsp+18h] [rbp-970h]
  const char *v47; // [rsp+20h] [rbp-968h]
  __int64 v48; // [rsp+28h] [rbp-960h]
  const char *v49; // [rsp+30h] [rbp-958h] BYREF
  __int64 v50; // [rsp+38h] [rbp-950h] BYREF
  __int64 v51; // [rsp+40h] [rbp-948h] BYREF
  __int64 v52; // [rsp+48h] [rbp-940h] BYREF
  __int64 v53; // [rsp+50h] [rbp-938h] BYREF
  __int64 v54; // [rsp+58h] [rbp-930h] BYREF
  __int64 v55; // [rsp+60h] [rbp-928h] BYREF
  __int128 v56; // [rsp+68h] [rbp-920h]
  __m128 v57; // [rsp+80h] [rbp-908h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-8E8h]
  __int64 v59; // [rsp+A8h] [rbp-8E0h]
  __int64 v60; // [rsp+B0h] [rbp-8D8h]
  __int128 v61; // [rsp+B8h] [rbp-8D0h]
  __int128 v62; // [rsp+C8h] [rbp-8C0h]
  __int128 v63; // [rsp+D8h] [rbp-8B0h]
  __int128 v64; // [rsp+E8h] [rbp-8A0h]
  __int128 v65; // [rsp+F8h] [rbp-890h]
  __int128 v66; // [rsp+108h] [rbp-880h]
  __int128 v67; // [rsp+118h] [rbp-870h]
  __int128 v68; // [rsp+128h] [rbp-860h]
  unsigned __int64 v69; // [rsp+138h] [rbp-850h]
  _BYTE v70[1024]; // [rsp+140h] [rbp-848h] BYREF
  int v71; // [rsp+540h] [rbp-448h] BYREF
  __int16 v72; // [rsp+544h] [rbp-444h]
  char v73; // [rsp+93Fh] [rbp-49h]
  unsigned __int64 v74; // [rsp+948h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( *a3 == 59 )
    return "syntax error";
  v70[1023] = 0;
  v73 = 0;
  if ( (unsigned int)qsscanf(a3, "area %1023s %1023s %a:%a", &v71, v70, &v49, &v50) != 4 )
    return "syntax error";
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v6 = qvector_reserve(&v55, 0, 27, 1);
  v55 = v6;
  v10 = 6;
  *(_QWORD *)&v56 = 27;
  v11 = "EEPROM";
  *(__m128i *)v6 = _mm_load_si128((const __m128i *)&xmmword_77F70);
  v12 = v55;
  *(__m128i *)(v6 + 10) = _mm_load_si128((const __m128i *)&xmmword_77F80);
  *(_BYTE *)(v12 + 26) = 0;
  v13 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
  if ( v13 != sub_4A9F0 )
  {
    v37 = (const char *)((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64, __int64))v13)(
                          a1,
                          v12,
                          v7,
                          v8,
                          v9,
                          6);
    if ( !v37 )
      goto LABEL_10;
    v41 = v37;
    v44 = v55;
    v38 = strlen(v37);
    v12 = v44;
    v11 = v41;
    v10 = v38;
  }
  v14 = v56;
  v15 = v10;
  if ( (_QWORD)v56 )
  {
    v14 = v56 - 1;
    v15 = v10 + v56 - 1;
  }
  v16 = v15 + 1;
  if ( *((_QWORD *)&v56 + 1) < v15 + 1 )
  {
    v48 = v14;
    v47 = v11;
    v45 = v15;
    v42 = v10;
    v39 = v15 + 1;
    v55 = qvector_reserve(&v55, v12, v16, 1);
    v14 = v48;
    v12 = v55;
    v11 = v47;
    v15 = v45;
    v10 = v42;
    v16 = v39;
  }
  *(_QWORD *)&v56 = v16;
  *(_BYTE *)(v12 + v15) = 0;
  memmove((void *)(v14 + v55), v11, v10);
LABEL_10:
  v17 = v56;
  if ( (_QWORD)v56 )
  {
    v19 = v56 + 3;
    v18 = v56 + 4;
    v17 = v56 - 1;
  }
  else
  {
    v18 = 5;
    v19 = 4;
  }
  v20 = v55;
  if ( *((_QWORD *)&v56 + 1) < v18 )
  {
    v46 = v19;
    v43 = v17;
    v40 = v18;
    v55 = qvector_reserve(&v55, v55, v18, 1);
    v19 = v46;
    v20 = v55;
    v17 = v43;
    v18 = v40;
  }
  *(_QWORD *)&v56 = v18;
  *(_BYTE *)(v20 + v19) = 0;
  v21 = s1;
  *(_DWORD *)(v17 + v55) = 1970939197;
  if ( (_QWORD)v56 )
    v21 = (const char *)v55;
  v22 = s1;
  if ( a2[1] )
    v22 = (const char *)*a2;
  qsscanf(v22, v21, &v51, &v52, &v53, &v54);
  v23 = "RAM";
  v24 = v50 - (_QWORD)v49;
  if ( stristr(v70, "RAM") )
  {
    v25 = v53;
    v26 = v54;
    v27 = v24 + v51;
    v51 += v24;
  }
  else
  {
    v23 = "EEPROM";
    v36 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
    if ( v36 != sub_4A9F0 )
      v23 = (const char *)((__int64 (__fastcall *)(_BYTE *, const char *))v36)(a1, "EEPROM");
    if ( stristr(v70, v23) )
    {
      v27 = v51;
      v54 += v24;
      v25 = v53;
      v26 = v54;
    }
    else
    {
      v23 = "EPROM";
      if ( stristr(v70, "EPROM") )
      {
        v27 = v51;
        v53 += v24;
        v26 = v54;
        v25 = v53;
      }
      else
      {
        v23 = "ROM";
        if ( stristr(v70, "ROM") )
          v52 += v24;
        v27 = v51;
        v25 = v53;
        v26 = v54;
      }
    }
  }
  if ( v26 | v52 | v25 | v27 )
  {
    v23 = s1;
    if ( (_QWORD)v56 )
      v23 = (const char *)v55;
    sub_47050(a2, (__int64)v23);
  }
  else
  {
    a2[1] = 0;
  }
  if ( (a1[80] & 2) == 0 || !get_first_seg() )
    goto LABEL_34;
  v28 = *(_QWORD *)a1;
  v29 = v50;
  v23 = v49;
  v30 = *(__int64 (**)())(*(_QWORD *)a1 + 64LL);
  if ( v30 == sub_4AA10 )
    goto LABEL_25;
  if ( !((unsigned __int8 (__fastcall *)(_BYTE *, const char *, __int64, _BYTE *, int *))v30)(a1, v49, v50, v70, &v71) )
  {
    v28 = *(_QWORD *)a1;
    v29 = v50;
    v23 = v49;
LABEL_25:
    v31 = *(__int64 (**)())(v28 + 72);
    if ( v31 == sub_4AA20
      || !((unsigned __int8 (__fastcall *)(_BYTE *, const char *, __int64, _BYTE *, int *))v31)(a1, v23, v29, v70, &v71) )
    {
      v58 = 0;
      memset(&v57, 0, 32);
      v59 = 0;
      v60 = 0;
      v69 = 0xFFFFFFFF00000000LL;
      v61 = -1;
      v62 = -1;
      v63 = -1;
      v64 = -1;
      v65 = -1;
      v66 = -1;
      v67 = -1;
      v68 = -1;
      v60 = setup_selector(0, v23);
      LOBYTE(v59) = 1;
      v57 = _mm_loadh_ps((const double *)&v50);
      if ( v71 != 1128354899 || (v32 = 5, v72 != 75) )
        v32 = 2;
      BYTE1(v59) = v32;
      ph = get_ph();
      if ( (unsigned __int8)getinf_flag(3, 4) && (*(_DWORD *)(ph + 8) & 0x10000000) != 0 )
      {
        BYTE3(v59) = 2;
      }
      else
      {
        v34 = *(_DWORD *)(ph + 8) & 4;
        BYTE3(v59) = (*(_BYTE *)(ph + 8) & 4) != 0;
        if ( !v34 && v57.m128_u64[1] - v57.m128_u64[0] > 0xFFFF )
          BYTE3(v59) = 1;
      }
      v35 = is_loaded(v57.m128_u64[0]);
      v23 = v70;
      add_segm_ex(&v57, v70, &v71, v35 == 0 ? 33 : 1);
    }
  }
LABEL_34:
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55, v23);
  }
  return nullptr;
}
