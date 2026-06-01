unsigned __int64 __fastcall sub_389E60(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1008);
  v16 = 0;
  v17 = 0;
  v4 = *(__int64 **)(v3 + 40);
  v5 = &v4[*(_QWORD *)(v3 + 48)];
  if ( v4 == v5 )
    return v18 - __readfsqword(0x28u);
  do
  {
    while ( 1 )
    {
      v8 = *v4;
      if ( !*v4 )
        goto LABEL_4;
      v9 = *(_QWORD *)(v8 + 24);
      if ( !v9 || a2 != -1 && *(_QWORD *)(v9 + 40) != a2 )
        goto LABEL_4;
      if ( a3 )
      {
        v10 = *(_QWORD *)(v8 + 32);
        if ( !v10 || (*(_BYTE *)(v10 + 108) & 8) == 0 )
          break;
      }
      *(_DWORD *)v8 &= ~2u;
      *(_DWORD *)(v8 + 56) = 0;
      *(_DWORD *)(v8 + 80) = 0;
      *(_DWORD *)(v8 + 104) = 0;
LABEL_4:
      if ( v5 == ++v4 )
        goto LABEL_14;
    }
    v11 = v17;
    v12 = v16;
    if ( *((_QWORD *)&v17 + 1) < (unsigned __int64)(v17 + 1) )
    {
      v16 = qvector_reserve((__int64)&v16, v16, v17 + 1, 8);
      v12 = v16;
      v11 = v17;
    }
    ++v4;
    *(_QWORD *)(v12 + 8 * v11) = v8;
    *(_QWORD *)&v17 = v17 + 1;
  }
  while ( v5 != v4 );
LABEL_14:
  v13 = v16;
  v14 = v16 + 8 * v17;
  if ( v14 != v16 )
  {
    do
    {
      sub_389DE0(*(_QWORD *)(*(_QWORD *)v13 + 16LL));
      v13 += 8;
    }
    while ( v14 != v13 );
    v13 = v16;
  }
  if ( v13 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v13);
  }
  return v18 - __readfsqword(0x28u);
}

