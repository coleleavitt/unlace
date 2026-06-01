unsigned __int64 __fastcall sub_3F7810(__int64 a1)
{
  int v1; // r13d
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  int v7; // esi
  int v8; // edx
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // r15d
  int v18; // r12d
  int v19; // r14d
  int v20; // edx
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // edx
  int v27; // edx
  int v28; // esi
  int v29; // edx
  int v30; // esi
  int v31; // edx
  int v32; // esi
  int v33; // edx
  int v34; // esi
  int v35; // esi
  int v36; // edx
  int v37; // esi
  int v38; // edx
  int v39; // edx
  int v40; // eax
  int v41; // esi
  int v42; // esi
  int v43; // edx
  int v44; // esi
  int v46; // r14d
  int v47; // esi
  int v48; // eax
  int v49; // esi
  int v50; // eax
  int v51; // esi
  int v52; // eax
  int v53; // esi
  int v54; // esi
  int v55; // esi
  int v56; // eax
  int v57; // esi
  int v58; // eax
  int v59; // esi
  int v60; // edx
  int v61; // eax
  __int64 *v62; // [rsp+8h] [rbp-E0h]
  __int64 *v63; // [rsp+10h] [rbp-D8h]
  __int64 *v64; // [rsp+18h] [rbp-D0h]
  __int64 *v65; // [rsp+20h] [rbp-C8h]
  __int64 *v66; // [rsp+28h] [rbp-C0h]
  int v67; // [rsp+34h] [rbp-B4h]
  int v68; // [rsp+38h] [rbp-B0h]
  char v69; // [rsp+3Fh] [rbp-A9h]
  __int64 v70; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+48h] [rbp-A0h]
  __int64 *v72; // [rsp+50h] [rbp-98h] BYREF
  __int128 v73; // [rsp+58h] [rbp-90h]
  __int64 v74; // [rsp+70h] [rbp-78h] BYREF
  __int64 v75; // [rsp+78h] [rbp-70h]
  _BYTE v76[24]; // [rsp+80h] [rbp-68h] BYREF
  __int128 v77; // [rsp+98h] [rbp-50h]
  unsigned __int64 v78; // [rsp+A8h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 4408);
  v78 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 112) = 0;
  if ( *(_QWORD *)(a1 + 120) )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree();
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v3 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree();
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v4 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree();
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v5 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree();
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v6 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree();
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v7 = *(_DWORD *)(a1 + 512);
  v8 = *(_DWORD *)(a1 + 528);
  v74 = 0;
  v75 = 0;
  sub_60440(&v74, v7, v8 - v7);
  memset(v76, 0, sizeof(v76));
  sub_60840((__int64 *)(a1 + 104), &v74);
  sub_312B30((__int64 *)(a1 + 120), (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v74 = 0;
  v75 = 0;
  sub_60440(&v74, 0, 5);
  memset(v76, 0, sizeof(v76));
  v62 = (__int64 *)(a1 + 264);
  sub_60840((__int64 *)(a1 + 264), &v74);
  v63 = (__int64 *)(a1 + 280);
  sub_312B30((__int64 *)(a1 + 280), (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v74 = 0;
  v75 = 0;
  memset(v76, 0, sizeof(v76));
  *(_QWORD *)v76 = qvector_reserve();
  *(__m128i *)(*(_QWORD *)v76 + 16LL * (*(_QWORD *)&v76[8])++) = _mm_load_si128((const __m128i *)&xmmword_411C00);
  sub_60840(v62, &v74);
  sub_312B30(v63, (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v9 = *(_DWORD *)(a1 + 480);
  v74 = 0;
  v75 = 0;
  sub_60440(&v74, v9, 1);
  memset(v76, 0, sizeof(v76));
  sub_60840(v62, &v74);
  sub_312B30(v63, (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v10 = *(_DWORD *)(a1 + 484);
  v74 = 0;
  v75 = 0;
  sub_60440(&v74, v10, 1);
  memset(v76, 0, sizeof(v76));
  sub_60840(v62, &v74);
  sub_312B30(v63, (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v11 = *(_DWORD *)(a1 + 488);
  v74 = 0;
  v75 = 0;
  sub_60440(&v74, v11, 1);
  memset(v76, 0, sizeof(v76));
  sub_60840(v62, &v74);
  sub_312B30(v63, (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v12 = *(_DWORD *)(a1 + 492);
  v74 = 0;
  v75 = 0;
  sub_60440(&v74, v12, 1);
  memset(v76, 0, sizeof(v76));
  sub_60840(v62, &v74);
  sub_312B30(v63, (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v13 = *(_DWORD *)(a1 + 496);
  v74 = 0;
  v75 = 0;
  sub_60440(&v74, v13, 1);
  memset(v76, 0, sizeof(v76));
  sub_60840(v62, &v74);
  sub_312B30(v63, (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v14 = *(_DWORD *)(a1 + 500);
  v74 = 0;
  v75 = 0;
  sub_60440(&v74, v14, 1);
  memset(v76, 0, sizeof(v76));
  sub_60840(v62, &v74);
  sub_312B30(v63, (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v15 = *(_DWORD *)(a1 + 504);
  v74 = 0;
  v75 = 0;
  sub_60440(&v74, v15, 1);
  memset(v76, 0, sizeof(v76));
  sub_60840(v62, &v74);
  sub_312B30(v63, (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v16 = *(_DWORD *)(a1 + 508);
  v74 = 0;
  v75 = 0;
  sub_60440(&v74, v16, 1);
  memset(v76, 0, sizeof(v76));
  sub_60840(v62, &v74);
  sub_312B30(v63, (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v17 = *(_DWORD *)(a1 + 364);
  v18 = *(_DWORD *)(a1 + 380);
  if ( *(_BYTE *)(a1 + 4412) )
  {
    if ( v17 <= v18 )
    {
      v18 = *(_DWORD *)(a1 + 364);
      v17 = *(_DWORD *)(a1 + 380);
    }
    if ( (v1 & 0xFFFFFFFB) != 0 )
    {
      do
      {
        v74 = 0;
        v75 = 0;
        sub_60440(&v74, v18, 4);
        memset(v76, 0, sizeof(v76));
        v65 = (__int64 *)(a1 + 144);
        sub_60840((__int64 *)(a1 + 144), &v74);
        v66 = (__int64 *)(a1 + 160);
        sub_312B30((__int64 *)(a1 + 160), (__int64 **)v76);
        if ( *(_QWORD *)v76 )
        {
          *(_QWORD *)&v76[8] = 0;
          qfree();
        }
        v18 += v1;
        qfree();
      }
      while ( v18 <= v17 );
      v69 = 0;
      v68 = 4;
      goto LABEL_41;
    }
    v61 = v18;
    v68 = 4;
    v18 = v17;
    v17 = v61;
  }
  else
  {
    v68 = v1;
    if ( v17 > v18 )
    {
      v18 = *(_DWORD *)(a1 + 364);
      v17 = *(_DWORD *)(a1 + 380);
    }
  }
  v74 = 0;
  v75 = 0;
  sub_60440(&v74, v17, v68 + v18 - v17);
  memset(v76, 0, sizeof(v76));
  v65 = (__int64 *)(a1 + 144);
  sub_60840((__int64 *)(a1 + 144), &v74);
  v66 = (__int64 *)(a1 + 160);
  sub_312B30((__int64 *)(a1 + 160), (__int64 **)v76);
  if ( *(_QWORD *)v76 )
  {
    *(_QWORD *)&v76[8] = 0;
    qfree();
  }
  qfree();
  v69 = 1;
LABEL_41:
  v74 = 0;
  v75 = 0;
  memset(v76, 0, sizeof(v76));
  v77 = 0;
  sub_CC530();
  if ( (_QWORD)v77 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&v76[16] + 4 * v77 - 4) == 43 )
      v19 = *(_DWORD *)(a1 + 432);
    else
      v19 = *(_DWORD *)(a1 + 440);
  }
  else
  {
    v19 = *(_DWORD *)(a1 + 416);
  }
  v20 = *(_DWORD *)(a1 + 420);
  v21 = v19;
  if ( v20 <= v19 )
  {
    v21 = *(_DWORD *)(a1 + 420);
    v20 = v19;
  }
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v21, v20 + 8 - v21);
  v72 = nullptr;
  v73 = 0;
  sub_60840(v65, &v70);
  sub_312B30(v66, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v22 = *(_DWORD *)(a1 + 384);
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v22, v1);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  v64 = (__int64 *)(a1 + 200);
  sub_312B30((__int64 *)(a1 + 200), &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v23 = *(_DWORD *)(a1 + 388);
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v23, v1);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  sub_312B30(v64, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v24 = *(_DWORD *)(a1 + 416);
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v24, 8);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  sub_312B30(v64, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v25 = *(_DWORD *)(a1 + 440);
  if ( v25 != v19 )
  {
    v26 = v19 + 8;
    if ( v25 >= v19 + 8 )
    {
      v25 = v19 + 8;
      v26 = *(_DWORD *)(a1 + 440);
    }
    v70 = 0;
    v71 = 0;
    sub_60440(&v70, v25, v26 + 8 - v25);
    v72 = nullptr;
    v73 = 0;
    sub_60840((__int64 *)(a1 + 184), &v70);
    sub_312B30(v64, &v72);
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      qfree();
    }
    qfree();
  }
  v27 = *(_DWORD *)(a1 + 84);
  v28 = *(_DWORD *)(a1 + 452);
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v28, v27);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  sub_312B30(v64, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v29 = *(_DWORD *)(a1 + 84);
  v30 = *(_DWORD *)(a1 + 460);
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v30, v29);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  sub_312B30(v64, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v31 = *(_DWORD *)(a1 + 84);
  v32 = *(_DWORD *)(a1 + 464);
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v32, v31);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  sub_312B30(v64, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v33 = *(_DWORD *)(a1 + 472);
  v34 = v33 + 7;
  if ( !__OFSUB__(v33, v33 + 7) )
  {
    v34 = *(_DWORD *)(a1 + 472);
    v33 += 7;
  }
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v34, v33 + 1 - v34);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  sub_312B30(v64, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v35 = *(_DWORD *)(a1 + 476);
  v36 = *(_DWORD *)(a1 + 472) + 20;
  if ( v35 >= v36 )
  {
    v35 = *(_DWORD *)(a1 + 472) + 20;
    v36 = *(_DWORD *)(a1 + 476);
  }
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v35, v36 + 1 - v35);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  sub_312B30(v64, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v37 = *(_DWORD *)(a1 + 380);
  v38 = *(_DWORD *)(a1 + 364);
  if ( v37 >= v38 )
  {
    v37 = *(_DWORD *)(a1 + 364);
    v38 = *(_DWORD *)(a1 + 380);
  }
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v37, v1 + v38 - v37);
  v72 = nullptr;
  v73 = 0;
  sub_60840(v62, &v70);
  sub_312B30(v63, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v39 = *(_DWORD *)(a1 + 420);
  if ( v39 <= v19 )
  {
    v40 = v19;
    v19 = *(_DWORD *)(a1 + 420);
    v39 = v40;
  }
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v19, v39 + 8 - v19);
  v72 = nullptr;
  v73 = 0;
  sub_60840(v62, &v70);
  sub_312B30(v63, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v67 = *(_DWORD *)(a1 + 396);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 148LL) != 2 )
  {
    v41 = *(_DWORD *)(a1 + 412);
    if ( v41 >= v67 )
    {
      v41 = *(_DWORD *)(a1 + 396);
      v67 = *(_DWORD *)(a1 + 412);
    }
    v70 = 0;
    v71 = 0;
    sub_60440(&v70, v41, v1 + v67 - v41);
    v72 = nullptr;
    v73 = 0;
    sub_60840((__int64 *)(a1 + 224), &v70);
    sub_312B30((__int64 *)(a1 + 240), &v72);
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      qfree();
    }
    qfree();
    v42 = *(_DWORD *)(a1 + 448);
    v43 = *(_DWORD *)(a1 + 444);
    if ( v42 >= v43 )
    {
      v42 = *(_DWORD *)(a1 + 444);
      v43 = *(_DWORD *)(a1 + 448);
    }
    v70 = 0;
    v71 = 0;
    sub_60440(&v70, v42, v43 + 8 - v42);
    v72 = nullptr;
    v73 = 0;
    sub_60840((__int64 *)(a1 + 224), &v70);
    sub_312B30((__int64 *)(a1 + 240), &v72);
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      qfree();
    }
    qfree();
    v44 = *(_DWORD *)(a1 + 352);
    v70 = 0;
    v71 = 0;
    sub_60440(&v70, v44, v1);
    v72 = nullptr;
    v73 = 0;
    sub_60840((__int64 *)(a1 + 184), &v70);
    sub_312B30(v64, &v72);
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      qfree();
    }
    goto LABEL_92;
  }
  v46 = *(_DWORD *)(a1 + 400);
  if ( v46 >= v67 )
  {
    v46 = *(_DWORD *)(a1 + 396);
    v67 = *(_DWORD *)(a1 + 400);
    if ( !v69 )
    {
      do
      {
LABEL_106:
        v70 = 0;
        v71 = 0;
        sub_60440(&v70, v46, v68);
        v72 = nullptr;
        v73 = 0;
        sub_60840(v65, &v70);
        sub_312B30(v66, &v72);
        if ( v72 )
        {
          *(_QWORD *)&v73 = 0;
          qfree();
        }
        v46 += v1;
        qfree();
      }
      while ( v46 <= v67 );
      v47 = *(_DWORD *)(a1 + 436);
      v48 = *(_DWORD *)(a1 + 420);
      if ( v47 < v48 )
        goto LABEL_110;
      goto LABEL_135;
    }
  }
  else if ( !v69 )
  {
    goto LABEL_106;
  }
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v46, v67 + v68 - v46);
  v72 = nullptr;
  v73 = 0;
  sub_60840(v65, &v70);
  sub_312B30(v66, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v47 = *(_DWORD *)(a1 + 436);
  v48 = *(_DWORD *)(a1 + 420);
  if ( v47 < v48 )
    goto LABEL_110;
LABEL_135:
  v60 = v47;
  v47 = v48;
  v48 = v60;
LABEL_110:
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v47, v48 + 8 - v47);
  v72 = nullptr;
  v73 = 0;
  sub_60840(v65, &v70);
  sub_312B30(v66, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v49 = *(_DWORD *)(a1 + 400);
  v50 = *(_DWORD *)(a1 + 396);
  if ( v49 >= v50 )
  {
    v49 = *(_DWORD *)(a1 + 396);
    v50 = *(_DWORD *)(a1 + 400);
  }
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v49, v1 + v50 - v49);
  v72 = nullptr;
  v73 = 0;
  sub_60840(v62, &v70);
  sub_312B30(v63, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v51 = *(_DWORD *)(a1 + 436);
  v52 = *(_DWORD *)(a1 + 420);
  if ( v51 >= v52 )
  {
    v51 = *(_DWORD *)(a1 + 420);
    v52 = *(_DWORD *)(a1 + 436);
  }
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v51, v52 + 8 - v51);
  v72 = nullptr;
  v73 = 0;
  sub_60840(v62, &v70);
  sub_312B30(v63, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v53 = *(_DWORD *)(a1 + 384);
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v53, v1);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  sub_312B30(v64, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v54 = *(_DWORD *)(a1 + 388);
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v54, v1);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  sub_312B30(v64, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v55 = *(_DWORD *)(a1 + 408);
  v56 = *(_DWORD *)(a1 + 404);
  if ( v55 >= v56 )
  {
    v55 = *(_DWORD *)(a1 + 404);
    v56 = *(_DWORD *)(a1 + 408);
  }
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v55, v1 + v56 - v55);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  sub_312B30(v64, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v57 = *(_DWORD *)(a1 + 448);
  v58 = *(_DWORD *)(a1 + 440);
  if ( v57 >= v58 )
  {
    v57 = *(_DWORD *)(a1 + 440);
    v58 = *(_DWORD *)(a1 + 448);
  }
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v57, v58 + 8 - v57);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 184), &v70);
  sub_312B30(v64, &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v59 = *(_DWORD *)(a1 + 352);
  v70 = 0;
  v71 = 0;
  sub_60440(&v70, v59, v1);
  v72 = nullptr;
  v73 = 0;
  sub_60840((__int64 *)(a1 + 224), &v70);
  sub_312B30((__int64 *)(a1 + 240), &v72);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
LABEL_92:
  qfree();
  sub_60840(v62, (__int64 *)(a1 + 184));
  sub_312B30(v63, (__int64 **)v64);
  if ( *(_QWORD *)&v76[16] )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  if ( v75 )
  {
    *(_QWORD *)v76 = 0;
    qfree();
  }
  return v78 - __readfsqword(0x28u);
}

