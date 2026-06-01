__int64 __fastcall sub_10440(__int64 a1, __m128i *a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v15; // [rsp+10h] [rbp-258h]
  __m128i *v16; // [rsp+18h] [rbp-250h]
  _QWORD v17[2]; // [rsp+20h] [rbp-248h] BYREF
  __m128i si128; // [rsp+30h] [rbp-238h]
  __int64 v19; // [rsp+40h] [rbp-228h]
  int v20; // [rsp+48h] [rbp-220h]
  char v21; // [rsp+4Ch] [rbp-21Ch]
  __int64 v22; // [rsp+50h] [rbp-218h]
  char v23; // [rsp+58h] [rbp-210h]
  __int64 v24; // [rsp+68h] [rbp-200h]
  __int128 v25; // [rsp+70h] [rbp-1F8h]
  __m128i v26; // [rsp+80h] [rbp-1E8h]
  char v27; // [rsp+90h] [rbp-1D8h]
  __m128i v28; // [rsp+98h] [rbp-1D0h]
  __int64 v29; // [rsp+A8h] [rbp-1C0h]
  __int128 v30; // [rsp+B0h] [rbp-1B8h]
  __int16 v31; // [rsp+C0h] [rbp-1A8h]
  __int64 v32; // [rsp+E8h] [rbp-180h]
  __int128 v33; // [rsp+F0h] [rbp-178h]
  __int64 v34; // [rsp+100h] [rbp-168h]
  __int128 v35; // [rsp+108h] [rbp-160h]
  __int64 v36; // [rsp+118h] [rbp-150h]
  __int128 v37; // [rsp+120h] [rbp-148h]
  __int64 v38; // [rsp+130h] [rbp-138h]
  __int128 v39; // [rsp+138h] [rbp-130h]
  __int64 v40; // [rsp+148h] [rbp-120h]
  __int128 v41; // [rsp+150h] [rbp-118h]
  __int64 v42; // [rsp+160h] [rbp-108h]
  __int128 v43; // [rsp+168h] [rbp-100h]
  __int64 v44; // [rsp+178h] [rbp-F0h]
  __int128 v45; // [rsp+180h] [rbp-E8h]
  __int64 v46; // [rsp+190h] [rbp-D8h]
  __int128 v47; // [rsp+198h] [rbp-D0h]
  __int64 v48; // [rsp+1A8h] [rbp-C0h]
  __int128 v49; // [rsp+1B0h] [rbp-B8h]
  __int64 v50; // [rsp+1C0h] [rbp-A8h]
  __int128 v51; // [rsp+1C8h] [rbp-A0h]
  __int16 v52; // [rsp+1D8h] [rbp-90h]
  char v53; // [rsp+1DAh] [rbp-8Eh]
  int v54; // [rsp+1DCh] [rbp-8Ch]
  __int128 v55; // [rsp+1E0h] [rbp-88h]
  __int64 v56; // [rsp+1F0h] [rbp-78h]
  __int64 v57; // [rsp+1F8h] [rbp-70h]
  int v58; // [rsp+200h] [rbp-68h]
  __int64 v59; // [rsp+208h] [rbp-60h]
  __int128 v60; // [rsp+210h] [rbp-58h]
  __int64 v61; // [rsp+220h] [rbp-48h]
  unsigned __int64 v62; // [rsp+228h] [rbp-40h]

  v16 = a2;
  v62 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a3 + 632);
  if ( (int)v4 > 0 )
  {
    v6 = 0;
    v15 = (unsigned int)(v4 - 1);
    while ( 1 )
    {
      if ( *a4 && (unsigned __int8)callui(27, a2, &callui) )
        return 0;
      v7 = sub_9E80(a3, v6);
      if ( !v7 )
        break;
      v8 = *(_QWORD *)(a1 + 112);
      v9 = *(_QWORD *)(a1 + 24);
      v10 = *(_QWORD *)(v8 + 696);
      v17[0] = &off_1E278;
      v17[1] = v9;
      v19 = -1;
      v20 = 8;
      v21 = 1;
      v22 = v7;
      v23 = 0;
      v24 = 0;
      v27 = 0;
      v29 = 0;
      v31 = 0;
      v32 = 0;
      v34 = 0;
      v36 = 0;
      v38 = 0;
      v40 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_19120);
      v25 = 0;
      v26 = _mm_load_si128((const __m128i *)&xmmword_19130);
      v28 = _mm_load_si128((const __m128i *)&xmmword_19140);
      v30 = 0;
      v33 = 0;
      v35 = 0;
      v37 = 0;
      v39 = 0;
      v41 = 0;
      v42 = 0;
      v44 = 0;
      v46 = 0;
      v48 = 0;
      v50 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v56 = 0;
      v57 = v10;
      v58 = 6;
      v59 = 0;
      v61 = v8;
      v43 = 0;
      v45 = 0;
      v47 = 0;
      v49 = 0;
      v51 = 0;
      v55 = -1;
      v60 = 0;
      if ( sub_D760((__int64)v17) )
      {
        v11 = qlsize(v7);
        if ( sub_DA70((__int64)v17, 0, v11, 1) )
        {
          a2 = v16;
          if ( !(unsigned __int8)sub_FEC0(a1, v16, (__int64)v17, 1, (unsigned int)v6, a4) )
          {
            sub_6B00((__int64)v17);
            close_linput(v7);
            return 0;
          }
          sub_6B00((__int64)v17);
          close_linput(v7);
          goto LABEL_10;
        }
      }
      a2 = (__m128i *)(unsigned int)v6;
      sub_CA10((__int64)"Warning: failed to parse header for branch island %d (%a)\n", v6, 0.0);
      sub_6B00((__int64)v17);
      close_linput(v7);
      v12 = v6 + 1;
      if ( v15 == v6 )
        return 1;
LABEL_11:
      v6 = v12;
    }
    a2 = (__m128i *)(unsigned int)v6;
    sub_CA10((__int64)"Warning: failed to create branch island: %d\n", v6);
LABEL_10:
    v12 = v6 + 1;
    if ( v15 == v6 )
      return 1;
    goto LABEL_11;
  }
  return 1;
}
