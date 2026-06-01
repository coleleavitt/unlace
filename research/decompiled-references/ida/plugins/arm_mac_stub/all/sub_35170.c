__int64 __fastcall sub_35170(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax

  result = sub_30320(*(_QWORD *)(a1 + 32), a2, a3);
  if ( !(_BYTE)result )
    *(_QWORD *)(a1 + 64) = "irs";
  return result;
}

