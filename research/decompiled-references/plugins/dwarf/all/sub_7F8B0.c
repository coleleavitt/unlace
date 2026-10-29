__int64 __fastcall sub_7F8B0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 48);
  if ( result )
    *(_QWORD *)(a1 + 48) = --result;
  return result;
}
