__int64 __fastcall sub_3FB280(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  unsigned __int8 v4; // al
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __int64 v9; // rbx
  __int64 v12[3]; // [rsp+18h] [rbp-B8h] BYREF
  __int16 v13; // [rsp+30h] [rbp-A0h]
  char v14; // [rsp+32h] [rbp-9Eh]
  _QWORD v15[2]; // [rsp+40h] [rbp-90h] BYREF
  __m128i si128; // [rsp+50h] [rbp-80h]
  __int64 v17; // [rsp+60h] [rbp-70h]
  __int128 v18; // [rsp+68h] [rbp-68h]
  __int64 v19; // [rsp+78h] [rbp-58h]
  __int64 v20; // [rsp+80h] [rbp-50h]
  int v21; // [rsp+88h] [rbp-48h]
  unsigned __int64 v22; // [rsp+98h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 832);
  v22 = __readfsqword(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v15[1] = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v15[0] = 0xFFFFFFFF00000000LL;
  v18 = 0;
  copy_tinfo_t();
  clear_tinfo_t();
  v4 = getinf();
  sub_120450((__int64)v15, v3, 0, v4, v2, 0);
  memset(v12, 0, sizeof(v12));
  v13 = -1;
  v14 = 34;
  sub_3FB0A0(v12);
  clear_tinfo_t();
  v5 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)"svdup_u8", v12, 1, (__int64)v15, 1);
  *(_DWORD *)(*(_QWORD *)(v5 + 72) + 280LL) |= 0x14u;
  v6 = j__qalloc_or_throw();
  v7 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(v6 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 72) = 0;
  sub_330C90(v6, v7);
  *(_QWORD *)(v6 + 40) = v5;
  *(_DWORD *)v6 = 4;
  *(_BYTE *)(v6 + 32) = 4;
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(v5 + 68));
  *(_BYTE *)(v6 + 64) = 1;
  *(_DWORD *)(v6 + 36) = _mm_cvtsi128_si32(v8);
  *(_QWORD *)(v6 + 68) = _mm_unpacklo_epi32(v8, _mm_cvtsi32_si128(a2)).m128i_u64[0];
  v9 = sub_B4CD0(*(_QWORD **)(a1 + 16), v6);
  clear_tinfo_t();
  cleanup_argloc();
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_11C7E0((__int64)v15);
  return v9;
}

