void __fastcall sub_D7510(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v2; // rbp

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      sub_C9250(*(_QWORD *)(a1 + 8), v1);
      v1 = v2;
    }
    while ( v2 );
  }
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = (_DWORD)&stru_10000;
  if ( a1 )
    sub_C9250(*(_QWORD *)(a1 + 8), (_QWORD *)a1);
}
