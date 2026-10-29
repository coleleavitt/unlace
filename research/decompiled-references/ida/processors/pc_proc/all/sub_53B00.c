__int64 __fastcall sub_53B00(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 5632) )
  {
    result = find_plugin();
    *(_BYTE *)(a1 + 5632) = 1;
  }
  return result;
}

