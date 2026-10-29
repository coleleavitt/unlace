__int64 __fastcall sub_252D30(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( *a1 >= *a2 )
    return *a2 < *a1;
  return result;
}

