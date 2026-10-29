__int64 __fastcall sub_16B50(__int64 *a1, _QWORD *a2)
{
  void (*v2)(void); // rax
  _DWORD *v3; // r12

  v2 = *(void (**)(void))(*a1 + 112);
  if ( (char *)v2 == (char *)sub_16AF0 )
  {
    v3 = (_DWORD *)a1[166];
    if ( v3 )
    {
      if ( v3[56] == 1 )
        sub_11340(a1[166]);
      operator delete(v3, 0xE8u);
    }
    a1[166] = 0;
    sub_16550((__int64)a1);
    sub_36720(a1);
  }
  else
  {
    v2();
  }
  if ( a2 )
    *a2 = 0x500000000LL;
  sub_14DC0(a1);
  return 1;
}

