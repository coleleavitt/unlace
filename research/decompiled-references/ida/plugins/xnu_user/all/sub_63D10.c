__int64 __fastcall sub_63D10(_QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
  if ( a1[30] )
  {
    result = qfclose();
    a1[30] = 0;
  }
  return result;
}

