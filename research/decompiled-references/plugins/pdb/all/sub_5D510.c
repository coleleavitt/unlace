__int64 __fastcall sub_5D510(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( *(_WORD *)(result + 544) == 0xFFFF )
    *(_WORD *)(result + 544) = *(_WORD *)(a1 + 94);
  return result;
}
