__int64 __fastcall sub_F2E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(__int64, _QWORD, const char *); // rax
  const char *v4; // rdx

  v2 = sub_1E460();
  if ( v2 )
  {
    v3 = *(void (__fastcall **)(__int64, _QWORD, const char *))(v2 + 16);
    v4 = nptr;
    if ( a1[6] )
      v4 = (const char *)a1[5];
    v3(a2, a1[1], v4);
  }
  return 0;
}

