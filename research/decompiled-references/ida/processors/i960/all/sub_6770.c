__int64 __fastcall sub_6770(_BYTE *a1)
{
  const char *v1; // rdx

  v1 = ".f";
  if ( (a1[252] & 2) == 0 )
    v1 = nullptr;
  return (*(__int64 (__fastcall **)(_BYTE *, __int64, const char *))(*(_QWORD *)a1 + 280LL))(a1, 8, v1);
}

