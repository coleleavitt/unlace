unsigned __int64 __fastcall sub_23A350(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rax
  unsigned __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx

  if ( !a2 )
    return 0x100000000LL;
  v5 = a2;
  while ( 2 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    switch ( v6 )
    {
      case 1:
        v5 = *(_QWORD *)(v5 + 32);
        goto LABEL_14;
      case 16:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 61:
        return 0;
      case 17:
      case 18:
        v12 = sub_23A350(a1, *(_QWORD *)(v5 + 24));
        v13 = sub_23A350(a1, *(_QWORD *)(v5 + 32));
        return ((unsigned __int64)(unsigned int)(HIDWORD(v12) + HIDWORD(v13)) << 32) | (unsigned int)(v12 + v13);
      case 22:
      case 23:
        v11 = *(_QWORD *)(v5 + 32);
        if ( *(_DWORD *)(v11 + 8) != 61 )
          return (v6 == 23) | 0x100000000LL;
        v14 = sub_24E6B0(*(_QWORD *)(v11 + 24), v11 + 48, v11, a4, a5);
        v6 = *(_DWORD *)(v5 + 8);
        if ( v14 )
          return (v6 == 23) | 0x100000000LL;
        else
          return (v6 == 22) | 0x100000000LL;
      case 48:
        v5 = *(_QWORD *)(v5 + 24);
LABEL_14:
        if ( !v5 )
          goto LABEL_8;
        continue;
      case 49:
        do
        {
          v7 = v5;
          v5 = *(_QWORD *)(v5 + 24);
          v8 = *(_DWORD *)(v5 + 8);
        }
        while ( v8 == 48 );
        if ( v8 != 57 )
          goto LABEL_6;
        if ( (unsigned __int8)sub_23A290(a1, *(_QWORD *)(v5 + 24)) )
        {
LABEL_8:
          result = 0x100000000LL;
        }
        else
        {
          v5 = *(_QWORD *)(v7 + 24);
LABEL_6:
          v9 = sub_23A350(a1, v5);
          result = (unsigned int)(v9 + 1) | v9 & 0xFFFFFFFF00000000LL;
        }
        break;
      case 57:
        if ( !(unsigned __int8)sub_23A290(a1, *(_QWORD *)(v5 + 24)) )
          goto LABEL_8;
        result = 0x100000001LL;
        break;
      default:
        goto LABEL_8;
    }
    return result;
  }
}

