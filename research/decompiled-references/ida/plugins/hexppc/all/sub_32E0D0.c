__int64 __fastcall sub_32E0D0(_QWORD *a1, _QWORD *a2, unsigned __int64 item_end, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax

  if ( (get_aflags() & 0x8000000) != 0 )
    item_end = get_item_end();
  v6 = sub_1CC170((__int64)a1, item_end) + a1[12] + a1[11] - a1[17];
  v7 = *a2 + v6;
  v8 = *a2 - v6;
  result = 1;
  if ( a4 )
    v8 = v7;
  *a2 = v8;
  return result;
}

