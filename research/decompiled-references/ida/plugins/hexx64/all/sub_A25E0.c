__int64 __fastcall sub_A25E0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 item_end; // rbx

  sub_330F80(a1, a2);
  item_end = get_item_end();
  getseg();
  return item_end - get_segm_base();
}

