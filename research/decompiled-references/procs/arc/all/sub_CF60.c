bool __fastcall sub_CF60(__int64 a1, __int64 a2, int a3)
{
  int v5; // edx
  bool result; // al
  __int64 v7; // rdi
  int v8; // r8d
  int v9; // edx
  _DWORD *v10; // rax
  unsigned __int16 *i; // rcx
  unsigned __int64 v12; // rcx

  v5 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v5 > 0x2Du )
  {
    if ( (unsigned __int16)(v5 - 156) <= 1u )
    {
      v12 = *(_QWORD *)(a2 + 64);
      result = 0;
      if ( v12 )
      {
        result = 1;
        if ( a3 != 28 )
        {
          result = (v12 >> 4) & (a3 == 27);
          if ( !result && (_WORD)v5 != 156 )
          {
            result = (v12 >> 5) & (a3 == 31);
            if ( !result && a3 > 12 )
              return (int)((v12 & 0xF) + 13) > a3;
          }
        }
      }
      return result;
    }
  }
  else if ( (_WORD)v5 )
  {
    switch ( (__int16)v5 )
    {
      case 1:
      case 3:
        if ( *(unsigned __int16 *)(a2 + 86) != a3 )
          goto LABEL_5;
        result = 1;
        if ( (((*(_DWORD *)(a2 + 28) & 0x18) - 8) & 0xFFFFFFF0) != 0 )
          goto LABEL_5;
        break;
      case 15:
      case 18:
        result = (unsigned int)(a3 - 13) > 0xD;
        break;
      case 44:
      case 45:
        result = 1;
        if ( a3 != 28 )
          goto LABEL_5;
        break;
      default:
        goto LABEL_5;
    }
    return result;
  }
LABEL_5:
  v7 = *(_QWORD *)(a1 + 16);
  result = 0;
  v8 = *(_DWORD *)(v7 + 104);
  if ( v5 >= v8 && v5 < *(_DWORD *)(v7 + 108) )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 16LL * (v5 - v8) + 8);
    if ( v9 )
    {
      v10 = &unk_1F620;
      for ( i = (unsigned __int16 *)(a2 + 46); (*v10 & v9) == 0 || *((_BYTE *)i - 5) != 1 || a3 != *i; i += 20 )
      {
        if ( ++v10 == (_DWORD *)&unk_1F630 )
          return 0;
      }
      return 1;
    }
  }
  return result;
}
