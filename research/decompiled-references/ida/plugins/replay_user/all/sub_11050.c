__int64 __fastcall sub_11050(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r13
  int v10; // r13d
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // [rsp-28h] [rbp-28h]
  __int64 v18; // [rsp-20h] [rbp-20h]
  __int64 v19; // [rsp-18h] [rbp-18h]
  __int64 v20; // [rsp-10h] [rbp-10h]

  if ( !*(_QWORD *)(a1 + 680) )
    return 1;
  v20 = v9;
  v10 = 0;
  v19 = v8;
  v12 = 0;
  v18 = v7;
  v17 = v6;
  do
  {
    v14 = 32 * v12;
    v15 = v14 + *(_QWORD *)(a1 + 672);
    if ( (a2 & *(_BYTE *)(v15 + 12)) != 0 )
      callui(1095, a4, *(_QWORD *)v15, a3 + v14, &callui, a6, v17, v18, v19, v20);
    v12 = ++v10;
  }
  while ( (unsigned __int64)v10 < *(_QWORD *)(a1 + 680) );
  return 1;
}

