__int64 __fastcall sub_3A2F80(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 224);
  if ( !result )
    return *(_BYTE *)(a1 + 264) ^ 1u;
  return result;
}

