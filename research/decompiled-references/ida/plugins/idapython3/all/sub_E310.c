__int64 __fastcall sub_E310(_QWORD *a1, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( a1 && *a1 )
  {
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  result = (*(__int64 (**)(void))(qword_24798 + 424))();
  if ( result )
    return PyW_GetError(a1, a2);
  return result;
}

