void __fastcall sub_D7810(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rbx
  int v4; // ebp
  _QWORD *v5; // rsi

  v3 = a2 + 1;
  v4 = *(_DWORD *)a2;
  do
  {
    if ( *v3 )
      sub_D7720(a1, *v3);
    v5 = (_QWORD *)v3[1];
    if ( v5 )
      sub_C9250(a1, v5);
    --v4;
    v3 += 3;
  }
  while ( v4 > 0 );
  sub_C9250(a1, a2);
}
