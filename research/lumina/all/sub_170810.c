__int64 __fastcall sub_170810(__int64 a1)
{
  __int64 result; // rax

  result = sub_19A2A0();
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_OWORD *)a1 = 0;
  return result;
}
