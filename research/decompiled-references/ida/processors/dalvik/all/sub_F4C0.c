__int64 __fastcall sub_F4C0(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *func; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int64 v11; // r13
  unsigned __int64 *v12; // rax
  __int64 i; // rdx
  unsigned __int64 *v14; // rsi
  unsigned int v16; // ebx
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  _QWORD *v19; // rax
  unsigned __int16 *v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // rsi
  char v23; // [rsp+0h] [rbp-868h]
  unsigned int v24; // [rsp+4h] [rbp-864h]
  __int64 v25; // [rsp+8h] [rbp-860h]
  unsigned int v26; // [rsp+1Ch] [rbp-84Ch] BYREF
  _BYTE v27[1024]; // [rsp+20h] [rbp-848h] BYREF
  _DWORD v28[258]; // [rsp+420h] [rbp-448h] BYREF
  unsigned __int64 v29; // [rsp+828h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  func = (_QWORD *)get_func(a2);
  if ( !func )
    goto LABEL_12;
  memset(v27, 0, sizeof(v27));
  memset(v28, 0, 0x400u);
  if ( netnode_supval(a1[20], *func, &v26, 4, 333) <= 3 )
    goto LABEL_12;
  v10 = a1[18];
  v11 = 0xFFFFFFFFLL;
  v24 = v26;
  v12 = (unsigned __int64 *)a1[17];
  i = 8 * v10;
  v14 = &v12[v10];
  if ( 8 * v10 )
  {
    for ( i = 0; ; i = (unsigned int)v7 )
    {
      if ( a2 < *v12 )
      {
        v11 = (unsigned int)(i - 1);
        goto LABEL_9;
      }
      ++v12;
      v7 = (unsigned int)(i + 1);
      if ( v12 == v14 )
        break;
    }
    v11 = (unsigned int)i;
  }
LABEL_9:
  if ( v11 >= a1[22] )
  {
    sub_BBD0(v10, (int)v14, i, v7, v8, v9, v23);
    return sub_F720();
  }
  v25 = a1[21];
  if ( (unsigned __int64)(int)netnode_supval(a1[20], a2, v28, 1024, 89) <= 4 )
    return 0;
  v16 = v28[0];
  if ( (int)netnode_supval(*(_QWORD *)(v25 + 8 * v11), v24, v27, 1024, 89) <= 0 )
  {
LABEL_12:
    *a3 = 0;
    return 0;
  }
  v17 = 510;
  v18 = v27[0];
  if ( v16 <= 0x1FE )
    v17 = v16;
  if ( v27[0] > 0x7Fu )
    v18 = 127;
  v19 = (_QWORD *)qcalloc(v17, 8);
  *a3 = v19;
  if ( v16 )
  {
    v20 = (unsigned __int16 *)&v28[1];
    v21 = &v19[v17];
    do
    {
      v22 = *v20;
      if ( (unsigned int)v22 < v18 )
        *v19 = *(_QWORD *)&v27[8 * v22 + 1];
      else
        *v19 = 0;
      ++v19;
      ++v20;
    }
    while ( v21 != v19 );
  }
  return v17;
}

