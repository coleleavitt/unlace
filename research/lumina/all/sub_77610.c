__int64 __fastcall sub_77610(__int64 a1, _BYTE **a2, __int64 a3)
{
  _BYTE *v3; // rbx
  bool v4; // cf
  _BYTE *v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r15
  __int64 v14; // r15
  unsigned __int64 v15; // [rsp+0h] [rbp-68h]
  int v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  _BYTE *v18; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  v3 = *a2;
  v18 = v3;
  v4 = __CFADD__(v3, a3);
  v5 = &v3[a3];
  if ( !v4 )
  {
    v8 = (__int64)v5;
    v19[0] = v3;
    v9 = sub_196FF0(v19, v5);
    v18 = (_BYTE *)v19[0];
    v15 = v19[0];
    if ( (unsigned __int64)v3 < v19[0] )
    {
      *(_QWORD *)a1 = v9 - 1;
      v10 = sub_196FF0(v19, v8);
      v11 = v19[0];
      v18 = (_BYTE *)v19[0];
      if ( v15 < v19[0] )
      {
        *(_QWORD *)(a1 + 8) = v10 - 1;
        *(_WORD *)(a1 + 16) = sub_196E40(v19, v8);
        v18 = (_BYTE *)v19[0];
        if ( v11 < v19[0] )
        {
          LOBYTE(v12) = sub_6C650(v19, (unsigned __int64 *)&v18, v8);
          v6 = v12;
          if ( (_BYTE)v12 )
          {
            v13 = LODWORD(v19[0]);
            v16 = v19[0];
            sub_76E30((__int64 *)(a1 + 24), LODWORD(v19[0]));
            if ( !v16 )
            {
LABEL_13:
              *a2 = v18;
              return v6;
            }
            v17 = 416 * v13;
            v14 = 0;
            while ( (unsigned __int8)sub_6E5E0((__int64 *)(v14 + *(_QWORD *)(a1 + 24)), &v18, v8 - (_QWORD)v18) )
            {
              v14 += 416;
              if ( v17 == v14 )
                goto LABEL_13;
            }
          }
        }
      }
    }
  }
  return 0;
}
