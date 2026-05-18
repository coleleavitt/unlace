void __fastcall sub_F2630(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, int a5, double a6)
{
  char v6; // r13
  _QWORD *v9; // r14
  __int64 i; // rbx

  v6 = a5;
  v9 = *(_QWORD **)(a1 + 16);
  if ( a3 != 1 )
    sub_E30E0(a1, a3, *(_DWORD *)(a4 + 40), a5 == 113, *(_QWORD *)a4);
  if ( *(char *)(a4 + 48) >= 0 )
  {
    sub_E1770(v9, v6, a2, *(_DWORD *)(a4 + 40), a3, *(__int16 *)(a4 + 56));
  }
  else
  {
    for ( i = *(_QWORD *)(a4 + 16); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (*(_BYTE *)(i + 99) & 3) == 2 )
        break;
    }
    sub_E1710((__int64)v9, v6, a2, *(_DWORD *)(i + 88), a3);
    sub_F2600(a1, i, a6);
  }
}
