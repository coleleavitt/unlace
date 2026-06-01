__int64 __fastcall sub_16F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = qfread(*(_QWORD *)(a1 + 0x2000), a2, a3);
  if ( result > 0 )
    qword_21908 += result;
  return result;
}
