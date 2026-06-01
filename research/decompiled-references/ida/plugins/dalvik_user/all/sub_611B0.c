__int64 __fastcall sub_611B0(__int64 a1)
{
  __int64 result; // rax

  result = sub_5D640(*(_QWORD *)(a1 + 32));
  if ( !(_BYTE)result )
    *(_QWORD *)(a1 + 64) = "irs";
  return result;
}

