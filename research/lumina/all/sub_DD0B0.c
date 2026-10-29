__int64 *__fastcall sub_DD0B0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 *v3; // r12
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // r15
  char *v7; // rbx

  if ( !a2 )
    return nullptr;
  v2 = sub_DBF10(a1, 16LL * (*(_DWORD *)a2 - 1) + 24);
  v3 = v2;
  if ( !v2 )
    return nullptr;
  *(_DWORD *)v2 = *(_DWORD *)a2;
  *((_BYTE *)v2 + 4) = *(_BYTE *)(a2 + 4);
  if ( *(int *)a2 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = v4++;
      v5 *= 16;
      v6 = a2 + v5;
      v7 = (char *)v3 + v5;
      *((_QWORD *)v7 + 1) = sub_DC720(a1, *(const char **)(v6 + 8));
      *((_QWORD *)v7 + 2) = *(_QWORD *)(v6 + 16);
    }
    while ( *(_DWORD *)a2 > v4 );
  }
  return v3;
}
