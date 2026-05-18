__int64 *__fastcall sub_DFFD0(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 *result; // rax

  result = sub_DFAD0(a1, a2, a3);
  if ( a2 )
  {
    if ( !result )
    {
      sub_C9250(a1, a2);
      return nullptr;
    }
  }
  return result;
}
