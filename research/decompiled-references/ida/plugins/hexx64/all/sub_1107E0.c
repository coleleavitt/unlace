unsigned __int64 __fastcall sub_1107E0(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // [rsp+0h] [rbp-68h] BYREF
  __int128 v7; // [rsp+8h] [rbp-60h]
  int v8; // [rsp+18h] [rbp-50h]
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h]
  int v11; // [rsp+38h] [rbp-30h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v6 = 0;
  v8 = 0;
  v9 = 0;
  v11 = 0;
  v7 = 0;
  v10 = 0;
  sub_10FFB0((__int64 *)a1, (__int64)&v6, 10, 0.0, a3);
  sub_1103D0((__int64 *)a1, (__int64)&v9, 10, 0.0, a3);
  sub_10A8C0(*(_DWORD **)(a1 + 40), &v9, (__int64)&v6, 0.0);
  sub_10F420("du-ud chains", (__int64)&v9, (__int64)&v6, v3);
  sub_10FFB0((__int64 *)a1, (__int64)&v6, 12, 0.0, a3);
  sub_1103D0((__int64 *)a1, (__int64)&v9, 12, 0.0, a3);
  sub_10F420("stkvar du-ud", (__int64)&v9, (__int64)&v6, v4);
  sub_66C80((__int64)&v9, 0.0);
  sub_66C80((__int64)&v6, 0.0);
  return v12 - __readfsqword(0x28u);
}

