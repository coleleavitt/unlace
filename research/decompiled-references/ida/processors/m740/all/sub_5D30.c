signed __int64 __fastcall sub_5D30(__int64 a1)
{
  signed __int64 result; // rax

  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_4E40((__int64 *)(a1 + 128), 0);
  return result;
}

