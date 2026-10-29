__int64 __fastcall sub_D95D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (int)sub_D8F20(a1, a2);
  *(_DWORD *)(*(_QWORD *)a1 + 8LL) = 1;
  return result;
}
