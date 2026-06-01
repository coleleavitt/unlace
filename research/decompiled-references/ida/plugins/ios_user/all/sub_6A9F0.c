__int64 __fastcall sub_6A9F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 40) )
  {
    result = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(result + 8) += a2;
  }
  return result;
}

