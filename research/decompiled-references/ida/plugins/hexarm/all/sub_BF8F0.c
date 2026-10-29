__int64 __fastcall sub_BF8F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  if ( *(_DWORD *)(a1 + 420) != -1 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 48LL) + 8LL) = *(_DWORD *)(a1 + 424);
  v2 = j__qalloc_or_throw();
  *(_QWORD *)(v2 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v2 + 72) = 0;
  sub_330C90(v2, -1);
  *(_DWORD *)v2 = 56;
  *(_BYTE *)(v2 + 32) = 11;
  *(_QWORD *)(v2 + 40) = qstrdup();
  *(_DWORD *)(v2 + 68) = *(_DWORD *)(a1 + 228);
  v3 = *(_QWORD *)(a1 + 216);
  *(_BYTE *)(v2 + 64) = 8;
  *(_QWORD *)(v2 + 72) = v3;
  LODWORD(v3) = *(_DWORD *)(a1 + 228);
  *(_QWORD *)(a1 + 216) = 0;
  if ( (int)v3 > 0 )
    sub_F1F70(a2, v2, 0);
  return v2;
}

