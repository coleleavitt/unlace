__int64 __fastcall sub_49730(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _BYTE *v5; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  const char *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rsi
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-88h] BYREF
  __int128 v19; // [rsp+8h] [rbp-80h]
  int v20; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int128 v22; // [rsp+30h] [rbp-58h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a3 != 115 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v5 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = 1;
    *v5 = 0;
    return a1;
  }
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v8 = node2ea(a4);
  if ( !(unsigned __int8)sub_43930((__int64)&v20, a5, v8) )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    goto LABEL_7;
  }
  if ( !(_QWORD)v22 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v9 = qvector_reserve(a1, 0, 10, 1);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)v9 = 0x6573207974706D65LL;
    *(_BYTE *)(v9 + 8) = 116;
    *(_BYTE *)(*(_QWORD *)a1 + 9LL) = 0;
    goto LABEL_7;
  }
  v18 = 0;
  v19 = 0;
  v18 = qvector_reserve(&v18, 0, 7, 1);
  *(_QWORD *)&v19 = 7;
  *(_BYTE *)(v18 + 6) = 0;
  v10 = v18;
  *(_DWORD *)v18 = 1734701683;
  *(_WORD *)(v10 + 4) = 14963;
  v11 = v21;
  v12 = v21 + 32 * v22;
  if ( v21 != v12 )
  {
    do
    {
      v13 = sub_2F3A0(a5, *(unsigned __int16 *)(v11 + 24));
      sub_3D1F0(&v18, (__int64)"%s,", v13);
      v11 += 32;
    }
    while ( v12 != v11 );
  }
  v14 = v19;
  v15 = v18;
  v16 = v19 - 1;
  if ( (__int64)v19 - 1 <= 1 )
  {
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
      v14 = v19;
      v17 = 0;
      v15 = 0;
      goto LABEL_17;
    }
  }
  else
  {
    if ( *((_QWORD *)&v19 + 1) < v16 )
    {
      v18 = qvector_reserve(&v18, v18, v19 - 1, 1);
      v15 = v18;
    }
    *(_QWORD *)&v19 = v16;
    *(_BYTE *)(v15 + v14 - 2) = 0;
    v15 = v18;
    v14 = v19;
  }
  v17 = *((_QWORD *)&v19 + 1);
LABEL_17:
  *(_QWORD *)a1 = v15;
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = v17;
LABEL_7:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return a1;
}

