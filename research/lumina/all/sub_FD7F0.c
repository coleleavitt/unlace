void __fastcall sub_FD7F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 *v7; // rbx
  const __m128i *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v6 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v6 + 20) >= 0 )
    v7 = (__int64 *)sub_EF2D0((_QWORD *)(a1 + 8), v6, 16, a4, a5, a6);
  else
    v7 = *(__int64 **)(v6 + 8);
  if ( v7 )
  {
    v8 = (const __m128i *)*v7;
    if ( *v7 )
    {
      sub_FD650(a1, v8, a3, a4, a5, a6);
      sub_C9940(*v7, (__int64)v8, v9, v10, v11, v12);
      *v7 = 0;
    }
  }
}
