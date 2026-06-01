__int64 __fastcall sub_1E8C40(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4CBE68;
  result = a1[6];
  if ( result )
  {
    a1[7] = 0;
    return qfree();
  }
  return result;
}

