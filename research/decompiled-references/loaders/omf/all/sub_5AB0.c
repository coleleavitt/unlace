unsigned __int64 __fastcall sub_5AB0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  size_t v6; // rax
  size_t v7; // rbx
  __int64 v8; // rsi
  __int128 v9; // kr00_16
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  void *v15; // rdi
  size_t v16; // r14
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  __int128 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  do
  {
    sub_5890((__int64)a1, -1, 1);
    v3 = a1[6];
    if ( *(char *)(*a1 + v3) > 31 )
      break;
    sub_5890((__int64)a1, -1, 1);
    v13 = a1[6];
    v14 = *a1;
    v3 = v13 + 1;
    a1[6] = v13 + 1;
  }
  while ( *(_BYTE *)(v14 + v13) );
  if ( v3 >= a1[1] )
    goto LABEL_8;
  while ( 1 )
  {
    sub_5890((__int64)a1, -1, 1);
    v4 = a1[6];
    v5 = *a1;
    if ( *(char *)(*a1 + v4) <= 31 )
      break;
    sub_5890((__int64)a1, -1, 1);
    v4 = a1[6] + 1;
    a1[6] = v4;
    if ( v4 >= a1[1] )
    {
      v5 = *a1;
      break;
    }
  }
  v6 = v4 - v3;
  v17 = 0;
  v18 = 0;
  v7 = v6;
  if ( v6 )
  {
    v15 = nullptr;
    v16 = v6 + 1;
    if ( v6 != -1 )
    {
      v17 = qvector_reserve(&v17, 0, v6 + 1, 1);
      v15 = (void *)v17;
    }
    *(_QWORD *)&v18 = v16;
    memmove(v15, (const void *)(v5 + v3), v7);
    *(_BYTE *)(v17 + v7) = 0;
    v8 = v17;
    v9 = v18;
  }
  else
  {
LABEL_8:
    v8 = 0;
    v9 = 0u;
  }
  v10 = *(_QWORD *)a2;
  v11 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = v8;
  *(_OWORD *)(a2 + 8) = v9;
  v17 = v10;
  *((_QWORD *)&v18 + 1) = v11;
  if ( v10 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v10);
  }
  return v19 - __readfsqword(0x28u);
}
