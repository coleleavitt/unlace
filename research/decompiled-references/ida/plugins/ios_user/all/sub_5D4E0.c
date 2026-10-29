__int64 __fastcall sub_5D4E0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v6; // eax
  int v7; // r12d
  int v8; // eax
  __int64 v9; // r12
  __int64 i; // r13
  int v11; // eax
  char v12; // dl
  __int64 v13; // rax
  __int64 v15; // [rsp+8h] [rbp-58h] BYREF
  __int128 v16; // [rsp+10h] [rbp-50h]
  unsigned __int64 v17; // [rsp+20h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v16 = 0;
  v15 = 0;
  if ( !a4 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  a4[1] = 0;
  v6 = nbits();
  v7 = v6 + 14;
  v8 = v6 + 7;
  if ( v8 >= 0 )
    v7 = v8;
  v9 = a2 * (v7 >> 3);
  if ( a3 )
  {
    for ( i = a4[1]; ; i = a4[1] )
    {
      sub_15620(&v15);
      if ( (unsigned int)sub_5ABF0(a1, &v15) != 1 )
        break;
      v11 = sub_5AB40(a1);
      *(_BYTE *)(a1 + 16) = 0;
      if ( v11 != 1 )
        break;
      v12 = sub_58C20(a4, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), nullptr);
      v13 = a4[1];
      if ( !v12 )
        break;
      if ( v13 == i )
        goto LABEL_16;
      v9 += v13 - i;
      a3 = i + a3 - v13;
      if ( !a3 )
        goto LABEL_16;
    }
    LOBYTE(a3) = a4[1] != 0;
  }
  else
  {
LABEL_16:
    LODWORD(a3) = 1;
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return (unsigned int)a3;
}

