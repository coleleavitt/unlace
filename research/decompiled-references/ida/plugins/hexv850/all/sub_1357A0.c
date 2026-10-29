__int64 __fastcall sub_1357A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 i; // rbx
  _DWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 v6[6]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v7[6]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v8; // [rsp+60h] [rbp-28h]
  unsigned __int64 v9; // [rsp+68h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 1504);
  v9 = __readfsqword(0x28u);
  v7[0] = off_4B1500;
  memset(&v7[1], 0, 32);
  v7[5] = v1;
  v8 = 0;
  sub_11B060(a1, (__int64)v7);
  if ( v8 )
  {
    memset(&v6[1], 0, 32);
    v6[0] = (__int64)off_4B1528;
    sub_11AE20(a1, v6);
  }
  for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(v4 + 8) )
  {
    while ( 1 )
    {
      v3 = *(_DWORD **)(i + 56);
      if ( v3 )
      {
        if ( (unsigned int)(*v3 - 56) <= 1 && (unsigned __int8)sub_EDF10(i) )
          break;
      }
      i = *(_QWORD *)(i + 8);
      if ( !i )
        return v8 ^ 1u;
    }
    v4 = *(_QWORD *)(a1 + 520);
    *(_DWORD *)a1 |= 0x400u;
    v8 = 1;
  }
  return v8 ^ 1u;
}

