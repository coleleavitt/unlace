void __fastcall sub_CF6E0(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  _QWORD *v4; // rsi

  if ( *(int *)a2 > 0 )
  {
    v3 = 0;
    do
    {
      v4 = (_QWORD *)a2[2 * v3 + 1];
      if ( v4 )
        sub_C9250(a1, v4);
      ++v3;
    }
    while ( v3 < *(_DWORD *)a2 );
  }
  sub_C9250(a1, a2);
}
