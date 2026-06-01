unsigned __int64 __fastcall sub_3E6460(__int64 a1, double a2)
{
  unsigned int v3; // edx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  int v9; // esi
  int v10; // edx
  int v11; // esi
  int v12; // edx
  int v13; // esi
  int v14; // edx
  int v15; // esi
  int v16; // edx
  int v17; // esi
  int v18; // esi
  int v19; // edx
  int v20; // esi
  int v21; // edx
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // esi
  int v30; // edx
  int v31; // esi
  int v32; // eax
  int v33; // esi
  int v34; // edx
  int v35; // eax
  int v36; // esi
  int v37; // edx
  int v38; // eax
  int v39; // esi
  int v40; // edx
  int v41; // eax
  int v42; // esi
  int v43; // edx
  int v44; // eax
  __int64 *v46; // [rsp+8h] [rbp-90h]
  __int64 *v47; // [rsp+10h] [rbp-88h]
  __int64 *v48; // [rsp+18h] [rbp-80h]
  __int64 v49; // [rsp+30h] [rbp-68h] BYREF
  __int64 v50; // [rsp+38h] [rbp-60h]
  __int64 *v51; // [rsp+40h] [rbp-58h] BYREF
  __int128 v52; // [rsp+48h] [rbp-50h]
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  sub_3E63C0(a1, a2);
  v3 = *(_DWORD *)(a1 + 504);
  v4 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 68) = _mm_unpacklo_epi32(_mm_cvtsi32_si128((v3 + 31) & 0xFFFFFFE0), _mm_cvtsi32_si128(v3)).m128i_u64[0];
  if ( v4 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree();
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v5 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree();
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v6 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree();
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v7 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree();
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v8 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree();
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v9 = *(_DWORD *)(a1 + 488);
  v10 = *(_DWORD *)(a1 + 504);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v9, v10 - v9);
  v51 = nullptr;
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 104), &v49);
  sub_3113F0((__int64 *)(a1 + 120), &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, 0, 5);
  v51 = nullptr;
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 264), &v49);
  v46 = (__int64 *)(a1 + 280);
  sub_3113F0((__int64 *)(a1 + 280), &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v11 = *(_DWORD *)(a1 + 520);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v11, 1);
  v51 = nullptr;
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 264), &v49);
  sub_3113F0(v46, &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v49 = 0;
  v50 = 0;
  v51 = nullptr;
  v52 = 0;
  v51 = (__int64 *)qvector_reserve();
  *(__m128i *)&v51[2 * v52] = _mm_load_si128((const __m128i *)&xmmword_400180);
  *(_QWORD *)&v52 = v52 + 1;
  sub_5F800((__int64 *)(a1 + 264), &v49);
  sub_3113F0(v46, &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v12 = *(_DWORD *)(a1 + 80);
  v13 = *(_DWORD *)(a1 + 480);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v13, v12);
  v51 = nullptr;
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v49);
  sub_3113F0((__int64 *)(a1 + 200), &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v14 = *(_DWORD *)(a1 + 80);
  v15 = *(_DWORD *)(a1 + 484);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v15, v14);
  v51 = nullptr;
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v49);
  sub_3113F0((__int64 *)(a1 + 200), &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v16 = *(_DWORD *)(a1 + 80);
  v17 = **(_DWORD **)(a1 + 528);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v17, v16);
  v51 = nullptr;
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 104), &v49);
  sub_3113F0((__int64 *)(a1 + 120), &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v18 = *(_DWORD *)(a1 + 356);
  v19 = *(_DWORD *)(a1 + 80);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v18, v19);
  v51 = nullptr;
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v49);
  sub_3113F0((__int64 *)(a1 + 200), &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v20 = *(_DWORD *)(a1 + 364);
  v21 = *(_DWORD *)(a1 + 80);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v20, v21);
  v51 = nullptr;
  v47 = (__int64 *)(a1 + 224);
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 224), &v49);
  v48 = (__int64 *)(a1 + 240);
  sub_3113F0((__int64 *)(a1 + 240), &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v22 = *(_DWORD *)(a1 + 80);
  v23 = *(_DWORD *)(a1 + 376);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v23, 4 * v22);
  v51 = nullptr;
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 144), &v49);
  sub_3113F0((__int64 *)(a1 + 160), &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v24 = *(_DWORD *)(a1 + 80);
  v25 = *(_DWORD *)(a1 + 392);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v25, 2 * v24);
  v51 = nullptr;
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v49);
  sub_3113F0((__int64 *)(a1 + 200), &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v26 = *(_DWORD *)(a1 + 80);
  v27 = *(_DWORD *)(a1 + 400);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v27, 8 * v26);
  v51 = nullptr;
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v49);
  sub_3113F0((__int64 *)(a1 + 200), &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v28 = *(_DWORD *)(a1 + 80);
  v29 = *(_DWORD *)(a1 + 432);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v29, 10 * v28);
  v51 = nullptr;
  v52 = 0;
  sub_5F800(v47, &v49);
  sub_3113F0(v48, &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  v30 = *(_DWORD *)(a1 + 80);
  v31 = **(_DWORD **)(a1 + 560);
  v49 = 0;
  v50 = 0;
  sub_5F400(&v49, v31, v30);
  v51 = nullptr;
  v52 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v49);
  sub_3113F0((__int64 *)(a1 + 200), &v51);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  if ( *(_DWORD *)(get_ph() + 4) != 55 )
  {
    if ( !under_debugger )
      sub_37CFE0(0, 0.0);
    BUG();
  }
  v32 = sub_CB3B0();
  v33 = *(_DWORD *)(a1 + 360);
  v34 = *(_DWORD *)(a1 + 80);
  v49 = 0;
  v50 = 0;
  if ( v32 == 2 )
  {
    sub_5F400(&v49, v33, v34);
    v51 = nullptr;
    v52 = 0;
    sub_5F800(v47, &v49);
    sub_3113F0(v48, &v51);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree();
    }
  }
  else
  {
    sub_5F400(&v49, v33, v34);
    v51 = nullptr;
    v52 = 0;
    sub_5F800((__int64 *)(a1 + 184), &v49);
    sub_3113F0((__int64 *)(a1 + 200), &v51);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree();
    }
  }
  qfree();
  if ( *(_DWORD *)(get_ph() + 4) != 55 )
    sub_3E4090(0.0);
  v35 = sub_CB3B0();
  v36 = **(_DWORD **)(a1 + 536);
  v37 = *(_DWORD *)(a1 + 80);
  v49 = 0;
  v50 = 0;
  if ( v35 == 2 )
  {
    sub_5F400(&v49, v36, v37);
    v51 = nullptr;
    v52 = 0;
    sub_5F800(v47, &v49);
    sub_3113F0(v48, &v51);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree();
    }
  }
  else
  {
    sub_5F400(&v49, v36, v37);
    v51 = nullptr;
    v52 = 0;
    sub_5F800((__int64 *)(a1 + 184), &v49);
    sub_3113F0((__int64 *)(a1 + 200), &v51);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree();
    }
  }
  qfree();
  if ( *(_DWORD *)(get_ph() + 4) != 55 )
    sub_3E40B0(0.0);
  v38 = sub_CB3B0();
  v39 = **(_DWORD **)(a1 + 544);
  v40 = *(_DWORD *)(a1 + 80);
  v49 = 0;
  v50 = 0;
  if ( v38 == 2 )
  {
    sub_5F400(&v49, v39, v40);
    v51 = nullptr;
    v52 = 0;
    sub_5F800(v47, &v49);
    sub_3113F0(v48, &v51);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree();
    }
  }
  else
  {
    sub_5F400(&v49, v39, v40);
    v51 = nullptr;
    v52 = 0;
    sub_5F800((__int64 *)(a1 + 184), &v49);
    sub_3113F0((__int64 *)(a1 + 200), &v51);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree();
    }
  }
  qfree();
  if ( *(_DWORD *)(get_ph() + 4) != 55 )
    sub_3E40D0(0.0);
  v41 = sub_CB3B0();
  v42 = **(_DWORD **)(a1 + 552);
  v43 = *(_DWORD *)(a1 + 80);
  v49 = 0;
  v50 = 0;
  if ( v41 == 2 )
  {
    sub_5F400(&v49, v42, v43);
    v51 = nullptr;
    v52 = 0;
    sub_5F800(v47, &v49);
    sub_3113F0(v48, &v51);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree();
    }
  }
  else
  {
    sub_5F400(&v49, v42, v43);
    v51 = nullptr;
    v52 = 0;
    sub_5F800((__int64 *)(a1 + 184), &v49);
    sub_3113F0((__int64 *)(a1 + 200), &v51);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree();
    }
  }
  qfree();
  sub_5F800((__int64 *)(a1 + 264), (__int64 *)(a1 + 144));
  sub_3113F0(v46, (__int64 **)(a1 + 160));
  sub_5F800((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
  sub_3113F0(v46, (__int64 **)(a1 + 200));
  v44 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 52) = v44;
  *(_DWORD *)(a1 + 56) = v44;
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 364);
  return v53 - __readfsqword(0x28u);
}

