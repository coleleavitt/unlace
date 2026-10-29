__int64 __fastcall sub_3FC410(__int64 a1, int a2, __int64 a3, __m128i a4, __m128 a5, __m128 a6)
{
  int v6; // ecx
  __int64 v7; // rbx
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  int v10; // [rsp+8h] [rbp-40h]
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[3] = __readfsqword(0x28u);
  v10 = a2;
  v11[0] = -4294967290LL;
  v9 = 0x100000001LL;
  v6 = 8 * *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
  if ( (unsigned __int64)v6 <= 0x3F )
    a3 &= ~(-1LL << v6);
  v11[1] = a3;
  v7 = sub_1D6450(a1, 42, (unsigned __int8 *)&v9, nullptr, (unsigned __int8 *)v11, a4, a5, a6);
  sub_11CDA0((__int64)v11);
  sub_11CDA0((__int64)&v9);
  return v7;
}

