__int64 __fastcall sub_CFB20(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  result = 0;
  if ( a2 != *(_QWORD *)(v2 + 24) )
  {
    do
      result = (unsigned int)(result + 1);
    while ( *(_QWORD *)(v2 + 32LL * (int)result + 24) != a2 );
  }
  return result;
}
