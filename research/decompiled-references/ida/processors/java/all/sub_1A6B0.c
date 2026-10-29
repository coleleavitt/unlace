unsigned __int64 __fastcall sub_1A6B0(__int64 a1, unsigned int a2, __int16 a3, __int16 a4, __int64 a5)
{
  unsigned int v6; // r13d
  unsigned int v8; // eax
  __int64 v9; // r15
  __int64 v11; // rdi
  _BYTE v14[2]; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int16 v15; // [rsp+1Eh] [rbp-4Ah]
  unsigned __int16 v16; // [rsp+24h] [rbp-44h]
  unsigned __int16 v17; // [rsp+26h] [rbp-42h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 33081) >= (unsigned __int16)a2 )
  {
    v6 = a2;
    do
    {
      v8 = netnode_altval(*(_QWORD *)(a1 + 33328), v6, 48);
      if ( v8 )
      {
        v9 = v8;
        netnode_supval(*(_QWORD *)(a1 + 33336), v8, v14, 12, 83);
        if ( v14[0] == *(_BYTE *)a5
          && v14[1] == *(_BYTE *)(a5 + 1)
          && v15 == a3
          && !(unsigned int)sub_1A030(a1, v17, *(unsigned __int16 *)(a5 + 10))
          && !(unsigned int)sub_1A030(a1, v16, *(unsigned __int16 *)(a5 + 8)) )
        {
          v11 = *(_QWORD *)(a1 + 33336);
          v15 = a4;
          netnode_supset(v11, v9, v14, 12, 83);
          netnode_supdel(*(_QWORD *)(a1 + 33328), v6, 48);
        }
      }
      ++v6;
    }
    while ( *(_WORD *)(a1 + 33081) >= (unsigned __int16)v6 );
  }
  return v18 - __readfsqword(0x28u);
}

