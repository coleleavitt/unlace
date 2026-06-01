bool __fastcall sub_10460(__int64 *a1, char *a2)
{
  char *v2; // r13
  unsigned int v4; // edi
  char v5; // bl
  char v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edi
  char v10; // bl
  unsigned int v12; // edi
  int v13; // eax
  char v14; // bl

  v2 = a2;
  v4 = *a2;
  v5 = *a2;
  if ( v4 <= 0x7F )
  {
    while ( isspace(v4) )
    {
      v4 = *++v2;
      v5 = v4;
      if ( v4 > 0x7F )
        goto LABEL_23;
    }
    if ( v5 != 45 )
    {
      if ( v5 == 43 )
      {
        v12 = v2[1];
        v6 = 0;
        ++v2;
        v5 = v12;
        goto LABEL_16;
      }
LABEL_23:
      v12 = *v2;
      v6 = 0;
      v5 = *v2;
      goto LABEL_16;
    }
    v12 = v2[1];
    v6 = 1;
    ++v2;
    v5 = v12;
LABEL_16:
    if ( v12 > 0x7F )
    {
      v7 = 10;
      goto LABEL_28;
    }
    while ( isspace(v12) )
    {
      v12 = *++v2;
      v5 = v12;
      if ( v12 > 0x7F )
        goto LABEL_27;
    }
    if ( v5 != 48 )
    {
LABEL_27:
      v5 = *v2;
      v7 = 10;
      goto LABEL_28;
    }
    v5 = v2[1];
    v13 = tolower((unsigned __int8)v5);
    if ( v13 != 120 )
    {
      if ( v13 == 98 )
      {
        v5 = v2[2];
        v7 = 2;
        v2 += 2;
      }
      else
      {
        ++v2;
        v7 = 8;
      }
LABEL_28:
      if ( !v5 )
      {
        v8 = 0;
        goto LABEL_7;
      }
      goto LABEL_3;
    }
    v14 = v2[2];
    v2 += 2;
    v8 = 0;
    if ( !v14 )
      goto LABEL_7;
    while ( v14 <= 96 )
    {
      if ( (unsigned int)v14 > 0x7F )
        goto LABEL_7;
      if ( (unsigned int)(v14 - 48) > 9 )
      {
        if ( (unsigned __int8)(v14 - 65) > 5u )
          goto LABEL_7;
        goto LABEL_34;
      }
LABEL_35:
      ++v2;
      v8 = (char)(v14 - 48) + 16 * v8;
      v14 = *v2;
      if ( !*v2 )
        goto LABEL_7;
    }
    v14 -= 32;
    if ( v14 > 70 )
      goto LABEL_7;
LABEL_34:
    v14 -= 7;
    goto LABEL_35;
  }
  v6 = 0;
  v7 = 10;
LABEL_3:
  v8 = 0;
  do
  {
    if ( v5 <= 47 )
      break;
    if ( v5 >= (int)v7 + 48 )
      break;
    ++v2;
    v8 = (char)(v5 - 48) + v7 * v8;
    v5 = *v2;
  }
  while ( *v2 );
LABEL_7:
  if ( v6 )
    v8 = -v8;
  *a1 = v8;
  v9 = *v2;
  v10 = *v2;
  if ( v9 <= 0x7F )
  {
    while ( isspace(v9) )
    {
      v9 = *++v2;
      v10 = v9;
      if ( v9 > 0x7F )
        return (_BYTE)v9 == 0;
    }
  }
  return v10 == 0;
}

