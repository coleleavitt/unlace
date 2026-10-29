void __fastcall sub_31FE0(_QWORD *a1)
{
  __int64 v1; // rsi

  v1 = a1[2];
  *a1 = &off_4DA80;
  Z3_params_dec_ref(*(_QWORD *)(a1[1] + 8LL), v1);
  operator delete(a1, 0x18u);
}
