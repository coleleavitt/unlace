__int64 __fastcall sub_3E6DC0(__m128i *a1)
{
  _DWORD *exception; // rax
  int v2; // ebp
  __int64 result; // rax

  if ( (unsigned int)asctoreal() != 1 )
    JUMPOUT(0x5E1B6);
  v2 = sub_3E6680(a1);
  if ( v2 )
  {
    exception = __cxa_allocate_exception(4u);
    *exception = v2;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  result = a1[67].m128i_u16[2];
  if ( (_WORD)result == 4 )
  {
    a1[67].m128i_i16[2] = 2;
LABEL_7:
    sub_5E06E();
  }
  if ( (_WORD)result != 41 )
    goto LABEL_7;
  return result;
}

