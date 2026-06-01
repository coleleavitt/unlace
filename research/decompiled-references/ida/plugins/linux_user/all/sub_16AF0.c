__int64 __fastcall sub_16AF0(__int64 a1)
{
  _DWORD *v1; // rbp

  v1 = *(_DWORD **)(a1 + 1328);
  if ( v1 )
  {
    if ( v1[56] == 1 )
      sub_11340(*(_QWORD *)(a1 + 1328));
    operator delete(v1, 0xE8u);
  }
  *(_QWORD *)(a1 + 1328) = 0;
  sub_16550(a1);
  return sub_36720(a1);
}

