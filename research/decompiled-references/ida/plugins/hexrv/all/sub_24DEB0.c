__int64 __fastcall sub_24DEB0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( a1[8] == a2 )
  {
    a1[9] = *(_QWORD *)(a1[2] + 8LL * a1[3] - 8);
    return 1;
  }
  return result;
}

