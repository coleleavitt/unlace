__int64 __fastcall sub_3E4AD0(__int64 a1)
{
  __int64 result; // rax

  result = j__qalloc_or_throw();
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)result = &off_4BC370;
  *(_QWORD *)(result + 56) = a1;
  *(_QWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 120) = 0;
  *(_DWORD *)(result + 128) = 0;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 72) = 0;
  *(_OWORD *)(result + 104) = 0;
  return result;
}

