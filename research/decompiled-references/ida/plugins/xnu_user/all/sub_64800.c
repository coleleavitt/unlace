__int64 __fastcall sub_64800(_QWORD *a1, int *a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  _BYTE *v6; // rbx
  char v7; // bp
  unsigned int v8; // ebx
  char v9; // r13
  unsigned __int8 v10; // dl
  int v11; // eax
  unsigned int v12; // ebx

  v2 = a1[1];
  if ( !v2 )
    return 2;
  v4 = v2 - 1;
  if ( !v4 )
    return 2;
  v5 = 1;
  v6 = (_BYTE *)*a1;
  if ( *(_BYTE *)*a1 == 69 )
  {
    v7 = v6[1];
    if ( v4 <= 2 )
      goto LABEL_20;
    if ( (unsigned int)v7 > 0x7F )
      return v5;
    if ( !isxdigit(v7) || (v8 = (char)v6[2], v9 = v8, v8 > 0x7F) || !isxdigit(v8) )
    {
LABEL_20:
      v5 = 1;
      if ( v7 != 46 )
        return v5;
      if ( a2 )
      {
        *a2 = -1;
        return 0;
      }
      return 0;
    }
    if ( !a2 )
      return 0;
    v10 = v8 - 48;
    if ( (unsigned __int8)(v7 - 48) <= 9u )
    {
      v11 = v7 - 48;
      if ( v10 > 9u )
        goto LABEL_16;
    }
    else if ( (unsigned __int8)(v7 - 97) <= 5u )
    {
      v11 = v7 - 87;
      if ( v10 > 9u )
        goto LABEL_16;
    }
    else
    {
      if ( (unsigned __int8)(v7 - 65) > 5u )
        goto LABEL_28;
      v11 = v7 - 55;
      if ( v10 > 9u )
      {
LABEL_16:
        if ( (unsigned __int8)(v8 - 97) <= 5u )
        {
          v12 = v8 - 87;
          goto LABEL_18;
        }
        v12 = v8 - 55;
        if ( (unsigned __int8)(v9 - 65) <= 5u )
        {
LABEL_18:
          *a2 = v12 | (16 * v11);
          return 0;
        }
LABEL_28:
        *a2 = -1;
        return 0;
      }
    }
    v12 = v8 - 48;
    goto LABEL_18;
  }
  return v5;
}

