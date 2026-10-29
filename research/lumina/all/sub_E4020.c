__int64 __fastcall sub_E4020(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(_QWORD, __int64, __int64, __int64, __int64, _QWORD); // r10
  unsigned int v8; // eax

  v5 = 0;
  v6 = *(_QWORD *)a1;
  v7 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 496LL);
  if ( !v7 || *(_BYTE *)(v6 + 197) || *(_BYTE *)(a1 + 292) )
    return v5;
  v8 = v7(*(_QWORD *)(v6 + 504), a2, a3, a4, a5, *(_QWORD *)(a1 + 360));
  v5 = v8;
  if ( v8 == 1 )
  {
    sub_DBD10(a1, "not authorized");
    *(_DWORD *)(a1 + 24) = 23;
    return v5;
  }
  if ( (v8 & 0xFFFFFFFD) == 0 )
    return v5;
  sub_DBD10(a1, "authorizer malfunction");
  *(_DWORD *)(a1 + 24) = 1;
  return 1;
}
