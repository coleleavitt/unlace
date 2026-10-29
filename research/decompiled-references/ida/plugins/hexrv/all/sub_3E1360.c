__int64 __fastcall sub_3E1360(__m128i *a1)
{
  int v1; // ebp
  _DWORD *exception; // rax
  int v3; // eax
  __int64 result; // rax

  v3 = sub_3E0EC0(a1);
  if ( v3 )
  {
    v1 = v3;
    exception = __cxa_allocate_exception(4u);
    *exception = v1;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  result = a1[67].m128i_u16[2];
  if ( (_WORD)result == 4 )
  {
    a1[67].m128i_i16[2] = 2;
    return 2;
  }
  return result;
}

