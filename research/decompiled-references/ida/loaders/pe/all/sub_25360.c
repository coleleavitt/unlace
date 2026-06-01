unsigned __int64 __fastcall sub_25360(char *dest, int a2, _DWORD *a3, char *a4)
{
  __int64 v5; // rbx
  char *v8; // r14
  char *v9; // rbx
  __int16 v10; // cx
  char *v11; // rdx
  __int16 v12; // ax
  char v13; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  LODWORD(v5) = a2;
  v14 = __readfsqword(0x28u);
  if ( (unsigned __int8)utf8_utf16() )
  {
    LODWORD(v5) = 0;
    memcpy(dest, &unk_2D01E, 0);
    *(_WORD *)dest = 0;
  }
  else if ( a2 )
  {
    v8 = &dest[2 * a2];
    v9 = dest;
    if ( dest >= v8 )
      goto LABEL_17;
    while ( 1 )
    {
      v10 = *a4++;
      if ( !(_BYTE)v10 )
        break;
      if ( (v10 & 0x80u) == 0 )
      {
        *(_WORD *)v9 = v10;
        v9 += 2;
      }
      else
      {
        qsnprintf();
        if ( v9 >= v8 )
          goto LABEL_17;
        v11 = &v13;
        while ( 1 )
        {
          v12 = *v11++;
          if ( !(_BYTE)v12 )
            break;
          v9 += 2;
          *((_WORD *)v9 - 1) = v12;
          if ( v9 >= v8 )
            goto LABEL_17;
        }
      }
      if ( v9 >= v8 )
        goto LABEL_17;
    }
    if ( v9 >= v8 )
LABEL_17:
      v9 = v8 - 2;
    *(_WORD *)v9 = 0;
    v5 = (v9 - dest) >> 1;
  }
  if ( a3 )
    *a3 = v5;
  return v14 - __readfsqword(0x28u);
}
