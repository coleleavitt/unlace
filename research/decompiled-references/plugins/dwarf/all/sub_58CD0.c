bool __fastcall sub_58CD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  bool result; // al

  v6 = netnode_hashval(*(_QWORD *)(a1 + 16), a4, a2, 8LL * (a2 != 0), 72);
  result = 0;
  if ( v6 == 8 )
    return netnode_hashval(*(_QWORD *)(a1 + 16), a4, a3, 8LL * (a3 != 0), 86) == 8;
  return result;
}
