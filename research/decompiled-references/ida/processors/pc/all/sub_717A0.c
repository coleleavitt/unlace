unsigned __int64 __fastcall sub_717A0(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // r14
  unsigned __int64 v3; // rbx
  _QWORD *v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( (unsigned __int8)sub_6F3C0(*(_QWORD *)(a1 + 5304), a2, &v5, 1u) )
    {
      v2 = v5;
      if ( v5[1] )
      {
        v3 = 0;
        do
        {
          if ( *(_DWORD *)(*v2 + 12 * v3 + 4) )
          {
            netnode_supdel();
            netnode_supdel();
          }
          ++v3;
          netnode_supdel();
          netnode_supdel();
        }
        while ( v3 < v2[1] );
      }
    }
  }
  return v6 - __readfsqword(0x28u);
}
