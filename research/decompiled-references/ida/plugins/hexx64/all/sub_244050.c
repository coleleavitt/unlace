__int64 __fastcall sub_244050(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r14
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // r8
  _BYTE *v17; // r9
  __int64 v18[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a1[9];
  v18[1] = __readfsqword(0x28u);
  result = 0;
  if ( v4 == a2 )
  {
    v6 = a1[3];
    v7 = (unsigned int)(v6 - 1);
    if ( (int)v6 - 1 <= 0 )
      return 1;
    v8 = 8 * v7;
    v9 = 8 * (v7 - (unsigned int)(v6 - 2));
    while ( 1 )
    {
      v12 = *(_QWORD **)(a1[2] + v8);
      v13 = v12[3];
      v14 = v12[4];
      v15 = v12[5];
      if ( v13 == v4 )
      {
        v10 = a1 + 10;
        if ( v4 == v14 )
          goto LABEL_19;
      }
      else
      {
        if ( v4 == v14 )
        {
          v10 = (_QWORD *)(v13 + 48);
LABEL_19:
          v16 = a1 + 10;
          goto LABEL_12;
        }
        v10 = (_QWORD *)(v13 + 48);
        if ( v4 != v15 )
        {
          if ( (unsigned __int8)sub_285090(*(_QWORD *)(a1[2] + v8), v4) )
            return 0xFFFFFFFFLL;
          v11 = v8 - 8;
          if ( v9 == v8 )
            return 1;
          goto LABEL_8;
        }
      }
      v16 = (_QWORD *)(v14 + 48);
LABEL_12:
      v17 = (_BYTE *)(v15 + 48);
      if ( v4 == v15 )
        v17 = a1 + 10;
      sub_2436E0(v18, a1[8], *(_QWORD *)(a1[2] + v8), (__int64)v10, v16, v17, a3, 1);
      copy_tinfo_t();
      clear_tinfo_t();
      if ( !(unsigned int)lexcompare_tinfo() || !*((_BYTE *)a1 + 80) )
        return 0xFFFFFFFFLL;
      a1[9] = v12;
      v11 = v8 - 8;
      if ( v9 == v8 )
        return 1;
LABEL_8:
      v4 = a1[9];
      v8 = v11;
    }
  }
  return result;
}

