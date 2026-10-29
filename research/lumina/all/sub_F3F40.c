const char *__fastcall sub_F3F40(__int64 a1, int a2, double a3)
{
  __int64 *v3; // rax
  __int64 v4; // rax

  if ( a2 < 0 || *(_DWORD *)a1 <= a2 )
    return nullptr;
  v3 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) + 56LL * *(int *)(*(_QWORD *)(a1 + 8) + 12LL * a2 + 8));
  if ( !*(_QWORD *)(*v3 + 16) )
    return "BINARY";
  v4 = sub_F3C70(*(_QWORD *)(a1 + 104), *v3, a3);
  if ( v4 )
    return *(const char **)v4;
  else
    return "BINARY";
}
