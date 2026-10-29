_BOOL8 __fastcall sub_117160(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _BOOL8 result; // rax

  if ( !*(_BYTE *)(a1 + 56) )
    return *(_QWORD *)(a1 + 48) == a2;
  result = 0;
  if ( !a4 )
    return *(_QWORD *)(a1 + 48) == a2;
  return result;
}

