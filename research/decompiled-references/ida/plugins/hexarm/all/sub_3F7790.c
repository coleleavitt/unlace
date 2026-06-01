__int64 __fastcall sub_3F7790(
        __int64 a1,
        unsigned int a2,
        signed int a3,
        signed int a4,
        int a5,
        unsigned __int8 a6,
        double a7,
        char a8)
{
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int v12; // ecx
  __int64 v13; // r14
  unsigned __int8 v14; // dl
  signed int v15; // r10d
  int v16; // r9d
  int v17; // eax
  __int64 v18; // r14
  signed int v19; // r10d
  int v20; // eax
  __int64 result; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  signed int v25; // [rsp+Ch] [rbp-5Ch]
  unsigned __int8 v26; // [rsp+Ch] [rbp-5Ch]
  int v27; // [rsp+10h] [rbp-58h]
  unsigned int v29; // [rsp+18h] [rbp-50h]
  unsigned int dtype_size; // [rsp+1Ch] [rbp-4Ch]
  unsigned int v32; // [rsp+24h] [rbp-44h]
  signed int v33; // [rsp+28h] [rbp-40h]

  if ( a5 <= 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8E2u, a7);
LABEL_24:
    BUG();
  }
  v29 = a6;
  dtype_size = get_dtype_size();
  v9 = 0;
  do
  {
    v10 = *(_QWORD *)(a1 + 832);
    v11 = a3;
    v12 = *(_DWORD *)(v10 + 632);
    v27 = *(_DWORD *)(v10 + 428);
    if ( a2 != 4 )
    {
      v13 = a4;
      if ( a2 != 62 )
      {
        v14 = a6;
        v15 = a3;
        v16 = a3;
        if ( a2 != 3 )
          goto LABEL_13;
        goto LABEL_6;
      }
      v24 = sub_3F56D0(a1, 0x3Eu, v29, a4, a3, a3, 0);
      v19 = a3;
      v18 = v24;
      goto LABEL_7;
    }
    v14 = a6;
    v16 = 346938453;
LABEL_13:
    while ( 1 )
    {
      v32 = v12;
      v26 = v14;
      v33 = v16;
      v23 = sub_3F6740(a1, a4, v14, v12, 1, a7);
      v15 = a3;
      v12 = v32;
      a3 = v33;
      v14 = v26;
      v13 = v23;
LABEL_6:
      v25 = v15;
      v17 = sub_3F6740(a1, a3, v14, v12, 1, a7);
      v18 = sub_3F56D0(a1, a2, v29, v13, v17, v11, 0);
      v19 = v25;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 && v11 == v27 )
      {
        sub_3F51B0(a1);
        v19 = v25;
      }
LABEL_7:
      if ( !v18 )
        break;
      if ( a5 == 1 )
        break;
      v20 = *(_DWORD *)(v18 + 4);
      *(_DWORD *)(v18 + 4) = v20 | 0x10000;
      if ( !a8 )
        break;
      if ( a2 != 4 )
      {
        if ( !under_debugger )
          sub_3835A0(0xC8E3u, a7);
        goto LABEL_24;
      }
      ++v9;
      *(_DWORD *)(v18 + 4) = v20 | 0x10010;
      result = dtype_size;
      a3 = dtype_size + v19;
      if ( a5 == v9 )
        return result;
      v22 = *(_QWORD *)(a1 + 832);
      v14 = a6;
      v11 = a3;
      v16 = 346938453;
      v12 = *(_DWORD *)(v22 + 632);
      v27 = *(_DWORD *)(v22 + 428);
    }
    result = dtype_size;
    ++v9;
    a3 = dtype_size + v19;
  }
  while ( a5 != v9 );
  return result;
}

