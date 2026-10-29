unsigned __int64 __fastcall sub_3F3D50(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  int v8; // eax
  int v9; // esi
  int v10; // r12d
  int v11; // esi
  int v12; // edx
  int v13; // eax
  unsigned int v14; // edx
  int v16; // esi
  int v17; // edx
  int v18; // esi
  int v19; // edx
  int v20; // eax
  int v21; // esi
  int i; // r12d
  int v23; // esi
  int v24; // esi
  __int64 *v25; // [rsp+8h] [rbp-90h]
  __int64 **v26; // [rsp+20h] [rbp-78h]
  __int64 *v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h] BYREF
  __int64 v29; // [rsp+38h] [rbp-60h]
  __int64 *v30; // [rsp+40h] [rbp-58h] BYREF
  __int128 v31; // [rsp+48h] [rbp-50h]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  sub_3F3A80(a1, a2);
  v3 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 112) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree();
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v4 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree();
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v5 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree();
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v6 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree();
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v7 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree();
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v8 = *(_DWORD *)(a1 + 632);
  v9 = *(_DWORD *)(a1 + 620);
  v28 = 0;
  v29 = 0;
  sub_63880(&v28, v9, v8 + 16 - v9);
  v30 = nullptr;
  v31 = 0;
  sub_63C80((__int64 *)(a1 + 104), &v28);
  sub_317070((__int64 *)(a1 + 120), &v30);
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  qfree();
  if ( *(_DWORD *)(a1 + 80) == 8 )
  {
    v23 = *(_DWORD *)(a1 + 480);
    v28 = 0;
    v29 = 0;
    sub_63880(&v28, v23, 8);
    v30 = nullptr;
    v31 = 0;
    sub_63C80((__int64 *)(a1 + 104), &v28);
    sub_317070((__int64 *)(a1 + 120), &v30);
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    qfree();
  }
  v28 = 0;
  v29 = 0;
  sub_63880(&v28, 0, 5);
  v30 = nullptr;
  v31 = 0;
  sub_63C80((__int64 *)(a1 + 264), &v28);
  sub_317070((__int64 *)(a1 + 280), &v30);
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  qfree();
  v28 = 0;
  v29 = 0;
  v30 = nullptr;
  v31 = 0;
  v30 = (__int64 *)qvector_reserve();
  *(__m128i *)&v30[2 * v31] = _mm_load_si128((const __m128i *)&xmmword_41F900);
  *(_QWORD *)&v31 = v31 + 1;
  sub_63C80((__int64 *)(a1 + 264), &v28);
  sub_317070((__int64 *)(a1 + 280), &v30);
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  qfree();
  v10 = *(_DWORD *)(a1 + 80);
  if ( v10 == 8 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 148LL) )
    {
      v25 = (__int64 *)(a1 + 144);
      sub_3F10F0(a1, (__int64 *)(a1 + 144), *(_DWORD *)(a1 + 356), 16, 8);
      v11 = *(_DWORD *)(a1 + 488);
      v12 = *(_DWORD *)(a1 + 552);
      v28 = 0;
      v29 = 0;
      sub_63880(&v28, v11, v12 - v11);
      v30 = nullptr;
      v31 = 0;
      sub_63C80((__int64 *)(a1 + 144), &v28);
      v26 = (__int64 **)(a1 + 160);
      sub_317070((__int64 *)(a1 + 160), &v30);
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      qfree();
      v27 = (__int64 *)(a1 + 184);
      sub_3F10F0(a1, (__int64 *)(a1 + 184), *(_DWORD *)(a1 + 420), 2, 8);
      sub_3F10F0(a1, (__int64 *)(a1 + 184), *(_DWORD *)(a1 + 432), 7, 8);
      sub_3F10F0(a1, (__int64 *)(a1 + 184), *(_DWORD *)(a1 + 460), 2, 8);
      sub_3F10F0(a1, (__int64 *)(a1 + 184), *(_DWORD *)(a1 + 476), 1, 8);
      sub_3F10F0(a1, (__int64 *)(a1 + 224), *(_DWORD *)(a1 + 468), 1, 8);
    }
    else
    {
      v27 = (__int64 *)(a1 + 184);
      sub_3F10F0(a1, (__int64 *)(a1 + 184), *(_DWORD *)(a1 + 420), 2, 8);
      sub_3F10F0(a1, (__int64 *)(a1 + 224), *(_DWORD *)(a1 + 432), 10, 8);
      sub_3F10F0(a1, (__int64 *)(a1 + 184), *(_DWORD *)(a1 + 476), 1, 8);
      v16 = *(_DWORD *)(a1 + 520);
      v17 = *(_DWORD *)(a1 + 552);
      v28 = 0;
      v29 = 0;
      sub_63880(&v28, v16, v17 - v16);
      v30 = nullptr;
      v31 = 0;
      sub_63C80((__int64 *)(a1 + 224), &v28);
      sub_317070((__int64 *)(a1 + 240), &v30);
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      qfree();
      v25 = (__int64 *)(a1 + 144);
      sub_3F10F0(a1, (__int64 *)(a1 + 144), *(_DWORD *)(a1 + 356), 8, 8);
      sub_3F10F0(a1, (__int64 *)(a1 + 144), *(_DWORD *)(a1 + 388), 1, 8);
      v18 = *(_DWORD *)(a1 + 488);
      v19 = *(_DWORD *)(a1 + 520);
      v28 = 0;
      v29 = 0;
      sub_63880(&v28, v18, v19 - v18);
      v30 = nullptr;
      v31 = 0;
      sub_63C80((__int64 *)(a1 + 144), &v28);
      v26 = (__int64 **)(a1 + 160);
      sub_317070((__int64 *)(a1 + 160), &v30);
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      qfree();
      sub_3F10F0(a1, (__int64 *)(a1 + 264), *(_DWORD *)(a1 + 392), 7, 8);
      v20 = *(_DWORD *)(a1 + 612);
      v21 = *(_DWORD *)(a1 + 552);
      v28 = 0;
      v29 = 0;
      sub_63880(&v28, v21, v20 + 16 - v21);
      v30 = nullptr;
      v31 = 0;
      sub_63C80((__int64 *)(a1 + 264), &v28);
      sub_317070((__int64 *)(a1 + 280), &v30);
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      qfree();
      for ( i = *(_DWORD *)(a1 + 520); *(_DWORD *)(a1 + 548) >= i; i += 16 )
      {
        v28 = 0;
        v29 = 0;
        sub_63880(&v28, i, 8);
        v30 = nullptr;
        v31 = 0;
        sub_63C80((__int64 *)(a1 + 224), &v28);
        sub_317070((__int64 *)(a1 + 240), &v30);
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree();
        }
        qfree();
      }
    }
  }
  else
  {
    v25 = (__int64 *)(a1 + 144);
    sub_3F10F0(a1, (__int64 *)(a1 + 144), *(_DWORD *)(a1 + 356), 4, v10);
    v26 = (__int64 **)(a1 + 160);
    if ( (unsigned __int8)getinf_flag() )
    {
      v24 = *(_DWORD *)(a1 + 488);
      v28 = 0;
      v29 = 0;
      sub_63880(&v28, v24, 64);
      v30 = nullptr;
      v31 = 0;
      sub_63C80(v25, &v28);
      v26 = (__int64 **)(a1 + 160);
      sub_317070((__int64 *)(a1 + 160), &v30);
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      qfree();
    }
    v27 = (__int64 *)(a1 + 184);
    sub_3F10F0(a1, (__int64 *)(a1 + 184), *(_DWORD *)(a1 + 404), 1, v10);
    sub_3F10F0(a1, (__int64 *)(a1 + 224), *(_DWORD *)(a1 + 372), 8, v10);
    sub_3F10F0(a1, (__int64 *)(a1 + 184), *(_DWORD *)(a1 + 412), 1, v10);
  }
  sub_63C80((__int64 *)(a1 + 264), v25);
  sub_317070((__int64 *)(a1 + 280), v26);
  sub_63C80((__int64 *)(a1 + 264), v27);
  sub_317070((__int64 *)(a1 + 280), (__int64 **)(a1 + 200));
  v13 = *(_DWORD *)(a1 + 652);
  v14 = *(_DWORD *)(a1 + 616);
  *(_DWORD *)(a1 + 72) = v13;
  *(_DWORD *)(a1 + 56) = v14;
  *(_DWORD *)(a1 + 52) = v14;
  *(_QWORD *)(a1 + 64) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128((v13 + 31) & 0xFFFFFFE0)).m128i_u64[0];
  return v32 - __readfsqword(0x28u);
}

