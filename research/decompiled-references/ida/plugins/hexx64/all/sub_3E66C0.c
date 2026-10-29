__int64 __fastcall sub_3E66C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // rsi

  v4 = a2;
  v5 = j__qalloc_or_throw(80, a2, a3, a4);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1088) + 40LL);
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 72) = 0;
  sub_330970(v5, v6);
  *(_DWORD *)v5 = v4;
  return v5;
}

