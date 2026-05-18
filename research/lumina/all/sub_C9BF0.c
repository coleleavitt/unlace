void __fastcall sub_C9BF0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebx
  __int64 v7; // rax
  _QWORD *v8; // rbp

  if ( *(int *)a2 > 0 )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      v8 = &a2[v7];
      sub_C9940(v8[16], (__int64)a2, a3, a4, a5, a6);
      v8[16] = 0;
    }
    while ( *(_DWORD *)a2 > v6 );
  }
  if ( a2 )
    sub_C9250(a1, a2);
}
