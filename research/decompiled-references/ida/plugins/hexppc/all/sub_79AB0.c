__int64 __fastcall sub_79AB0(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 >= a1[1] )
    sub_76AD0(a1);
  result = unpack_dd();
  if ( a1[1] - *a1 < (unsigned __int64)(int)result )
    return 0xFFFFFFFFLL;
  return result;
}

