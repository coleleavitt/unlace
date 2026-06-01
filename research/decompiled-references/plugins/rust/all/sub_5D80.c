_QWORD *__fastcall sub_5D80(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = operator new(0x50u);
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 16) = 0;
  *(_QWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 64) = 0x500000005LL;
  *(_BYTE *)(v1 + 72) = 1;
  *(_QWORD *)v1 = off_9CC0;
  *a1 = v1;
  *(_OWORD *)(v1 + 24) = 0;
  *(_OWORD *)(v1 + 48) = 0;
  return a1;
}
