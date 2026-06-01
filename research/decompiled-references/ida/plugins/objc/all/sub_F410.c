__int64 __fastcall sub_F410(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_3C108;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}
