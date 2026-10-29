unsigned __int64 __fastcall sub_5A5E0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r13
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v1 = *a1;
  v6 = __readfsqword(0x28u);
  v2 = *a1 + 32 * a1[1];
  if ( v2 != *a1 )
  {
    do
    {
      v1 += 32;
      netnode_supset();
    }
    while ( v2 != v1 );
  }
  v3 = a1[5];
  v4 = v3 + 8 * a1[6];
  while ( v4 != v3 )
  {
    v3 += 8;
    netnode_supset();
  }
  return v6 - __readfsqword(0x28u);
}

