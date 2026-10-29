unsigned __int64 __fastcall sub_6DB50(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v3; // eax
  unsigned __int64 v4; // rsi
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  char v16; // [rsp+20h] [rbp-48h]
  __int64 *v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v17 = a1;
  v16 = 1;
  v15 = 0;
  v13 = a2;
  v14 = a3;
  v3 = sub_196ED0(&v13, a3);
  v4 = v14;
  for ( LODWORD(v15) = v3; v13 < v14; v4 = v14 )
  {
    while ( 1 )
    {
      v6 = sub_196ED0(&v13, v4);
      if ( v16 == 1 || v6 )
        break;
      v11 = sub_196ED0(&v13, v14);
      v16 = 1;
      v4 = v14;
      v15 = v11;
      if ( v13 >= v14 )
        return v18 - __readfsqword(0x28u);
    }
    v7 = v17;
    HIDWORD(v15) += v6;
    v8 = v17[1];
    v9 = *v17;
    if ( v17[2] < (unsigned __int64)(v8 + 1) )
    {
      v10 = sub_1987B0(v17, v9, v8 + 1, 16);
      *v7 = v10;
      v9 = v10;
      v8 = v7[1];
    }
    v5 = (_QWORD *)(v9 + 16 * v8);
    *v5 = -1;
    v5[1] = 0;
    ++v7[1];
    *v5 = v15;
    v5[1] = sub_196FF0(&v13, v14) - 1;
    if ( v16 )
      v16 = 0;
  }
  return v18 - __readfsqword(0x28u);
}
