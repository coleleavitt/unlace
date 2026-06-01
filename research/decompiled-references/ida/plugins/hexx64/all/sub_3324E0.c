__int64 __fastcall sub_3324E0(_QWORD *a1, _QWORD *a2, unsigned __int64 item_end, char a4, double a5)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax

  if ( (get_aflags() & 0x8000000) != 0 )
    item_end = get_item_end();
  v7 = sub_1CFBB0((__int64)a1, item_end, a5) + a1[12] + a1[11] - a1[17];
  v8 = *a2 + v7;
  v9 = *a2 - v7;
  result = 1;
  if ( a4 )
    v9 = v8;
  *a2 = v9;
  return result;
}

