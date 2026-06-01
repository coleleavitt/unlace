__int64 __fastcall sub_16C40(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( *(_WORD *)(result + 4) == 1 )
    return sub_15EC0(a2, 0xFFFF, (__int64)&unk_1A52D, *(_QWORD *)(result + 40));
  return result;
}

