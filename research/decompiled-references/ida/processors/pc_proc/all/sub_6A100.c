__int64 __fastcall sub_6A100(__int64 a1, __int64 a2, const char *a3, unsigned int a4, char a5)
{
  unsigned int v8; // r15d
  _BYTE *v9; // r14
  unsigned int v11; // eax
  unsigned int v12; // eax

  v8 = 0;
  if ( !(unsigned __int8)cleanup_name() )
    return v8;
  v9 = (_BYTE *)strlen(a3);
  if ( strncmp(nullptr, a3, (size_t)v9) )
    return v8;
  if ( !a4 )
  {
    v8 = 1;
LABEL_6:
    if ( !a5 && *v9 )
      return 0;
    return v8;
  }
  v11 = (char)*v9;
  if ( v11 <= 0x7F )
  {
    v12 = v11 - 48;
    v8 = a4;
    if ( v12 <= 9 )
    {
      v8 = v12;
      ++v9;
    }
    goto LABEL_6;
  }
  if ( a5 )
    return a4;
  return v8;
}

