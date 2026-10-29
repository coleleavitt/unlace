unsigned __int64 __fastcall sub_26A80(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r13d
  __int64 v3; // rbp
  int v4; // ebx
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  v1 = 0;
  if ( *(_QWORD *)(a1 + 80) )
  {
    v2 = 0;
    do
    {
      v3 = *(_QWORD *)(a1 + 72) + 24 * v1;
      if ( *(_QWORD *)(v3 + 8) )
      {
        v4 = 0;
        do
        {
          ++v4;
          netnode_supset();
        }
        while ( (unsigned __int64)v4 < *(_QWORD *)(v3 + 8) );
      }
      v1 = ++v2;
    }
    while ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 80) );
  }
  return v6 - __readfsqword(0x28u);
}

