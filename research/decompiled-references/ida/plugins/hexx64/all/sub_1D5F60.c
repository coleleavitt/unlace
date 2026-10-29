__int64 __fastcall sub_1D5F60(_QWORD *a1, __int64 a2, __int64 a3, int a4, double a5, __m128 a6)
{
  unsigned __int64 item_end; // rdx
  unsigned __int64 v9; // r12
  unsigned __int64 head; // rbx
  __int64 v11; // rbx
  __int64 result; // rax
  int v13; // r14d
  unsigned __int64 v14; // rdx

  item_end = get_item_end();
  if ( *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) == item_end )
    return 0;
  v9 = sub_1D3440(a1[187], a2, item_end, a1 + 61);
  if ( v9 == -1 )
    return 4294967294LL;
  sub_3311F0(a1, *(_QWORD *)(a2 + 16), 0x1Du);
  head = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(*(_QWORD *)(a3 + 72) + ((__int64)a4 << 6)) < head )
    goto LABEL_7;
  if ( *(unsigned __int16 *)(a2 + 26) + head != -1 )
  {
    while ( get_first_fcref_to() == -1 )
    {
      head = next_head();
LABEL_7:
      if ( head == -1 )
        goto LABEL_8;
    }
    return 4294967279LL;
  }
LABEL_8:
  v11 = a1[17];
  result = sub_1CF000((__int64)a1, a3, 0, nullptr, a5, a6);
  if ( (_DWORD)result )
    return result;
  if ( a1[17] != v11 )
    return (unsigned int)(unsigned __int8)sub_1CF3F0(a1 + 1) - 18;
  v13 = a4 + 1;
  if ( v13 >= *(_DWORD *)(a3 + 96) )
    return 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + ((__int64)v13 << 6));
  if ( *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) == v14 || v14 >= v9 )
    return 0;
  return 4294967279LL;
}

