unsigned __int64 __fastcall sub_2A4E0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        char a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 result; // rax
  __int64 *v9; // r13
  int v10; // edi
  int v11; // esi
  int v14; // r15d
  int v15; // r14d
  int v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  char v21; // cl
  __int64 *v22; // r14
  int v23; // ebx
  int v24; // r12d
  int v25; // r13d
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r13
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  char v30; // cl
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // [rsp+8h] [rbp-40h]
  __int64 v40; // [rsp+8h] [rbp-40h]

  LODWORD(a2) = (unsigned __int8)a2;
  result = 31 - (unsigned int)a3;
  *((_BYTE *)a1 + 24) = 1;
  v9 = (__int64 *)*a1;
  v10 = 32 - (unsigned __int8)a2;
  if ( !v9 )
    return result;
  if ( (int)result > v10 )
    goto LABEL_24;
  v11 = *((_DWORD *)a1 + 2);
  v14 = v10 + 8 * v11;
  v15 = result + 8 * v11;
  v16 = v14 + 14;
  if ( v14 + 7 >= 0 )
    v16 = v14 + 7;
  v17 = v9[1];
  v18 = v16 >> 3;
  v19 = v18;
  if ( v17 < v18 )
  {
    v31 = *v9;
    if ( v9[2] < (unsigned __int64)v18 )
    {
      v40 = v18;
      v33 = qvector_reserve(v9, v31, v18, 1);
      v17 = v9[1];
      v19 = v40;
      *v9 = v33;
      v31 = v33;
    }
    v39 = v19;
    memset((void *)(v31 + v17), 0, v19 - v17);
    v9[1] = v39;
    v9 = (__int64 *)*a1;
  }
  result = v15;
  a2 = *v9;
  if ( v15 < (unsigned __int64)v14 )
  {
    do
    {
      v20 = result;
      v21 = result++;
      *(_BYTE *)(a2 + (v20 >> 3)) |= 1 << (v21 & 7);
    }
    while ( v14 != result );
  }
  if ( a4 != 0xFF )
  {
    v22 = (__int64 *)*a1;
    v10 = 32 - a4;
    result = a5 == 0 ? 0x1F : 0;
    if ( *a1 )
    {
      if ( (int)result <= v10 )
      {
        v23 = 8 * *((_DWORD *)a1 + 2);
        v24 = v10 + v23;
        v25 = v10 + v23 + 14;
        if ( v10 + v23 + 7 >= 0 )
          v25 = v24 + 7;
        v26 = v22[1];
        v27 = v25 >> 3;
        if ( v26 < v27 )
        {
          v32 = *v22;
          if ( v22[2] < v27 )
          {
            v34 = qvector_reserve(*a1, *v22, v27, 1);
            *v22 = v34;
            v32 = v34;
            v26 = v22[1];
          }
          memset((void *)(v26 + v32), 0, v27 - v26);
          v22[1] = v27;
          v22 = (__int64 *)*a1;
        }
        result = v23;
        v28 = *v22;
        if ( v23 < (unsigned __int64)v24 )
        {
          do
          {
            v29 = result;
            v30 = result++;
            *(_BYTE *)(v28 + (v29 >> 3)) |= 1 << (v30 & 7);
          }
          while ( v24 != result );
        }
        return result;
      }
LABEL_24:
      sub_2A4B0();
      sub_2A700(v10, a2, v35, v36, v37, v38, a7);
    }
  }
  return result;
}

