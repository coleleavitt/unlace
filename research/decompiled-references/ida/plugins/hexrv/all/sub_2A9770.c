void (*__fastcall sub_2A9770(__int64 a1))()
{
  void (*v1)(); // rax
  void (*result)(); // rax

  v1 = *(void (**)())(**(_QWORD **)(a1 + 56) + 112LL);
  if ( v1 == nullsub_161 )
  {
    result = *(void (**)())(**(_QWORD **)(a1 + 64) + 112LL);
    if ( result == nullsub_161 )
      return result;
    return (void (*)())((__int64 (*)(void))result)();
  }
  v1();
  result = *(void (**)())(**(_QWORD **)(a1 + 64) + 112LL);
  if ( result != nullsub_161 )
    return (void (*)())((__int64 (*)(void))result)();
  return result;
}

