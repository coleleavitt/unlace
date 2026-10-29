__int64 __fastcall sub_25460(__int64 a1)
{
  const char *v2; // rdi
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // r13
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 *v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // r12d
  __int64 ph; // rax
  __int64 v15; // rsi
  __m128i v16; // [rsp+0h] [rbp-508h] BYREF
  __m128i v17; // [rsp+10h] [rbp-4F8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-4E8h]
  int v19; // [rsp+28h] [rbp-4E0h]
  char v20; // [rsp+2Ch] [rbp-4DCh]
  __int64 v21; // [rsp+30h] [rbp-4D8h]
  char v22; // [rsp+38h] [rbp-4D0h]
  __int64 v23; // [rsp+48h] [rbp-4C0h]
  __int128 v24; // [rsp+50h] [rbp-4B8h]
  __m128i si128; // [rsp+60h] [rbp-4A8h]
  char v26; // [rsp+70h] [rbp-498h]
  __m128i v27; // [rsp+78h] [rbp-490h]
  __int64 v28; // [rsp+88h] [rbp-480h]
  __int128 v29; // [rsp+90h] [rbp-478h]
  __int16 v30; // [rsp+A0h] [rbp-468h]
  __int64 v31; // [rsp+C8h] [rbp-440h]
  __int128 v32; // [rsp+D0h] [rbp-438h]
  __int64 v33; // [rsp+E0h] [rbp-428h]
  __int128 v34; // [rsp+E8h] [rbp-420h]
  __int64 v35; // [rsp+F8h] [rbp-410h]
  __int128 v36; // [rsp+100h] [rbp-408h]
  __int64 v37; // [rsp+110h] [rbp-3F8h]
  __int128 v38; // [rsp+118h] [rbp-3F0h]
  __int64 v39; // [rsp+128h] [rbp-3E0h]
  __int128 v40; // [rsp+130h] [rbp-3D8h]
  __int64 v41; // [rsp+140h] [rbp-3C8h]
  __int128 v42; // [rsp+148h] [rbp-3C0h]
  __int64 v43; // [rsp+158h] [rbp-3B0h]
  __int128 v44; // [rsp+160h] [rbp-3A8h]
  __int64 v45; // [rsp+170h] [rbp-398h]
  __int128 v46; // [rsp+178h] [rbp-390h]
  __int64 v47; // [rsp+188h] [rbp-380h]
  __int128 v48; // [rsp+190h] [rbp-378h]
  __int64 v49; // [rsp+1A0h] [rbp-368h]
  __int128 v50; // [rsp+1A8h] [rbp-360h]
  __int16 v51; // [rsp+1B8h] [rbp-350h]
  char v52; // [rsp+1BAh] [rbp-34Eh]
  int v53; // [rsp+1BCh] [rbp-34Ch]
  __int128 v54; // [rsp+1C0h] [rbp-348h]
  __int64 v55; // [rsp+1D0h] [rbp-338h]
  __int64 v56; // [rsp+1D8h] [rbp-330h]
  int v57; // [rsp+1E0h] [rbp-328h]
  __int64 v58; // [rsp+1E8h] [rbp-320h]
  __int128 v59; // [rsp+1F0h] [rbp-318h]
  __int64 v60; // [rsp+200h] [rbp-308h]
  __int64 v61; // [rsp+248h] [rbp-2C0h]
  _BYTE v62[32]; // [rsp+260h] [rbp-2A8h] BYREF
  __int64 v63; // [rsp+280h] [rbp-288h]
  __int64 v64; // [rsp+288h] [rbp-280h]
  __int64 v65; // [rsp+298h] [rbp-270h]
  __int64 v66; // [rsp+2D0h] [rbp-238h]
  __int64 v67; // [rsp+2D8h] [rbp-230h]
  __int64 v68; // [rsp+380h] [rbp-188h]
  __int64 v69; // [rsp+388h] [rbp-180h]
  bool (__fastcall *v70)(__int64, int); // [rsp+450h] [rbp-B8h]
  __int64 v71; // [rsp+4A0h] [rbp-68h]
  __int64 v72; // [rsp+4A8h] [rbp-60h]
  __int64 v73; // [rsp+4B8h] [rbp-50h]
  unsigned __int64 v74; // [rsp+4D8h] [rbp-30h]

  v74 = __readfsqword(0x28u);
  v2 = src;
  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  v3 = open_linput(v2, 0);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(a1 + 24);
  if ( v4 == 18 )
  {
    sub_17FA0((__int64)v62, v3, 0);
    v70 = sub_12FB0;
    if ( (unsigned __int8)sub_18180((__int64)v62)
      && (unsigned __int8)sub_186E0((__int64)v62)
      && (unsigned __int8)sub_25030((__int64)v62) )
    {
      v5 = v65;
    }
    else
    {
      v5 = 0;
    }
    if ( v73 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
    if ( v71 )
    {
      v72 = 0;
      qfree(v71);
    }
    v7 = v68;
    if ( v68 )
    {
      v8 = v69;
      if ( v69 )
      {
        v9 = 0;
        do
        {
          v10 = (__int64 *)(v7 + 96 * v9);
          v11 = v10[3];
          if ( v11 )
          {
            v10[4] = 0;
            qfree(v11);
          }
          v12 = *v10;
          if ( *v10 )
          {
            v10[1] = 0;
            qfree(v12);
          }
          ++v9;
          v7 = v68;
        }
        while ( v8 != v9 );
      }
      v69 = 0;
      qfree(v7);
    }
    if ( v66 )
    {
      v67 = 0;
      qfree(v66);
    }
    if ( v63 )
    {
      v64 = 0;
      qfree(v63);
    }
  }
  else if ( v4 == 25 )
  {
    v20 = 1;
    v19 = 8;
    si128 = _mm_load_si128((const __m128i *)&xmmword_AB150);
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_C71B8, (__m128i)(unsigned __int64)&v17);
    v27 = _mm_load_si128((const __m128i *)&xmmword_AB160);
    v17 = _mm_load_si128((const __m128i *)&xmmword_AB140);
    v18 = -1;
    v21 = v3;
    v22 = 0;
    v23 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v41 = 0;
    v43 = 0;
    v24 = 0;
    v29 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v40 = 0;
    v42 = 0;
    v44 = 0;
    v45 = 0;
    v47 = 0;
    v49 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v60 = 0;
    v46 = 0;
    v48 = 0;
    v50 = 0;
    v54 = -1;
    v59 = 0;
    if ( !(unsigned __int8)sub_8D550(&v16) )
      goto LABEL_15;
    v13 = (unsigned __int8)getinf_flag(3, 4);
    ph = get_ph();
    v15 = (unsigned int)sub_8DEA0(&v16, *(unsigned int *)(ph + 4), v13);
    if ( !(unsigned __int8)sub_8D860(&v16, v15, 0, 0) )
      goto LABEL_15;
    sub_90070(&v16);
    if ( !(_BYTE)v51 )
      sub_90050(&v16);
    v5 = v54;
    if ( (_QWORD)v54 == -1 )
LABEL_15:
      v5 = 0;
    sub_14770((__int64)&v16);
  }
  else
  {
    v5 = 0;
    if ( v4 == 11 )
    {
      v16.m128i_i64[0] = (__int64)off_C74C8;
      v16.m128i_i64[1] = 0;
      v17 = 0;
      v5 = 0;
      if ( (unsigned __int8)sub_1AD90((__int64)&v16, v3, 1, 1) )
        v5 = v61;
      v16.m128i_i64[0] = (__int64)off_C74C8;
      if ( v16.m128i_i64[1] )
      {
        v17.m128i_i64[0] = 0;
        qfree(v16.m128i_i64[1]);
      }
    }
  }
  close_linput(v3);
  return v5;
}

