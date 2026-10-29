__int64 __fastcall sub_1B1A0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned int v4; // r13d
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  char v13; // al
  __int64 v14; // rbx
  __m128i v16; // [rsp+0h] [rbp-518h] BYREF
  __m128i v17; // [rsp+10h] [rbp-508h] BYREF
  __int64 v18; // [rsp+20h] [rbp-4F8h]
  int v19; // [rsp+28h] [rbp-4F0h]
  char v20; // [rsp+2Ch] [rbp-4ECh]
  __int64 v21; // [rsp+30h] [rbp-4E8h]
  char v22; // [rsp+38h] [rbp-4E0h]
  __int64 v23; // [rsp+48h] [rbp-4D0h]
  __int128 v24; // [rsp+50h] [rbp-4C8h]
  __m128i si128; // [rsp+60h] [rbp-4B8h]
  char v26; // [rsp+70h] [rbp-4A8h]
  __m128i v27; // [rsp+78h] [rbp-4A0h]
  __int64 v28; // [rsp+88h] [rbp-490h]
  __int128 v29; // [rsp+90h] [rbp-488h]
  __int16 v30; // [rsp+A0h] [rbp-478h]
  __int64 v31; // [rsp+C8h] [rbp-450h]
  __int128 v32; // [rsp+D0h] [rbp-448h]
  __int64 v33; // [rsp+E0h] [rbp-438h]
  __int128 v34; // [rsp+E8h] [rbp-430h]
  __int64 v35; // [rsp+F8h] [rbp-420h]
  __int128 v36; // [rsp+100h] [rbp-418h]
  __int64 v37; // [rsp+110h] [rbp-408h]
  __int128 v38; // [rsp+118h] [rbp-400h]
  __int64 v39; // [rsp+128h] [rbp-3F0h]
  __int128 v40; // [rsp+130h] [rbp-3E8h]
  __int64 v41; // [rsp+140h] [rbp-3D8h]
  __int128 v42; // [rsp+148h] [rbp-3D0h]
  __int64 v43; // [rsp+158h] [rbp-3C0h]
  __int128 v44; // [rsp+160h] [rbp-3B8h]
  __int64 v45; // [rsp+170h] [rbp-3A8h]
  __int128 v46; // [rsp+178h] [rbp-3A0h]
  __int64 v47; // [rsp+188h] [rbp-390h]
  __int128 v48; // [rsp+190h] [rbp-388h]
  __int64 v49; // [rsp+1A0h] [rbp-378h]
  __int128 v50; // [rsp+1A8h] [rbp-370h]
  __int16 v51; // [rsp+1B8h] [rbp-360h]
  char v52; // [rsp+1BAh] [rbp-35Eh]
  int v53; // [rsp+1BCh] [rbp-35Ch]
  __int128 v54; // [rsp+1C0h] [rbp-358h]
  __int64 v55; // [rsp+1D0h] [rbp-348h]
  __int64 v56; // [rsp+1D8h] [rbp-340h]
  int v57; // [rsp+1E0h] [rbp-338h]
  __int64 v58; // [rsp+1E8h] [rbp-330h]
  __int128 v59; // [rsp+1F0h] [rbp-328h]
  __int64 v60; // [rsp+200h] [rbp-318h]
  _BYTE v61[32]; // [rsp+260h] [rbp-2B8h] BYREF
  __int64 v62; // [rsp+280h] [rbp-298h]
  __int64 v63; // [rsp+288h] [rbp-290h]
  __int64 v64; // [rsp+2D0h] [rbp-248h]
  __int64 v65; // [rsp+2D8h] [rbp-240h]
  __int64 v66; // [rsp+380h] [rbp-198h]
  __int64 v67; // [rsp+388h] [rbp-190h]
  __int64 v68; // [rsp+4A0h] [rbp-78h]
  __int64 v69; // [rsp+4A8h] [rbp-70h]
  __int64 v70; // [rsp+4B8h] [rbp-60h]
  unsigned __int64 v71; // [rsp+4D8h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v2 = open_linput(a1, 0);
  if ( v2 )
  {
    v3 = v2;
    sub_17FA0((__int64)v61, v2, 0);
    if ( (unsigned __int8)sub_18180((__int64)v61) && (unsigned __int8)sub_186E0((__int64)v61) )
      v4 = 18;
    else
      v4 = -1;
    if ( v70 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70);
    if ( v68 )
    {
      v69 = 0;
      qfree(v68);
    }
    v5 = v66;
    if ( v66 )
    {
      v6 = v67;
      if ( v67 )
      {
        v7 = 0;
        do
        {
          v8 = (__int64 *)(v5 + 96 * v7);
          v9 = v8[3];
          if ( v9 )
          {
            v8[4] = 0;
            qfree(v9);
          }
          v10 = *v8;
          if ( *v8 )
          {
            v8[1] = 0;
            qfree(v10);
          }
          ++v7;
          v5 = v66;
        }
        while ( v6 != v7 );
      }
      v67 = 0;
      qfree(v5);
    }
    if ( v64 )
    {
      v65 = 0;
      qfree(v64);
    }
    if ( v62 )
    {
      v63 = 0;
      qfree(v62);
    }
    close_linput(v3);
  }
  else
  {
    v4 = -1;
  }
  v11 = open_linput(a1, 0);
  v12 = v11;
  if ( v11 )
  {
    v16.m128i_i64[0] = (__int64)off_C74C8;
    v16.m128i_i64[1] = 0;
    v17 = 0;
    v13 = sub_1AD90((__int64)&v16, v11, 0, 1);
    v16.m128i_i64[0] = (__int64)off_C74C8;
    if ( v13 )
      v4 = 11;
    if ( v16.m128i_i64[1] )
    {
      v17.m128i_i64[0] = 0;
      qfree(v16.m128i_i64[1]);
    }
    close_linput(v12);
  }
  v14 = open_linput(a1, 0);
  if ( v14 )
  {
    v20 = 1;
    v19 = 8;
    si128 = _mm_load_si128((const __m128i *)&xmmword_AB150);
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_C71B8, (__m128i)(unsigned __int64)&v17);
    v27 = _mm_load_si128((const __m128i *)&xmmword_AB160);
    v17 = _mm_load_si128((const __m128i *)&xmmword_AB140);
    v18 = -1;
    v21 = v14;
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
    if ( (unsigned __int8)sub_8D550(&v16) )
      v4 = 25;
    sub_14770((__int64)&v16);
    close_linput(v14);
  }
  return v4;
}

