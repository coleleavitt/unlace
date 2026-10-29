__int64 __fastcall sub_C3DA0(_QWORD *a1)
{
  __int64 result; // rax

  result = *a1;
  a1[1] = *(_QWORD *)(*a1 + 272LL);
  *(_QWORD *)(result + 272) = a1;
  return result;
}
