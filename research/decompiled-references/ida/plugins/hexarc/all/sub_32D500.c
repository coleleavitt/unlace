__int64 __fastcall sub_32D500(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  unsigned int v8; // r14d
  __int64 tinfo_size; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // r12
  unsigned __int64 v19; // [rsp+0h] [rbp-88h]
  __int64 v21; // [rsp+18h] [rbp-70h]
  unsigned __int64 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+38h] [rbp-50h]
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v23 = 0;
  v24 = 0;
  sub_32D190(&v23, a2, a3, 0, 3);
  v6 = v24;
  v7 = v23;
  if ( !(_QWORD)v24 )
  {
    v8 = 0;
    if ( !v23 )
      return v8;
    goto LABEL_3;
  }
  tinfo_size = get_tinfo_size();
  v11 = tinfo_size + 1;
  v22 = tinfo_size;
  if ( a4 >= tinfo_size + 1 )
  {
LABEL_20:
    v8 = 0;
    goto LABEL_21;
  }
  v19 = v6;
  v12 = 0;
  v21 = v7 + 56;
  v13 = v7 + 56;
  do
  {
    if ( (get_tinfo_property() & 0xF) == 0xB || (v14 = get_tinfo_size(), v14 < a4) || v14 >= v11 )
    {
      ++v12;
      v13 += 64;
      if ( a4 >= v11 )
        break;
      continue;
    }
    v11 = v14;
    v19 = v12;
    v13 += 64;
    ++v12;
    if ( a4 >= v14 )
      break;
  }
  while ( v12 < v6 );
  if ( v19 >= v6 )
    goto LABEL_20;
  if ( v11 == a4 )
  {
    if ( a1 )
    {
LABEL_18:
      v15 = *a1;
      v16 = v7 + (v19 << 6);
      *a1 = *(_QWORD *)(v16 + 56);
      *(_QWORD *)(v16 + 56) = v15;
      goto LABEL_19;
    }
    v8 = 1;
    if ( !v7 )
      return v8;
LABEL_23:
    v17 = v21;
    v18 = 0;
    do
    {
      clear_tinfo_t();
      if ( *(_QWORD *)(v17 - 24) )
      {
        *(_QWORD *)(v17 - 16) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v17 - 48) )
      {
        *(_QWORD *)(v17 - 40) = 0;
        qfree();
      }
      ++v18;
      v17 += 64;
    }
    while ( v6 != v18 );
LABEL_3:
    qfree();
    return v8;
  }
  if ( a5 == 1 || v11 >= v22 )
    goto LABEL_20;
  if ( a1 )
    goto LABEL_18;
LABEL_19:
  v8 = 1;
LABEL_21:
  if ( v7 )
  {
    v21 = v7 + 56;
    goto LABEL_23;
  }
  return v8;
}

