__int64 __fastcall sub_510E0(__int64 a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // r9
  unsigned __int8 *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r8
  char v12; // r8

  v6 = *(_QWORD *)(a1 + 1224);
  if ( !v6 )
    return 1;
  v7 = (unsigned __int8 *)(*(_QWORD *)(a1 + 1216) + 40LL);
  v8 = 0;
  while ( 1 )
  {
    v9 = *v7;
    if ( !(_BYTE)v9 )
    {
      while ( ++v8 != v6 )
      {
        v9 = v7[48];
        v7 += 48;
        if ( (_BYTE)v9 )
          goto LABEL_6;
      }
      return 1;
    }
LABEL_6:
    v10 = (int)v8;
    if ( (unsigned __int64)(int)v8 >= *(_QWORD *)(a2 + 88) )
      return sub_50D40(a1, a2, a3, a4, a5, a6);
    ++v8;
    v12 = *(_BYTE *)(*(_QWORD *)(a2 + 80) + v10);
    if ( v8 == v6 )
      break;
    v7 += 48;
    if ( !v12 )
      return sub_50D40(a1, a2, a3, a4, a5, a6);
  }
  if ( !v12 )
    return sub_50D40(a1, a2, a3, a4, a5, a6);
  return v9;
}

