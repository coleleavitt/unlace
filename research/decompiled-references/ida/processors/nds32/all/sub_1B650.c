__int64 __fastcall sub_1B650(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdi

  *a1 = &off_29050;
  result = reg_finder_dtr(a1);
  v6 = a1[26];
  if ( v6 )
  {
    a1[27] = 0;
    result = qfree(v6, a2, v4, v5);
  }
  v7 = a1[10];
  if ( v7 )
  {
    a1[11] = 0;
    return qfree(v7, a2, v4, v5);
  }
  return result;
}

