__int64 __fastcall sub_483C0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v5; // rax

  v1 = a1[1];
  v2 = *a1;
  if ( a1[2] < (unsigned __int64)(v1 + 1) )
  {
    v5 = sub_1987B0(a1, v2, v1 + 1, 152);
    v1 = a1[1];
    *a1 = v5;
    v2 = v5;
  }
  v3 = v2 + 152 * v1;
  *(_QWORD *)(v3 + 8) = 0;
  *(_DWORD *)v3 = 0;
  *(_WORD *)(v3 + 4) = 0;
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 80) = 0;
  *(_OWORD *)(v3 + 40) = 0;
  *(_OWORD *)(v3 + 64) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  *(_QWORD *)(v3 + 120) = 0;
  *(_QWORD *)(v3 + 128) = 0;
  *(_OWORD *)(v3 + 104) = 0;
  *(_OWORD *)(v3 + 136) = 0;
  ++a1[1];
  return v3;
}
