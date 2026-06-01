__int64 __fastcall sub_EEA0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  *(_BYTE *)(a3 + 1) = 7;
  result = sub_ED80(a4);
  *(_BYTE *)(a3 + 5) = 9;
  *(_QWORD *)(a3 + 16) = ((_DWORD)result + a2) & 0xFFFFFF;
  return result;
}

