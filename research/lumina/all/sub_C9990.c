void __fastcall sub_C9990(__int64 a1, int *a2)
{
  __int64 v3; // rbp
  int v4; // ebx
  __int64 v5; // rsi
  __int64 i; // rax
  int v7; // edx

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *a2;
  v5 = *(_QWORD *)(v3 + 80);
  *(_BYTE *)(a1 + 198) = *(_BYTE *)(a1 + 198) & 0x3F | 0x40;
  for ( i = *(_QWORD *)(a1 + 136) + 24LL * *(int *)(a1 + 144) - 24; ; i -= 24 )
  {
    if ( *(_BYTE *)i <= 0x40u )
    {
      switch ( *(_BYTE *)i )
      {
        case 0:
        case 1:
          goto LABEL_6;
        case 2:
          if ( *(_DWORD *)(i + 8) )
            *(_BYTE *)(a1 + 198) &= ~0x40u;
LABEL_6:
          *(_BYTE *)(a1 + 198) |= 0x80u;
          break;
        case 3:
        case 4:
        case 5:
          *(_BYTE *)(a1 + 198) = *(_BYTE *)(a1 + 198) & 0x3F | 0x80;
          break;
        case 6:
          if ( v4 < *(_DWORD *)(i - 20) )
            v4 = *(_DWORD *)(i - 20);
          goto LABEL_11;
        case 7:
          if ( v4 < *(_DWORD *)(i + 8) )
            v4 = *(_DWORD *)(i + 8);
          break;
        default:
LABEL_11:
          v7 = *(_DWORD *)(i + 8);
          if ( v7 >= 0 )
            break;
          *(_DWORD *)(i + 8) = *(_DWORD *)(v5 + 4LL * ~v7);
          if ( *(_QWORD *)(a1 + 136) == i )
            goto LABEL_13;
          continue;
      }
    }
    if ( *(_QWORD *)(a1 + 136) == i )
      break;
  }
LABEL_13:
  if ( v5 )
  {
    sub_C9250(*(_QWORD *)a1, *(_QWORD **)(v3 + 80));
    *(_QWORD *)(v3 + 80) = 0;
  }
  *(_DWORD *)(v3 + 68) = 0;
  *a2 = v4;
}
