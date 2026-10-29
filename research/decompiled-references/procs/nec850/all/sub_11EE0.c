__int64 __fastcall sub_11EE0(_QWORD *a1, int a2)
{
  __int64 v2; // rdx
  const char *v3; // rax

  v2 = a1[78];
  v3 = "<bad register>";
  if ( *(_DWORD *)(v2 + 64) > a2 )
    v3 = *(const char **)(*(_QWORD *)(v2 + 56) + 8LL * a2);
  return (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v3, 33);
}
