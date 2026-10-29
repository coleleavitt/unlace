void __fastcall sub_1005A0(__int64 a1, __int64 a2, const __m128i **a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v7 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v7 + 20) >= 0 )
    v8 = sub_EF2D0((_QWORD *)(a1 + 8), v7, 16, a4, a5, a6);
  else
    v8 = *(_QWORD **)(v7 + 8);
  if ( v8 && !v8[1] )
  {
    v9 = sub_1004E0(*a3, v7);
    v8[1] = v9;
    if ( !v9 )
      sub_E1560(a1, v7, v10, v11, v12, v13);
  }
}
