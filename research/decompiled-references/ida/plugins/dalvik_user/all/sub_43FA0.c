__int64 __fastcall sub_43FA0(__int64 a1)
{
  __int64 result; // rax

  result = qfree();
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_QWORD *)(a1 + 40) = 0;
    return qfree();
  }
  return result;
}

