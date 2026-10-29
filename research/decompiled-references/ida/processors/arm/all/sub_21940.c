unsigned __int64 __fastcall sub_21940(_QWORD *a1, double a2)
{
  __int64 v2; // rbx
  void *v4; // rdi
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 *v12; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v2 = a1[67];
  v13 = __readfsqword(0x28u);
  while ( v2 )
  {
    sub_1D880(*(_QWORD **)(v2 + 24));
    v4 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v4, 0x30u);
  }
  a1[67] = 0;
  a1[68] = a1 + 66;
  a1[69] = a1 + 66;
  a1[70] = 0;
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      v11 = node2ea();
      v5 = netnode_altval();
      if ( BYTE1(v5) > 0xFu )
      {
        sub_1DA50((__int64)"%a: bad it-block, ignored\n", a2);
        continue;
      }
      v6 = (_QWORD *)a1[67];
      if ( v6 )
      {
        v7 = (__int64)(a1 + 66);
        do
        {
          while ( 1 )
          {
            v8 = v6[2];
            v9 = v6[3];
            if ( v6[4] < v11 )
              break;
            v7 = (__int64)v6;
            v6 = (_QWORD *)v6[2];
            if ( !v8 )
              goto LABEL_10;
          }
          v6 = (_QWORD *)v6[3];
        }
        while ( v9 );
LABEL_10:
        if ( (_QWORD *)v7 != a1 + 66 && v11 >= *(_QWORD *)(v7 + 32) )
          goto LABEL_13;
      }
      else
      {
        v7 = (__int64)(a1 + 66);
      }
      v12 = &v11;
      v7 = sub_21670(a1 + 65, (_QWORD *)v7, (__int64)&unk_894E0, &v12);
LABEL_13:
      *(_WORD *)(v7 + 40) = v5;
      *(_BYTE *)(v7 + 42) = BYTE2(v5);
    }
    while ( netnode_supnext() != -1 );
  }
  return v13 - __readfsqword(0x28u);
}
