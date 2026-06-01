__int64 __fastcall sub_41430(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  result = qalloc();
  *(_QWORD *)(a1 + 56) = result;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)a1 = 0;
  return result;
}

