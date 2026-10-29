__int64 __fastcall sub_F620(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int16 v7; // ax
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rsi

  v3 = *(_QWORD *)(a3 + 8);
  if ( (unsigned __int64)(v3 - 2) > 0xFFFFFFFFFFFFFFFCLL )
    return 0;
  if ( *(_BYTE *)(a2 + 121) == 1 )
    v7 = *(_WORD *)(a2 + 126);
  else
    v7 = *(_WORD *)(a2 + 86);
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(a2 + 16);
  switch ( v7 )
  {
    case 5:
      v9 = a1[21];
      v10 = 133;
      goto LABEL_9;
    case 30:
      v9 = a1[22];
      v10 = 135;
      goto LABEL_9;
    case 4:
      v9 = a1[20];
      v10 = 132;
LABEL_9:
      if ( (v9 & get_sreg(v8, v10)) != 0xFFFFFFFFFFFFFFFFLL )
        return 0;
      v3 = *(_QWORD *)(a3 + 8);
      v8 = *(_QWORD *)(a2 + 16);
      break;
  }
  return sub_F1C0((__int64)a1, v8, 0, v3, *(unsigned __int16 *)(a2 + 86), 1);
}

