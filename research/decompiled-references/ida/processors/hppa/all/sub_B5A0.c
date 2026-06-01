_BYTE *__fastcall sub_B5A0(__int16 a1, unsigned int a2, _BYTE *a3, unsigned __int64 a4)
{
  _BYTE *result; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  int v7; // r11d
  int v8; // r8d
  char *v9; // rdx
  __int64 v10; // rcx
  _BYTE *v11; // rsi
  char v12; // di
  char v13; // cl
  char *v14; // rdx
  char v15; // cl

  result = a3;
  v5 = a4;
  v6 = (a2 >> 10) & 3;
  v7 = (a2 >> 5) & 1;
  v8 = (a2 >> 13) & 1;
  if ( (a2 & 0x1000) == 0 )
    goto LABEL_10;
  v9 = &byte_1084C;
  if ( v7 )
  {
    v9 = ",mb";
    if ( !v8 )
    {
      v9 = ",o";
      if ( (a2 & 0x1F0000) != 0 )
        v9 = ",ma";
    }
  }
  while ( 1 )
  {
    if ( (unsigned __int16)a1 > 0x80u )
      goto LABEL_8;
    if ( (unsigned __int16)a1 > 0x5Cu )
      break;
    while ( 1 )
    {
      if ( (unsigned __int16)a1 > 0x35u )
      {
        if ( (unsigned __int16)(a1 - 57) <= 1u )
          goto LABEL_16;
        goto LABEL_8;
      }
      if ( (unsigned __int16)a1 > 0x2Fu )
        goto LABEL_16;
      if ( (unsigned __int16)a1 <= 0x10u )
        break;
      if ( (unsigned __int16)(a1 - 23) > 1u )
        goto LABEL_8;
LABEL_39:
      if ( (unsigned __int64)result < v5 )
        goto LABEL_35;
LABEL_40:
      if ( under_debugger )
LABEL_52:
        BUG();
      a1 = 520;
      result = (_BYTE *)interr();
    }
    if ( (unsigned __int16)a1 > 0xEu )
    {
LABEL_16:
      if ( (unsigned __int64)result >= v5 )
        goto LABEL_40;
      v11 = (_BYTE *)(v5 - 1);
      v12 = 1;
      if ( result != (_BYTE *)(v5 - 1) )
        goto LABEL_20;
      *(_BYTE *)(v5 - 1) = 0;
      v14 = *((char **)&off_15960 + v6);
      if ( !v14 )
        return nullptr;
      result = (_BYTE *)(v5 - 1);
      goto LABEL_25;
    }
LABEL_8:
    if ( under_debugger )
      goto LABEL_52;
    a1 = 10125;
    result = (_BYTE *)interr();
LABEL_10:
    v9 = (&off_15980)[v7 | (2 * v8)];
  }
  v10 = 1LL << ((unsigned __int8)a1 - 93);
  if ( (v10 & 0xC000000EDLL) != 0 )
    goto LABEL_39;
  if ( (v10 & 0xC00000) != 0 )
    goto LABEL_16;
  if ( (v10 & 0x12) == 0 )
    goto LABEL_8;
  v9 = *((char **)&off_159A0 + (v7 | (2 * v8)));
  if ( (unsigned __int64)result >= v5 )
    goto LABEL_40;
LABEL_35:
  v11 = (_BYTE *)(v5 - 1);
  v12 = 0;
  if ( result == (_BYTE *)(v5 - 1) )
  {
    *(_BYTE *)(v5 - 1) = 0;
    if ( !*((_QWORD *)&off_15940 + v6) )
      return nullptr;
LABEL_33:
    *v11 = 0;
    return v11;
  }
LABEL_20:
  while ( 1 )
  {
    v13 = *v9++;
    *result = v13;
    if ( !v13 )
      break;
    if ( ++result == v11 )
    {
      *v11 = 0;
      if ( v12 )
      {
        if ( !*((_QWORD *)&off_15960 + v6) )
          return nullptr;
      }
      else if ( !*((_QWORD *)&off_15940 + v6) )
      {
        return nullptr;
      }
      if ( (unsigned __int64)v11 >= v5 )
        goto LABEL_40;
      goto LABEL_33;
    }
  }
  if ( v12 )
    v14 = *((char **)&off_15960 + v6);
  else
    v14 = *((char **)&off_15940 + v6);
  if ( !v14 )
    return nullptr;
  if ( (unsigned __int64)result >= v5 )
    goto LABEL_40;
LABEL_25:
  if ( v11 == result )
    goto LABEL_33;
  while ( 1 )
  {
    v15 = *v14++;
    *result = v15;
    if ( !v15 )
      return result;
    if ( ++result == v11 )
      goto LABEL_33;
  }
}

