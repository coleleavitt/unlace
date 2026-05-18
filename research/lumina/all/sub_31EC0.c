__int64 __fastcall sub_31EC0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rax

  v1 = a1[1];
  v2 = *a1;
  if ( a1[2] < (unsigned __int64)(v1 + 1) )
  {
    v4 = sub_1987B0(a1, v2, v1 + 1, 168);
    v1 = a1[1];
    *a1 = v4;
    v2 = v4;
  }
  result = v2 + 168 * v1;
  *(_OWORD *)(result + 8) = 0;
  *(_OWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 72) = 0;
  *(_OWORD *)(result + 104) = 0;
  *(_OWORD *)(result + 128) = 0;
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 160) = -1;
  *(_OWORD *)(result + 144) = 0;
  ++a1[1];
  return result;
}
