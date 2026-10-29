_BYTE *__fastcall sub_E540(char *a1, unsigned __int64 a2, __int64 *a3)
{
  char *v4; // rax
  char v5; // cl
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // di

  if ( (unsigned __int64)a1 >= a2 )
    goto LABEL_10;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = *v4++;
    v7 |= (unsigned __int64)(v8 & 0x7F) << v5;
    if ( v8 >= 0 )
      break;
    ++v6;
    v5 += 7;
    if ( v6 == 10 || (unsigned __int64)v4 >= a2 )
      goto LABEL_10;
  }
  if ( v6 == 9 )
  {
    if ( (v8 & 0xFE) == 0x7E )
    {
      if ( (v8 & 1) != 0 )
        goto LABEL_12;
    }
    else if ( (v8 & 1) != 0 )
    {
LABEL_10:
      *a3 = 0;
      return nullptr;
    }
    if ( (v8 & 0xFE) != 0 )
      goto LABEL_10;
  }
  else
  {
    v7 = v7 << (57 - v5) >> (57 - v5);
  }
LABEL_12:
  *a3 = v7;
  return (_BYTE *)(v4 - a1);
}
