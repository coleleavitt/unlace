__int64 __fastcall sub_A7E0(_BYTE *a1)
{
  __int64 (__fastcall *v1)(_BYTE *, __int64, const char *); // rax
  char v2; // dl

  v1 = *(__int64 (__fastcall **)(_BYTE *, __int64, const char *))(*(_QWORD *)a1 + 280LL);
  if ( !a1[265] )
    return v1(a1, 8, nullptr);
  v2 = a1[269];
  if ( v2 == 1 )
    return v1(a1, 8, ".w");
  if ( v2 == 2 )
    return v1(a1, 8, ".d");
  if ( v2 )
    return v1(a1, 8, nullptr);
  return v1(a1, 8, ".b");
}

