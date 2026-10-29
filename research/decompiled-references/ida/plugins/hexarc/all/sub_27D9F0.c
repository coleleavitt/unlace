__int64 __fastcall sub_27D9F0(__int64 a1)
{
  __int64 result; // rax

  result = j__qalloc_or_throw();
  *(_DWORD *)(result + 8) = 2;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)result = off_4AD1B8;
  *(_QWORD *)(result + 64) = a1;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_BYTE *)(result + 88) = 0;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 48) = 0;
  return result;
}

