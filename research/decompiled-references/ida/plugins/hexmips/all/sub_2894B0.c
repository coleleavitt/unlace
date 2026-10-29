__int64 __fastcall sub_2894B0(__int64 a1)
{
  char *v1; // rbx
  char v2; // al
  unsigned int v3; // ebp
  char *v4; // rbx
  int v5; // eax

  if ( *(_DWORD *)(a1 + 8) != 68 )
    return (unsigned int)-1;
  v1 = *(char **)(a1 + 24);
  v2 = *v1;
  if ( *v1 == 83 )
    v2 = *++v1;
  v3 = -1;
  if ( v2 == 76 )
  {
    if ( v1[1] == 79 )
    {
      v1 += 2;
      v3 = 0;
    }
  }
  else if ( v2 == 72 && v1[1] == 73 )
  {
    v1 += 2;
    v3 = 1;
  }
  if ( !strncmp(v1, "BYTE", 4u) )
  {
    v4 = v1 + 4;
    v5 = 1;
    if ( v3 != -1 )
      goto LABEL_10;
    goto LABEL_13;
  }
  if ( !strncmp(v1, "WORD", 4u) )
  {
    v4 = v1 + 4;
    v5 = 2;
    goto LABEL_9;
  }
  if ( strncmp(v1, "DWORD", 5u) )
    return (unsigned int)-1;
  v4 = v1 + 5;
  v5 = 4;
LABEL_9:
  if ( v3 != -1 )
  {
LABEL_10:
    v3 *= v5;
    return v3;
  }
LABEL_13:
  if ( (unsigned __int8)(*v4 - 48) <= 9u && !v4[1] )
  {
    v3 = *v4 - 48;
    goto LABEL_10;
  }
  return v3;
}

