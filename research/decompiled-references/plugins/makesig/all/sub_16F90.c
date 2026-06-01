__int64 __fastcall sub_16F90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = qfwrite(*(_QWORD *)(a1 + 8200), a2, a3);
  if ( result )
    qword_21900 += result;
  return result;
}
