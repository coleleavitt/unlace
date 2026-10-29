__int64 __fastcall sub_F330(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void (__fastcall *v4)(__int64, const char *); // rax
  const char *v5; // rsi

  v3 = sub_1E460();
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(__int64, const char *))(v3 + 8);
    v5 = nptr;
    if ( *(_QWORD *)(a1 + 16) )
      v5 = *(const char **)(a1 + 8);
    v4(a2, v5);
  }
  return 0;
}

