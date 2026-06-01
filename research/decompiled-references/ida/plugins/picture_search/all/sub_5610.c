__int64 __fastcall sub_5610(__int64 a1, double a2)
{
  __int64 bytes; // rcx
  __int64 result; // rax

  bytes = get_bytes();
  result = 1;
  if ( bytes != *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
  {
    sub_5470((__int64)"get_bytes didn't complete successfully (0x%a size: %zud\n", a2, *(_QWORD *)(a1 + 32));
    return 0;
  }
  return result;
}

