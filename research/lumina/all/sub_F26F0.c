__int64 __fastcall sub_F26F0(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        signed int a5,
        _BYTE *a6,
        double a7,
        _DWORD *a8,
        unsigned int *a9)
{
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rbx
  unsigned int v15; // edx
  _BYTE *v16; // rax
  int v17; // r15d
  __int64 v18; // r13
  _BYTE *v19; // r14
  __int64 v20; // rax
  signed int v21; // ebp
  unsigned int v22; // edx
  unsigned int v25; // [rsp+10h] [rbp-48h]

  v11 = *(_QWORD *)(a2 + 96);
  v25 = -32768;
  if ( v11 )
    v25 = sub_CFB20(*(_QWORD *)a1, v11);
  v12 = *(_QWORD *)(a1 + 16);
  if ( a5 < 0 )
    a5 = *(_DWORD *)(a1 + 52);
  v13 = a5 + 1;
  if ( a8 )
    *a8 = a5;
  if ( *(char *)(a2 + 48) < 0 || a6 && !*a6 )
  {
    if ( v25 != 1 )
    {
      sub_E30E0(a1, v25, *(_DWORD *)(a2 + 40), a3 == 113, *(_QWORD *)a2);
      v13 = a5 + 1;
    }
  }
  else
  {
    sub_F2630(a1, a5, v25, a2, a3, a7);
    v13 = a5 + 1;
  }
  if ( a9 )
    *a9 = v13;
  v14 = *(_QWORD *)(a2 + 16);
  if ( v14 )
  {
    v15 = v13;
    v16 = a6;
    v17 = ~a5;
    v18 = v12;
    v19 = v16;
    do
    {
      v21 = v15 + 1;
      if ( (*(_BYTE *)(v14 + 99) & 3) == 2 && *(char *)(a2 + 48) < 0 )
      {
        a4 = 0;
        if ( a8 )
          *a8 = v15;
      }
      if ( !v19 || v19[v17 + v15 + 1] )
      {
        sub_E1710(v18, a3, v15, *(_DWORD *)(v14 + 88), v25);
        sub_F2600(a1, v14, a7);
        v20 = *(int *)(v18 + 144);
        if ( (int)v20 > 0 )
          *(_WORD *)(*(_QWORD *)(v18 + 136) + 24 * v20 - 22) = a4;
      }
      v14 = *(_QWORD *)(v14 + 40);
      v15 = v21;
    }
    while ( v14 );
    v22 = v17 + v21;
  }
  else
  {
    v21 = v13;
    v22 = 0;
  }
  if ( *(_DWORD *)(a1 + 52) < v21 )
    *(_DWORD *)(a1 + 52) = v21;
  return v22;
}
