__int64 __fastcall sub_194C20(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4DE260;
  result = a1[8];
  if ( result )
  {
    a1[9] = 0;
    return qfree(result);
  }
  return result;
}

