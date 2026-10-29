__int64 __fastcall sub_10250(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 eah; // rax

  eah = get_eah();
  put_word(
    a2,
    (*(_QWORD *)(eah + 16) & (unsigned __int64)(*(_QWORD *)(a3 + 24) + *(_QWORD *)(a3 + 32) + 0x8000LL)) >> 16);
  return 1;
}
