const char *__fastcall sub_AE60(_BYTE *a1, __int64 *a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  size_t v9; // r9
  const char *v10; // r10
  __int64 v11; // rsi
  const char *(*v12)(); // rax
  __int64 v13; // r8
  size_t v14; // r11
  size_t v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 (*v27)(); // r9
  const char *(*v28)(); // rax
  const char *v29; // rax
  size_t v30; // rax
  char v31; // al
  __int64 ph; // rbx
  int v33; // eax
  size_t v34; // [rsp+8h] [rbp-980h]
  unsigned __int64 v35; // [rsp+8h] [rbp-980h]
  const char *v36; // [rsp+8h] [rbp-980h]
  const char *v37; // [rsp+10h] [rbp-978h]
  __int64 v38; // [rsp+10h] [rbp-978h]
  __int64 v39; // [rsp+18h] [rbp-970h]
  __int64 v40; // [rsp+18h] [rbp-970h]
  size_t v41; // [rsp+20h] [rbp-968h]
  size_t v42; // [rsp+28h] [rbp-960h]
  __int64 v43; // [rsp+30h] [rbp-958h]
  __int64 v44; // [rsp+38h] [rbp-950h] BYREF
  __int64 v45; // [rsp+40h] [rbp-948h]
  __int64 v46; // [rsp+48h] [rbp-940h]
  __int64 v47; // [rsp+50h] [rbp-938h]
  __int64 v48; // [rsp+58h] [rbp-930h]
  __int64 v49; // [rsp+60h] [rbp-928h]
  __int128 v50; // [rsp+68h] [rbp-920h]
  __m128 v51; // [rsp+80h] [rbp-908h]
  __int128 v52; // [rsp+90h] [rbp-8F8h]
  __int64 v53; // [rsp+A0h] [rbp-8E8h]
  __int64 v54; // [rsp+A8h] [rbp-8E0h]
  __int64 v55; // [rsp+B0h] [rbp-8D8h]
  __int128 v56; // [rsp+B8h] [rbp-8D0h]
  __int128 v57; // [rsp+C8h] [rbp-8C0h]
  __int128 v58; // [rsp+D8h] [rbp-8B0h]
  __int128 v59; // [rsp+E8h] [rbp-8A0h]
  __int128 v60; // [rsp+F8h] [rbp-890h]
  __int128 v61; // [rsp+108h] [rbp-880h]
  __int128 v62; // [rsp+118h] [rbp-870h]
  __int128 v63; // [rsp+128h] [rbp-860h]
  unsigned __int64 v64; // [rsp+138h] [rbp-850h]
  _BYTE v65[1024]; // [rsp+140h] [rbp-848h] BYREF
  int v66; // [rsp+540h] [rbp-448h] BYREF
  __int16 v67; // [rsp+544h] [rbp-444h]
  char v68; // [rsp+93Fh] [rbp-49h]
  unsigned __int64 v69; // [rsp+948h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  if ( *a3 == 59 )
    return "syntax error";
  v65[1023] = 0;
  v68 = 0;
  if ( (unsigned int)qsscanf() != 4 )
    return "syntax error";
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v5 = qvector_reserve();
  v49 = v5;
  v9 = 6;
  *(_QWORD *)&v50 = 27;
  v10 = "EEPROM";
  *(__m128i *)v5 = _mm_load_si128((const __m128i *)&xmmword_D100);
  v11 = v49;
  *(__m128i *)(v5 + 10) = _mm_load_si128((const __m128i *)&xmmword_D110);
  *(_BYTE *)(v11 + 26) = 0;
  v12 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
  if ( v12 != sub_85C0 )
  {
    v29 = (const char *)((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64, __int64))v12)(
                          a1,
                          v11,
                          v6,
                          v7,
                          v8,
                          6);
    if ( !v29 )
      goto LABEL_10;
    v36 = v29;
    v30 = strlen(v29);
    v11 = v49;
    v10 = v36;
    v9 = v30;
  }
  v13 = v50;
  v14 = v9;
  if ( (_QWORD)v50 )
  {
    v13 = v50 - 1;
    v14 = v50 - 1 + v9;
  }
  v15 = v14 + 1;
  if ( *((_QWORD *)&v50 + 1) < v14 + 1 )
  {
    v42 = v14;
    v41 = v9;
    v39 = v13;
    v37 = v10;
    v34 = v14 + 1;
    v49 = qvector_reserve();
    v14 = v42;
    v11 = v49;
    v9 = v41;
    v13 = v39;
    v10 = v37;
    v15 = v34;
  }
  *(_QWORD *)&v50 = v15;
  *(_BYTE *)(v11 + v14) = 0;
  memmove((void *)(v13 + v49), v10, v9);
