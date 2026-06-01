unsigned __int64 __fastcall sub_2416D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbp
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // kr08_8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // rdx

  if ( !a2 )
    return 0x100000000LL;
  v5 = a2;
  while ( 2 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    v7 = v6;
    switch ( v6 )
    {
      case 1u:
        v5 = *(_QWORD *)(v5 + 32);
        goto LABEL_14;
      case 0x10u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x3Du:
        return 0;
      case 0x11u:
      case 0x12u:
        v13 = sub_2416D0(a1, *(_QWORD *)(v5 + 24), v6, a4, a5);
        v17 = sub_2416D0(a1, *(_QWORD *)(v5 + 32), v14, v15, v16);
        return ((unsigned __int64)(unsigned int)(HIDWORD(v13) + HIDWORD(v17)) << 32) | (unsigned int)(v13 + v17);
      case 0x16u:
      case 0x17u:
        v12 = *(_QWORD *)(v5 + 32);
        if ( *(_DWORD *)(v12 + 8) != 61 )
          return (v6 == 23) | 0x100000000LL;
        v18 = sub_255A30(*(__int64 **)(v12 + 24));
        v6 = *(_DWORD *)(v5 + 8);
        if ( v18 )
          return (v6 == 23) | 0x100000000LL;
        else
          return (v6 == 22) | 0x100000000LL;
      case 0x30u:
        v5 = *(_QWORD *)(v5 + 24);
LABEL_14:
        if ( !v5 )
          goto LABEL_8;
        continue;
      case 0x31u:
        do
        {
          v8 = v5;
          v5 = *(_QWORD *)(v5 + 24);
          v9 = *(_DWORD *)(v5 + 8);
        }
        while ( v9 == 48 );
        if ( v9 != 57 )
          goto LABEL_6;
        if ( (unsigned __int8)sub_241610(a1, *(_QWORD *)(v5 + 24)) )
        {
LABEL_8:
          result = 0x100000000LL;
        }
        else
        {
          v5 = *(_QWORD *)(v8 + 24);
LABEL_6:
          v10 = sub_2416D0(a1, v5, v7, a4, a5);
          result = (unsigned int)(v10 + 1) | v10 & 0xFFFFFFFF00000000LL;
        }
        break;
      case 0x39u:
        if ( !(unsigned __int8)sub_241610(a1, *(_QWORD *)(v5 + 24)) )
          goto LABEL_8;
        result = 0x100000001LL;
        break;
      default:
        goto LABEL_8;
    }
    return result;
  }
}

