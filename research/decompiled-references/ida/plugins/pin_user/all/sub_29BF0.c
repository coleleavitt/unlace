__int64 __fastcall sub_29BF0(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = qalloc();
  *(_DWORD *)result = a2;
  *(_QWORD *)(result + 8) = a3;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 64) = 0;
  return result;
}

