void __fastcall sub_32010(_QWORD *a1)
{
  __int64 v1; // rsi

  v1 = a1[2];
  *a1 = &off_4DAC0;
  Z3_model_dec_ref(*(_QWORD *)(a1[1] + 8LL), v1);
  operator delete(a1, 0x18u);
}

