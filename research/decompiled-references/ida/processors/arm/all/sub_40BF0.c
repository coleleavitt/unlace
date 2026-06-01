void __fastcall sub_40BF0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, char a6, char a7)
{
  unsigned __int64 v7; // rdx
  _BYTE *v8; // rsi
  unsigned __int64 i; // rcx

  v7 = a3 - a4;
  *a1 = 0;
  if ( v7 <= a5 )
    a5 = v7;
  if ( a5 > 3 )
  {
    a5 = 4;
LABEL_5:
    v8 = (_BYTE *)(a4 + a2);
    for ( i = a5 - 1; ; --i )
    {
      if ( *v8 != a6 )
      {
        if ( *v8 != a7 )
        {
          std::__throw_invalid_argument("bitset::_M_copy_from_ptr");
          sub_40C80();
          return;
        }
        *a1 |= 1LL << i;
      }
      ++v8;
      if ( !i )
        return;
    }
  }
  if ( a5 )
    goto LABEL_5;
}
