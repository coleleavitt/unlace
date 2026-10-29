unsigned __int64 __fastcall sub_7E50(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v6; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-58h] BYREF
  __int128 v16; // [rsp+10h] [rbp-50h]
  unsigned __int64 v17; // [rsp+20h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v4 = a3;
  v16 = 0;
  v15 = 0;
  if ( a2 >= a3 )
    return v4;
  v6 = a2;
  v8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *(_BYTE *)(a1 + v6);
      if ( v10 == a4 )
      {
        v11 = v16;
        if ( !(_QWORD)v16 )
          goto LABEL_24;
        if ( a4 == 41 )
          goto LABEL_16;
        goto LABEL_12;
      }
      if ( v10 != 62 )
        break;
      if ( a2 < v6 && *(_BYTE *)(a1 + v6 - 1) == 45 )
        goto LABEL_12;
LABEL_23:
      v11 = v16;
      if ( !(_QWORD)v16 )
        goto LABEL_24;
LABEL_16:
      if ( *(_BYTE *)(v8 + v11 - 1) != v10 )
        goto LABEL_24;
      ++v6;
      *(_QWORD *)&v16 = v11 - 1;
      if ( v4 == v6 )
        goto LABEL_18;
    }
    if ( v10 > 62 )
      break;
    switch ( v10 )
    {
      case ')':
        goto LABEL_23;
      case '<':
        v13 = v16;
        if ( *((_QWORD *)&v16 + 1) < (unsigned __int64)(v16 + 1) )
        {
          v15 = qvector_reserve(&v15, v8, v16 + 1, 1);
          v8 = v15;
          v13 = v16;
        }
        *(_BYTE *)(v8 + v13) = 62;
        goto LABEL_11;
      case '(':
        v9 = v16;
        if ( *((_QWORD *)&v16 + 1) < (unsigned __int64)(v16 + 1) )
        {
          v15 = qvector_reserve(&v15, v8, v16 + 1, 1);
          v8 = v15;
          v9 = v16;
        }
        *(_BYTE *)(v8 + v9) = 41;
LABEL_11:
        *(_QWORD *)&v16 = v16 + 1;
        v8 = v15;
        break;
    }
LABEL_12:
    if ( v4 == ++v6 )
      goto LABEL_18;
  }
  if ( v10 == 91 )
  {
    v14 = v16;
    if ( *((_QWORD *)&v16 + 1) < (unsigned __int64)(v16 + 1) )
    {
      v15 = qvector_reserve(&v15, v8, v16 + 1, 1);
      v8 = v15;
      v14 = v16;
    }
    *(_BYTE *)(v8 + v14) = 93;
    goto LABEL_11;
  }
  if ( v10 != 93 )
    goto LABEL_12;
  v11 = v16;
  if ( (_QWORD)v16 )
    goto LABEL_16;
LABEL_24:
  v4 = v6;
LABEL_18:
  if ( v8 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v8);
  }
  return v4;
}

