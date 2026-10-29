unsigned __int64 __fastcall sub_259A0(__int64 a1)
{
  int v1; // r12d
  int v2; // r12d
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v1 = 0;
    do
    {
      ++v1;
      netnode_supset();
    }
    while ( (unsigned __int64)v1 < *(_QWORD *)(a1 + 16) );
  }
  if ( *(_QWORD *)(a1 + 56) )
  {
    v2 = 0;
    do
    {
      ++v2;
      netnode_supset();
    }
    while ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 56) );
  }
  return v4 - __readfsqword(0x28u);
}
