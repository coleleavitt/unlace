unsigned __int64 __fastcall sub_329730(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 item_end; // rdx
  unsigned __int64 result; // rax

  if ( a3 )
    item_end = a2 + a3;
  else
    item_end = get_item_end();
  if ( *(_QWORD *)(a1 + 32) == -1 )
    *(_QWORD *)(a1 + 32) = a2;
  result = *(_QWORD *)(a1 + 40);
  if ( result == -1 || result < item_end )
    *(_QWORD *)(a1 + 40) = item_end;
  return result;
}

