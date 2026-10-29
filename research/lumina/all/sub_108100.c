__int64 __fastcall sub_108100(__int64 a1)
{
  __int64 v1; // rdx
  __int16 v3; // ax
  const char *v4; // rdx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // r9

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 136LL) + 24LL * *(int *)(a1 + 32);
  if ( *(_BYTE *)v1 != 65 )
    return 1;
  v3 = *(_WORD *)(v1 + 2);
  v4 = "a CHECK constraint";
  if ( (v3 & 4) == 0 )
  {
    v4 = "a generated column";
    if ( (v3 & 8) == 0 )
      v4 = "an index";
  }
  v6 = sub_105970("non-deterministic use of %s() in %s", *(const char **)(*(_QWORD *)(a1 + 8) + 56LL), v4);
  v7 = *(_QWORD *)a1;
  v8 = (__int64)v6;
  *(_DWORD *)(a1 + 36) = 1;
  v9 = (__int64)v6;
  sub_F11D0(v7, v6, -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v10);
  sub_C91C0(v8, v9);
  return 0;
}
