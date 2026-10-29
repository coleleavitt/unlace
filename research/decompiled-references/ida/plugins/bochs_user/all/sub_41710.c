__int64 __fastcall sub_41710(__int64 a1)
{
  __int64 result; // rax

  sub_41300(a1);
  result = qfree();
  if ( *(_QWORD *)(a1 + 72) )
  {
    *(_QWORD *)(a1 + 80) = 0;
    return qfree();
  }
  return result;
}

