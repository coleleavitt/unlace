__int64 __fastcall sub_6AAA0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 40);
  if ( result )
    *(_QWORD *)(a1 + 40) = --result;
  return result;
}

