__int64 __fastcall sub_10AC0(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, char a5)
{
  unsigned __int8 v5; // al
  __int64 v6; // rbp
  __int64 v7; // r13
  __int16 v8; // dx
  int v9; // eax
  unsigned __int8 v10; // r9
  __int64 v11; // r10
  __int16 v12; // r11
  int v13; // esi
  int v14; // ebp
  __int64 v15; // rax
  __int64 v17; // r14
  __int16 v18; // ax
  int v19; // eax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // r13
  char v23; // al

  v5 = a3;
  v6 = a3;
  v7 = *(_QWORD *)(a1 + 4352);
  *(_BYTE *)(v7 + 40LL * *(int *)(a1 + 4360) + 74) = a2;
  v8 = *(_WORD *)(v7 + 30) & 0x4000;
  if ( a2 == 83 )
  {
LABEL_21:
    if ( v8 )
      goto LABEL_3;
    goto LABEL_4;
  }
  if ( v8 )
  {
LABEL_3:
    v6 = (unsigned __int8)byte_1AEE4[v5];
    goto LABEL_4;
  }
  v21 = **(_DWORD **)(a1 + 4344);
  if ( v21 == 47 || v21 == 128 )
  {
    if ( !a5 )
    {
      v6 = *((unsigned __int8 *)&off_1AEEA + v5);
      goto LABEL_4;
    }
    if ( a5 == 1 )
      goto LABEL_3;
    if ( under_debugger )
      BUG();
    v5 = interr();
    goto LABEL_21;
  }
LABEL_4:
  v9 = sub_C9B0(a1, a2, v6);
  v13 = v9;
  if ( v9 == 82 )
  {
    v22 = v7 + 40 * v11;
    *(_BYTE *)(v22 + 41) = 5;
    *(_QWORD *)(v22 + 48) = sub_C930(a1, 1 << v6);
    v23 = *((_BYTE *)&qword_1AE20 + (unsigned __int8)v6);
    *(_BYTE *)(v22 + 45) = v23;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 4344) + 4LL) == 7 && v23 == 2 )
      *(_BYTE *)(v22 + 45) = 3;
    return 1;
  }
  if ( v9 == 83 )
  {
    v17 = v7 + 40 * v11;
    *(_WORD *)(v17 + 64) |= 1u;
    *(_WORD *)(v7 + 30) = v12 | 0x2000;
    *(_BYTE *)(v17 + 41) = 5;
    *(_QWORD *)(v17 + 48) = sub_C930(a1, 1 << *((_BYTE *)&off_1AEEA + v6));
    *(_BYTE *)(v17 + 45) = byte_1AEE7[v6];
    if ( !*(_DWORD *)(a1 + 4360) && *(_BYTE *)(*(_QWORD *)(a1 + 4344) + 12LL) > 1u )
    {
      v18 = *(_WORD *)(v7 + 30);
      if ( (v18 & 0x20) != 0 )
      {
        v19 = sub_C9B0(a1, *(unsigned __int8 *)(v7 + 114), byte_1AEE4[(unsigned __int8)v6]);
        if ( v20 == v19 )
        {
          *(_BYTE *)(v7 + 85) = byte_1AEE4[(unsigned __int8)v6];
        }
        else
        {
          *(_DWORD *)(a1 + 4360) = 1;
          sub_E930(a1, v19);
          *(_DWORD *)(a1 + 4360) = 0;
        }
      }
      else
      {
        HIBYTE(v18) |= 0x40u;
        *(_WORD *)(v7 + 30) = v18;
      }
    }
    return 1;
  }
  v14 = 0;
  if ( v10 != 0xFF )
  {
    v14 = 1;
    v15 = v7 + 40 * v11;
    *(_BYTE *)(v15 + 41) = 5;
    *(_QWORD *)(v15 + 48) = v10;
    *(_BYTE *)(v15 + 45) = 0;
    ++*(_DWORD *)(a1 + 4360);
  }
  return v14 + (unsigned int)sub_E930(a1, v13);
}

