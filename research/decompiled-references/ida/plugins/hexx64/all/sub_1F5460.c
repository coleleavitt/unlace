signed __int64 __fastcall sub_1F5460(__int64 a1, signed __int64 a2, double a3, __m128 a4)
{
  int v4; // ebx
  signed __int64 v5; // r14
  int v6; // ebx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v11; // [rsp+18h] [rbp-50h] BYREF
  signed __int64 v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a1 + 440);
  v12[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = v4 - 1;
  if ( v6 >= 0 )
  {
    v8 = 104LL * (unsigned int)v6;
    while ( 1 )
    {
      v9 = v8 + *(_QWORD *)(a1 + 432);
      if ( (*(_BYTE *)(v9 + 26) & 0x10) != 0
        || !(unsigned __int8)sub_1C34E0(v8 + *(_QWORD *)(a1 + 432), &v11, v12, *(_DWORD *)(v9 + 88), a3) )
      {
        goto LABEL_3;
      }
      if ( v11 < a2 )
      {
        if ( v5 < v12[0] )
          v5 = v12[0];
        goto LABEL_3;
      }
      if ( *(_DWORD *)v9 == 1 )
      {
        sub_1F5300(a1, v6, a3, a4);
LABEL_3:
        --v6;
        v8 -= 104;
        if ( v6 == -1 )
          return v5;
      }
      else
      {
        a2 = v12[0];
        --v6;
        v8 -= 104;
        v5 = v12[0];
        if ( v6 == -1 )
          return v5;
      }
    }
  }
  return v5;
}

