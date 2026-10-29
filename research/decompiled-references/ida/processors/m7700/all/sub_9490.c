signed __int64 __fastcall sub_9490(__int64 a1)
{
  signed __int64 result; // rax

  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_79A0((__int64 *)(a1 + 128), 0);
  return result;
}

