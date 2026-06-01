__int64 __fastcall sub_229280(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, double a5)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  signed __int64 v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( a2 < *(_QWORD *)(a1 + 128) )
    return 1;
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( a2 >= (int)sub_F2D80(a1) )
      goto LABEL_12;
    return 1;
  }
  v6 = *(_QWORD *)(a1 + 432);
  v7 = v6 + 104LL * *(_QWORD *)(a1 + 440);
  if ( v6 != v7 )
  {
    while ( !sub_228C90(a1, v6, a5)
         || !(unsigned __int8)sub_1C34E0(v6, &v9, v10, *(_DWORD *)(v6 + 88), a5)
         || *(_QWORD *)(a1 + 128) <= v9
         || a2 >= v10[0] )
    {
      v6 += 104;
      if ( v7 == v6 )
        goto LABEL_12;
    }
    return 1;
  }
LABEL_12:
  if ( a2 > 0x100000 )
    sub_3311F0((_QWORD *)a1, a4, 0x1Bu);
  return 0;
}

