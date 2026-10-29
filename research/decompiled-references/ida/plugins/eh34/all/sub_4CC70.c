__int64 __fastcall sub_4CC70(unsigned __int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_4C640(a1);
  *(_DWORD *)(result + 32) = 1;
  *(_QWORD *)(result + 4) = 0x100000000LL;
  *(_QWORD *)(result + 24) = a2;
  return result;
}

