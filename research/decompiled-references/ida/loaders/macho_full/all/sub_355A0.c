__int64 __fastcall sub_355A0(
        const char *a1,
        _DWORD *a2,
        __int64 (__fastcall *a3)(__m128i *, __int64, const char *, __int64),
        __int64 a4)
{
  char v4; // al
  int v5; // r14d
  __int64 v6; // rax
  __m128i v7; // xmm4
  __int64 v9; // r15
  __m128i v10; // [rsp+0h] [rbp-2A8h] BYREF
  __int64 (__fastcall *v11)(__m128i *, __int64, const char *, __int64); // [rsp+10h] [rbp-298h]
  __int64 v12; // [rsp+18h] [rbp-290h]
  __int64 v13; // [rsp+20h] [rbp-288h] BYREF
  __int128 v14; // [rsp+28h] [rbp-280h]
  const char *v15; // [rsp+40h] [rbp-268h] BYREF
  __int128 v16; // [rsp+48h] [rbp-260h]
  __m128i v17; // [rsp+60h] [rbp-248h] BYREF
  __m128i v18; // [rsp+70h] [rbp-238h] BYREF
  __int64 v19; // [rsp+80h] [rbp-228h]
  int v20; // [rsp+88h] [rbp-220h]
  char v21; // [rsp+8Ch] [rbp-21Ch]
  __int64 v22; // [rsp+90h] [rbp-218h]
  char v23; // [rsp+98h] [rbp-210h]
  __int64 v24; // [rsp+A8h] [rbp-200h]
  __int128 v25; // [rsp+B0h] [rbp-1F8h]
  __m128i si128; // [rsp+C0h] [rbp-1E8h]
  char v27; // [rsp+D0h] [rbp-1D8h]
  __m128i v28; // [rsp+D8h] [rbp-1D0h]
  __int64 v29; // [rsp+E8h] [rbp-1C0h]
  __int128 v30; // [rsp+F0h] [rbp-1B8h]
  __int16 v31; // [rsp+100h] [rbp-1A8h]
  __int64 v32; // [rsp+128h] [rbp-180h]
  __int128 v33; // [rsp+130h] [rbp-178h]
  __int64 v34; // [rsp+140h] [rbp-168h]
  __int128 v35; // [rsp+148h] [rbp-160h]
  __int64 v36; // [rsp+158h] [rbp-150h]
  __int128 v37; // [rsp+160h] [rbp-148h]
  __int64 v38; // [rsp+170h] [rbp-138h]
  __int128 v39; // [rsp+178h] [rbp-130h]
  __int64 v40; // [rsp+188h] [rbp-120h]
  __int128 v41; // [rsp+190h] [rbp-118h]
  __int64 v42; // [rsp+1A0h] [rbp-108h]
  __int128 v43; // [rsp+1A8h] [rbp-100h]
  __int64 v44; // [rsp+1B8h] [rbp-F0h]
  __int128 v45; // [rsp+1C0h] [rbp-E8h]
  __int64 v46; // [rsp+1D0h] [rbp-D8h]
  __int128 v47; // [rsp+1D8h] [rbp-D0h]
  __int64 v48; // [rsp+1E8h] [rbp-C0h]
  __int128 v49; // [rsp+1F0h] [rbp-B8h]
  __int64 v50; // [rsp+200h] [rbp-A8h]
  __int128 v51; // [rsp+208h] [rbp-A0h]
  __int16 v52; // [rsp+218h] [rbp-90h]
  char v53; // [rsp+21Ah] [rbp-8Eh]
  int v54; // [rsp+21Ch] [rbp-8Ch]
  __int128 v55; // [rsp+220h] [rbp-88h]
  __int64 v56; // [rsp+230h] [rbp-78h]
  __int64 v57; // [rsp+238h] [rbp-70h]
  int v58; // [rsp+240h] [rbp-68h]
  __int64 v59; // [rsp+248h] [rbp-60h]
  __int128 v60; // [rsp+250h] [rbp-58h]
  __int64 v61; // [rsp+260h] [rbp-48h]
  unsigned __int64 v62; // [rsp+268h] [rbp-40h]

  v11 = a3;
  v12 = a4;
  v62 = __readfsqword(0x28u);
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_62AA0, (__m128i)(unsigned __int64)&v18);
  if ( (debug & 0x10) != 0 )
    sub_191F0((__int64)"Looking for Mach-O file at \"%s\"...\n", a1);
  v4 = qfileexist();
  if ( (debug & 0x10) == 0 )
  {
    if ( !v4 )
      return (unsigned int)-1;
LABEL_8:
    v6 = open_linput();
    if ( !v6 )
      return (unsigned int)-1;
    v7 = _mm_load_si128(&v10);
    v31 = 0;
    v19 = -1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
    v18 = _mm_load_si128((const __m128i *)&xmmword_574B0);
    v28 = _mm_load_si128((const __m128i *)&xmmword_574C0);
    v20 = 8;
    v21 = 1;
    v22 = v6;
    v23 = 1;
    v24 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v40 = 0;
    v42 = 0;
    v44 = 0;
    v17 = v7;
    v25 = 0;
    v30 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v41 = 0;
    v43 = 0;
    v45 = 0;
    v46 = 0;
    v48 = 0;
    v50 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v61 = 0;
    v47 = 0;
    v49 = 0;
    v51 = 0;
    v55 = -1;
    v60 = 0;
    if ( !sub_25BB0((__int64)&v17) )
      goto LABEL_10;
    if ( (debug & 0x10) != 0 )
    {
      v15 = nullptr;
      v16 = 0;
      sub_35530((__int64)a2, (__int64 *)&v15);
      if ( (debug & 0x10) != 0 )
        sub_191F0((__int64)"Looking for cpu=%d:%d, uuid=%s.\n", *a2, a2[1], v15);
      if ( v15 )
      {
        *(_QWORD *)&v16 = 0;
        qfree();
      }
    }
    v13 = 0;
    v14 = 0;
    if ( (unsigned __int8)sub_2A7C0(&v13, (__int64)&v17) )
    {
      v10.m128i_i64[0] = v13 + 28 * v14;
      if ( v13 != v10.m128i_i64[0] )
      {
        v9 = v13;
        while ( 1 )
        {
          if ( (debug & 0x10) != 0 )
          {
            v15 = nullptr;
            v16 = 0;
            sub_35530((__int64)a2, (__int64 *)&v15);
            if ( (debug & 0x10) != 0 )
              sub_191F0((__int64)"Candidate: cpu=%d:%d, uuid=%s.\n", *a2, a2[1], v15);
            if ( v15 )
            {
              *(_QWORD *)&v16 = 0;
              qfree();
            }
          }
          if ( *a2 == *(_DWORD *)v9 && *(_OWORD *)(v9 + 8) - *(_OWORD *)(a2 + 2) == 0 )
          {
            v5 = v11(&v17, v12, a1, v9);
            if ( v5 >= 0 )
              break;
          }
          v9 += 28;
          if ( v10.m128i_i64[0] == v9 )
            goto LABEL_41;
        }
        if ( v13 )
        {
          *(_QWORD *)&v14 = 0;
          qfree();
        }
        if ( (debug & 0x10) != 0 )
          sub_191F0((__int64)"Found, with architecture #%d\n", v5);
        goto LABEL_11;
      }
      if ( !v13 )
        goto LABEL_34;
    }
    else if ( (debug & 0x10) != 0 )
    {
      sub_191F0((__int64)"Failed retrieving archs/UUID.\n");
LABEL_41:
      if ( !v13 )
        goto LABEL_34;
    }
    else if ( !v13 )
    {
LABEL_10:
      v5 = -1;
LABEL_11:
      sub_162E0((__int64)&v17);
      return (unsigned int)v5;
    }
    *(_QWORD *)&v14 = 0;
    qfree();
LABEL_34:
    if ( (debug & 0x10) != 0 )
      sub_191F0((__int64)"No\n");
    goto LABEL_10;
  }
  if ( v4 )
  {
    sub_191F0((__int64)"File \"%s\" exists? -> %s.\n", a1, "Yes");
    goto LABEL_8;
  }
  sub_191F0((__int64)"File \"%s\" exists? -> %s.\n", a1, "No");
  return (unsigned int)-1;
}

