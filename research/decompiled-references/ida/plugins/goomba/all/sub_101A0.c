void __fastcall sub_101A0(_QWORD *a1)
{
  __int64 v1; // rsi

  v1 = a1[2];
  *a1 = &off_4D850;
  if ( v1 )
    Z3_dec_ref(*(_QWORD *)(a1[1] + 8LL));
  operator delete(a1, 0x18u);
}

