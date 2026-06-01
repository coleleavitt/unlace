__int64 __fastcall sub_E5E0(unsigned __int8 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  int *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  if ( a2 > 0x1FF )
    a2 = 511;
  v2 = qword_151D0;
  v3 = (a1 << 9) | a2;
  if ( !qword_151D0 )
    return 541;
  v4 = &dword_151C8;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 16);
      v6 = *(_QWORD *)(v2 + 24);
      if ( *(_DWORD *)(v2 + 32) >= v3 )
        break;
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v6 )
        goto LABEL_8;
    }
    v4 = (int *)v2;
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v5 );
LABEL_8:
  result = 541;
  if ( v4 != &dword_151C8 && v3 >= v4[8] )
    return (unsigned int)v4[9];
  return result;
}
