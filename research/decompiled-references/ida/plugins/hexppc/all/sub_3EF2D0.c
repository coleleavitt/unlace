unsigned __int64 __fastcall sub_3EF2D0(__int64 a1, int a2, unsigned int a3, char a4, char a5, double a6)
{
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(_DWORD *, unsigned int); // rax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  unsigned int v16; // r15d
  unsigned int v18; // eax

  v11 = *(_QWORD *)(a1 + 832);
  v12 = *(unsigned __int16 *)(a1 + 150);
  v13 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v11 + 168LL);
  if ( v13 == sub_3E59C0 )
  {
    v14 = sub_3E59C0((_DWORD *)v11, v12);
  }
  else
  {
    v18 = v13((_DWORD *)v11, v12);
    v11 = *(_QWORD *)(a1 + 832);
    v14 = v18;
  }
  v15 = *(_QWORD *)(v11 + 4464);
  if ( !v15 )
    sub_3E6800(a6);
  v16 = *(_DWORD *)(*(_QWORD *)(v11 + 4456) + 4 * v15 - 4);
  *(_QWORD *)(v11 + 4464) = v15 - 1;
  sub_1D3050(a1, 0, 2, a3, v14, v16);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    sub_1D2C40(a1, 2, 7, v16, v16, 0);
  sub_3EE990(a1, a2, v16, a4, a5, a6);
  return sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
}

