__int64 __fastcall sub_84320(__int64 a1)
{
  __int64 result; // rax

  do
  {
    result = a1;
    a1 = *(_QWORD *)(a1 + 80);
  }
  while ( a1 );
  return result;
}

