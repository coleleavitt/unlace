__int64 __fastcall sub_27B0(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v6; // rbx

  show_auto(a1, 0);
  if ( a2 < 0 )
  {
    v6 = ~a2;
    v4 = v6 + a1;
    put_byte(v6 + a1, 195);
    create_data(a1, 0, v6, -1);
  }
  else
  {
    put_byte(a1, 195);
    if ( a2 == 1 )
      auto_mark_range(a1, a1 + 1, 20);
    else
      create_data(a1, 0, a2, -1);
    v4 = a1;
  }
  set_name(v4, a3, 7168);
  return v4;
}
