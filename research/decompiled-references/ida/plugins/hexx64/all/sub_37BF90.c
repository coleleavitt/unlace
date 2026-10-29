unsigned __int64 __fastcall sub_37BF90(__int64 a1, char a2, double a3, __m128 a4)
{
  int v4; // eax
  __int64 v6; // rax
  int v7; // r13d
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax

  if ( (unsigned __int8)sub_3716A0(a1, *(_DWORD *)(a1 + 72), a2, a3, a4) )
  {
    v4 = *(_DWORD *)(a1 + 72);
    if ( *(_BYTE *)(a1 + 320) )
    {
LABEL_3:
      if ( (unsigned int)(v4 - 208) > 0x2F || (a2 & 1) == 0 )
        return sub_371F40(a1, a3, a4);
LABEL_16:
      if ( !*(_BYTE *)(a1 + 320) && !*(_DWORD *)(a1 + 464) )
      {
        *(_DWORD *)(a1 + 72) = 32;
        return sub_371F40(a1, a3, a4);
      }
      if ( !under_debugger )
        sub_383060(0xCC91u, a3);
LABEL_32:
      BUG();
    }
    if ( (unsigned int)(v4 - 208) > 0x2F )
      return sub_371F40(a1, a3, a4);
  }
  v6 = *(_QWORD *)(a1 + 464);
  do
  {
    while ( 1 )
    {
      v7 = v6;
      v8 = sub_36ECF0(a1, a3);
      if ( (unsigned __int8)sub_37B940(a1, v8) && (unsigned __int8)sub_3716A0(a1, v8, a2 | 4u, a3, a4) )
        goto LABEL_12;
      v8 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936)) == 0
         ? 240
         : 208;
      if ( *(int *)(a1 + 68) > 0 )
      {
        v8 = 224;
        break;
      }
      if ( !(unsigned __int8)sub_371DC0(a1, a3) )
        break;
      v6 = *(_QWORD *)(a1 + 464);
    }
    if ( !(unsigned __int8)sub_37B940(a1, v8) )
    {
      if ( !under_debugger )
        sub_383060(0xCE0Au, a3);
      goto LABEL_32;
    }
LABEL_12:
    if ( (a2 & 1) == 0 )
    {
      *(_DWORD *)(a1 + 72) = v8;
      if ( v8 != 128 )
        return sub_371F40(a1, a3, a4);
      v6 = *(_QWORD *)(a1 + 464);
      goto LABEL_22;
    }
    v6 = *(_QWORD *)(a1 + 464);
  }
  while ( v7 != (_DWORD)v6 );
  *(_DWORD *)(a1 + 72) = v8;
  if ( v8 == 128 )
  {
LABEL_22:
    if ( (int)v6 <= 0 )
      return sub_371F40(a1, a3, a4);
    v9 = sub_13D280((_QWORD *)a1, 0, a3);
    sub_36A560(v9);
    v4 = *(_DWORD *)(a1 + 72);
    goto LABEL_3;
  }
  if ( v8 - 208 <= 0x2F )
    goto LABEL_16;
  return sub_371F40(a1, a3, a4);
}

