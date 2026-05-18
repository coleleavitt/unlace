__int64 __fastcall sub_302D0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 260) == 4 )
  {
    if ( (unsigned __int64)xmmword_241AE0 <= 1 )
      sub_2F260((__int64)"No vault server host\n");
    return sub_16B870(
             (unsigned int)"Delegating authentication to vault server at: %s\n",
             (_DWORD)qword_241AD8,
             a3,
             a4,
             a5,
             a6);
  }
  return result;
}
