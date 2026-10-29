__int64 __fastcall sub_A2020(__int64 a1)
{
  __int64 item_end; // rbx

  sub_3312A0(a1);
  item_end = get_item_end();
  getseg();
  return item_end - get_segm_base();
}

