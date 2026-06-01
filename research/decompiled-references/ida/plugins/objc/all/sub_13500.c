__int64 __fastcall sub_13500(__int64 a1)
{
  int _32bit; // ebx
  __int64 result; // rax

  _32bit = get_32bit();
  result = 0;
  if ( _32bit != -1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 2216LL) )
      sub_EC40();
    netnode_supset();
    netnode_supset();
    return 1;
  }
  return result;
}
