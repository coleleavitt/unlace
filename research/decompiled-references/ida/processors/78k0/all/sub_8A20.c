signed __int64 __fastcall sub_8A20(__int64 a1)
{
  signed __int64 result; // rax

  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_7A80((__int64 *)(a1 + 128), 0);
  return result;
}

