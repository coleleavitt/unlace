__int64 __fastcall sub_18FA40(unsigned int a1)
{
  if ( a1 == -1 )
    return sub_18FA20();
  *(_DWORD *)(__readfsqword(0) - 8) = a1;
  return a1;
}
