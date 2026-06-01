__int64 __fastcall sub_1D380(char **a1, __int64 a2)
{
  int v2; // eax
  char **v3; // rbx
  _QWORD *v4; // r12
  __int64 *v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // r13d
  __int64 v10; // rcx
  char *v11; // r8
  _QWORD *v12; // rax
  void (__fastcall *hexdsp)(__int64, __int64 *); // rax
  void (__fastcall *v14)(__int64, __int64 *); // rax
  int *v16; // r13
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r12
  int v19; // r10d
  __int64 **v20; // r8
  __int64 v21; // r14
  __int64 *v22; // rax
  int v23; // ecx
  __int64 *v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rsi
  char **v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  char **v30; // rbp
  unsigned __int64 v31; // rdx
  char *v32; // r15
  char *v33; // rax
  char **v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // r14
  char *v37; // r9
  char *v38; // rsi
  unsigned __int64 v39; // r8
  char *v40; // rcx
  unsigned __int64 v41; // rdx
  char *v42; // rax
  char *v43; // rdi
  char *v44; // rdx
  __int64 n; // [rsp+8h] [rbp-50h]
  int v46; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v47; // [rsp+18h] [rbp-40h]

  v2 = *(_DWORD *)(a2 + 8);
  v47 = __readfsqword(0x28u);
  v3 = a1;
  if ( v2 == 72 )
  {
    sub_1A800(a1, *(_QWORD *)(a2 + 24));
    return 0;
  }
  if ( v2 != 81 )
  {
    if ( v2 == 71 )
    {
      v4 = *(_QWORD **)(a2 + 24);
      if ( v4[2] )
      {
        v5 = (__int64 *)*v4;
        v46 = *(_DWORD *)(*v4 + 28LL);
        if ( v46 != -1 && *((_DWORD *)v5 + 6) == 71 )
        {
          v6 = (_QWORD *)v5[5];
          v7 = v6[2];
          if ( v7 )
          {
            v8 = *v6;
            v9 = *(_DWORD *)(*v6 + 28LL);
            if ( v9 != -1 )
            {
              v10 = *v5;
              if ( (_QWORD *)v8 != v6 )
              {
                a1 = (char **)v6[1];
                v11 = *a1;
                **(_QWORD **)(v8 + 8) = *a1;
                *((_QWORD *)v11 + 1) = *(_QWORD *)(v8 + 8);
                v6[2] -= v7;
                v12 = *(_QWORD **)(v10 + 8);
                *v12 = v8;
                *(_QWORD *)(v8 + 8) = v12;
                *a1 = (char *)v10;
                *(_QWORD *)(v10 + 8) = a1;
                v4[2] += v7;
                v10 = *v5;
              }
              *(_QWORD *)v5[1] = v10;
              *(_QWORD *)(v10 + 8) = v5[1];
              hexdsp = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(a1, v7);
              hexdsp(493, v5 + 2);
              v14 = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(493, v5 + 2);
              v14(444, v5 + 2);
              qfree(v5);
              --v4[2];
              *(_DWORD *)sub_1D120(v3 + 18, &v46) = v9;
            }
          }
        }
      }
    }
    return 0;
  }
  v16 = *(int **)(a2 + 24);
  v17 = (unsigned __int64)a1[12];
  v18 = *v16;
  v19 = *v16;
  v20 = *(__int64 ***)&v3[11][8 * (v18 % v17)];
  v21 = 8 * (v18 % v17);
  if ( !v20 )
    goto LABEL_24;
  v22 = *v20;
  if ( *((_DWORD *)*v20 + 2) != v19 )
  {
    while ( *v22 )
    {
      v23 = *(_DWORD *)(*v22 + 8);
      v20 = (__int64 **)v22;
      if ( *v16 % v17 != v23 % v17 )
        break;
      v22 = (__int64 *)*v22;
      if ( v23 == v19 )
        goto LABEL_19;
    }
    goto LABEL_24;
  }
LABEL_19:
  if ( !v20 || (v24 = *v20 + 2, !*v20) )
  {
LABEL_24:
    v27 = (char **)operator new(0x28u);
    v28 = (unsigned __int64)v3[14];
    v29 = (unsigned __int64)v3[12];
    *v27 = nullptr;
    v30 = v27;
    LODWORD(v27) = *v16;
    *(_OWORD *)(v30 + 3) = 0;
    *((_DWORD *)v30 + 2) = (_DWORD)v27;
    v30[2] = nullptr;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(v3 + 15),
                            v29,
                            v28,
                            1u) )
    {
      v36 = v31;
      if ( v31 == 1 )
      {
        v37 = (char *)(v3 + 17);
        v3[17] = nullptr;
        v32 = (char *)(v3 + 17);
      }
      else
      {
        if ( v31 >> 60 )
        {
          if ( v31 >> 61 )
            sub_B371();
          std::__throw_bad_alloc();
        }
        n = 8 * v31;
        v32 = (char *)operator new(8 * v31);
        memset(v32, 0, n);
        v37 = (char *)(v3 + 17);
      }
      v38 = v3[13];
      v3[13] = nullptr;
      v39 = 0;
      while ( v38 )
      {
        while ( 1 )
        {
          v40 = v38;
          v38 = *(char **)v38;
          v41 = *((int *)v40 + 2) % v36;
          v42 = &v32[8 * v41];
          if ( !*(_QWORD *)v42 )
            break;
          *(_QWORD *)v40 = **(_QWORD **)v42;
          **(_QWORD **)v42 = v40;
          if ( !v38 )
            goto LABEL_36;
        }
        *(_QWORD *)v40 = v3[13];
        v3[13] = v40;
        *(_QWORD *)v42 = v3 + 13;
        if ( *(_QWORD *)v40 )
          *(_QWORD *)&v32[8 * v39] = v40;
        v39 = v41;
      }
LABEL_36:
      v43 = v3[11];
      if ( v43 != v37 )
        operator delete(v43, 8LL * (_QWORD)v3[12]);
      v3[12] = (char *)v36;
      v3[11] = v32;
      v21 = 8 * (v18 % v36);
    }
    else
    {
      v32 = v3[11];
    }
    v33 = &v32[v21];
    v34 = *(char ***)&v32[v21];
    if ( v34 )
    {
      *v30 = *v34;
      **(_QWORD **)v33 = v30;
    }
    else
    {
      v44 = v3[13];
      v3[13] = (char *)v30;
      *v30 = v44;
      if ( v44 )
      {
        *(_QWORD *)&v32[8 * (*((int *)v44 + 2) % (unsigned __int64)v3[12])] = v30;
        v33 = &v3[11][v21];
      }
      *(_QWORD *)v33 = v3 + 13;
    }
    ++v3[14];
    v24 = (__int64 *)(v30 + 2);
  }
  v25 = v24[1];
  v26 = *v24;
  if ( v24[2] < (unsigned __int64)(v25 + 1) )
  {
    v35 = qvector_reserve(v24, v26, v25 + 1, 8);
    *v24 = v35;
    v26 = v35;
    v25 = v24[1];
  }
  *(_QWORD *)(v26 + 8 * v25) = v16;
  ++v24[1];
  return 0;
}

