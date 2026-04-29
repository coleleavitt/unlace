unsigned __int64 __fastcall sub_10A120(__int64 a1)
{
  unsigned __int64 v1; // rcx
  int v2; // r8d
  int v3; // r9d
  __int64 v5; // [rsp+0h] [rbp-68h] BYREF
  __int128 v6; // [rsp+8h] [rbp-60h]
  int v7; // [rsp+18h] [rbp-50h]
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+38h] [rbp-30h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v10 = 0;
  v6 = 0;
  v9 = 0;
  sub_1098F0(a1, (__int64)&v5, 10);
  sub_109D10(a1, (__int64)&v8, 10);
  sub_104200(*(_DWORD **)(a1 + 40), &v8, (__int64)&v5, v1, v2, v3);
  sub_108D60("du-ud chains", (__int64)&v8, (__int64)&v5);
  sub_1098F0(a1, (__int64)&v5, 12);
  sub_109D10(a1, (__int64)&v8, 12);
  sub_108D60("stkvar du-ud", (__int64)&v8, (__int64)&v5);
  sub_60700(&v8);
  sub_60700(&v5);
  return v11 - __readfsqword(0x28u);
}
