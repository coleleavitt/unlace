__int64 __fastcall sub_23F450(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // r8
  _BYTE *v16; // r9
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a2;
  v3 = a1[9];
  v17[1] = __readfsqword(0x28u);
  result = 0;
  if ( v3 == v2 )
  {
    v5 = a1[3];
    v6 = (unsigned int)(v5 - 1);
    if ( (int)v5 - 1 <= 0 )
      return 1;
    v7 = 8 * v6;
    v8 = 8 * (v6 - (unsigned int)(v5 - 2));
    while ( 1 )
    {
      v11 = *(_QWORD **)(a1[2] + v7);
      v12 = v11[3];
      v13 = v11[4];
      v14 = v11[5];
      if ( v12 == v3 )
      {
        v9 = (__int64)(a1 + 10);
        if ( v3 == v13 )
          goto LABEL_19;
      }
      else
      {
        if ( v3 == v13 )
        {
          v9 = v12 + 48;
LABEL_19:
          v15 = a1 + 10;
          goto LABEL_12;
        }
        v9 = v12 + 48;
        if ( v3 != v14 )
        {
          if ( (unsigned __int8)sub_280490(*(_QWORD *)(a1[2] + v7), v3, v2, v9) )
            return 0xFFFFFFFFLL;
          v10 = v7 - 8;
          if ( v8 == v7 )
            return 1;
          goto LABEL_8;
        }
      }
      v15 = (_QWORD *)(v13 + 48);
LABEL_12:
      v16 = (_BYTE *)(v14 + 48);
      if ( v3 == v14 )
        v16 = a1 + 10;
      sub_23EAE0(v17, a1[8], *(_QWORD *)(a1[2] + v7), v9, v15, v16, 1);
      copy_tinfo_t();
      clear_tinfo_t();
      if ( !(unsigned int)lexcompare_tinfo() || !*((_BYTE *)a1 + 80) )
        return 0xFFFFFFFFLL;
      a1[9] = v11;
      v10 = v7 - 8;
      if ( v8 == v7 )
        return 1;
LABEL_8:
      v3 = a1[9];
      v7 = v10;
    }
  }
  return result;
}

