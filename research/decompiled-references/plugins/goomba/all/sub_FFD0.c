void __fastcall sub_FFD0(_QWORD *a1)
{
  __int64 v1; // rsi

  v1 = a1[2];
  *a1 = &off_4D8B0;
  Z3_ast_vector_dec_ref(*(_QWORD *)(a1[1] + 8LL), v1);
  operator delete(a1, 0x18u);
}
