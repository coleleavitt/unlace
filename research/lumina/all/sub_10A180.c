void __fastcall sub_10A180(__int64 *a1, _DWORD *a2, const char *a3)
{
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r9

  v3 = sub_105970("json_%s() needs an odd number of arguments", a3);
  *a2 = 1;
  v4 = (__int64)v3;
  v5 = (__int64)v3;
  sub_F11D0(*a1, v3, -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v6);
  sub_C91C0(v4, v5);
}
