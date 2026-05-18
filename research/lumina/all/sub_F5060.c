__int64 __fastcall sub_F5060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // esi
  __int64 v8; // rax

  v7 = *(unsigned __int8 *)(a2 + 28);
  if ( (_BYTE)v7 )
  {
    v8 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 36) = v7;
    if ( (*(_BYTE *)(v8 + 20) & 1) != 0 )
      sub_F4FB0(a1, v7);
    return sub_C92E0(a2);
  }
  else if ( (*(_BYTE *)(a2 + 29) & 4) != 0 )
  {
    return sub_F48B0(a1, *(_QWORD **)(a2 + 8), *(_DWORD *)(a2 + 24), 1u, sub_D42A0, a6);
  }
  else
  {
    sub_F48B0(a1, "", 0, 1u, nullptr, a6);
    return sub_C92E0(a2);
  }
}
