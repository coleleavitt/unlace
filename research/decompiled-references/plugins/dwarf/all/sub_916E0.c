__int64 __fastcall sub_916E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  const char *v12; // rdi
  __int64 v13; // r14
  const char *v14; // rsi
  unsigned int v15; // ebx
  char v17; // al
  unsigned int v18; // eax
  unsigned int v19; // esi
  const char *v20; // rsi
  const char *v21; // rdx
  __int64 ph; // [rsp+8h] [rbp-2B0h]
  unsigned int v23; // [rsp+8h] [rbp-2B0h]
  __m128i v24; // [rsp+10h] [rbp-2A8h] BYREF
  __int64 v25; // [rsp+20h] [rbp-298h]
  int v26; // [rsp+28h] [rbp-290h]
  unsigned int v27; // [rsp+2Ch] [rbp-28Ch]
  __int64 v28; // [rsp+30h] [rbp-288h]
  __int64 v29; // [rsp+38h] [rbp-280h]
  __int128 v30; // [rsp+40h] [rbp-278h]
  __int64 v31; // [rsp+50h] [rbp-268h]
  __int16 v32; // [rsp+58h] [rbp-260h]
  char v33; // [rsp+60h] [rbp-258h]
  __m128i v34; // [rsp+70h] [rbp-248h] BYREF
  __m128i v35; // [rsp+80h] [rbp-238h] BYREF
  __int64 v36; // [rsp+90h] [rbp-228h]
  int v37; // [rsp+98h] [rbp-220h]
  char v38; // [rsp+9Ch] [rbp-21Ch]
  __int64 v39; // [rsp+A0h] [rbp-218h]
  char v40; // [rsp+A8h] [rbp-210h]
  __int64 v41; // [rsp+B8h] [rbp-200h]
  __int128 v42; // [rsp+C0h] [rbp-1F8h]
  __m128i si128; // [rsp+D0h] [rbp-1E8h]
  char v44; // [rsp+E0h] [rbp-1D8h]
  __m128i v45; // [rsp+E8h] [rbp-1D0h]
  __int64 v46; // [rsp+F8h] [rbp-1C0h]
  __int128 v47; // [rsp+100h] [rbp-1B8h]
  __int16 v48; // [rsp+110h] [rbp-1A8h]
  int v49; // [rsp+120h] [rbp-198h]
  __int64 v50; // [rsp+138h] [rbp-180h]
  __int128 v51; // [rsp+140h] [rbp-178h]
  __int64 v52; // [rsp+150h] [rbp-168h]
  __int128 v53; // [rsp+158h] [rbp-160h]
  __int64 v54; // [rsp+168h] [rbp-150h]
  __int128 v55; // [rsp+170h] [rbp-148h]
  __int64 v56; // [rsp+180h] [rbp-138h]
  __int128 v57; // [rsp+188h] [rbp-130h]
  __int64 v58; // [rsp+198h] [rbp-120h]
  __int128 v59; // [rsp+1A0h] [rbp-118h]
  __int64 v60; // [rsp+1B0h] [rbp-108h]
  __int128 v61; // [rsp+1B8h] [rbp-100h]
  __int64 v62; // [rsp+1C8h] [rbp-F0h]
  __int128 v63; // [rsp+1D0h] [rbp-E8h]
  __int64 v64; // [rsp+1E0h] [rbp-D8h]
  __int128 v65; // [rsp+1E8h] [rbp-D0h]
  __int64 v66; // [rsp+1F8h] [rbp-C0h]
  __int128 v67; // [rsp+200h] [rbp-B8h]
  __int64 v68; // [rsp+210h] [rbp-A8h]
  __int128 v69; // [rsp+218h] [rbp-A0h]
  __int16 v70; // [rsp+228h] [rbp-90h]
  char v71; // [rsp+22Ah] [rbp-8Eh]
  int v72; // [rsp+22Ch] [rbp-8Ch]
  __int128 v73; // [rsp+230h] [rbp-88h]
  __int64 v74; // [rsp+240h] [rbp-78h]
  __int64 v75; // [rsp+248h] [rbp-70h]
  int v76; // [rsp+250h] [rbp-68h]
  __int64 v77; // [rsp+258h] [rbp-60h]
  __int128 v78; // [rsp+260h] [rbp-58h]
  __int64 v79; // [rsp+270h] [rbp-48h]
  unsigned __int64 v80; // [rsp+278h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
    sub_88B80((__int64)"Relocating section %llu (%s).\n", a2, *(const char **)(a1[13] + 120 * (a2 - 1) + 16));
  v6 = a1[39];
  if ( !v6 )
    goto LABEL_43;
  v7 = a1[38];
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = v7 + 72 * v9;
    if ( a2 == *(_QWORD *)(v10 + 64) )
      break;
    v8 = (unsigned int)(v8 + 1);
    v9 = (int)v8;
    if ( (int)v8 >= v6 )
      goto LABEL_43;
  }
  if ( !v10 )
    goto LABEL_43;
  v11 = *a1;
  if ( !*a1 || *(_DWORD *)(v11 + 8) != 1 )
  {
    sub_1D740((__int64)"Invalid input source.\n", v7, v8);
    return 1;
  }
  v12 = src;
  if ( *(_QWORD *)(v11 + 24) )
    v12 = *(const char **)(v11 + 16);
  v13 = open_linput(v12, 0);
  if ( !v13 )
  {
    v20 = src;
    if ( *(_QWORD *)(v11 + 24) )
      v20 = *(const char **)(v11 + 16);
    sub_1D740((__int64)"Couldn't open file: %s.\n", v20);
    return 1;
  }
  v36 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_AB150);
  v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_C71B8, (__m128i)(unsigned __int64)&v35);
  v45 = _mm_load_si128((const __m128i *)&xmmword_AB160);
  v35 = _mm_load_si128((const __m128i *)&xmmword_AB140);
  v37 = 8;
  v38 = 1;
  v39 = v13;
  v40 = 0;
  v41 = 0;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v42 = 0;
  v47 = 0;
  v51 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v79 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v73 = -1;
  v78 = 0;
  if ( sub_8D550((__int64)&v34) )
  {
    ph = get_ph();
    v17 = getinf_flag(3, 4);
    v18 = sub_8DEA0((__int64)&v34, *(_DWORD *)(ph + 4), v17);
    v19 = v18;
    if ( v18 == -1 || (v23 = v18, v19 = v18, !sub_8D860((__int64)&v34, v18, 0, 0)) )
    {
      v21 = src;
      if ( *(_QWORD *)(v11 + 24) )
        v21 = *(const char **)(v11 + 16);
      sub_1D740((__int64)"Failed to select Mach-O subfile #%d from: %s\n", v19, v21);
      goto LABEL_17;
    }
    if ( v45.m128i_i64[0] != -1 )
    {
      if ( v49 == 1 )
      {
        if ( !(_BYTE)v70 )
          sub_8FDF0((__int64)&v34);
        v25 = v10;
        v26 = (unsigned __int16)a2;
        v28 = a4;
        v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_C9420, (__m128i)(unsigned __int64)&v34);
        v27 = 0;
        v29 = 0;
        v31 = 0;
        v32 = 0;
        v33 = 0;
        v30 = 0;
        sub_91280((__int64)&v34, (void (__fastcall ***)(__int64, __int64, __int64 *, int))&v24);
        v15 = v27;
        v24.m128i_i64[0] = (__int64)off_C9420;
        if ( (_BYTE)v32 && v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          qfree(v29);
        }
      }
      else
      {
        if ( (debug & 0x400000) != 0 )
          sub_88B80((__int64)"File is not relocatable; skipping relocations.\n", v23);
        v15 = 0;
      }
      goto LABEL_18;
    }
    sub_7F5A0(&v34);
LABEL_43:
    if ( !under_debugger )
      interr(721);
    BUG();
  }
  v14 = src;
  if ( *(_QWORD *)(v11 + 24) )
    v14 = *(const char **)(v11 + 16);
  sub_1D740((__int64)"Failed to read Mach-O header from: %s\n", v14);
LABEL_17:
  v15 = 1;
LABEL_18:
  sub_14770((__int64)&v34);
  close_linput(v13);
  return v15;
}
