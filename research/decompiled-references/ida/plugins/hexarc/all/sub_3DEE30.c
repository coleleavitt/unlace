__int64 __fastcall sub_3DEE30(__m128i *a1, char *a2, double a3)
{
  _DWORD *exception; // rax
  int v4; // eax
  __int64 result; // rax
  int v6; // ebp
  __int16 v7; // ax
  char v8; // al

  v4 = sub_3DE840(a1);
  if ( v4 )
  {
    v6 = v4;
    goto LABEL_17;
  }
  result = a1[67].m128i_u16[2];
  if ( (_WORD)result == 4 )
  {
    a1[67].m128i_i16[2] = 2;
    return 2;
  }
  if ( (_WORD)result != 94 )
    return result;
  v6 = sub_3DE840(a1);
  if ( v6 )
  {
LABEL_17:
    exception = __cxa_allocate_exception(4u);
    *exception = v6;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v7 = a1[67].m128i_i16[2];
  if ( v7 == 4 )
  {
    a1[67].m128i_i16[2] = 2;
LABEL_19:
    sub_59D4C();
  }
  if ( v7 != 3 )
    goto LABEL_19;
  v8 = *a2;
  if ( *a2 == 6 )
  {
    *((_QWORD *)a2 + 1) += a1[66].m128i_i64[0];
  }
  else
  {
    if ( v8 != 9 && v8 != 5 )
    {
      if ( !under_debugger )
        sub_37B760(0xC76Au, a3);
      BUG();
    }
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL) += a1[66].m128i_i64[0];
  }
  return sub_3DECE0(a1);
}

