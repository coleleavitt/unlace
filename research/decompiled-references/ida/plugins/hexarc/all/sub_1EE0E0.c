signed __int64 __fastcall sub_1EE0E0(__int64 a1, signed __int64 a2)
{
  int v2; // ebx
  signed __int64 v3; // r14
  int v4; // ebx
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v9; // [rsp+18h] [rbp-50h] BYREF
  signed __int64 v10[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 440);
  v10[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 144);
  v4 = v2 - 1;
  if ( v4 >= 0 )
  {
    v6 = 104LL * (unsigned int)v4;
    while ( 1 )
    {
      v7 = v6 + *(_QWORD *)(a1 + 432);
      if ( (*(_BYTE *)(v7 + 26) & 0x10) != 0
        || !(unsigned __int8)sub_1BCC60(v6 + *(_QWORD *)(a1 + 432), &v9, v10, *(_DWORD *)(v7 + 88)) )
      {
        goto LABEL_3;
      }
      if ( v9 < a2 )
      {
        if ( v3 < v10[0] )
          v3 = v10[0];
        goto LABEL_3;
      }
      if ( *(_DWORD *)v7 == 1 )
      {
        sub_1EDF80(a1, v4);
LABEL_3:
        --v4;
        v6 -= 104;
        if ( v4 == -1 )
          return v3;
      }
      else
      {
        a2 = v10[0];
        --v4;
        v6 -= 104;
        v3 = v10[0];
        if ( v4 == -1 )
          return v3;
      }
    }
  }
  return v3;
}

