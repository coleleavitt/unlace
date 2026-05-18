void __fastcall sub_C9C70(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp

  v2 = *(_QWORD **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0;
  sub_C91C0(*(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = 0;
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_C91C0((__int64)v2, a2);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_DWORD *)(a1 + 4) = 0;
}
