__int64 __fastcall sub_14A00(__int64 (__fastcall ***a1)(_QWORD, __int64, __m128i *))
{
  __int64 first_seg; // rax
  _QWORD *next_seg; // rbx
  const char *v3; // rdx
  char *v4; // rbp
  char *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 generic_linput; // rbp
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  const char *v13; // rdx
  unsigned int v14; // eax
  __int64 result; // rax
  __int64 v16; // [rsp+0h] [rbp-278h]
  unsigned int v17; // [rsp+8h] [rbp-270h]
  char *haystack; // [rsp+10h] [rbp-268h] BYREF
  __int128 v19; // [rsp+18h] [rbp-260h]
  __m128i v20; // [rsp+30h] [rbp-248h] BYREF
  __m128i si128; // [rsp+40h] [rbp-238h] BYREF
  __int64 v22; // [rsp+50h] [rbp-228h]
  int v23; // [rsp+58h] [rbp-220h]
  char v24; // [rsp+5Ch] [rbp-21Ch]
  __int64 v25; // [rsp+60h] [rbp-218h]
  char v26; // [rsp+68h] [rbp-210h]
  __int64 v27; // [rsp+78h] [rbp-200h]
  __int128 v28; // [rsp+80h] [rbp-1F8h]
  __m128i v29; // [rsp+90h] [rbp-1E8h]
  char v30; // [rsp+A0h] [rbp-1D8h]
  __m128i v31; // [rsp+A8h] [rbp-1D0h]
  __int64 v32; // [rsp+B8h] [rbp-1C0h]
  __int128 v33; // [rsp+C0h] [rbp-1B8h]
  __int16 v34; // [rsp+D0h] [rbp-1A8h]
  __int64 v35; // [rsp+F8h] [rbp-180h]
  __int128 v36; // [rsp+100h] [rbp-178h]
  __int64 v37; // [rsp+110h] [rbp-168h]
  __int128 v38; // [rsp+118h] [rbp-160h]
  __int64 v39; // [rsp+128h] [rbp-150h]
  __int128 v40; // [rsp+130h] [rbp-148h]
  __int64 v41; // [rsp+140h] [rbp-138h]
  __int128 v42; // [rsp+148h] [rbp-130h]
  __int64 v43; // [rsp+158h] [rbp-120h]
  __int128 v44; // [rsp+160h] [rbp-118h]
  __int64 v45; // [rsp+170h] [rbp-108h]
  __int128 v46; // [rsp+178h] [rbp-100h]
  __int64 v47; // [rsp+188h] [rbp-F0h]
  __int128 v48; // [rsp+190h] [rbp-E8h]
  __int64 v49; // [rsp+1A0h] [rbp-D8h]
  __int128 v50; // [rsp+1A8h] [rbp-D0h]
  __int64 v51; // [rsp+1B8h] [rbp-C0h]
  __int128 v52; // [rsp+1C0h] [rbp-B8h]
  __int64 v53; // [rsp+1D0h] [rbp-A8h]
  __int128 v54; // [rsp+1D8h] [rbp-A0h]
  __int16 v55; // [rsp+1E8h] [rbp-90h]
  char v56; // [rsp+1EAh] [rbp-8Eh]
  int v57; // [rsp+1ECh] [rbp-8Ch]
  __int128 v58; // [rsp+1F0h] [rbp-88h]
  __int64 v59; // [rsp+200h] [rbp-78h]
  __int64 v60; // [rsp+208h] [rbp-70h]
  int v61; // [rsp+210h] [rbp-68h]
  __int64 v62; // [rsp+218h] [rbp-60h]
  __int128 v63; // [rsp+220h] [rbp-58h]
  __int64 v64; // [rsp+230h] [rbp-48h]
  unsigned __int64 v65; // [rsp+238h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  first_seg = get_first_seg();
  if ( !first_seg )
    return 0;
  next_seg = (_QWORD *)first_seg;
  while ( 1 )
  {
    haystack = nullptr;
    v19 = 0;
    get_segm_name(&haystack, next_seg, 0);
    v4 = haystack;
    if ( !(_QWORD)v19 )
      goto LABEL_9;
    v5 = strstr(haystack, "HEADER");
    if ( !v5 || v5 - v4 == -1 )
      goto LABEL_9;
    v6 = *next_seg;
    v7 = getinf(20) - v6;
    v8 = operator new(0x20u);
    *(_QWORD *)v8 = off_C7408;
    *(_QWORD *)(v8 + 24) = v6;
    *(_QWORD *)(v8 + 8) = v7;
    *(_DWORD *)(v8 + 16) = 0;
    generic_linput = create_generic_linput();
    if ( !generic_linput )
      goto LABEL_8;
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_C71B8, (__m128i)(unsigned __int64)&si128);
    v22 = -1;
    v23 = 8;
    v24 = 1;
    v25 = generic_linput;
    v26 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v41 = 0;
    v43 = 0;
    v45 = 0;
    v47 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_AB140);
    v28 = 0;
    v29 = _mm_load_si128((const __m128i *)&xmmword_AB150);
    v31 = _mm_load_si128((const __m128i *)&xmmword_AB160);
    v33 = 0;
    v36 = 0;
    v38 = 0;
    v40 = 0;
    v42 = 0;
    v44 = 0;
    v46 = 0;
    v48 = 0;
    v49 = 0;
    v51 = 0;
    v53 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v64 = 0;
    v50 = 0;
    v52 = 0;
    v54 = 0;
    v58 = -1;
    v63 = 0;
    if ( !(unsigned __int8)sub_8D550(&v20) || !(unsigned __int8)sub_8D860(&v20, 0, 0, 0) )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v3 = src;
        if ( (_QWORD)v19 )
          LODWORD(v3) = (_DWORD)haystack;
        sub_88B80((unsigned int)"failed to parse macho file at %a (%s)\n", v6, (_DWORD)v3, v10, v11, v12, v16);
      }
      sub_14770((__int64)&v20);
      close_linput(generic_linput);
LABEL_8:
      v4 = haystack;
LABEL_9:
      if ( v4 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v4);
      }
      goto LABEL_11;
    }
    if ( (debug & 0x400000) != 0 )
    {
      v13 = src;
      if ( (_QWORD)v19 )
        LODWORD(v13) = (_DWORD)haystack;
      sub_88B80((unsigned int)"visiting subfile at %a (%s)\n", v6, (_DWORD)v13, v10, v11, v12, v16);
    }
    v14 = (**a1)(a1, v6, &v20);
    if ( v14 )
      break;
    sub_14770((__int64)&v20);
    close_linput(generic_linput);
    if ( haystack )
    {
      *(_QWORD *)&v19 = 0;
      qfree(haystack);
      next_seg = (_QWORD *)get_next_seg(*next_seg);
      if ( !next_seg )
        return 0;
    }
    else
    {
LABEL_11:
      next_seg = (_QWORD *)get_next_seg(*next_seg);
      if ( !next_seg )
        return 0;
    }
  }
  v17 = v14;
  sub_14770((__int64)&v20);
  close_linput(generic_linput);
  result = v17;
  if ( haystack )
  {
    *(_QWORD *)&v19 = 0;
    qfree(haystack);
    return v17;
  }
  return result;
}

