__int64 __fastcall sub_43EB0(__int64 a1)
{
  __int64 result; // rax
  const char *v2; // rdx

  if ( *(_BYTE *)(a1 + 56) )
  {
    sub_43C70((__int64 *)(a1 + 32), 44, 0);
    v2 = nptr;
    if ( *(_QWORD *)(a1 + 40) )
      v2 = *(const char **)(a1 + 32);
    result = sub_11340((__int64)"<%d (%s)\n", *(_DWORD *)(*(_QWORD *)a1 + 52LL), v2);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_QWORD *)(a1 + 40) = 0;
    return qfree();
  }
  return result;
}

