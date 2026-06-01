__int64 __fastcall sub_B52C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // r12d
  __int64 v6; // rbx
  __int64 v7; // rsi

  v5 = a3;
  v6 = j__qalloc_or_throw(80, a2, a3, a4);
  *(_QWORD *)(v6 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 72) = 0;
  sub_330970(v6, a2);
  *(_DWORD *)(v6 + 40) = v5;
  v7 = *(_QWORD *)(v6 + 24);
  *(_DWORD *)v6 = 55;
  *(_BYTE *)(v6 + 32) = 7;
  sub_330D80((__int64)a1, v7, 0);
  return sub_B5190(a1, v6, a5);
}

