__int64 __fastcall sub_33790(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // esi
  __int64 (*v8)(); // rdx
  unsigned int v9; // eax
  __m128i v10; // [rsp+0h] [rbp-228h] BYREF
  __m128i v11; // [rsp+10h] [rbp-218h] BYREF
  __int64 v12; // [rsp+20h] [rbp-208h]
  int v13; // [rsp+28h] [rbp-200h]
  char v14; // [rsp+2Ch] [rbp-1FCh]
  __int64 v15; // [rsp+30h] [rbp-1F8h]
  char v16; // [rsp+38h] [rbp-1F0h]
  __int64 v17; // [rsp+48h] [rbp-1E0h]
  __int128 v18; // [rsp+50h] [rbp-1D8h]
  __m128i si128; // [rsp+60h] [rbp-1C8h]
  char v20; // [rsp+70h] [rbp-1B8h]
  __m128i v21; // [rsp+78h] [rbp-1B0h]
  __int64 v22; // [rsp+88h] [rbp-1A0h]
  __int128 v23; // [rsp+90h] [rbp-198h]
  __int16 v24; // [rsp+A0h] [rbp-188h]
  __int64 v25; // [rsp+C8h] [rbp-160h]
  __int128 v26; // [rsp+D0h] [rbp-158h]
  __int64 v27; // [rsp+E0h] [rbp-148h]
  __int128 v28; // [rsp+E8h] [rbp-140h]
  __int64 v29; // [rsp+F8h] [rbp-130h]
  __int128 v30; // [rsp+100h] [rbp-128h]
  __int64 v31; // [rsp+110h] [rbp-118h]
  __int128 v32; // [rsp+118h] [rbp-110h]
  __int64 v33; // [rsp+128h] [rbp-100h]
  __int128 v34; // [rsp+130h] [rbp-F8h]
  __int64 v35; // [rsp+140h] [rbp-E8h]
  __int128 v36; // [rsp+148h] [rbp-E0h]
  __int64 v37; // [rsp+158h] [rbp-D0h]
  __int128 v38; // [rsp+160h] [rbp-C8h]
  __int64 v39; // [rsp+170h] [rbp-B8h]
  __int128 v40; // [rsp+178h] [rbp-B0h]
  __int64 v41; // [rsp+188h] [rbp-A0h]
  __int128 v42; // [rsp+190h] [rbp-98h]
  __int64 v43; // [rsp+1A0h] [rbp-88h]
  __int128 v44; // [rsp+1A8h] [rbp-80h]
  __int16 v45; // [rsp+1B8h] [rbp-70h]
  char v46; // [rsp+1BAh] [rbp-6Eh]
  int v47; // [rsp+1BCh] [rbp-6Ch]
  __int128 v48; // [rsp+1C0h] [rbp-68h]
  __int64 v49; // [rsp+1D0h] [rbp-58h]
  __int64 v50; // [rsp+1D8h] [rbp-50h]
  int v51; // [rsp+1E0h] [rbp-48h]
  __int64 v52; // [rsp+1E8h] [rbp-40h]
  __int128 v53; // [rsp+1F0h] [rbp-38h]
  __int64 v54; // [rsp+200h] [rbp-28h]
  unsigned __int64 v55; // [rsp+208h] [rbp-20h]

  v55 = __readfsqword(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_82350);
  v13 = 8;
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_974D8, (__m128i)(unsigned __int64)&v11);
  v21 = _mm_load_si128((const __m128i *)&xmmword_82340);
  v11 = _mm_load_si128((const __m128i *)&xmmword_823B0);
  v12 = -1;
  v14 = 1;
  v15 = a2;
  v16 = 0;
  v17 = 0;
  v20 = 0;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v27 = 0;
  v18 = 0;
  v23 = 0;
  v26 = 0;
  v28 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v54 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v44 = 0;
  v48 = -1;
  v53 = 0;
  if ( !sub_31110((__int64)&v10) )
    goto LABEL_2;
  v6 = *(_DWORD *)(a1 + 16);
  if ( v6 )
  {
    v7 = -1;
    if ( v6 == 13 )
    {
      v7 = 12;
      if ( *(_BYTE *)(a1 + 24) )
        v7 = 16777228;
    }
  }
  else
  {
    v7 = 7;
    if ( *(_BYTE *)(a1 + 24) )
      v7 = 16777223;
  }
  if ( (unsigned __int8)sub_31960((__int64)&v10, v7, 0) )
  {
    LOBYTE(v9) = sub_33700((__int64)&v10, a3, v8);
    v4 = v9;
  }
  else
  {
LABEL_2:
    v4 = 0;
  }
  sub_2BAE0((__int64)&v10);
  return v4;
}

