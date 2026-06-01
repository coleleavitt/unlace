__int64 sub_B650()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  __int64 v3; // r12
  __int64 v4; // rax

  v0 = is_loaded();
  if ( !(_BYTE)v0 )
    return 0;
  v1 = v0;
  v3 = getseg();
  if ( !v3 )
    return 0;
  v4 = get_flags_ex() & 0x600;
  if ( v4 == 1536 )
    return v1;
  LOBYTE(v1) = *(_BYTE *)(v3 + 184) == 2;
  LOBYTE(v4) = v4 == 0;
  return (unsigned int)v4 & v1;
}
