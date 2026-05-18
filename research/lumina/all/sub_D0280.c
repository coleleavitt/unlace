void __fastcall sub_D0280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r13
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rsi
  _QWORD *v15; // rsi
  _QWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax

  v7 = *(_QWORD *)a1;
  v8 = *(_QWORD **)(a1 + 152);
  if ( v8 )
  {
    v9 = 2 * (unsigned int)*(unsigned __int16 *)(a1 + 192);
    if ( (_DWORD)v9 )
    {
      sub_CD520((unsigned __int64)v8, v9, a3, a4, a5, a6);
      v8 = *(_QWORD **)(a1 + 152);
    }
    sub_C9250(v7, v8);
  }
  v10 = *(_QWORD *)(a1 + 288);
  if ( v10 )
  {
    do
    {
      v11 = *(_QWORD *)(v10 + 40);
      sub_D01E0(v7, *(_QWORD *)v10, *(_DWORD *)(v10 + 8), a4, a5, a6);
      v12 = (_QWORD *)v10;
      v10 = v11;
      sub_C9250(v7, v12);
    }
    while ( v11 );
  }
  if ( *(_BYTE *)(a1 + 197) )
  {
    v13 = *(_QWORD *)(a1 + 128);
    if ( v13 && *(_WORD *)(a1 + 32) )
    {
      sub_CD520(v13, (unsigned int)*(__int16 *)(a1 + 32), a3, a4, a5, a6);
      v14 = *(_QWORD **)(a1 + 176);
      if ( !v14 )
      {
LABEL_12:
        v15 = *(_QWORD **)(a1 + 256);
        if ( v15 )
          sub_C9250(v7, v15);
        goto LABEL_14;
      }
    }
    else
    {
      v14 = *(_QWORD **)(a1 + 176);
      if ( !v14 )
        goto LABEL_12;
    }
    sub_C9250(v7, v14);
    goto LABEL_12;
  }
LABEL_14:
  sub_D01E0(v7, *(_QWORD *)(a1 + 136), *(_DWORD *)(a1 + 144), a4, a5, a6);
  v16 = *(_QWORD **)(a1 + 248);
  if ( v16 )
    sub_C9250(v7, v16);
  if ( !*(_QWORD *)(v7 + 760) )
  {
    v17 = *(_QWORD *)(a1 + 8);
    v18 = *(_QWORD *)(a1 + 16);
    if ( v17 )
      *(_QWORD *)(v17 + 16) = v18;
    else
      *(_QWORD *)(v7 + 8) = v18;
    v19 = *(_QWORD *)(a1 + 16);
    if ( v19 )
      *(_QWORD *)(v19 + 8) = *(_QWORD *)(a1 + 8);
  }
  sub_C9250(v7, (_QWORD *)a1);
}
