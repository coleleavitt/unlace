__int64 __fastcall sub_C2020(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // rax
  int i; // edx
  _QWORD *v4; // rax
  int j; // r8d
  _QWORD *v6; // rax
  int v7; // ecx
  _QWORD *v8; // rax
  int k; // ecx
  int v10; // eax

  v2 = *(_QWORD **)(a1 + 440);
  for ( i = 0; v2; ++i )
    v2 = (_QWORD *)*v2;
  v4 = *(_QWORD **)(a1 + 448);
  for ( j = 0; v4; ++j )
    v4 = (_QWORD *)*v4;
  v6 = *(_QWORD **)(a1 + 456);
  if ( v6 )
  {
    v7 = 0;
    do
    {
      v6 = (_QWORD *)*v6;
      ++v7;
    }
    while ( v6 );
    i += v7;
  }
  v8 = *(_QWORD **)(a1 + 464);
  for ( k = 0; v8; ++k )
    v8 = (_QWORD *)*v8;
  v10 = *(_DWORD *)(a1 + 420);
  if ( a2 )
  {
    *a2 = v10 - i;
    v10 = *(_DWORD *)(a1 + 420);
  }
  return (unsigned int)(v10 - j - i - k);
}
