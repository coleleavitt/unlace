__int64 __fastcall sub_3EA500(__int64 a1)
{
  __int64 result; // rax

  result = j__qalloc_or_throw();
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 72) = 0;
  *(_OWORD *)(result + 112) = 0;
  *(_OWORD *)(result + 144) = 0;
  *(_OWORD *)(result + 160) = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)result = &off_4E4088;
  *(_QWORD *)(result + 56) = a1;
  *(_QWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 88) = 8;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 128) = 0;
  *(_DWORD *)(result + 136) = 112;
  *(_DWORD *)(result + 192) = 0;
  *(_OWORD *)(result + 176) = -1;
  return result;
}

