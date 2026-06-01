__int64 __fastcall sub_3FAED0(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        __m128i a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // r14
  _DWORD *v12; // rax
  __int64 v13; // rcx
  unsigned int v15; // ebp
  unsigned __int8 v16; // dl
  char v17; // r15
  __m128i v18; // xmm0
  __int64 v19; // r13
  __int16 v21; // dx
  char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // edx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v30; // [rsp+10h] [rbp-68h] BYREF
  int v31; // [rsp+18h] [rbp-60h]
  int v32; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+24h] [rbp-54h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v9 = a3;
  v12 = *(_DWORD **)(a1 + 832);
  v13 = *(_QWORD *)(a1 + 40);
  v34 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 880) == v13 && (unsigned __int8)(*(_BYTE *)(a1 + 40LL * a3 + 65) - 2) <= 2u )
  {
    v15 = v12[117];
    if ( !a6 )
      goto LABEL_20;
    v21 = *(_WORD *)(a1 + 48);
    if ( v21 == 92 )
      goto LABEL_20;
  }
  else
  {
    v15 = sub_3F9DC0(a1, a3, v12[116], a7, a8, a9);
    if ( v15 == -1 )
      return 0;
    if ( !a6 )
      goto LABEL_5;
    v21 = *(_WORD *)(a1 + 48);
    if ( v21 == 92 )
      goto LABEL_5;
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) <= 1u
    && (unsigned __int8)(*(_BYTE *)(a1 + 40LL * (int)v9 + 65) - 2) <= 2u )
  {
    if ( v21 == 44 )
    {
      a4 = 0;
      v22 = "inc";
    }
    else
    {
      v22 = "write";
      if ( v21 == 6 )
        v22 = "add";
    }
    v19 = sub_3F7170(a1, a7, a8, (__int64)v22, v15, (unsigned __int8 *)a4, 0xFFFFFFFF, a9);
    sub_316CB0((__int64 *)(*(_QWORD *)(v19 + 72) + 152LL), (const void **)(*(_QWORD *)(v19 + 72) + 216LL), v23, v24);
    goto LABEL_9;
  }
LABEL_5:
  v12 = *(_DWORD **)(a1 + 832);
  if ( v12[117] == v15 )
  {
LABEL_20:
    v25 = v12[118];
    v26 = 8;
    v30 = 0x200000001LL;
    v31 = v25;
    v27 = *(_DWORD *)(a1 + 52);
    if ( (v27 & 0x1018) != 0x1010 )
    {
      if ( (v27 & 0x1008) == 0 || (v26 = 2, (v27 & 0x1018) == 0x1008) )
        v26 = 4;
    }
    HIDWORD(v33) = v15;
    v32 = 1;
    LODWORD(v33) = sub_3F7DA0(a1, v15, v26, a7, a8, a9);
    v19 = sub_1D6450(a1, 1, (unsigned __int8 *)a4, (unsigned __int8 *)&v30, (unsigned __int8 *)&v32, a7, a8, a9);
    if ( (unsigned __int8)(a5 - 3) <= 1u || a5 == 15 )
      *(_DWORD *)(v19 + 4) |= 0x10u;
    sub_11CDA0((__int64)&v32);
    sub_11CDA0((__int64)&v30);
    goto LABEL_9;
  }
  v16 = *(_BYTE *)a4;
  if ( v12[21] == 8
    && *(_WORD *)(a1 + 48) != 21
    && (v28 = a1 + 40 * v9, (*(_QWORD *)(v28 + 64) & 0xFF000000FF00LL) == 0x20000000100LL)
    && *(_WORD *)(v28 + 70) <= 0xFu )
  {
    v17 = 1;
    if ( v16 == 1 && *(_DWORD *)(a4 + 8) == v15 )
      goto LABEL_32;
  }
  else
  {
    v17 = 0;
    if ( v16 == 1 && *(_DWORD *)(a4 + 8) == v15 )
    {
      v19 = 0;
      goto LABEL_9;
    }
  }
  v18 = _mm_cvtsi32_si128(*(_DWORD *)(a4 + 4));
  a8 = (__m128)_mm_cvtsi32_si128(v15);
  v32 = 1;
  a7 = _mm_unpacklo_epi32(v18, (__m128i)a8);
  v33 = a7.m128i_i64[0];
  v19 = sub_1D6450(a1, 4, (unsigned __int8 *)a4, nullptr, (unsigned __int8 *)&v32, a7, a8, a9);
  sub_11CDA0((__int64)&v32);
  if ( v17 )
LABEL_32:
    v19 = sub_1D6840(a1, a5, 7, v15, v15, 0, a7, a8, a9);
LABEL_9:
  if ( a2 )
    *a2 = v19;
  return 1;
}

