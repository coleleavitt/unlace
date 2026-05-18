void __fastcall sub_10A6F0(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r9

  v2 = sub_105970("unable to use function %s in the requested context", *(const char **)(*(_QWORD *)(a1 + 8) + 8LL));
  v3 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 36) = 1;
  v4 = (__int64)v2;
  v5 = (__int64)v2;
  sub_F11D0(v3, v2, -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v6);
  sub_C91C0(v5, v4);
}
