__int64 __fastcall sub_3EA510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6, __m128 a7)
{
  __int64 v8; // rdi
  _DWORD *v9; // r13
  int v10; // eax
  int v11; // eax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  int v18; // [rsp+18h] [rbp-40h]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v15 = 0x800000000LL;
  v16 = 0;
  v8 = j__qalloc_or_throw(32, a2, a3, a4);
  *(_QWORD *)v8 = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 24) = 0;
  v9 = *(_DWORD **)(a1 + 832);
  LOBYTE(v15) = 14;
  v10 = v9[97];
  v16 = v8;
  v17 = 0x400000001LL;
  v18 = v10;
  sub_125180((unsigned __int8 *)v8, (unsigned __int8 *)&v17);
  sub_11CDA0((__int64)&v17);
  v11 = v9[95];
  v17 = 0x400000001LL;
  v18 = v11;
  sub_125180((unsigned __int8 *)(v8 + 16), (unsigned __int8 *)&v17);
  sub_11CDA0((__int64)&v17);
  v12 = *(unsigned int *)(a2 + 32);
  v13 = v9[140];
  v17 = 0x800000001LL;
  v18 = v13;
  sub_1D6450(a1, v12, (unsigned __int8 *)&v15, nullptr, (unsigned __int8 *)&v17, a5, a6, a7);
  sub_11CDA0((__int64)&v17);
  sub_11CDA0((__int64)&v15);
  return 0;
}

