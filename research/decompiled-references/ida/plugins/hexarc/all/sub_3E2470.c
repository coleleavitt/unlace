__int64 sub_3E2470()
{
  __int64 result; // rax

  result = j__qalloc_or_throw();
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)result = &off_4A8578;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 40) = 0;
  return result;
}

