__int64 __fastcall sub_5D80(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebp
  int v4; // r12d
  int v5; // r13d
  __int64 v7; // r9
  int v9; // eax
  __int16 v10; // r11
  unsigned __int16 v11; // r11
  char v12; // r8
  int v13; // edi
  char v14; // cl
  int v15; // edx
  int v16; // eax
  int v17; // ebx
  int v18; // r10d
  __int64 result; // rax
  __int64 v20; // r9
  char v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  char v24; // si
  unsigned __int16 v25; // r11
  __int64 v26; // rax
  __int64 *v27; // rdx
  __int16 v28; // di
  int v29; // eax
  __int64 v30; // r9
  char v31; // r8
  __int64 v32; // r9
  unsigned __int16 v33; // r11

  v7 = a2;
  if ( *(_QWORD *)(a1 + 2752) )
  {
LABEL_2:
    v9 = ((a3 >> 7) & 0xF | (a3 >> 20) & 0xFF0) - 1408;
    if ( (unsigned int)v9 <= 0x274
      && (v10 = *(_WORD *)(*(_QWORD *)(a1 + 2752) + 4LL * v9), (*(_WORD *)(a2 + 24) = v10) != 0) )
    {
      v11 = v10 - 209;
      v12 = v11 <= 0x30u;
      v13 = a3 & 0x1F;
      v14 = *(_BYTE *)(*(_QWORD *)(a1 + 2752) + 4LL * v9 + 2) + 2;
      v15 = (a3 >> 5) & 1;
      v4 = (a3 >> 6) & 1;
      v16 = (a3 >> 11) & 1;
      v3 = (a3 >> 12) & 1;
      v17 = (a3 >> 13) & 1;
      v5 = (a3 >> 14) & 0x1F;
      v18 = (a3 >> 19) & 0x1F;
      switch ( v14 )
      {
        case 0:
          sub_5800(a2 + 40, v16, v15, v13, v11 <= 0x30u);
          v23 = v32 + 80;
          v24 = v17;
          if ( v33 <= 0x30u )
            goto LABEL_19;
          goto LABEL_7;
        case 1:
          v23 = a2 + 40;
          v24 = v17;
          if ( v11 <= 0x30u )
            goto LABEL_19;
          goto LABEL_7;
        case 3:
          sub_5800(a2 + 40, v16, v15, v13, v11 <= 0x30u);
          return 1;
        case 4:
          goto LABEL_16;
        case 5:
          sub_5800(a2 + 40, v16, v15, v13, v12);
          sub_5800(v20 + 80, v3, v4, v5, v21);
          v23 = v22 + 120;
          v24 = v17;
          if ( v25 > 0x30u )
          {
LABEL_7:
            sub_5800(v23, 0, v24, v18, 0);
            return 1;
          }
LABEL_19:
          sub_5800(v23, v24, 0, v18, 1);
          result = 1;
          break;
        default:
          return 1;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *(_WORD *)(a1 + 234) = 0;
    v26 = a1 + 238;
    do
    {
      v26 += 8;
      *(_WORD *)(v26 - 8) = 0;
      *(_WORD *)(v26 - 4) = 0;
    }
    while ( a1 + 2750 != v26 );
    v27 = qword_A060;
    *(_QWORD *)(a1 + 2752) = a1 + 234;
    while ( 1 )
    {
      v29 = *(unsigned __int16 *)v27 - 1408;
      if ( (unsigned int)v29 > 0x274 )
        break;
      v28 = *((_WORD *)v27 + 1);
      v27 = (__int64 *)((char *)v27 + 6);
      *(_WORD *)(*(_QWORD *)(a1 + 2752) + 4LL * v29) = v28;
      *(_BYTE *)(*(_QWORD *)(a1 + 2752) + 4LL * v29 + 2) = *((_BYTE *)v27 - 2);
      if ( qword_A4E0 == v27 )
        goto LABEL_2;
    }
    if ( under_debugger )
      BUG();
    v13 = 10086;
    LOBYTE(v16) = interr();
LABEL_16:
    sub_5800(v7 + 40, v16, v15, v13, v12);
    sub_5800(v30 + 80, v3, v4, v5, v31);
    return 1;
  }
  return result;
}

