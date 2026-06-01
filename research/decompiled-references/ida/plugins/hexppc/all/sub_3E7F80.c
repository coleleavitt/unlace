__int64 __fastcall sub_3E7F80(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _WORD *v3; // rdx
  __int64 v4; // rdx
  _WORD *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  result = operator new(0x368u);
  *(_QWORD *)(result + 8) = a2;
  v3 = (_WORD *)(result + 64);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 40) = -1;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_OWORD *)(result + 24) = -1;
  do
  {
    *v3 = 0;
    v3 += 20;
    *(v3 - 19) = 0;
    *(v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *(v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *((_QWORD *)v3 - 2) = 0;
  }
  while ( (_WORD *)(result + 384) != v3 );
  v4 = *(_QWORD *)(result + 8);
  *(_BYTE *)(result + 384) = 0;
  *(_QWORD *)(result + 448) = 0;
  *(_QWORD *)(result + 456) = 0;
  *(_QWORD *)(result + 392) = v4;
  v5 = (_WORD *)(result + 464);
  *(_OWORD *)(result + 400) = -1;
  *(_OWORD *)(result + 416) = -1;
  *(_OWORD *)(result + 432) = -1;
  do
  {
    *v5 = 0;
    v5 += 20;
    *(v5 - 19) = 0;
    *(v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *(v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *((_QWORD *)v5 - 2) = 0;
  }
  while ( (_WORD *)(result + 784) != v5 );
  v6 = *(_QWORD *)(result + 8);
  *(_QWORD *)(result + 784) = -1;
  *(_BYTE *)(result + 792) = 0;
  v7 = *(_QWORD *)(v6 + 1496);
  *(_QWORD *)result = &off_4D6AA0;
  *(_QWORD *)(result + 808) = 0;
  *(_QWORD *)(result + 800) = v7;
  v8 = *(_QWORD *)(v7 + 112);
  *(_QWORD *)(result + 816) = 0;
  *(_DWORD *)(result + 824) = -1;
  *(_QWORD *)(result + 832) = v8;
  *(_QWORD *)(result + 840) = 0;
  *(_BYTE *)(result + 864) = 0;
  *(_OWORD *)(result + 848) = 0;
  return result;
}

