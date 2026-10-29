__int64 __fastcall sub_76F70(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 >= a1[1] )
    sub_73F90(a1);
  result = unpack_dd();
  if ( a1[1] - *a1 < (unsigned __int64)(int)result )
    return 0xFFFFFFFFLL;
  return result;
}

