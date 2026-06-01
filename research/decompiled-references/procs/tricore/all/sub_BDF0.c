__int64 __fastcall sub_BDF0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // rax
  char v5; // bl

  v1 = is_loaded();
  if ( !(_BYTE)v1 )
    return 0;
  v2 = v1;
  v4 = getseg(a1);
  if ( !v4 )
    return 0;
  if ( *(_BYTE *)(v4 + 184) == 2 )
    return v2;
  v5 = *(_BYTE *)(v4 + 42);
  if ( !v5 )
    return 0;
  return (v5 & 2) == 0;
}
