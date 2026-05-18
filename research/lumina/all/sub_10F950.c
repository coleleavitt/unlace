__int64 (__fastcall *__fastcall sub_10F950(__int64 (__fastcall **a1)(), __int64 a2))()
{
  __int64 (__fastcall *result)(); // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = nullptr;
    return sub_10F920(*((_QWORD *)result + 14), a2);
  }
  return result;
}
