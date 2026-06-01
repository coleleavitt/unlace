__int64 __fastcall sub_3E4D90(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  int v6; // eax
  int v7; // r13d
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h]
  __int64 *v11; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-50h]
  unsigned __int64 v13; // [rsp+48h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 112) = 0;
  if ( *(_QWORD *)(a1 + 120) )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree();
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v2 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree();
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v3 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree();
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v4 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree();
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v5 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree();
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v6 = *(_DWORD *)(a1 + 64);
  v9 = 0;
  v10 = 0;
  sub_5D900(&v9, 272, v6 - 272);
  v11 = nullptr;
  v12 = 0;
  sub_5DD00((__int64 *)(a1 + 104), &v9);
  sub_30F930((__int64 *)(a1 + 120), &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  qfree();
  v9 = 0;
  v10 = 0;
  sub_5D900(&v9, 0, 5);
  v11 = nullptr;
  v12 = 0;
  sub_5DD00((__int64 *)(a1 + 264), &v9);
  sub_30F930((__int64 *)(a1 + 280), &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  qfree();
  v9 = 0;
  v10 = 0;
  v11 = nullptr;
  v12 = 0;
  v11 = (__int64 *)qvector_reserve();
  *(__m128i *)&v11[2 * v12] = _mm_load_si128((const __m128i *)&xmmword_3FA120);
  *(_QWORD *)&v12 = v12 + 1;
  sub_5DD00((__int64 *)(a1 + 264), &v9);
  sub_30F930((__int64 *)(a1 + 280), &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  qfree();
  v9 = 0;
  v10 = 0;
  sub_5D900(&v9, 7, 1);
  v11 = nullptr;
  v12 = 0;
  sub_5DD00((__int64 *)(a1 + 264), &v9);
  sub_30F930((__int64 *)(a1 + 280), &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  qfree();
  v7 = *(_DWORD *)(a1 + 80);
  v9 = 0;
  v10 = 0;
  sub_5D900(&v9, 8, 8 * v7);
  v11 = nullptr;
  v12 = 0;
  sub_5DD00((__int64 *)(a1 + 144), &v9);
  sub_30F930((__int64 *)(a1 + 160), &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  qfree();
  v9 = 0;
  v10 = 0;
  sub_5D900(&v9, 40, 5 * v7);
  v11 = nullptr;
  v12 = 0;
  sub_5DD00((__int64 *)(a1 + 184), &v9);
  sub_30F930((__int64 *)(a1 + 200), &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  qfree();
  v9 = 0;
  v10 = 0;
  sub_5D900(&v9, 60, 13 * v7);
  v11 = nullptr;
  v12 = 0;
  sub_5DD00((__int64 *)(a1 + 224), &v9);
  sub_30F930((__int64 *)(a1 + 240), &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  qfree();
  sub_5DD00((__int64 *)(a1 + 264), (__int64 *)(a1 + 144));
  sub_30F930((__int64 *)(a1 + 280), (__int64 **)(a1 + 160));
  sub_5DD00((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
  return sub_30F930((__int64 *)(a1 + 280), (__int64 **)(a1 + 200));
}

