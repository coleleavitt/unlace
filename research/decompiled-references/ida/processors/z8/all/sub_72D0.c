const char *__fastcall sub_72D0(_BYTE *a1, __int64 *a2, _BYTE *a3)
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
  __int64 (*v24)(); // rax
  char v25; // al
  __int64 ph; // rbx
  int v27; // eax
  const char *(*v28)(); // rax
  const char *v29; // rax
  size_t v30; // rax
  size_t v31; // [rsp+8h] [rbp-980h]
  unsigned __int64 v32; // [rsp+8h] [rbp-980h]
  const char *v33; // [rsp+8h] [rbp-980h]
  size_t v34; // [rsp+10h] [rbp-978h]
  __int64 v35; // [rsp+10h] [rbp-978h]
  const char *v36; // [rsp+18h] [rbp-970h]
  __int64 v37; // [rsp+18h] [rbp-970h]
  __int64 v38; // [rsp+20h] [rbp-968h]
  size_t v39; // [rsp+28h] [rbp-960h]
  __int64 v40; // [rsp+30h] [rbp-958h]
  __int64 v41; // [rsp+38h] [rbp-950h] BYREF
  __int64 v42; // [rsp+40h] [rbp-948h]
  __int64 v43; // [rsp+48h] [rbp-940h]
  __int64 v44; // [rsp+50h] [rbp-938h]
  __int64 v45; // [rsp+58h] [rbp-930h]
  __int64 v46; // [rsp+60h] [rbp-928h]
  __int128 v47; // [rsp+68h] [rbp-920h]
  __m128 v48; // [rsp+80h] [rbp-908h]
  __int128 v49; // [rsp+90h] [rbp-8F8h]
  __int64 v50; // [rsp+A0h] [rbp-8E8h]
  __int64 v51; // [rsp+A8h] [rbp-8E0h]
  __int64 v52; // [rsp+B0h] [rbp-8D8h]
  __int128 v53; // [rsp+B8h] [rbp-8D0h]
  __int128 v54; // [rsp+C8h] [rbp-8C0h]
  __int128 v55; // [rsp+D8h] [rbp-8B0h]
  __int128 v56; // [rsp+E8h] [rbp-8A0h]
  __int128 v57; // [rsp+F8h] [rbp-890h]
  __int128 v58; // [rsp+108h] [rbp-880h]
  __int128 v59; // [rsp+118h] [rbp-870h]
  __int128 v60; // [rsp+128h] [rbp-860h]
  unsigned __int64 v61; // [rsp+138h] [rbp-850h]
  _BYTE v62[1024]; // [rsp+140h] [rbp-848h] BYREF
  int v63; // [rsp+540h] [rbp-448h] BYREF
  __int16 v64; // [rsp+544h] [rbp-444h]
  char v65; // [rsp+93Fh] [rbp-49h]
  unsigned __int64 v66; // [rsp+948h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  if ( *a3 == 59 )
    return "syntax error";
  v62[1023] = 0;
  v65 = 0;
  if ( (unsigned int)qsscanf() != 4 )
    return "syntax error";
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v47 = 0;
  v5 = qvector_reserve();
  v46 = v5;
  v9 = 6;
  *(_QWORD *)&v47 = 27;
  v10 = "EEPROM";
  *(__m128i *)v5 = _mm_load_si128((const __m128i *)&xmmword_88A0);
  v11 = v46;
  *(__m128i *)(v5 + 10) = _mm_load_si128((const __m128i *)&xmmword_88B0);
  *(_BYTE *)(v11 + 26) = 0;
  v12 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
  if ( v12 == sub_50E0 )
    goto LABEL_5;
  v29 = (const char *)((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64, __int64))v12)(
                        a1,
                        v11,
                        v6,
                        v7,
                        v8,
                        6);
  if ( v29 )
  {
    v33 = v29;
    v30 = strlen(v29);
    v11 = v46;
    v10 = v33;
    v9 = v30;
LABEL_5:
    v13 = v47;
    v14 = v9;
    if ( (_QWORD)v47 )
    {
      v13 = v47 - 1;
      v14 = v47 - 1 + v9;
    }
    v15 = v14 + 1;
    if ( *((_QWORD *)&v47 + 1) < v14 + 1 )
    {
      v39 = v14;
      v38 = v13;
      v36 = v10;
      v34 = v9;
      v31 = v14 + 1;
      v46 = qvector_reserve();
      v14 = v39;
      v11 = v46;
      v13 = v38;
      v10 = v36;
      v9 = v34;
      v15 = v31;
    }
    *(_QWORD *)&v47 = v15;
    *(_BYTE *)(v11 + v14) = 0;
    memmove((void *)(v13 + v46), v10, v9);
  }
  v16 = v47;
  if ( (_QWORD)v47 )
  {
    v18 = v47 + 3;
    v17 = v47 + 4;
    v16 = v47 - 1;
  }
  else
  {
    v17 = 5;
    v18 = 4;
  }
  v19 = v46;
  if ( *((_QWORD *)&v47 + 1) < v17 )
  {
    v37 = v18;
    v35 = v16;
    v32 = v17;
    v46 = qvector_reserve();
    v18 = v37;
    v19 = v46;
    v16 = v35;
    v17 = v32;
  }
  *(_QWORD *)&v47 = v17;
  *(_BYTE *)(v19 + v18) = 0;
  *(_DWORD *)(v16 + v46) = 1970939197;
  qsscanf();
  v20 = v41 - v40;
  if ( stristr() )
  {
    v21 = v44;
    v22 = v45;
    v23 = v20 + v42;
    v42 += v20;
  }
  else
  {
    v28 = *(const char *(**)())(*(_QWORD *)a1 + 16LL);
    if ( v28 != sub_50E0 )
      ((void (__fastcall *)(_BYTE *, const char *))v28)(a1, "EEPROM");
    if ( stristr() )
    {
      v23 = v42;
      v45 += v20;
      v21 = v44;
      v22 = v45;
    }
    else if ( stristr() )
    {
      v23 = v42;
      v44 += v20;
      v22 = v45;
      v21 = v44;
    }
    else
    {
      if ( stristr() )
        v43 += v20;
      v23 = v42;
      v21 = v44;
      v22 = v45;
    }
  }
  if ( v22 | v43 | v21 | v23 )
    sub_7210(a2);
  else
    a2[1] = 0;
  if ( (a1[80] & 2) != 0 )
  {
    if ( get_first_seg() )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64, __int64, _BYTE *, int *))(*(_QWORD *)a1 + 64LL))(
              a1,
              v40,
              v41,
              v62,
              &v63) )
      {
        v24 = *(__int64 (**)())(*(_QWORD *)a1 + 72LL);
        if ( v24 == sub_5110
          || !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64, _BYTE *, int *))v24)(a1, v40, v41, v62, &v63) )
        {
          v50 = 0;
          v48 = 0;
          v49 = 0;
          v51 = 0;
          v52 = 0;
          v61 = 0xFFFFFFFF00000000LL;
          v53 = -1;
          v54 = -1;
          v55 = -1;
          v56 = -1;
          v57 = -1;
          v58 = -1;
          v59 = -1;
          v60 = -1;
          v52 = setup_selector();
          LOBYTE(v51) = 1;
          v48 = _mm_loadh_ps((const double *)&v41);
          if ( v63 != 1128354899 || (v25 = 5, v64 != 75) )
            v25 = 2;
          BYTE1(v51) = v25;
          ph = get_ph();
          if ( (unsigned __int8)getinf_flag() && (*(_DWORD *)(ph + 8) & 0x10000000) != 0 )
          {
            BYTE3(v51) = 2;
          }
          else
          {
            v27 = *(_DWORD *)(ph + 8) & 4;
            BYTE3(v51) = (*(_BYTE *)(ph + 8) & 4) != 0;
            if ( !v27 && v48.m128_u64[1] - v48.m128_u64[0] > 0xFFFF )
              BYTE3(v51) = 1;
          }
          is_loaded();
          add_segm_ex();
        }
      }
    }
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  return nullptr;
}

