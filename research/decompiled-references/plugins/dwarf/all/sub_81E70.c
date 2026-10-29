__int64 __fastcall sub_81E70(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi

  if ( *((_BYTE *)a1 + 32) )
  {
    v2 = a1[3];
    if ( v2 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v4);
  }
  return result;
}
