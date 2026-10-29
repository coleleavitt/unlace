__int64 __fastcall sub_1C020(_QWORD *a1)
{
  __int64 result; // rax

  result = clear_tinfo_t();
  if ( a1[5] )
  {
    a1[6] = 0;
    result = qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

