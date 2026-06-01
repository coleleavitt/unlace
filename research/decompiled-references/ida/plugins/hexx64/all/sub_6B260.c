__int64 __fastcall sub_6B260(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax

  for ( ; a2; a2 = sub_A3480(a1, a2) )
    ;
  result = *(unsigned int *)(a1 + 76);
  if ( (_DWORD)result && *(_QWORD *)(a1 + 376) )
  {
    sub_6B180(a1, a3);
    result = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
    if ( result )
      *(_DWORD *)(result + 48) = 63;
    *(_DWORD *)(a1 + 76) = 2;
  }
  return result;
}

