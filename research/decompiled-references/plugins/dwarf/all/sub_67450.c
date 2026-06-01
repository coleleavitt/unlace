__int64 __fastcall sub_67450(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &off_C8AD0;
  result = *(_QWORD *)(a1 + 32);
  *(_OWORD *)(a1 + 16) = 0;
  if ( result )
  {
    *(_QWORD *)(a1 + 40) = 0;
    return qfree(result);
  }
  return result;
}
