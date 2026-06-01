__int64 __fastcall sub_3E6060(__int64 a1)
{
  __int64 result; // rax

  result = j__qalloc_or_throw();
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)result = &off_4D6BC8;
  *(_QWORD *)(result + 56) = a1;
  *(_QWORD *)(result + 64) = 56;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 112) = -1;
  *(_DWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 128) = -1;
  *(_OWORD *)(result + 96) = -1;
  return result;
}

