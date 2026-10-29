__int64 __fastcall sub_3E1440(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi

  v3 = j__qalloc_or_throw();
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1088) + 40LL);
  *(_QWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 72) = 0;
  sub_32B5A0(v3, v4);
  *(_DWORD *)v3 = a2;
  return v3;
}

