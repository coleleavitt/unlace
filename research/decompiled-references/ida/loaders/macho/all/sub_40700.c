__int64 __fastcall sub_40700(__int64 *a1, __int64 *a2, int a3, char a4, __int64 *a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r14
  const char *v14; // rdx
  const char *v15; // rsi
  __int64 v16; // r10
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 *v20; // r10
  __int64 v21; // rcx
  unsigned __int64 *v22; // rsi
  unsigned __int64 v23; // r11
  unsigned __int64 *v24; // rax
  __int64 v25; // r9
  __int64 v26; // r9
  const char *v27; // rsi
  __int64 v28; // r12
  _QWORD *v29; // rbx
  unsigned __int64 v30; // rdx
  __int64 v31; // r12
  __int64 v32; // rbx
  unsigned __int64 v33; // rax
  __int64 range; // rax
  unsigned __int64 v36; // [rsp+10h] [rbp-2F8h]
  unsigned __int64 *v37; // [rsp+18h] [rbp-2F0h]
  __int64 v38; // [rsp+18h] [rbp-2F0h]
  __int64 v39; // [rsp+18h] [rbp-2F0h]
  _QWORD *v40; // [rsp+20h] [rbp-2E8h]
  unsigned __int8 v41; // [rsp+2Ah] [rbp-2DEh]
  const char **v43; // [rsp+30h] [rbp-2D8h]
  __int64 v44; // [rsp+30h] [rbp-2D8h]
  __int64 v45; // [rsp+30h] [rbp-2D8h]
  __int64 v46; // [rsp+30h] [rbp-2D8h]
  unsigned __int64 *v47; // [rsp+40h] [rbp-2C8h]
  unsigned __int64 *v48; // [rsp+40h] [rbp-2C8h]
  unsigned __int64 v49; // [rsp+50h] [rbp-2B8h] BYREF
  __int128 v50; // [rsp+58h] [rbp-2B0h]
  _QWORD *v51; // [rsp+70h] [rbp-298h] BYREF
  __int128 v52; // [rsp+78h] [rbp-290h]
  __int64 v53; // [rsp+90h] [rbp-278h] BYREF
  __int128 v54; // [rsp+98h] [rbp-270h]
  __int64 v55; // [rsp+A8h] [rbp-260h]
  int v56; // [rsp+B0h] [rbp-258h]
  _QWORD v57[2]; // [rsp+C0h] [rbp-248h] BYREF
  __m128i v58; // [rsp+D0h] [rbp-238h]
  __int64 v59; // [rsp+E0h] [rbp-228h]
  int v60; // [rsp+E8h] [rbp-220h]
  char v61; // [rsp+ECh] [rbp-21Ch]
  __int64 v62; // [rsp+F0h] [rbp-218h]
  char v63; // [rsp+F8h] [rbp-210h]
  __int64 v64; // [rsp+108h] [rbp-200h]
  __int128 v65; // [rsp+110h] [rbp-1F8h]
  __m128i si128; // [rsp+120h] [rbp-1E8h]
  char v67; // [rsp+130h] [rbp-1D8h]
  __m128i v68; // [rsp+138h] [rbp-1D0h]
  __int64 v69; // [rsp+148h] [rbp-1C0h]
  __int128 v70; // [rsp+150h] [rbp-1B8h]
  __int16 v71; // [rsp+160h] [rbp-1A8h]
  __int64 v72; // [rsp+188h] [rbp-180h]
  __int128 v73; // [rsp+190h] [rbp-178h]
  __int64 v74; // [rsp+1A0h] [rbp-168h]
  __int128 v75; // [rsp+1A8h] [rbp-160h]
  __int64 v76; // [rsp+1B8h] [rbp-150h]
  __int128 v77; // [rsp+1C0h] [rbp-148h]
  __int64 v78; // [rsp+1D0h] [rbp-138h]
  __int128 v79; // [rsp+1D8h] [rbp-130h]
  __int64 v80; // [rsp+1E8h] [rbp-120h]
  __int128 v81; // [rsp+1F0h] [rbp-118h]
  __int64 v82; // [rsp+200h] [rbp-108h]
  __int128 v83; // [rsp+208h] [rbp-100h]
  __int64 v84; // [rsp+218h] [rbp-F0h]
  __int128 v85; // [rsp+220h] [rbp-E8h]
  __int64 v86; // [rsp+230h] [rbp-D8h]
  __int128 v87; // [rsp+238h] [rbp-D0h]
  __int64 v88; // [rsp+248h] [rbp-C0h]
  __int128 v89; // [rsp+250h] [rbp-B8h]
  __int64 v90; // [rsp+260h] [rbp-A8h]
  __int128 v91; // [rsp+268h] [rbp-A0h]
  __int16 v92; // [rsp+278h] [rbp-90h]
  char v93; // [rsp+27Ah] [rbp-8Eh]
  int v94; // [rsp+27Ch] [rbp-8Ch]
  __int128 v95; // [rsp+280h] [rbp-88h]
  __int64 v96; // [rsp+290h] [rbp-78h]
  __int64 v97; // [rsp+298h] [rbp-70h]
  int v98; // [rsp+2A0h] [rbp-68h]
  __int64 v99; // [rsp+2A8h] [rbp-60h]
  __int128 v100; // [rsp+2B0h] [rbp-58h]
  __int64 v101; // [rsp+2C0h] [rbp-48h]
  unsigned __int64 v102; // [rsp+2C8h] [rbp-40h]

  v102 = __readfsqword(0x28u);
  v7 = sub_1C580((__int64)a1, a3);
  if ( !v7 )
  {
    if ( a5 )
      sub_35470(a5);
    return 0;
  }
  v8 = *a1;
  v9 = v7;
  v10 = a1[87];
  v71 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
  v58 = _mm_load_si128((const __m128i *)&xmmword_574B0);
  v68 = _mm_load_si128((const __m128i *)&xmmword_574C0);
  v57[0] = &off_62AA0;
  v57[1] = v8;
  v59 = -1;
  v60 = 8;
  v61 = 1;
  v62 = v9;
  v63 = 0;
  v64 = 0;
  v67 = 0;
  v69 = 0;
  v72 = 0;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v80 = 0;
  v82 = 0;
  v65 = 0;
  v70 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v97 = v10;
  v84 = 0;
  v86 = 0;
  v88 = 0;
  v90 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v96 = 0;
  v98 = 2;
  v99 = 0;
  v101 = 0;
  v85 = 0;
  v87 = 0;
  v89 = 0;
  v91 = 0;
  v95 = -1;
  v100 = 0;
  if ( !sub_25BB0((__int64)v57) || (v41 = sub_25EF0((__int64)v57, 0, 0, 0)) == 0 )
  {
    if ( a5 )
      sub_35470(a5);
    v41 = 0;
    goto LABEL_6;
  }
  v49 = 0;
  v53 = 0;
  v55 = 0;
  v56 = -1;
  v51 = nullptr;
  v50 = 0;
  v54 = 0;
  v52 = 0;
  v12 = sub_3FF80((__int64)v57, &v49, (__int64)&v51, (__int64 (*)())&v53, a4);
  v40 = v51;
  v36 = v52;
  if ( !v12 )
  {
    if ( !a5 )
    {
LABEL_55:
      v41 = 0;
      goto LABEL_35;
    }
LABEL_54:
    sub_35470(a5);
    goto LABEL_55;
  }
  v13 = 0;
  if ( !(_QWORD)v50 )
  {
LABEL_60:
    if ( !a5 )
      goto LABEL_55;
    goto LABEL_54;
  }
  while ( 1 )
  {
    v16 = v49 + 40 * v13;
    v17 = *(_DWORD *)(v16 + 32);
    if ( v17 )
    {
      if ( v36 >= v17 )
        break;
    }
LABEL_18:
    if ( ++v13 >= (unsigned __int64)v50 )
      goto LABEL_60;
  }
  v37 = (unsigned __int64 *)(v49 + 40 * v13);
  v43 = (const char **)&v40[3 * v17 - 3];
  v18 = sub_33F10(a1, *v43, *(const char **)(v16 + 8), a4);
  if ( v18 == -1 )
  {
    if ( a4 )
    {
      v14 = s1;
      if ( v43[1] )
        v14 = *v43;
      v15 = s1;
      if ( v37[2] )
        v15 = (const char *)v37[1];
      sub_112F0((__int64)"WARNING: could not resolve symbol '%s' from dylib '%s'!\n", v15, v14);
    }
    goto LABEL_18;
  }
  v44 = v18;
  v19 = sub_1C870((__int64)a1, *v37);
  v20 = v37;
  v21 = v44;
  v22 = (unsigned __int64 *)a1[81];
  v23 = *v37;
  v24 = &v22[21 * a1[82]];
  if ( v22 == v24 )
  {
LABEL_57:
    v25 = v19;
  }
  else
  {
    while ( v23 < *v22 || v23 >= v22[1] )
    {
      v22 += 21;
      if ( v24 == v22 )
        goto LABEL_57;
    }
    v25 = v19;
    if ( v22 )
      v25 = sub_1B650(v19, (__int64)v22);
  }
  if ( a4 )
  {
    v47 = v20;
    v45 = v25;
    v38 = v21;
    sub_112F0(
      (__int64)"0x%08llX: symbol=%s expaddr=0x%08llX, impptr(raw)=0x%08llX, impptr(clean)=0x%08llX\n",
      v23,
      (const char *)v20[1],
      v21,
      v19,
      v25);
    v20 = v47;
    v25 = v45;
    v21 = v38;
  }
  if ( v25 == -1 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  if ( (_QWORD)v54 )
  {
    v48 = v20;
    v46 = v21;
    v39 = v25;
    range = rangeset_t_find_range();
    v25 = v39;
    v21 = v46;
    v20 = v48;
    if ( range )
      goto LABEL_18;
  }
  v26 = v25 - v21;
  *a2 = v26;
  if ( a4 )
  {
    v27 = s1;
    if ( v20[2] )
      v27 = (const char *)v20[1];
    sub_112F0((__int64)"detected dyld slide for symbol '%s' : 0x%08llX\n", v27, v26);
  }
LABEL_35:
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  if ( v40 )
  {
    v28 = 0;
    v29 = v40;
    if ( v36 )
    {
      do
      {
        if ( *v29 )
        {
          v29[1] = 0;
          qfree();
        }
        ++v28;
        v29 += 3;
      }
      while ( v36 != v28 );
    }
    qfree();
  }
  v30 = v49;
  if ( v49 )
  {
    v31 = v50;
    if ( (_QWORD)v50 )
    {
      v32 = 0;
      do
      {
        v33 = v30 + 40 * v32;
        if ( *(_QWORD *)(v33 + 8) )
        {
          *(_QWORD *)(v33 + 16) = 0;
          qfree();
          v30 = v49;
        }
        ++v32;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v50 = 0;
    qfree();
  }
LABEL_6:
  sub_162E0((__int64)v57);
  close_linput();
  return v41;
}

