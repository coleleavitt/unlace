unsigned __int64 __fastcall sub_91040(__int64 a1, __int64 a2, __m128i a3)
{
  int v3; // r13d
  __int64 v5; // rax
  int i; // esi
  __int64 j; // rbp
  unsigned __int64 v8; // rax
  __m128i v9; // xmm0
  const char *v10; // rdx
  const char *v12; // [rsp+0h] [rbp-68h] BYREF
  __int128 v13; // [rsp+8h] [rbp-60h]
  __m128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v3 = *(_DWORD *)(a2 + 48);
  v16 = __readfsqword(0x28u);
  if ( v3 == 1 )
  {
    sub_8F680(a2, 2, "block.start");
    sub_7F940((__int64 *)a2, *(_QWORD *)(a1 + 32) + 1LL);
  }
  else
  {
    sub_8F680(a2, 2, "block.flags");
    sub_7F8E0((__int64 *)a2);
    sub_8F680(a2, 2, "block.boundaries");
    sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 32) - *(_QWORD *)(a2 + 40));
    sub_7F940((__int64 *)a2, *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32));
  }
  sub_8F680(a2, 2, "block.insns");
  v5 = *(_QWORD *)(a1 + 48);
  for ( i = 0; v5; ++i )
    v5 = *(_QWORD *)(v5 + 8);
  sub_7F8E0((__int64 *)a2);
  for ( j = *(_QWORD *)(a1 + 48); j; j = *(_QWORD *)(j + 8) )
  {
    if ( *(_BYTE *)(a2 + 52) )
    {
      v8 = *(_QWORD *)(a1 + 64);
      v13 = 0;
      v9 = _mm_loadl_epi64((const __m128i *)(v8 + 1496));
      v12 = nullptr;
      v15 = 0;
      a3 = _mm_unpacklo_epi64(v9, (__m128i)v8);
      v14 = (__m128)a3;
      sub_1B43D0((int *)j, (__int64)&v12, (__int64)&v14, 6u);
      v10 = s1;
      if ( (_QWORD)v13 )
        v10 = v12;
      sub_8F680(a2, 0, v10);
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree((__int64)v12);
      }
    }
    sub_90E90((unsigned __int8 *)j, (__int64 *)a2, *(double *)a3.m128i_i64);
  }
  if ( *(_DWORD *)(a2 + 48) == 1 )
    return v16 - __readfsqword(0x28u);
  sub_8F680(a2, 2, "block.type");
  sub_7A780((__int64 *)a2, *(_BYTE *)(a1 + 76));
  if ( (unsigned __int8)sub_7A640(v3, 1, 0x50u) )
  {
    sub_8F680(a2, 2, "block.dead_at_start");
    sub_80410((__int64 *)(a1 + 80), (__int64 *)a2);
    sub_801C0(a1 + 96, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_7A640(v3, 1, 0x78u) )
  {
    sub_8F680(a2, 2, "block.mustbuse");
    sub_80410((__int64 *)(a1 + 120), (__int64 *)a2);
    sub_801C0(a1 + 136, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_7A640(v3, 1, 0xA0u) )
  {
    sub_8F680(a2, 2, "block.maybuse");
    sub_80410((__int64 *)(a1 + 160), (__int64 *)a2);
    sub_801C0(a1 + 176, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_7A640(v3, 1, 0xC8u) )
  {
    sub_8F680(a2, 2, "block.mustbdef");
    sub_80410((__int64 *)(a1 + 200), (__int64 *)a2);
    sub_801C0(a1 + 216, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_7A640(v3, 1, 0xF0u) )
  {
    sub_8F680(a2, 2, "block.maybdef");
    sub_80410((__int64 *)(a1 + 240), (__int64 *)a2);
    sub_801C0(a1 + 256, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_7A640(v3, 1, 0x118u) )
  {
    sub_8F680(a2, 2, "block.dnu");
    sub_80410((__int64 *)(a1 + 280), (__int64 *)a2);
    sub_801C0(a1 + 296, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_7A640(v3, 1, 0x140u) )
  {
    sub_8F680(a2, 2, "block.frame");
    sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 320));
    sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 328));
    sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 336));
  }
  sub_8F680(a2, 2, "block.subframe");
  sub_7F8E0((__int64 *)a2);
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 520));
  sub_8F680(a2, 2, "block.succset");
  sub_7FEE0((__int64 *)a2, (__int64 *)(a1 + 368));
  if ( (unsigned __int8)sub_7A640(v3, 1, 0x188u) )
  {
    sub_8F680(a2, 2, "block.label");
    if ( *(_QWORD *)(a1 + 400) )
      sub_7FC40((__int64 *)a2, *(_BYTE **)(a1 + 392));
    else
      sub_7FC40((__int64 *)a2, s1);
  }
  if ( (unsigned __int8)sub_7A640(v3, 1, 0x1A0u) )
  {
    sub_8F680(a2, 2, "block.valranges");
    sub_80DE0(a1 + 416, (__int64 *)a2, *(double *)a3.m128i_i64);
  }
  sub_8F680(a2, 2, "block.valranges_tail");
  return sub_80DE0(a1 + 448, (__int64 *)a2, *(double *)a3.m128i_i64);
}

