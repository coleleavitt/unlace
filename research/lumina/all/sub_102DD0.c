void __fastcall sub_102DD0(__int64 a1, double a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rsi
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // r9

  v8 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v8 + 20) >= 0 )
  {
    v9 = sub_EF2D0((_QWORD *)(a1 + 8), v8, 136, a5, a6, a7);
    if ( !v9 )
      return;
  }
  else
  {
    v9 = *(_QWORD **)(v8 + 8);
    if ( !v9 )
      return;
  }
  if ( v9[1] )
  {
    if ( v9[3] > 1u )
      sub_102750(v9, 44);
  }
  else
  {
    *v9 = a1;
    v9[2] = 100;
    v9[3] = 0;
    v9[1] = (char *)v9 + 34;
    *((_WORD *)v9 + 16) = 1;
    sub_102750(v9, 123);
  }
  *v9 = a1;
  v10 = sub_D9DB0(*a4, 1u, a2, (__int64)a4, a5, a6, a7);
  v15 = sub_D9CE0(*a4, 1u, a2, v11, v12, v13, v14);
  sub_102A10(v9, v10, v15);
  sub_102750(v9, 58);
  sub_102C90((__int64 **)v9, a4[1], a2, v16, v17, v18, v19);
}
