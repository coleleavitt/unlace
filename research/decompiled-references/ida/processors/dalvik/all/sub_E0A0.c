__int64 __fastcall sub_E0A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  const char *v9; // rsi
  const char *v10; // r12
  unsigned __int16 v11; // ax
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r13
  __int64 v15; // rbx
  unsigned int v16; // ebx
  __int64 v18; // rsi
  __int64 v19; // rax
  struct _Unwind_Exception *v20; // rbx
  char v21; // [rsp+0h] [rbp-58h]
  __int64 v22; // [rsp+8h] [rbp-50h] BYREF
  __int64 v23; // [rsp+10h] [rbp-48h] BYREF
  __int128 v24; // [rsp+18h] [rbp-40h]
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v6 = (unsigned int)(a3 - 1);
  if ( v6 >= *(_QWORD *)(a1 + 56) )
  {
    v20 = (struct _Unwind_Exception *)sub_BBD0(a1, a2, a3, a4, a5, a6, v21);
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23, (const char *)a2);
    }
    _Unwind_Resume(v20);
  }
  v7 = *(_QWORD *)(a1 + 48);
  v24 = 0;
  v9 = (const char *)&v23;
  v23 = 0;
  if ( netnode_qgetblob(*(_QWORD *)(v7 + 8 * v6), &v23, 1, (unsigned __int16)a4, 80) >= 0 )
  {
    v22 = v23;
    v10 = (const char *)(v24 + v23);
    *(_DWORD *)a2 = unpack_dd(&v22, v24 + v23);
    *(_DWORD *)(a2 + 4) = unpack_dd(&v22, v10);
    v9 = v10;
    v11 = unpack_dw(&v22, v10);
    v12 = *(_QWORD *)(a2 + 16);
    v13 = v11;
    if ( v12 < v11 )
    {
      v18 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 24) < (unsigned __int64)v11 )
      {
        v19 = qvector_reserve(a2 + 8, v18, v11, 2);
        *(_QWORD *)(a2 + 8) = v19;
        v12 = *(_QWORD *)(a2 + 16);
        v18 = v19;
      }
      memset((void *)(v18 + 2 * v12), 0, 2 * (v13 - v12));
      *(_QWORD *)(a2 + 16) = v13;
    }
    else
    {
      if ( v11 != v12 )
        *(_QWORD *)(a2 + 16) = v11;
      if ( !v11 )
        goto LABEL_9;
    }
    v14 = 2 * v13;
    v15 = 0;
    do
    {
      v9 = v10;
      *(_WORD *)(*(_QWORD *)(a2 + 8) + v15) = unpack_dw(&v22, v10);
      v15 += 2;
    }
    while ( v15 != v14 );
LABEL_9:
    v16 = 1;
    goto LABEL_10;
  }
  v16 = 0;
LABEL_10:
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, v9);
  }
  return v16;
}

