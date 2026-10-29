unsigned __int64 __fastcall sub_12FE0(_QWORD *a1, _QWORD *a2, int a3, __int64 a4)
{
  int v5; // r15d
  __int64 v6; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 (*v19)(); // rcx
  _QWORD *v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rbp
  unsigned int i; // r14d
  const char *v26; // rsi
  const char *v27; // rdi
  unsigned int v28; // ebp
  _QWORD *v29; // r13
  __int64 v30; // rbp
  __int64 *v31; // rbx
  __int64 v32; // rdi
  __int64 v34; // [rsp+8h] [rbp-2B0h]
  _QWORD *v35; // [rsp+10h] [rbp-2A8h]
  _QWORD *v36; // [rsp+18h] [rbp-2A0h]
  _QWORD *v37; // [rsp+20h] [rbp-298h]
  __int64 *v38; // [rsp+28h] [rbp-290h]
  __int64 v39; // [rsp+30h] [rbp-288h]
  __int64 v40; // [rsp+38h] [rbp-280h]
  int v41; // [rsp+4Ch] [rbp-26Ch] BYREF
  _QWORD *v42; // [rsp+50h] [rbp-268h] BYREF
  __int64 v43; // [rsp+58h] [rbp-260h]
  _QWORD v44[2]; // [rsp+70h] [rbp-248h] BYREF
  __m128i v45; // [rsp+80h] [rbp-238h]
  __int64 v46; // [rsp+90h] [rbp-228h]
  int v47; // [rsp+98h] [rbp-220h]
  char v48; // [rsp+9Ch] [rbp-21Ch]
  __int64 v49; // [rsp+A0h] [rbp-218h]
  char v50; // [rsp+A8h] [rbp-210h]
  __int64 v51; // [rsp+B8h] [rbp-200h]
  __int128 v52; // [rsp+C0h] [rbp-1F8h]
  __m128i si128; // [rsp+D0h] [rbp-1E8h]
  char v54; // [rsp+E0h] [rbp-1D8h]
  __m128i v55; // [rsp+E8h] [rbp-1D0h]
  __int64 v56; // [rsp+F8h] [rbp-1C0h]
  __int128 v57; // [rsp+100h] [rbp-1B8h]
  __int16 v58; // [rsp+110h] [rbp-1A8h]
  __int64 v59; // [rsp+138h] [rbp-180h]
  __int128 v60; // [rsp+140h] [rbp-178h]
  __int64 v61; // [rsp+150h] [rbp-168h]
  __int128 v62; // [rsp+158h] [rbp-160h]
  __int64 v63; // [rsp+168h] [rbp-150h]
  __int128 v64; // [rsp+170h] [rbp-148h]
  __int64 v65; // [rsp+180h] [rbp-138h]
  __int128 v66; // [rsp+188h] [rbp-130h]
  __int64 v67; // [rsp+198h] [rbp-120h]
  __int128 v68; // [rsp+1A0h] [rbp-118h]
  __int64 v69; // [rsp+1B0h] [rbp-108h]
  __int128 v70; // [rsp+1B8h] [rbp-100h]
  __int64 v71; // [rsp+1C8h] [rbp-F0h]
  __int128 v72; // [rsp+1D0h] [rbp-E8h]
  __int64 v73; // [rsp+1E0h] [rbp-D8h]
  __int128 v74; // [rsp+1E8h] [rbp-D0h]
  __int64 v75; // [rsp+1F8h] [rbp-C0h]
  __int128 v76; // [rsp+200h] [rbp-B8h]
  __int64 v77; // [rsp+210h] [rbp-A8h]
  __int128 v78; // [rsp+218h] [rbp-A0h]
  __int16 v79; // [rsp+228h] [rbp-90h]
  char v80; // [rsp+22Ah] [rbp-8Eh]
  int v81; // [rsp+22Ch] [rbp-8Ch]
  __int128 v82; // [rsp+230h] [rbp-88h]
  __int64 v83; // [rsp+240h] [rbp-78h]
  __int64 v84; // [rsp+248h] [rbp-70h]
  int v85; // [rsp+250h] [rbp-68h]
  __int64 v86; // [rsp+258h] [rbp-60h]
  __int128 v87; // [rsp+260h] [rbp-58h]
  __int64 v88; // [rsp+270h] [rbp-48h]
  unsigned __int64 v89; // [rsp+278h] [rbp-40h]

  v41 = a3;
  v89 = __readfsqword(0x28u);
  if ( !a2 || a3 < 0 || a3 >= (int)a1[70] )
    return v89 - __readfsqword(0x28u);
  v5 = a1[70];
  v6 = a2[2];
  v8 = a1;
  v9 = a2;
  v10 = a2 + 1;
  if ( v6 )
  {
    v11 = a2 + 1;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v6 + 16);
        v13 = *(_QWORD *)(v6 + 24);
        if ( a3 <= *(_DWORD *)(v6 + 32) )
          break;
        v6 = *(_QWORD *)(v6 + 24);
        if ( !v13 )
          goto LABEL_9;
      }
      v11 = (_QWORD *)v6;
      v6 = *(_QWORD *)(v6 + 16);
    }
    while ( v12 );
