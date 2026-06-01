__int64 __fastcall sub_3C0EA0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 880);
  *(_DWORD *)(result + 40) = a2;
  return result;
}

