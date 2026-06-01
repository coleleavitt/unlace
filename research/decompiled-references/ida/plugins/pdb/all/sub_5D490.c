__int64 __fastcall sub_5D490(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( *(_WORD *)(result + 544) == 0xFFFF )
    *(_WORD *)(result + 544) = *(unsigned __int8 *)(a1 + 90);
  return result;
}

