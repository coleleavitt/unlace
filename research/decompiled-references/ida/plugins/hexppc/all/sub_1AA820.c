__int64 sub_1AA820()
{
  __int64 result; // rax
  _QWORD *v1; // rdx

  result = operator new(0x188u);
  *(_DWORD *)(result + 32) = -1;
  v1 = (_QWORD *)(result + 168);
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 40) = &off_4CB558;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 136) = 0;
  *(_QWORD *)(result + 144) = 0;
  *(_OWORD *)result = 0;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 56) = 0;
  *(_OWORD *)(result + 88) = 0;
  *(_OWORD *)(result + 120) = 0;
  *(_OWORD *)(result + 152) = 0;
  do
  {
    *v1 = 0;
    v1 += 3;
    *((_OWORD *)v1 - 1) = 0;
  }
  while ( (_QWORD *)(result + 384) != v1 );
  *(_DWORD *)(result + 384) = 0;
  return result;
}

