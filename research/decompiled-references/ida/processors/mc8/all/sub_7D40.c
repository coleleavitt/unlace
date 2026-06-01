__int64 __fastcall sub_7D40(_QWORD *a1, __int64 a2)
{
  const char *v2; // r12
  __int64 v3; // rcx

  if ( a1[18] )
  {
    v2 = (const char *)a1[17];
    if ( !strcmp(v2, "NONE") )
    {
      v2 = nullptr;
    }
    else if ( a1[24] > 1u )
    {
      v3 = a1[23];
      return (*(__int64 (__fastcall **)(__int64, __int64, const char *, __int64))(*(_QWORD *)a2 + 368LL))(
               a2,
               11,
               v2,
               v3);
    }
    v3 = 0;
  }
  else
  {
    v3 = 0;
    v2 = &byte_D688;
    if ( a1[24] > 1u )
      v3 = a1[23];
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, const char *, __int64))(*(_QWORD *)a2 + 368LL))(a2, 11, v2, v3);
}

