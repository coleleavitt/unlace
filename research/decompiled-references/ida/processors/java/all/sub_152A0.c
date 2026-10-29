__int64 __fastcall sub_152A0(__int64 a1, __int64 a2, _DWORD *a3, char a4)
{
  char v6; // bl
  unsigned __int16 v7; // ax
  __int64 v8; // r9
  unsigned __int16 v9; // r13
  unsigned __int8 v10; // cl
  unsigned __int16 v11; // dx
  bool v12; // al
  unsigned __int16 v14; // ax
  char *v15; // r12
  char v16; // bl
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-60h]
  char v19[10]; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int16 v20; // [rsp+26h] [rbp-42h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( *a3 > 2u )
  {
    *a3 -= 3;
    v6 = sub_19A50(a1);
    v7 = sub_19930(a1);
    *(_BYTE *)a2 = v6;
    v8 = a2 + 3;
    *(_WORD *)(a2 + 1) = v7;
    v9 = v7;
    switch ( v6 )
    {
      case '@':
        if ( !sub_13D40(a1, 1, v7, 0x41u, v19) || (v20 & 0x240) != 0x40 )
          return 0;
        return sub_15550(a1, a2 + 3, a3);
      case 'B':
      case 'C':
      case 'I':
      case 'S':
      case 'Z':
        v10 = 3;
        goto LABEL_4;
      case 'D':
        v10 = 6;
        goto LABEL_4;
      case 'F':
        v10 = 4;
        goto LABEL_4;
      case 'J':
        v10 = 5;
        goto LABEL_4;
      case '[':
        if ( !v7 || a4 )
          return 0;
        v15 = (char *)(a2 + 3);
        v16 = 0;
        break;
      case 'c':
        if ( sub_13D40(a1, 1, v7, 0x41u, v19) )
        {
          v8 = a2 + 3;
          if ( (v20 & 0x240) == 0x40 )
            return v8;
        }
        return 0;
      case 'e':
        if ( !sub_13D40(a1, 1, v7, 0x41u, nullptr) || *a3 <= 1u )
          return 0;
        *a3 -= 2;
        v14 = sub_19930(a1);
        v10 = 97;
        v18 = a2 + 5;
        v11 = v14;
        *(_WORD *)(a2 + 3) = v14;
        goto LABEL_5;
      case 's':
        v10 = 1;
LABEL_4:
        v18 = a2 + 3;
        v11 = v7;
LABEL_5:
        v12 = sub_13D40(a1, 1, v11, v10, nullptr);
        v8 = v18;
        if ( !v12 )
          return 0;
        return v8;
      default:
        return 0;
    }
    while ( 1 )
    {
      v17 = sub_152A0(a1, v8, a3, 1);
      v8 = v17;
      if ( !v17 )
        break;
      if ( v16 )
      {
        if ( v16 != -1 && *v15 != v16 )
          return 0;
        if ( !--v9 )
          return v8;
        v16 = -1;
      }
      else
      {
        if ( v9 == 1 )
          return v8;
        v16 = *v15;
        --v9;
        v15 = (char *)v17;
      }
    }
  }
  return 0;
}

