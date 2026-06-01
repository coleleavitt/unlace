__int64 __fastcall sub_4B6E0(int a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v6; // ecx
  __int64 result; // rax
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // r8d
  int v13; // esi
  unsigned __int64 v14; // rax
  int v15; // r9d

  if ( a1 )
  {
    v9 = a2 & 0x3F;
    result = 0;
    if ( v9 != 63 )
    {
      v10 = (1LL << ((unsigned __int8)v9 + 1)) - 1;
      v11 = __ROR8__(v10, a3);
      if ( (a3 & 0x3F) != 0 )
        v10 = v11;
      *a4 = v10;
      return 1;
    }
  }
  else
  {
    v6 = 5;
    while ( _bittest(&a2, v6) )
    {
      if ( v6-- == 0 )
        return 0;
    }
    if ( !v6 )
      return 0;
    v12 = 1 << v6;
    v13 = ((1 << v6) - 1) & a2;
    if ( v13 == (1 << v6) - 1 )
      return 0;
    v14 = (1LL << ((unsigned __int8)v13 + 1)) - 1;
    v15 = a3 & (v12 - 1);
    if ( v15 )
      v14 = (v14 << ((unsigned __int8)v12 - (unsigned __int8)v15)) & ~(-1LL << v12) | (v14 >> v15);
    switch ( 1 << v6 )
    {
      case 2:
        v14 |= 4 * v14;
        goto LABEL_17;
      case 4:
LABEL_17:
        v14 |= 16 * v14;
        goto LABEL_18;
      case 8:
LABEL_18:
        v14 |= v14 << 8;
        goto LABEL_19;
      case 16:
LABEL_19:
        v14 |= v14 << 16;
        goto LABEL_20;
      case 32:
LABEL_20:
        *a4 = (v14 << 32) | v14;
        result = 1;
        break;
      default:
        if ( under_debugger )
          BUG();
        interr();
        result = sub_4B810(10167);
        break;
    }
  }
  return result;
}

