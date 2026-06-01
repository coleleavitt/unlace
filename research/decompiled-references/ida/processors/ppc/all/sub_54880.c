__int64 __fastcall sub_54880(__int64 a1, char **a2)
{
  unsigned __int8 v2; // r14
  char *v5; // rax
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // rbx
  char v11; // al
  char *v12; // rsi
  char **v13; // rdi
  __int64 v15; // rax
  int v16; // edx
  char *v17; // rax
  int v18; // edx
  char *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax

  v2 = 0;
  v5 = *a2;
  if ( *a2 < a2[1] )
    v2 = *v5++;
  *a2 = v5;
  *(_DWORD *)(a1 + 4) = unpack_dd(a2);
  v6 = unpack_dw(a2, a2[1]);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = v6;
  if ( v7 < v6 )
  {
    v20 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)v6 )
    {
      v21 = qvector_reserve(a1 + 8, v20, v6, 2);
      v7 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v21;
      v20 = v21;
    }
    memset((void *)(v20 + 2 * v7), 0, 2 * (v8 - v7));
    *(_QWORD *)(a1 + 16) = v8;
    goto LABEL_7;
  }
  if ( v6 != v7 )
    *(_QWORD *)(a1 + 16) = v6;
  if ( v6 )
  {
LABEL_7:
    v9 = 2 * v8;
    v10 = 0;
    do
    {
      *(_WORD *)(*(_QWORD *)(a1 + 8) + v10) = unpack_dw(a2, a2[1]);
      v10 += 2;
    }
    while ( v9 != v10 );
  }
  v11 = ((__int64 (*)(void))is_cvt64)();
  v12 = a2[1];
  if ( v11 )
  {
    v13 = a2;
    *(_QWORD *)(a1 + 32) = (int)unpack_dd(a2);
    if ( v2 <= 2u )
      return 1;
  }
  else
  {
    v13 = a2;
    *(_QWORD *)(a1 + 32) = unpack_dq(a2, v12);
    if ( v2 <= 2u )
      return 1;
  }
  if ( (unsigned __int8)is_cvt64(v13, v12) )
    v15 = (int)unpack_dd(a2);
  else
    v15 = unpack_dq(a2, a2[1]);
  *(_QWORD *)(a1 + 40) = v15;
  v16 = 0;
  v17 = *a2;
  if ( *a2 < a2[1] )
    v16 = *v17++;
  *a2 = v17;
  *(_DWORD *)(a1 + 48) = v16;
  v18 = 0;
  v19 = *a2;
  if ( *a2 < a2[1] )
    v18 = *v19++;
  *a2 = v19;
  *(_DWORD *)(a1 + 52) = v18;
  return 1;
}

