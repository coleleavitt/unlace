__int64 __fastcall sub_1769C0(__int64 a1)
{
  char v1; // al
  __int64 result; // rax
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // rbp
  void *v6; // rax
  char v7; // al
  char *v8; // rax
  char v9; // dl
  char v10[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v11; // [rsp+408h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        v1 = *(_BYTE *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        v10[0] = v1;
        if ( !v1 )
          goto LABEL_4;
        v8 = (char *)sub_1987B0(a1 + 8, 0, 2, 1);
        goto LABEL_9;
      case 3:
        sub_192D80(v10, 1024, a1 + 8, 50);
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        v3 = strlen(v10);
        v4 = v3 + 1;
        v5 = v3;
        v6 = (void *)sub_1987B0(a1 + 8, 0, v3 + 1, 1);
        *(_QWORD *)(a1 + 8) = v6;
        *(_QWORD *)(a1 + 16) = v4;
        memmove(v6, v10, v5);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + v5) = 0;
        goto LABEL_4;
      case 7:
        goto LABEL_5;
      case 9:
        v7 = *(_BYTE *)(a1 + 8);
        *(_OWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 8) = 0;
        v10[0] = v7;
        v8 = (char *)sub_1987B0(a1 + 8, 0, 2, 1);
LABEL_9:
        v9 = v10[0];
        *(_QWORD *)(a1 + 8) = v8;
        *(_QWORD *)(a1 + 16) = 2;
        *v8 = v9;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 0;
LABEL_4:
        *(_BYTE *)a1 = 7;
LABEL_5:
        result = 0;
        break;
      case 0xA:
        if ( sub_176840((unsigned __int8 *)a1, 2) )
          continue;
        result = sub_18FA20(a1, 2);
        break;
      default:
        result = sub_18FA40(1531);
        break;
    }
    return result;
  }
}
