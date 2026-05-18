__int64 __fastcall sub_1159D0(__int64 a1, unsigned int a2, int a3, char *a4, int a5)
{
  __int64 v5; // rbx
  int v6; // ecx
  _DWORD *v9; // rbp
  size_t v10; // r13
  __int64 v11; // r15
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  unsigned int v14; // r14d
  unsigned int v15; // ecx
  bool v16; // zf
  void *v17; // rdi
  unsigned int v18; // ebx
  int v19; // esi
  unsigned __int32 v20; // ecx
  int v21; // r11d
  int v22; // eax
  int v23; // r15d
  int v24; // eax
  unsigned int v25; // r13d
  __int64 v26; // r14
  _DWORD *v27; // r12
  int v28; // ebp
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 (__fastcall *v31)(__int64, _QWORD, __int64 *, __int64); // rax
  void *v33; // r14
  signed int v34; // eax
  int v35; // r13d
  signed int v36; // r15d
  int v37; // eax
  __int64 v38; // rax
  unsigned int *v39; // rsi
  bool v41; // [rsp+10h] [rbp-78h]
  int v42; // [rsp+10h] [rbp-78h]
  int v44; // [rsp+18h] [rbp-70h]
  unsigned int *v45; // [rsp+28h] [rbp-60h]
  unsigned int v46; // [rsp+28h] [rbp-60h]
  unsigned int v47; // [rsp+3Ch] [rbp-4Ch] BYREF
  __int64 v48[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 136);
  v48[1] = __readfsqword(0x28u);
  v6 = 71655;
  if ( *(_WORD *)(a1 + 86) >= *(_WORD *)(v5 + 24) )
    goto LABEL_25;
  v9 = *(_DWORD **)(a1 + 32);
  v10 = a3;
  sub_C7ED0(a1);
  v11 = *(_QWORD *)(a1 + 56);
  v12 = *(unsigned __int16 *)(a1 + 68);
  v13 = v11 - *(_QWORD *)(v5 + 80);
  if ( v13 > v9[14] - v12 )
  {
    v6 = 71670;
LABEL_25:
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      v6,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  if ( v12 <= a2 )
  {
    v14 = a2 - v12;
    v41 = (_DWORD)v10 != 0;
    goto LABEL_5;
  }
  if ( v12 < a2 + (unsigned int)v10 )
  {
    v34 = v12 - a2;
    v35 = v10 - v34;
    v33 = (void *)(v11 + a2);
    v41 = v35 != 0;
    v44 = v35;
    v10 = v34;
    if ( a5 )
      goto LABEL_29;
  }
  else
  {
    v41 = 0;
    v44 = 0;
    v33 = (void *)(v11 + a2);
    if ( a5 )
    {
LABEL_29:
      v15 = sub_10D290(*(_QWORD *)(v5 + 112), v13);
      if ( v15 )
        return v15;
      memcpy(v33, a4, v10);
      goto LABEL_33;
    }
  }
  memcpy(a4, v33, v10);
LABEL_33:
  a4 += v10;
  v14 = 0;
  LODWORD(v10) = v44;
LABEL_5:
  v15 = 0;
  if ( v41 )
  {
    v16 = (*(_BYTE *)(a1 + 1) & 4) == 0;
    v17 = *(void **)(a1 + 16);
    v18 = v9[14] - 4;
    v19 = *(unsigned __int16 *)(a1 + 68);
    v20 = _byteswap_ulong(*(_DWORD *)(v11 + *(unsigned __int16 *)(a1 + 68)));
    v47 = v20;
    if ( v16 )
    {
      v36 = (v18 + *(_DWORD *)(a1 + 64) - 1 - v19) / v18;
      if ( !v17
        || (v37 = ((__int64 (__fastcall *)(void *))*(&xmmword_2414B0 + 1))(v17), v17 = *(void **)(a1 + 16),
                                                                                 4 * v36 > v37) )
      {
        v38 = sub_D2640((__int64)v17, 8LL * v36);
        v17 = (void *)v38;
        v15 = 7;
        if ( !v38 )
          return v15;
        *(_QWORD *)(a1 + 16) = v38;
      }
      memset(v17, 0, 4LL * v36);
      *(_BYTE *)(a1 + 1) |= 4u;
      v20 = v47;
      v21 = 0;
    }
    else
    {
      v21 = 0;
      v22 = v14 / v18;
      if ( *((_DWORD *)v17 + v14 / v18) )
      {
        v14 %= v18;
        v20 = *((_DWORD *)v17 + v22);
        v21 = v22;
        v47 = v20;
      }
    }
    if ( v20 )
    {
      if ( v9[16] >= v20 )
      {
        v23 = v21;
        v24 = v10;
        v25 = v14;
        v26 = a1;
        v27 = v9;
        v28 = v24;
        while ( 1 )
        {
          *(_DWORD *)(*(_QWORD *)(v26 + 16) + 4LL * v23) = v20;
          if ( v18 > v25 )
            break;
          v25 -= v18;
          v20 = *(_DWORD *)(*(_QWORD *)(v26 + 16) + 4LL * v23 + 4);
          if ( v20 )
          {
            v47 = *(_DWORD *)(*(_QWORD *)(v26 + 16) + 4LL * v23 + 4);
            goto LABEL_14;
          }
          v15 = sub_EC110((__int64)v27, v47, nullptr, &v47);
LABEL_22:
          if ( v15 )
            return v15;
          v20 = v47;
          if ( !v47 )
            goto LABEL_24;
LABEL_14:
          ++v23;
          if ( v27[16] < v20 )
            goto LABEL_47;
        }
        v42 = 0;
        if ( v25 + v28 > v18 )
        {
          v42 = v28 - (v18 - v25);
          v28 = v18 - v25;
        }
        v29 = *(_QWORD *)v27;
        v30 = v47;
        v31 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64))(*(_QWORD *)v27 + 272LL);
        if ( a5 )
        {
          v15 = v31(v29, v47, v48, 0);
          if ( v15 )
            goto LABEL_20;
          v45 = *(unsigned int **)(v48[0] + 8);
          v47 = _byteswap_ulong(*v45);
          v15 = sub_10D290(v48[0], v30);
          if ( !v15 )
          {
            memcpy((char *)v45 + v25 + 4, a4, v28);
            v15 = 0;
          }
        }
        else
        {
          v15 = v31(v29, v47, v48, 2);
          if ( v15 )
          {
LABEL_20:
            if ( !v42 )
              return v15;
            a4 += v28;
            v28 = v42;
            goto LABEL_22;
          }
          v39 = *(unsigned int **)(v48[0] + 8);
          v47 = _byteswap_ulong(*v39);
          memcpy(a4, (char *)v39 + v25 + 4, v28);
          v15 = 0;
        }
        v25 = 0;
        if ( v48[0] )
        {
          v46 = v15;
          sub_C36A0(v48[0]);
          v15 = v46;
        }
        goto LABEL_20;
      }
LABEL_47:
      v6 = 71732;
    }
    else
    {
LABEL_24:
      v6 = 71817;
    }
    goto LABEL_25;
  }
  return v15;
}
