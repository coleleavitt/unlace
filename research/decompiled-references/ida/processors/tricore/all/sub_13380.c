const char *__fastcall sub_13380(_BYTE *a1, __int64 *a2, _BYTE *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  size_t v12; // r9
  const char *v13; // r10
  __m128i si128; // xmm0
  __int64 v15; // rsi
  const char *(*v16)(); // rax
  __int64 v17; // r8
  size_t v18; // r11
  size_t v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rsi
  const char *v24; // rsi
  void *v25; // rdi
  char *v26; // rsi
  __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
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
  const char *v45; // [rsp+18h] [rbp-970h]
  __int64 v46; // [rsp+18h] [rbp-970h]
  __int64 v47; // [rsp+20h] [rbp-968h]
  size_t v48; // [rsp+28h] [rbp-960h]
  char *v49; // [rsp+30h] [rbp-958h] BYREF
  __int64 v50; // [rsp+38h] [rbp-950h] BYREF
  __int64 v51; // [rsp+40h] [rbp-948h] BYREF
  __int64 v52; // [rsp+48h] [rbp-940h] BYREF
  __int64 v53; // [rsp+50h] [rbp-938h] BYREF
  __int64 v54; // [rsp+58h] [rbp-930h] BYREF
  __int64 v55; // [rsp+60h] [rbp-928h] BYREF
  __int128 v56; // [rsp+68h] [rbp-920h]
  __m128i v57; // [rsp+80h] [rbp-908h] BYREF
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
  v8 = qvector_reserve(&v55, 0, 27, 1, v6, v7);
  v55 = v8;
  v12 = 6;
  *(_QWORD *)&v56 = 27;
  v13 = "EEPROM";
  *(__m128i *)v8 = _mm_load_si128((const __m128i *)&xmmword_16000);
  si128 = _mm_load_si128((const __m128i *)&xmmword_16010);
  v15 = v55;
  *(__m128i *)(v8 + 10) = si128;
  *(_BYTE *)(v15 + 26) = 0;
  v16 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
  if ( v16 == sub_FF10 )
    goto LABEL_5;
  v37 = (const char *)((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64, __int64))v16)(
                        a1,
                        v15,
                        v9,
                        v10,
                        v11,
                        6);
  if ( v37 )
  {
    v41 = v37;
    v44 = v55;
    v38 = strlen(v37);
    v15 = v44;
    v13 = v41;
    v12 = v38;
LABEL_5:
    v17 = v56;
    v18 = v12;
    if ( (_QWORD)v56 )
    {
      v17 = v56 - 1;
      v18 = v56 - 1 + v12;
    }
    v19 = v18 + 1;
    if ( *((_QWORD *)&v56 + 1) < v18 + 1 )
    {
      v48 = v18;
      v47 = v17;
      v45 = v13;
      v42 = v12;
      v39 = v18 + 1;
      v55 = qvector_reserve(&v55, v15, v19, 1, v17, v12);
      v18 = v48;
      v15 = v55;
      v17 = v47;
      v13 = v45;
      v12 = v42;
      v19 = v39;
    }
    *(_QWORD *)&v56 = v19;
    *(_BYTE *)(v15 + v18) = 0;
    memmove((void *)(v17 + v55), v13, v12);
  }
  v20 = v56;
  if ( (_QWORD)v56 )
  {
    v22 = v56 + 3;
    v21 = v56 + 4;
    v20 = v56 - 1;
  }
  else
  {
    v21 = 5;
    v22 = 4;
  }
  v23 = v55;
  if ( *((_QWORD *)&v56 + 1) < v21 )
  {
    v46 = v22;
    v43 = v20;
    v40 = v21;
    v55 = qvector_reserve(&v55, v55, v21, 1, v20, v22);
    v22 = v46;
    v23 = v55;
    v20 = v43;
    v21 = v40;
  }
  *(_QWORD *)&v56 = v21;
  *(_BYTE *)(v23 + v22) = 0;
  v24 = (const char *)&unk_1D228;
  *(_DWORD *)(v20 + v55) = 1970939197;
  if ( (_QWORD)v56 )
    v24 = (const char *)v55;
  v25 = &unk_1D228;
  if ( a2[1] )
    v25 = (void *)*a2;
  qsscanf(v25, v24, &v51, &v52, &v53, &v54);
  v26 = "RAM";
  v27 = v50 - (_QWORD)v49;
  if ( stristr(v70, "RAM") )
  {
    v28 = v53;
    v29 = v54;
    v30 = v27 + v51;
    v51 += v27;
  }
  else
  {
    v26 = "EEPROM";
    v36 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
    if ( v36 != sub_FF10 )
      v26 = (char *)((__int64 (__fastcall *)(_BYTE *, const char *))v36)(a1, "EEPROM");
    if ( stristr(v70, v26) )
    {
      v30 = v51;
      v54 += v27;
      v28 = v53;
      v29 = v54;
    }
    else
    {
      v26 = "EPROM";
      if ( stristr(v70, "EPROM") )
      {
        v30 = v51;
        v53 += v27;
        v29 = v54;
        v28 = v53;
      }
      else
      {
        v26 = "ROM";
        if ( stristr(v70, "ROM") )
          v52 += v27;
        v30 = v51;
        v28 = v53;
        v29 = v54;
      }
    }
  }
  if ( v29 | v52 | v28 | v30 )
  {
    v26 = (char *)&unk_1D228;
    if ( (_QWORD)v56 )
      v26 = (char *)v55;
    sub_132C0(a2, (__int64)v26);
  }
  else
  {
    a2[1] = 0;
  }
  if ( (a1[80] & 2) != 0 )
  {
    if ( get_first_seg() )
    {
      v26 = v49;
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, char *, __int64, _BYTE *, int *))(*(_QWORD *)a1 + 64LL))(
              a1,
              v49,
              v50,
              v70,
              &v71) )
      {
        v31 = *(__int64 (**)())(*(_QWORD *)a1 + 72LL);
        if ( v31 == sub_FF40
          || (v26 = v49,
              !((unsigned __int8 (__fastcall *)(_BYTE *, char *, __int64, _BYTE *, int *))v31)(a1, v49, v50, v70, &v71)) )
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
          v60 = setup_selector(0);
          LOBYTE(v59) = 1;
          si128 = (__m128i)_mm_loadh_ps((const double *)&v50);
          v57 = si128;
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
            if ( !v34 && v57.m128i_i64[1] - v57.m128i_i64[0] > 0xFFFFuLL )
              BYTE3(v59) = 1;
          }
          v35 = is_loaded(v57.m128i_i64[0]);
          v26 = v70;
          add_segm_ex(&v57, v70, &v71, v35 == 0 ? 33 : 1);
        }
      }
    }
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55, v26, v30, *(double *)si128.m128i_i64);
  }
  return nullptr;
}

