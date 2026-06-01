__int64 __fastcall sub_1D5B60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qalloc_or_throw(24, a2, a3, a4);
  *(_QWORD *)result = 0;
  *(_OWORD *)(result + 8) = 0;
  return result;
}

