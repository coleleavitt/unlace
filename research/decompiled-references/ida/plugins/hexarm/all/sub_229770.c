__int64 __fastcall sub_229770(_QWORD *a1)
{
  __int64 result; // rax

  result = clear_tinfo_t();
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}

