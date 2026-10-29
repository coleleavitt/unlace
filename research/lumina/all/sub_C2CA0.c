__int64 __fastcall sub_C2CA0(__int64 a1, int a2)
{
  unsigned int v2; // r13d
  __int64 v3; // r12
  int v5; // eax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 16) == a2 )
    return v2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 32) )
    xmmword_241500();
  if ( a2 <= 1 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    if ( a2 != 1 )
    {
      if ( v5 > 1 )
        *(_DWORD *)(v3 + 52) = 0;
      --*(_DWORD *)(v3 + 48);
      goto LABEL_7;
    }
    if ( v5 > 1 )
    {
      *(_DWORD *)(v3 + 52) = 0;
LABEL_7:
      *(_DWORD *)(a1 + 16) = a2;
      v2 = 0;
      goto LABEL_8;
    }
    v2 = 5;
    if ( !*(_DWORD *)(v3 + 52) )
    {
      ++*(_DWORD *)(v3 + 48);
      goto LABEL_7;
    }
  }
  else
  {
    v2 = 8;
    if ( (*(_BYTE *)(v3 + 44) & 4) != 0 )
      goto LABEL_8;
    if ( *(int *)(a1 + 16) > 1 )
      goto LABEL_7;
    v2 = 5;
    if ( !*(_DWORD *)(v3 + 52) )
    {
      *(_DWORD *)(v3 + 52) = 1;
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( *(_QWORD *)(v3 + 32) )
    xmmword_241510();
  return v2;
}
