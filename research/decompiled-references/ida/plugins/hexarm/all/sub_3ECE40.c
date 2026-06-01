void __fastcall sub_3ECE40(__int64 a1, int a2, __int64 a3, __int64 a4, __int32 a5)
{
  __int64 v8; // rbx
  int v9; // r14d

  if ( a3 )
  {
    v8 = j__qalloc_or_throw();
    *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v8 + 72) = 0;
    sub_330C90(v8, a4);
    *(_DWORD *)v8 = 12;
    v9 = *(_DWORD *)(a1 + 4);
    sub_11C450((char *)a1, (char *)(v8 + 32));
    sub_120450(v8 + 48, a2, a3, v9, a4, a5);
    *(_DWORD *)(v8 + 68) = v9;
    *(_BYTE *)a1 = 4;
    *(_QWORD *)(a1 + 8) = v8;
    *(_DWORD *)(a1 + 4) = v9;
  }
}

