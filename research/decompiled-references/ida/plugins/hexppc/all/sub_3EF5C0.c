__int64 __fastcall sub_3EF5C0(__int64 a1, int a2, signed int a3, unsigned __int16 a4, char a5, char a6, double a7)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  signed int v13; // r14d

  v9 = *(_QWORD *)(a1 + 832);
  v10 = *(_QWORD *)(v9 + 4464);
  if ( !v10 )
    sub_3E6800(a7);
  v13 = *(_DWORD *)(*(_QWORD *)(v9 + 4456) + 4 * v10 - 4);
  *(_QWORD *)(v9 + 4464) = v10 - 1;
  sub_3EE810(a1, a3, a4, v13, a7);
  return sub_3EF3E0(a1, a2, a5 + 32, a6 + 32, v13, a7);
}

