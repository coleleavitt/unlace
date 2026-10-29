__int64 __fastcall sub_2B5160(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = clear_tinfo_t();
  v3 = *a1;
  if ( v3 )
  {
    a1[1] = 0;
    return qfree(v3);
  }
  return result;
}

