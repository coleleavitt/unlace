void __fastcall sub_127410(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  int v7; // ebx
  int v9; // edx
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rsi
  int v13; // eax
  _DWORD *v14; // rdx
  _DWORD *v15; // rdx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9

  v7 = 0;
  v9 = *(_DWORD *)(a1 + 64);
  v10 = *(_QWORD *)(a1 + 16);
  if ( v9 > 0 )
    v7 = sub_E1710(*(_QWORD *)(a1 + 16), 18, v9 - 1, 0, a4);
  v11 = *(unsigned __int16 *)(a3 + 12);
  v12 = 0;
  if ( (_WORD)v11 )
  {
    if ( !*(_BYTE *)(a2 + 63) )
    {
      v15 = *(_DWORD **)(a2 + 80);
      if ( v15 )
      {
        if ( *v15 >= v11 )
          v12 = *(_QWORD *)&v15[6 * v11 - 4];
      }
    }
  }
  sub_127370((__int64 *)a1, v12, a4, a5);
  if ( *(char *)(a3 + 9) > 65 )
  {
    v16 = sub_E1710(v10, 96, a4, 1u, 0);
    sub_DCC50(v10, v16, a3 + 9, 1, v17, v18);
  }
  if ( v7 )
  {
    v13 = *(_DWORD *)(v10 + 144);
    if ( v7 < 0 )
      v7 = v13 - 1;
    v14 = &unk_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
      v14 = (_DWORD *)(*(_QWORD *)(v10 + 136) + 24LL * v7);
    v14[2] = v13;
  }
}
