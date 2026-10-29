__int64 __fastcall sub_21580(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__m128i *, __int64, __int64, __int64),
        __int64 a4)
{
  char v4; // al
  int v5; // r14d
  __int64 v6; // rax
  __m128i v7; // xmm4
  __int64 v9; // r15
  __int64 v10; // rdi
  __m128i v11; // [rsp+0h] [rbp-2A8h] BYREF
  __int64 (__fastcall *v12)(__m128i *, __int64, __int64, __int64); // [rsp+10h] [rbp-298h]
  __int64 v13; // [rsp+18h] [rbp-290h]
  __int64 v14; // [rsp+20h] [rbp-288h] BYREF
  __int128 v15; // [rsp+28h] [rbp-280h]
  __int64 v16; // [rsp+40h] [rbp-268h] BYREF
  __int128 v17; // [rsp+48h] [rbp-260h]
  __m128i v18; // [rsp+60h] [rbp-248h] BYREF
  __m128i v19; // [rsp+70h] [rbp-238h] BYREF
  __int64 v20; // [rsp+80h] [rbp-228h]
  int v21; // [rsp+88h] [rbp-220h]
  char v22; // [rsp+8Ch] [rbp-21Ch]
  __int64 v23; // [rsp+90h] [rbp-218h]
  char v24; // [rsp+98h] [rbp-210h]
  __int64 v25; // [rsp+A8h] [rbp-200h]
  __int128 v26; // [rsp+B0h] [rbp-1F8h]
  __m128i si128; // [rsp+C0h] [rbp-1E8h]
  char v28; // [rsp+D0h] [rbp-1D8h]
  __m128i v29; // [rsp+D8h] [rbp-1D0h]
  __int64 v30; // [rsp+E8h] [rbp-1C0h]
  __int128 v31; // [rsp+F0h] [rbp-1B8h]
  __int16 v32; // [rsp+100h] [rbp-1A8h]
  __int64 v33; // [rsp+128h] [rbp-180h]
  __int128 v34; // [rsp+130h] [rbp-178h]
  __int64 v35; // [rsp+140h] [rbp-168h]
  __int128 v36; // [rsp+148h] [rbp-160h]
  __int64 v37; // [rsp+158h] [rbp-150h]
  __int128 v38; // [rsp+160h] [rbp-148h]
  __int64 v39; // [rsp+170h] [rbp-138h]
  __int128 v40; // [rsp+178h] [rbp-130h]
  __int64 v41; // [rsp+188h] [rbp-120h]
  __int128 v42; // [rsp+190h] [rbp-118h]
  __int64 v43; // [rsp+1A0h] [rbp-108h]
  __int128 v44; // [rsp+1A8h] [rbp-100h]
  __int64 v45; // [rsp+1B8h] [rbp-F0h]
  __int128 v46; // [rsp+1C0h] [rbp-E8h]
  __int64 v47; // [rsp+1D0h] [rbp-D8h]
  __int128 v48; // [rsp+1D8h] [rbp-D0h]
  __int64 v49; // [rsp+1E8h] [rbp-C0h]
  __int128 v50; // [rsp+1F0h] [rbp-B8h]
  __int64 v51; // [rsp+200h] [rbp-A8h]
  __int128 v52; // [rsp+208h] [rbp-A0h]
  __int16 v53; // [rsp+218h] [rbp-90h]
  char v54; // [rsp+21Ah] [rbp-8Eh]
  int v55; // [rsp+21Ch] [rbp-8Ch]
  __int128 v56; // [rsp+220h] [rbp-88h]
  __int64 v57; // [rsp+230h] [rbp-78h]
  __int64 v58; // [rsp+238h] [rbp-70h]
  int v59; // [rsp+240h] [rbp-68h]
  __int64 v60; // [rsp+248h] [rbp-60h]
  __int128 v61; // [rsp+250h] [rbp-58h]
  __int64 v62; // [rsp+260h] [rbp-48h]
  unsigned __int64 v63; // [rsp+268h] [rbp-40h]

  v12 = a3;
  v13 = a4;
  v63 = __readfsqword(0x28u);
  v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_C71B8, (__m128i)(unsigned __int64)&v19);
  if ( (debug & 0x10) != 0 )
    sub_16DD0((__int64)"Looking for Mach-O file at \"%s\"...\n");
  v4 = qfileexist(a1);
  if ( (debug & 0x10) == 0 )
  {
    if ( !v4 )
      return (unsigned int)-1;
LABEL_8:
    v6 = open_linput(a1, 0);
    if ( !v6 )
      return (unsigned int)-1;
    v7 = _mm_load_si128(&v11);
    v32 = 0;
    v20 = -1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_AB150);
    v19 = _mm_load_si128((const __m128i *)&xmmword_AB140);
    v29 = _mm_load_si128((const __m128i *)&xmmword_AB160);
    v21 = 8;
    v22 = 1;
    v23 = v6;
    v24 = 1;
    v25 = 0;
    v28 = 0;
    v30 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v41 = 0;
    v43 = 0;
    v45 = 0;
    v18 = v7;
    v26 = 0;
    v31 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v40 = 0;
    v42 = 0;
    v44 = 0;
    v46 = 0;
    v47 = 0;
    v49 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v62 = 0;
    v48 = 0;
    v50 = 0;
    v52 = 0;
    v56 = -1;
    v61 = 0;
    if ( !(unsigned __int8)sub_8D550(&v18) )
      goto LABEL_10;
    if ( (debug & 0x10) != 0 )
    {
      v16 = 0;
      v17 = 0;
      sub_213D0((unsigned __int8 *)a2, &v16);
      if ( (debug & 0x10) != 0 )
        sub_16DD0((__int64)"Looking for cpu=%d:%d, uuid=%s.\n");
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16);
      }
    }
    v14 = 0;
    v15 = 0;
    if ( (unsigned __int8)sub_19D40(&v14, (__int64)&v18) )
    {
      v11.m128i_i64[0] = v14 + 28 * v15;
      if ( v14 != v11.m128i_i64[0] )
      {
        v9 = v14;
        while ( 1 )
        {
          if ( (debug & 0x10) != 0 )
          {
            v16 = 0;
            v17 = 0;
            sub_213D0((unsigned __int8 *)a2, &v16);
            if ( (debug & 0x10) != 0 )
              sub_16DD0((__int64)"Candidate: cpu=%d:%d, uuid=%s.\n");
            if ( v16 )
            {
              *(_QWORD *)&v17 = 0;
              qfree(v16);
            }
          }
          if ( *(_DWORD *)a2 == *(_DWORD *)v9 && *(_OWORD *)(v9 + 8) - *(_OWORD *)(a2 + 8) == 0 )
          {
            v5 = v12(&v18, v13, a1, v9);
            if ( v5 >= 0 )
              break;
          }
          v9 += 28;
          if ( v11.m128i_i64[0] == v9 )
            goto LABEL_41;
        }
        if ( v14 )
        {
          *(_QWORD *)&v15 = 0;
          qfree(v14);
        }
        if ( (debug & 0x10) != 0 )
          sub_16DD0((__int64)"Found, with architecture #%d\n");
        goto LABEL_11;
      }
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(v14);
      }
      goto LABEL_34;
    }
    if ( (debug & 0x10) != 0 )
    {
      sub_16DD0((__int64)"Failed retrieving archs/UUID.\n");
LABEL_41:
      v10 = v14;
      if ( !v14 )
        goto LABEL_34;
    }
    else
    {
      v10 = v14;
      if ( !v14 )
      {
LABEL_10:
        v5 = -1;
LABEL_11:
        sub_14770((__int64)&v18);
        return (unsigned int)v5;
      }
    }
    *(_QWORD *)&v15 = 0;
    qfree(v10);
LABEL_34:
    if ( (debug & 0x10) != 0 )
      sub_16DD0((__int64)"No\n");
    goto LABEL_10;
  }
  if ( v4 )
  {
    sub_16DD0((__int64)"File \"%s\" exists? -> %s.\n");
    goto LABEL_8;
  }
  sub_16DD0((__int64)"File \"%s\" exists? -> %s.\n");
  return (unsigned int)-1;
}