LABEL_10:
  v16 = v50;
  if ( (_QWORD)v50 )
  {
    v18 = v50 + 3;
    v17 = v50 + 4;
    v16 = v50 - 1;
  }
  else
  {
    v17 = 5;
    v18 = 4;
  }
  v19 = v49;
  if ( *((_QWORD *)&v50 + 1) < v17 )
  {
    v40 = v18;
    v38 = v16;
    v35 = v17;
    v49 = qvector_reserve();
    v18 = v40;
    v19 = v49;
    v16 = v38;
    v17 = v35;
  }
  *(_QWORD *)&v50 = v17;
  *(_BYTE *)(v19 + v18) = 0;
  *(_DWORD *)(v16 + v49) = 1970939197;
  qsscanf();
  v20 = v44 - v43;
  if ( stristr() )
  {
    v21 = v47;
    v22 = v48;
    v23 = v20 + v45;
    v45 += v20;
  }
  else
  {
    v28 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
    if ( v28 != sub_85C0 )
      ((void (__fastcall *)(_BYTE *, const char *))v28)(a1, "EEPROM");
    if ( stristr() )
    {
      v23 = v45;
      v48 += v20;
      v21 = v47;
      v22 = v48;
    }
    else if ( stristr() )
    {
      v23 = v45;
      v47 += v20;
      v22 = v48;
      v21 = v47;
    }
    else
    {
      if ( stristr() )
        v46 += v20;
      v23 = v45;
      v21 = v47;
      v22 = v48;
    }
  }
  if ( v22 | v46 | v21 | v23 )
    sub_ADA0(a2);
  else
    a2[1] = 0;
  if ( (a1[80] & 2) == 0 || !get_first_seg() )
    goto LABEL_22;
  v24 = *(_QWORD *)a1;
  v25 = v44;
  v26 = v43;
  v27 = *(__int64 (**)())(*(_QWORD *)a1 + 64LL);
  if ( v27 == sub_85E0 )
    goto LABEL_21;
  if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64, _BYTE *, int *))v27)(a1, v43, v44, v65, &v66) )
  {
    v24 = *(_QWORD *)a1;
    v25 = v44;
    v26 = v43;
LABEL_21:
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64, __int64, _BYTE *, int *))(v24 + 72))(
            a1,
            v26,
            v25,
            v65,
            &v66) )
    {
      v53 = 0;
      v51 = 0;
      v52 = 0;
      v54 = 0;
      v55 = 0;
      v64 = 0xFFFFFFFF00000000LL;
      v56 = -1;
      v57 = -1;
      v58 = -1;
      v59 = -1;
      v60 = -1;
      v61 = -1;
      v62 = -1;
      v63 = -1;
      v55 = setup_selector();
      LOBYTE(v54) = 1;
      v51 = _mm_loadh_ps((const double *)&v44);
      if ( v66 != 1128354899 || (v31 = 5, v67 != 75) )
        v31 = 2;
      BYTE1(v54) = v31;
      ph = get_ph();
      if ( (unsigned __int8)getinf_flag() && (*(_DWORD *)(ph + 8) & 0x10000000) != 0 )
      {
        BYTE3(v54) = 2;
      }
      else
      {
        v33 = *(_DWORD *)(ph + 8) & 4;
        BYTE3(v54) = (*(_BYTE *)(ph + 8) & 4) != 0;
        if ( !v33 && v51.m128_u64[1] - v51.m128_u64[0] > 0xFFFF )
          BYTE3(v54) = 1;
      }
      is_loaded();
      add_segm_ex();
    }
  }
LABEL_22:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  return nullptr;
}

