__int64 __fastcall sub_9E7B0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rbx
  __int64 v8; // r14

  v7 = j__qalloc_or_throw();
  v8 = v7 + 32;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 72) = 0;
  sub_32B920(v7, a3);
  *(_DWORD *)v7 = 12;
  sub_120F80(v7 + 32);
  sub_120F80(v7 + 48);
  *(_DWORD *)(v7 + 68) = *(_DWORD *)(a4 + 4);
  sub_157A70(v7, a2, 0, 0, 0, 0, 1);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0xFFFFFFFF00000000LL;
  if ( *(_DWORD *)v7 == 4 && a6 )
  {
    sub_118810(a1, v8);
    if ( v7 )
    {
      sub_118BA0(v7 + 64);
      sub_118BA0(v7 + 48);
      sub_118BA0(v8);
      j__qfree();
    }
  }
  else
  {
    *(_BYTE *)a1 = 4;
    *(_QWORD *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a4 + 4);
  }
  return a1;
}

