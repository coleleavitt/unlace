signed __int64 __fastcall sub_7A10(__int64 a1)
{
  signed __int64 result; // rax

  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_6B60((__int64 *)(a1 + 128), 0);
  return result;
}

