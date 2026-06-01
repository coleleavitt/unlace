__int64 __fastcall sub_43340(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  _QWORD *v10; // r13
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  unsigned int v13; // edx
  char *v14; // rcx
  __int64 v15; // rdi
  char *v16; // rdx
  unsigned int v17; // ebx
  _BYTE v19[24]; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-38h]
  __int64 v22; // [rsp+48h] [rbp-30h]

  v20 = a4;
  v21 = a5;
  v22 = a6;
  v10 = (_QWORD *)qcalloc();
  if ( a2 )
  {
    v11 = v10;
    v12 = &v10[a2];
    v13 = 24;
    v14 = &a7;
    while ( v13 <= 0x2F )
    {
      v15 = v13;
      ++v11;
      v13 += 8;
      *(v11 - 1) = *(_QWORD *)&v19[v15];
      if ( v12 == v11 )
        goto LABEL_6;
    }
    do
    {
      v16 = v14;
      ++v11;
      v14 += 8;
      *(v11 - 1) = *(_QWORD *)v16;
    }
    while ( v12 != v11 );
  }
LABEL_6:
  v17 = sub_42D60(a1, a2, a3, v10);
  qfree();
  return v17;
}

