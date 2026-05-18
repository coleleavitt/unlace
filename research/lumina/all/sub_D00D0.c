void __fastcall sub_D00D0(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // r12
  __int64 v3; // rsi
  __int64 v4; // rbp

  v1 = (*(_DWORD *)(a1 + 24))-- == 1;
  v2 = *(_QWORD *)a1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(a1 + 16);
    v1 = (*(_DWORD *)(v3 + 16))-- == 1;
    if ( v1 )
      sub_D0090(v2, (_QWORD *)v3);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    if ( a1 )
      sub_C9250(v2, (_QWORD *)a1);
  }
}
