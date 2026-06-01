unsigned __int64 __fastcall sub_3F4720(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rbp
  int v4; // edx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+10h] [rbp-48h] BYREF
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+28h] [rbp-30h]
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 65) == 1 && *(_WORD *)(a1 + 70) == 2 )
  {
    v2 = *(_WORD *)(a1 + 48);
    if ( v2 == 6 )
    {
      if ( *(_BYTE *)(a1 + 105) != 1 || *(_WORD *)(a1 + 110) != 12 )
        return v20 - __readfsqword(0x28u);
    }
    else if ( v2 != 286 && (v2 != 88 || (*(_QWORD *)(a1 + 104) & 0xFFFF00000000FF00LL) != 0xC000000000400LL) )
    {
      return v20 - __readfsqword(0x28u);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 832) + 4416LL) = -1;
    v3 = *(_QWORD *)(a1 + 832);
    v4 = *(_DWORD *)(v3 + 80);
    v5 = *(_DWORD *)(v3 + 360);
    v17 = 0u;
    sub_60440((__int64 *)&v17, v5, v4);
    v18 = 0;
    v19 = 0;
    sub_60C00((__int64 *)(v3 + 264), (__int64 *)&v17, v6, v7, v8, v9);
    sub_313AE0((__int64 *)(v3 + 280), (__int64)&v18);
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree();
    }
    qfree();
    v10 = *(_QWORD *)(a1 + 40);
    v16[1] = 0;
    v11 = *(_QWORD *)(a1 + 832);
    v16[0] = 0xFFFFFFFF00000000LL;
    sub_11CFD0((__int64)v16, v11, v10, *(_DWORD *)(v11 + 84), v10, 0);
    v12 = *(_QWORD *)(a1 + 832);
    v13 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + 84));
    v14 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + 388));
    LODWORD(v17) = 1;
    *(_QWORD *)((char *)&v17 + 4) = _mm_unpacklo_epi32(v13, v14).m128i_u64[0];
    v15 = sub_1D2850(a1, 4, (unsigned __int8 *)v16, nullptr, (unsigned __int8 *)&v17);
    *(_DWORD *)(v15 + 4) |= 0x80u;
    sub_119360((__int64)&v17);
    sub_119360((__int64)v16);
  }
  return v20 - __readfsqword(0x28u);
}

