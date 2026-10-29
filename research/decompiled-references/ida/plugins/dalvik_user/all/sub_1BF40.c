__int64 __fastcall sub_1BF40(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  char v3; // dl
  char *v4; // rcx
  int v5; // edi
  bool v6; // al

  v2 = nptr;
  if ( *(_QWORD *)(a2 + 376) )
    v2 = *(const char **)(a2 + 368);
  v3 = v2[1];
  v4 = (char *)(v2 + 1);
  v5 = 0;
  if ( v3 )
  {
    do
    {
      ++v4;
      v6 = v3 == 74 || v3 == 68;
      v3 = *v4;
      v5 += v6 + 1;
    }
    while ( *v4 );
  }
  return (unsigned int)((*(_DWORD *)(a2 + 332) & 8) == 0) + v5;
}

