__int64 __fastcall sub_13900(__int64 a1)
{
  __int64 result; // rax

  result = netnode_altval(*(_QWORD *)(a1 + 120), -3, 65) - 1;
  *(_QWORD *)(a1 + 176) = result;
  return result;
}

