__int64 __fastcall sub_3FB1A0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3[3]; // [rsp+8h] [rbp-78h] BYREF
  __int16 v4; // [rsp+20h] [rbp-60h]
  char v5; // [rsp+22h] [rbp-5Eh]
  _BYTE v6[40]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  qsnprintf();
  v5 = 48;
  v3[0] = 0;
  v3[1] = (__int64)"svbool_t";
  v3[2] = 0;
  v4 = -1;
  sub_3FB0A0(v3);
  v1 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v6, v3, 0, 0, 1);
  *(_DWORD *)(*(_QWORD *)(v1 + 72) + 280LL) |= 0x14u;
  clear_tinfo_t();
  clear_tinfo_t();
  return v1;
}

