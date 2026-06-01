__int64 __fastcall sub_BFEB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 420) != -1 )
  {
    a3 = *(unsigned int *)(a1 + 424);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 48LL) + 8LL) = a3;
  }
  v4 = j__qalloc_or_throw(80, a2, a3, a4);
  *(_QWORD *)(v4 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 72) = 0;
  sub_330970(v4, -1);
  *(_DWORD *)v4 = 56;
  *(_BYTE *)(v4 + 32) = 11;
  *(_QWORD *)(v4 + 40) = qstrdup();
  *(_DWORD *)(v4 + 68) = *(_DWORD *)(a1 + 228);
  v5 = *(_QWORD *)(a1 + 216);
  *(_BYTE *)(v4 + 64) = 8;
  *(_QWORD *)(v4 + 72) = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 228);
  *(_QWORD *)(a1 + 216) = 0;
  if ( (int)v5 > 0 )
    sub_F2530(a2, v4, 0);
  return v4;
}

