void __fastcall sub_EF390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 *v7; // rbx

  v6 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v6 + 20) >= 0 )
    v7 = (__int64 *)sub_EF2D0((_QWORD *)(a1 + 8), v6, 16, a4, a5, a6);
  else
    v7 = *(__int64 **)(v6 + 8);
  if ( v7 )
  {
    if ( (*((_DWORD *)v7 + 2))-- == 1 )
    {
      sub_C9940(*v7, v6, a3, a4, a5, a6);
      *v7 = 0;
    }
  }
}
