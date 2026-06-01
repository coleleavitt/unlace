unsigned __int64 __fastcall sub_3EAE40(__int64 *a1, int a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  sub_3EAB70((__int64)a1, 6u, 1, a2, 0x3BEA45E214ADDC55LL, a2, 0);
  v5 = sub_63DD0(a1[1], a1[5], 2);
  v6 = sub_63DD0(a1[1], a1[5], 2);
  sub_1D2700((__int64)a1, *(_DWORD *)(v6 + 72), a2);
  a1[2] = v5;
  v7 = a1[1];
  v8 = a1[5];
  v11 = 1;
  v9 = sub_3308F0(v7, v8, a3, &v11, 0, 0, 0);
  clear_tinfo_t();
  *(_DWORD *)(*(_QWORD *)(v9 + 72) + 280LL) |= 0xCu;
  sub_B1090((_QWORD *)a1[2], v9);
  a1[2] = v6;
  return v12 - __readfsqword(0x28u);
}

