__int64 __fastcall sub_11E5A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  _QWORD *v7; // rsi

  v6 = *(_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 197) == 2 )
    sub_11D860(a1);
  if ( *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_QWORD *)(v6 + 392) || *(_QWORD *)(a1 + 168) )
      sub_F15D0(a1, a2, a3, a4, a5, a6);
    else
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(a1 + 52);
  }
  v7 = *(_QWORD **)(a1 + 168);
  if ( v7 )
  {
    sub_C9250(v6, v7);
    *(_QWORD *)(a1 + 168) = 0;
  }
  *(_QWORD *)(a1 + 160) = 0;
  return (unsigned int)(*(_DWORD *)(v6 + 88) & *(_DWORD *)(a1 + 52));
}
