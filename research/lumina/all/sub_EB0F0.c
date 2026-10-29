void __fastcall sub_EB0F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v2 + 40);
  if ( v3 )
  {
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v3 + 8);
        if ( off_241180(*(_DWORD *)v3) )
          break;
        v5 = v3;
        v3 = v6;
        sub_C91C0(v5, a2);
        if ( !v6 )
          goto LABEL_6;
      }
      a2 = 36632;
      sub_EAE20(a1, 0x8F18u);
      v7 = v3;
      v3 = v6;
      sub_C91C0(v7, 36632);
    }
    while ( v6 );
  }
LABEL_6:
  *(_QWORD *)(v2 + 40) = 0;
}