LABEL_9:
    if ( v11 != v10 && a3 >= *((_DWORD *)v11 + 8) )
      return v89 - __readfsqword(0x28u);
  }
  sub_12EC0(v9, &v41);
  if ( !a4 )
    return v89 - __readfsqword(0x28u);
  v14 = sub_9D00((__int64)v8, a3);
  v15 = *v8;
  v16 = v14;
  v17 = v8[87];
  si128 = _mm_load_si128((const __m128i *)&xmmword_19130);
  v44[0] = &off_1E278;
  v44[1] = v15;
  v45 = _mm_load_si128((const __m128i *)&xmmword_19120);
  v55 = _mm_load_si128((const __m128i *)&xmmword_19140);
  v46 = -1;
  v47 = 8;
  v48 = 1;
  v49 = v16;
  v50 = 0;
  v51 = 0;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v52 = 0;
  v57 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v71 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v83 = 0;
  v84 = v17;
  v85 = 2;
  v86 = 0;
  v88 = 0;
  v72 = 0;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v82 = -1;
  v87 = 0;
  if ( !sub_D760((__int64)v44) )
    goto LABEL_35;
  v18 = qlsize(v16);
  if ( !sub_DA70((__int64)v44, 0, v18, 1) )
    goto LABEL_35;
  sub_113C0((__int64)&v42, v44, nullptr, v19);
  close_linput(v16);
  v20 = v42;
  v40 = v43;
  v38 = v42;
  v35 = &v42[3 * v43];
  if ( v35 == v42 )
    goto LABEL_29;
  v21 = -1;
  if ( a4 != -1 )
    v21 = a4 - 1;
  v39 = v21;
  while ( v5 <= 0 )
  {
    v20 += 3;
    if ( v35 == v20 )
      goto LABEL_29;
  }
LABEL_19:
  v36 = v8;
  v37 = v9;
  v22 = v20;
  v34 = v8[75];
  while ( 2 )
  {
    v23 = v34;
    v24 = v22[1];
    for ( i = 0; i != v5; ++i )
    {
      if ( *(_QWORD *)(v23 + 8) )
      {
        v26 = *(const char **)v23;
        v27 = byte_190C8;
        if ( !v24 )
          goto LABEL_22;
      }
      else
      {
        if ( !v24 )
        {
LABEL_28:
          v28 = i;
          v29 = v22;
          v8 = v36;
          v9 = v37;
          sub_12FE0(v36, v37, v28, v39);
          v20 = v29 + 3;
          if ( v35 != v20 )
            goto LABEL_19;
          goto LABEL_29;
        }
        v26 = byte_190C8;
      }
      v27 = (const char *)*v22;
LABEL_22:
      if ( !strcmp(v27, v26) )
        goto LABEL_28;
      v23 += 24;
    }
    v22 += 3;
    if ( v35 != v22 )
      continue;
    break;
  }
LABEL_29:
  if ( v38 )
  {
    v30 = 0;
    v31 = v38;
    if ( v40 )
    {
      do
      {
        v32 = *v31;
        if ( *v31 )
        {
          v31[1] = 0;
          qfree(v32);
        }
        ++v30;
        v31 += 3;
      }
      while ( v40 != v30 );
    }
    qfree(v38);
  }
LABEL_35:
  sub_6B00((__int64)v44);
  return v89 - __readfsqword(0x28u);
}

