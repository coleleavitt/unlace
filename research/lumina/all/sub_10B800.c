__int64 __fastcall sub_10B800(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // ebp
  __int64 v14; // rdx
  int v15; // ecx
  const void *v16; // rbp
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // r14
  size_t v21; // r14
  void *v22; // rdi
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int8 v29; // cl
  unsigned int v30; // edx
  bool v31; // zf
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rbp
  unsigned int v35; // r15d
  __int64 v36; // rdi
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  _BYTE *v41; // r12
  __int64 v42; // rdi
  __int64 v43; // r13
  __int64 v44; // rax
  size_t v45; // r13
  void *v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rbp
  char *v49; // rsi
  char *v50[9]; // [rsp+0h] [rbp-48h] BYREF

  v50[1] = (char *)__readfsqword(0x28u);
  sub_CA160(a1, a2);
  if ( !(_DWORD)a2 )
    return 0;
  v16 = (const void *)sub_D9DB0(*a6, 1u, a3, v8, v9, v10, v11);
  if ( !v16 )
    return 0;
  v19 = *a6;
  v20 = (int)sub_D9CE0(*a6, 1u, a3, v14, v15, v17, v18);
  if ( (unsigned int)sub_FEBD0(v19, 1) )
  {
    *(_QWORD *)(a1 + 32) = 0;
    return 7;
  }
  v21 = v20 + 1;
  v22 = (void *)sub_D1E10(v21, 1);
  *(_QWORD *)(a1 + 32) = v22;
  if ( !v22 )
    return 7;
  memcpy(v22, v16, v21);
  v12 = sub_104900(a1 + 48, 0, *(_QWORD *)(a1 + 32));
  if ( !v12 )
  {
    if ( !*(_BYTE *)(a1 + 25) )
    {
LABEL_13:
      if ( (_DWORD)a2 != 3 )
      {
        v27 = *(_QWORD *)(a1 + 56);
        LODWORD(v28) = 0;
        goto LABEL_15;
      }
      v36 = a6[1];
      v50[0] = nullptr;
      v41 = (_BYTE *)sub_D9DB0(v36, 1u, a3, v23, v24, v25, v26);
      if ( !v41 )
        return v12;
      v42 = a6[1];
      v43 = (int)sub_D9CE0(v42, 1u, a3, v37, v38, v39, v40);
      if ( (unsigned int)sub_FEBD0(v42, 1) )
      {
        *(_QWORD *)(a1 + 40) = 0;
        return 7;
      }
      v45 = v43 + 1;
      v46 = (void *)sub_D1E10(v45, 1);
      *(_QWORD *)(a1 + 40) = v46;
      if ( v46 )
      {
        v47 = (__int64)v41;
        memcpy(v46, v41, v45);
        if ( *v41 == 36 )
        {
          v47 = 0;
          v27 = sub_104AC0(a1 + 48, 0, (char *)(*(_QWORD *)(a1 + 40) + 1LL), nullptr, v50);
          if ( !v50[0] )
          {
            if ( !v27 )
              return v12;
            v28 = (v27 - *(_QWORD *)(a1 + 56)) >> 4;
LABEL_15:
            *(_DWORD *)(a1 + 16) = v28;
            *(_DWORD *)(a1 + 12) = v28;
            v29 = *(_BYTE *)v27;
            *(_BYTE *)(a1 + 24) = *(_BYTE *)v27;
            if ( v29 <= 5u )
            {
              *(_DWORD *)(a1 + 20) = v28 + 1;
              return v12;
            }
            *(_DWORD *)(v27 + 8) = 0;
            v30 = *(_DWORD *)(a1 + 16);
            v31 = *(_BYTE *)(a1 + 25) == 0;
            *(_DWORD *)(a1 + 20) = v30 + 1 + *(_DWORD *)(v27 + 4);
            if ( v31 )
            {
              *(_DWORD *)(a1 + 16) = v30 + 1;
              return v12;
            }
            v32 = *(_QWORD *)(a1 + 56);
            *(_BYTE *)(a1 + 24) = *(_BYTE *)(v32 + 16LL * *(unsigned int *)(*(_QWORD *)(a1 + 72) + 4LL * v30));
            if ( v30 )
            {
              v33 = v30 - 1;
              if ( (*(_BYTE *)(v32 + 16 * v33 + 1) & 0x40) != 0 )
              {
                *(_DWORD *)(a1 + 16) = v33;
                return v12;
              }
            }
            return 0;
          }
        }
        else
        {
          v50[0] = v41;
        }
        sub_C91C0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), v47);
        v48 = *(_QWORD *)a1;
        v49 = v50[0];
        *(_QWORD *)(v48 + 16) = sub_105970("JSON path error near '%q'", v50[0]);
        v12 = 1;
        sub_CA160(a1, (__int64)v49);
        if ( *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
          return v12;
      }
      return 7;
    }
    v35 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)sub_FEBD0(a1 + 48, 0) )
    {
      *(_QWORD *)(a1 + 72) = 0;
    }
    else
    {
      v44 = sub_D1E10(4LL * v35, 0);
      *(_QWORD *)(a1 + 72) = v44;
      if ( v44 )
      {
        sub_C5C00(a1 + 48, 0, 0);
        goto LABEL_13;
      }
    }
    *(_BYTE *)(a1 + 80) = 1;
    v12 = 7;
    sub_CA160(a1, 0);
    return v12;
  }
  if ( *(_BYTE *)(a1 + 80)
    || (sub_C91C0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), 0),
        v34 = *(_QWORD *)a1,
        *(_QWORD *)(v34 + 16) = sub_105970("malformed JSON"),
        !*(_QWORD *)(*(_QWORD *)a1 + 16LL)) )
  {
    v12 = 7;
  }
  else
  {
    v12 = 1;
  }
  sub_CA160(a1, 0);
  return v12;
}
