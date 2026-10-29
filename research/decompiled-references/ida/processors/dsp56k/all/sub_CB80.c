__int64 __fastcall sub_CB80(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 5;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = (unsigned __int8)a3 << ((a3 >> 12) & 0xC);
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

