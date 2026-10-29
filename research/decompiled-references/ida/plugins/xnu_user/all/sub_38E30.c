__int64 __fastcall sub_38E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  int v6; // r12d
  __int64 (*v7)(); // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+0h] [rbp-268h] BYREF
  __int128 v11; // [rsp+8h] [rbp-260h]
  __int64 v12; // [rsp+18h] [rbp-250h]
  char v13; // [rsp+20h] [rbp-248h]
  __m128i v14; // [rsp+30h] [rbp-238h] BYREF
  __m128i v15; // [rsp+40h] [rbp-228h] BYREF
  __int64 v16; // [rsp+50h] [rbp-218h]
  int v17; // [rsp+58h] [rbp-210h]
  char v18; // [rsp+5Ch] [rbp-20Ch]
  __int64 v19; // [rsp+60h] [rbp-208h]
  char v20; // [rsp+68h] [rbp-200h]
  __int64 v21; // [rsp+78h] [rbp-1F0h]
  __int128 v22; // [rsp+80h] [rbp-1E8h]
  __m128i si128; // [rsp+90h] [rbp-1D8h]
  char v24; // [rsp+A0h] [rbp-1C8h]
  __m128i v25; // [rsp+A8h] [rbp-1C0h]
  __int64 v26; // [rsp+B8h] [rbp-1B0h]
  __int128 v27; // [rsp+C0h] [rbp-1A8h]
  __int16 v28; // [rsp+D0h] [rbp-198h]
  __int64 v29; // [rsp+F8h] [rbp-170h]
  __int128 v30; // [rsp+100h] [rbp-168h]
  __int64 v31; // [rsp+110h] [rbp-158h]
  __int128 v32; // [rsp+118h] [rbp-150h]
  __int64 v33; // [rsp+128h] [rbp-140h]
  __int128 v34; // [rsp+130h] [rbp-138h]
  __int64 v35; // [rsp+140h] [rbp-128h]
  __int128 v36; // [rsp+148h] [rbp-120h]
  __int64 v37; // [rsp+158h] [rbp-110h]
  __int128 v38; // [rsp+160h] [rbp-108h]
  __int64 v39; // [rsp+170h] [rbp-F8h]
  __int128 v40; // [rsp+178h] [rbp-F0h]
  __int64 v41; // [rsp+188h] [rbp-E0h]
  __int128 v42; // [rsp+190h] [rbp-D8h]
  __int64 v43; // [rsp+1A0h] [rbp-C8h]
  __int128 v44; // [rsp+1A8h] [rbp-C0h]
  __int64 v45; // [rsp+1B8h] [rbp-B0h]
  __int128 v46; // [rsp+1C0h] [rbp-A8h]
  __int64 v47; // [rsp+1D0h] [rbp-98h]
  __int128 v48; // [rsp+1D8h] [rbp-90h]
  __int16 v49; // [rsp+1E8h] [rbp-80h]
  char v50; // [rsp+1EAh] [rbp-7Eh]
  int v51; // [rsp+1ECh] [rbp-7Ch]
  __int128 v52; // [rsp+1F0h] [rbp-78h]
  __int64 v53; // [rsp+200h] [rbp-68h]
  __int64 v54; // [rsp+208h] [rbp-60h]
  int v55; // [rsp+210h] [rbp-58h]
  __int64 v56; // [rsp+218h] [rbp-50h]
  __int128 v57; // [rsp+220h] [rbp-48h]
  __int64 v58; // [rsp+230h] [rbp-38h]
  unsigned __int64 v59; // [rsp+238h] [rbp-30h]

  v59 = __readfsqword(0x28u);
  v18 = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_82350);
  v28 = 0;
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_974D8, (__m128i)(unsigned __int64)&v15);
  v25 = _mm_load_si128((const __m128i *)&xmmword_82340);
  v15 = _mm_load_si128((const __m128i *)&xmmword_823B0);
  v16 = -1;
  v17 = 8;
  v19 = a2;
  v20 = 0;
  v21 = 0;
  v24 = 0;
  v26 = 0;
  v22 = 0;
  v27 = 0;
  v29 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v58 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v52 = -1;
  v57 = 0;
  if ( v5 )
  {
    v6 = -1;
    if ( v5 == 13 )
    {
      v6 = 12;
      if ( *(_BYTE *)(a1 + 24) )
        v6 = 16777228;
    }
  }
  else
  {
    v6 = 7;
    if ( *(_BYTE *)(a1 + 24) )
      v6 = 16777223;
  }
  v8 = sub_368C0((__int64)&v14, a4, a3, v6);
  if ( (_BYTE)v8 && (*(_BYTE *)(a4 + 8) & 4) != 0 )
  {
    v10 = 0;
    v12 = 0;
    v13 = 0;
    v11 = 0;
    sub_378E0(&v14, (__int64)&v10, (__int64 (*)())((char *)&dword_0 + 1), v7);
    if ( v12 )
    {
      sub_2B9C0(&v10, (_QWORD *)a4, v6);
      if ( v13 )
      {
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
  }
  sub_2BAE0((__int64)&v14);
  return v8;
}

