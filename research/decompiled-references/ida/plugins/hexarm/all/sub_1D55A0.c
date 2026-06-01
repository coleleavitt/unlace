__int64 sub_1D55A0()
{
  __int64 result; // rax

  result = qalloc_or_throw();
  *(_QWORD *)result = 0;
  *(_OWORD *)(result + 8) = 0;
  return result;
}

