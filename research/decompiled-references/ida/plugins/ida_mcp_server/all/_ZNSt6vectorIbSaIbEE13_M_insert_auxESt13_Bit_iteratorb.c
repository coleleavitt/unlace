__int64 __fastcall std::vector<bool>::_M_insert_aux(__int64 a1, __int64 *a2, int a3, char a4)
{
  __int64 *v7; // r15
  __int64 *v8; // rbp
  int v9; // r13d
  unsigned __int64 v10; // r14
  __int64 *v11; // r9
  int v12; // esi
  int v13; // r8d
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 result; // rax
  char *v19; // r14
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rbx
  bool v25; // cf
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 *v28; // rax
  int v29; // r10d
  int v30; // r8d
  char *v31; // r11
  char *v32; // rax
  __int64 *v33; // rsi
  __int64 *v34; // rdi
  int i; // edx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // edx
  __int64 *v39; // rdi
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v44; // [rsp+8h] [rbp-80h]
  char *v46; // [rsp+10h] [rbp-78h]
  int v47; // [rsp+18h] [rbp-70h]
  int v48; // [rsp+20h] [rbp-68h]
  unsigned int v49; // [rsp+48h] [rbp-40h]

  v7 = *(__int64 **)(a1 + 16);
  v8 = *(__int64 **)(a1 + 32);
  if ( v7 == v8 )
  {
    v19 = *(char **)a1;
    v21 = *(unsigned int *)(a1 + 24);
    v22 = v21 + 8LL * ((_QWORD)v7 - *(_QWORD *)a1);
    if ( v22 == 0x7FFFFFFFFFFFFFC0LL )
      std::__throw_length_error("vector<bool>::_M_insert_aux");
    v23 = 1;
    v24 = a2;
    if ( v22 )
      v23 = v21 + 8LL * ((_QWORD)v7 - *(_QWORD *)a1);
    v25 = __CFADD__(v23, v22);
    v26 = v23 + v22;
    if ( v25 )
    {
      v44 = 0xFFFFFFFFFFFFFF8LL;
      v27 = 0xFFFFFFFFFFFFFF8LL;
    }
    else
    {
      if ( v26 > 0x7FFFFFFFFFFFFFC0LL )
        v26 = 0x7FFFFFFFFFFFFFC0LL;
      v44 = 8 * ((v26 + 63) >> 6);
      v27 = v44;
    }
    v48 = v21;
    v47 = a3;
    v28 = (__int64 *)operator new(v27);
    v29 = v47;
    v30 = v48;
    v31 = (char *)v28;
    if ( (char *)a2 - v19 <= 8 )
    {
      v33 = v28;
      if ( (char *)a2 - v19 == 8 )
      {
        v33 = v28 + 1;
        *v28 = *(_QWORD *)v19;
      }
    }
    else
    {
      v32 = (char *)memmove(v28, v19, (char *)a2 - v19);
      v30 = v48;
      v29 = v47;
      v31 = v32;
      v33 = (__int64 *)&v32[(char *)a2 - v19];
    }
    if ( v29 )
    {
      v34 = a2;
      for ( i = 0; ; ++i )
      {
        while ( 1 )
        {
          v36 = *v33 & ~(1LL << i);
          if ( ((1LL << i) & *v34) != 0 )
            v36 = (1LL << i) | *v33;
          *v33 = v36;
          if ( i != 63 )
            break;
          ++v33;
          ++v34;
          i = 0;
        }
        v37 = 1LL << ((unsigned __int8)i + 1);
        if ( v29 == i + 1 && v34 == a2 )
          break;
      }
      if ( i == 62 )
      {
        v39 = v33 + 1;
        v38 = 0;
      }
      else
      {
        v38 = i + 2;
        v39 = v33;
      }
    }
    else
    {
      v39 = v33;
      v37 = 1;
      v38 = 1;
    }
    v40 = *v33 | v37;
    v41 = *v33 & ~v37;
    if ( a4 )
      v41 = v40;
    *v33 = v41;
    while ( 1 )
    {
      if ( v7 == v24 )
      {
LABEL_50:
        if ( v30 == v29 )
        {
          v49 = v38;
          if ( v19 )
          {
            v46 = v31;
            operator delete(v19, (char *)v8 - v19);
            v31 = v46;
          }
          *(_QWORD *)a1 = v31;
          *(_DWORD *)(a1 + 8) = 0;
          *(_QWORD *)(a1 + 32) = &v31[v44];
          *(_QWORD *)(a1 + 16) = v39;
          *(_DWORD *)(a1 + 24) = v49;
          return v49;
        }
      }
      while ( 1 )
      {
        v42 = *v39 & ~(1LL << v38);
        if ( ((1LL << v29) & *v24) != 0 )
          v42 = (1LL << v38) | *v39;
        *v39 = v42;
        if ( v38 == 63 )
        {
          ++v39;
          v38 = 0;
        }
        else
        {
          ++v38;
        }
        if ( v29 == 63 )
          break;
        ++v29;
        if ( v7 == v24 )
          goto LABEL_50;
      }
      ++v24;
      v29 = 0;
    }
  }
  v9 = *(_DWORD *)(a1 + 24);
  v10 = (unsigned int)(v9 + 1);
  if ( a3 != v9 || v7 != a2 )
  {
    v11 = *(__int64 **)(a1 + 16);
    v12 = *(_DWORD *)(a1 + 24);
    v13 = ((_BYTE)v9 + 1) & 0x3F;
    v14 = (__int64 *)((char *)v7 + ((v10 >> 3) & 0x1FFFFFF8));
    do
    {
LABEL_5:
      if ( v12 )
      {
LABEL_6:
        v15 = 1LL << --v12;
        if ( !v13 )
          goto LABEL_19;
LABEL_7:
        v16 = 1LL << --v13;
        goto LABEL_8;
      }
      while ( 1 )
      {
        --v11;
        v15 = 0x8000000000000000LL;
        v12 = 63;
        if ( v13 )
          goto LABEL_7;
LABEL_19:
        --v14;
        v16 = 0x8000000000000000LL;
        v13 = 63;
LABEL_8:
        v17 = *v14;
        if ( (*v11 & v15) != 0 )
          break;
        *v14 = v17 & ~v16;
        if ( a3 != v12 )
          goto LABEL_5;
        if ( v11 == a2 )
          goto LABEL_11;
        if ( v12 )
          goto LABEL_6;
      }
      *v14 = v17 | v16;
    }
    while ( v11 != a2 || a3 != v12 );
  }
LABEL_11:
  result = *a2 & ~(1LL << a3);
  if ( a4 )
    result = *a2 | (1LL << a3);
  *a2 = result;
  if ( v9 == 63 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 16) = v7 + 1;
    return (__int64)(v7 + 1);
  }
  else
  {
    *(_DWORD *)(a1 + 24) = v10;
  }
  return result;
}

