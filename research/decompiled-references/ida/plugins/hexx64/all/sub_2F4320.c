unsigned __int64 __fastcall sub_2F4320(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // r15
  __m128i v6; // xmm0
  __int64 v7; // rdx
  __m128i v8; // xmm0
  int v9; // edx
  __int64 v10; // rdx
  __m128i v11; // xmm0
  int v12; // edx
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v17; // [rsp+28h] [rbp-280h] BYREF
  __int64 v18; // [rsp+38h] [rbp-270h]
  _BYTE v19[8]; // [rsp+40h] [rbp-268h] BYREF
  __int128 v20; // [rsp+48h] [rbp-260h]
  _QWORD v21[2]; // [rsp+60h] [rbp-248h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp-238h] BYREF
  _QWORD v23[2]; // [rsp+80h] [rbp-228h] BYREF
  int v24; // [rsp+90h] [rbp-218h]
  int v25; // [rsp+98h] [rbp-210h]
  char v26; // [rsp+A0h] [rbp-208h]
  __m128i v27; // [rsp+A8h] [rbp-200h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-1F0h]
  _BYTE v29[8]; // [rsp+C0h] [rbp-1E8h] BYREF
  __int128 v30; // [rsp+C8h] [rbp-1E0h]
  _QWORD v31[2]; // [rsp+E0h] [rbp-1C8h] BYREF
  _QWORD v32[2]; // [rsp+F0h] [rbp-1B8h] BYREF
  _QWORD v33[2]; // [rsp+100h] [rbp-1A8h] BYREF
  int v34; // [rsp+110h] [rbp-198h]
  int v35; // [rsp+118h] [rbp-190h]
  int v36; // [rsp+120h] [rbp-188h]
  __int64 v37; // [rsp+128h] [rbp-180h]
  __int64 (__fastcall **v38)(); // [rsp+130h] [rbp-178h] BYREF
  __m128i v39; // [rsp+138h] [rbp-170h]
  __int64 v40; // [rsp+148h] [rbp-160h]
  _BYTE v41[8]; // [rsp+150h] [rbp-158h] BYREF
  __int128 v42; // [rsp+158h] [rbp-150h]
  _QWORD v43[2]; // [rsp+170h] [rbp-138h] BYREF
  _QWORD v44[2]; // [rsp+180h] [rbp-128h] BYREF
  _QWORD v45[2]; // [rsp+190h] [rbp-118h] BYREF
  int v46; // [rsp+1A0h] [rbp-108h]
  int v47; // [rsp+1A8h] [rbp-100h]
  char v48; // [rsp+1B0h] [rbp-F8h]
  __m128i v49; // [rsp+1B8h] [rbp-F0h]
  __int64 v50; // [rsp+1C8h] [rbp-E0h]
  _BYTE v51[8]; // [rsp+1D0h] [rbp-D8h] BYREF
  __int128 v52; // [rsp+1D8h] [rbp-D0h]
  _QWORD v53[2]; // [rsp+1F0h] [rbp-B8h] BYREF
  _QWORD v54[2]; // [rsp+200h] [rbp-A8h] BYREF
  _QWORD v55[2]; // [rsp+210h] [rbp-98h] BYREF
  int v56; // [rsp+220h] [rbp-88h]
  int v57; // [rsp+228h] [rbp-80h]
  int v58; // [rsp+230h] [rbp-78h]
  __int64 v59; // [rsp+238h] [rbp-70h]
  _BYTE v60[40]; // [rsp+240h] [rbp-68h] BYREF
  unsigned __int64 v61; // [rsp+268h] [rbp-40h]

  v5 = a3 + 32;
  v6 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v7 = *(_QWORD *)(a3 + 24);
  v61 = __readfsqword(0x28u);
  v18 = v7;
  v17 = v6;
  v21[0] = 0xFFFFFFFF00000000LL;
  v21[1] = 0;
  v22[0] = 0xFFFFFFFF00000000LL;
  v22[1] = 0;
  v23[0] = 0xFFFFFFFF00000000LL;
  v23[1] = 0;
  v20 = 0;
  sub_1253A0((__int64)v19, v5);
  v8 = _mm_loadu_si128((const __m128i *)(a3 + 136));
  v24 = *(_DWORD *)(a3 + 112);
  v9 = *(_DWORD *)(a3 + 120);
  v27 = v8;
  v25 = v9;
  LOBYTE(v9) = *(_BYTE *)(a3 + 128);
  v31[1] = 0;
  v26 = v9;
  v10 = *(_QWORD *)(a3 + 152);
  v32[1] = 0;
  v28 = v10;
  v31[0] = 0xFFFFFFFF00000000LL;
  v32[0] = 0xFFFFFFFF00000000LL;
  v33[0] = 0xFFFFFFFF00000000LL;
  v33[1] = 0;
  v30 = 0;
  sub_1253A0((__int64)v29, a3 + 160);
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v34 = *(_DWORD *)(a3 + 240);
  v12 = *(_DWORD *)(a3 + 248);
  *(__m128i *)(a3 + 8) = v11;
  v35 = v12;
  v36 = *(_DWORD *)(a3 + 256);
  v37 = *(_QWORD *)(a3 + 264);
  *(_DWORD *)(a3 + 24) = *(_DWORD *)(a1 + 24);
  sub_1253A0(v5, a1 + 32);
  *(_DWORD *)(a3 + 112) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a3 + 120) = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(a3 + 128) = *(_BYTE *)(a1 + 128);
  *(__m128i *)(a3 + 136) = _mm_loadu_si128((const __m128i *)(a1 + 136));
  *(_DWORD *)(a3 + 152) = *(_DWORD *)(a1 + 152);
  sub_1253A0(a3 + 160, a1 + 160);
  *(_DWORD *)(a3 + 240) = *(_DWORD *)(a1 + 240);
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a1 + 248);
  *(_DWORD *)(a3 + 256) = *(_DWORD *)(a1 + 256);
  *(_QWORD *)(a3 + 264) = *(_QWORD *)(a1 + 264);
  sub_2CE1F0((__int64)v60, a4);
  v13 = _mm_loadu_si128(&v17);
  v38 = off_4E1460;
  v40 = v18;
  v39 = v13;
  v43[0] = 0xFFFFFFFF00000000LL;
  v43[1] = 0;
  v44[0] = 0xFFFFFFFF00000000LL;
  v44[1] = 0;
  v45[0] = 0xFFFFFFFF00000000LL;
  v45[1] = 0;
  v42 = 0;
  sub_1253A0((__int64)v41, (__int64)v19);
  v53[1] = 0;
  v14 = _mm_loadu_si128(&v27);
  v54[1] = 0;
  v46 = v24;
  v49 = v14;
  v47 = v25;
  v55[1] = 0;
  v48 = v26;
  v52 = 0;
  v50 = v28;
  v53[0] = 0xFFFFFFFF00000000LL;
  v54[0] = 0xFFFFFFFF00000000LL;
  v55[0] = 0xFFFFFFFF00000000LL;
  sub_1253A0((__int64)v51, (__int64)v29);
  v38 = off_4E2CB0;
  v56 = v34;
  v57 = v35;
  v58 = v36;
  v59 = v37;
  sub_2F3540(a1, 0, 0xF0F0F0F0F0F0F0F1LL * ((a2 - a1) >> 4), (__int64)&v38, (__int64)v60);
  v38 = off_4E1460;
  sub_11CDA0((__int64)v55);
  sub_11CDA0((__int64)v54);
  sub_11CDA0((__int64)v53);
  sub_11CDA0((__int64)v45);
  sub_11CDA0((__int64)v44);
  sub_11CDA0((__int64)v43);
  sub_66C50((__int64)v60);
  sub_11CDA0((__int64)v33);
  sub_11CDA0((__int64)v32);
  sub_11CDA0((__int64)v31);
  sub_11CDA0((__int64)v23);
  sub_11CDA0((__int64)v22);
  sub_11CDA0((__int64)v21);
  return v61 - __readfsqword(0x28u);
}

