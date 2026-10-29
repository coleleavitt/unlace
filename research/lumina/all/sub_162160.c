__int64 __fastcall sub_162160(__int64 a1, const char *a2, __int64 a3, _DWORD *a4, _DWORD *a5, double a6)
{
  int v7; // r13d
  bool v8; // r14
  __int64 i; // rax
  int v12; // ebx
  __int64 v13; // r10
  _BYTE *v14; // rax
  bool v15; // zf
  __int64 result; // rax
  __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // rdi
  unsigned int (__fastcall *v20)(__int64); // rcx
  __int64 v21; // rdx
  __int64 v22; // r10
  char v23; // dl
  int v24; // eax
  char v25; // [rsp+0h] [rbp-58h]
  unsigned int v26; // [rsp+4h] [rbp-54h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  unsigned int v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  unsigned int v31; // [rsp+8h] [rbp-50h]
  _BYTE *v32; // [rsp+10h] [rbp-48h]
  __int64 v33; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+18h] [rbp-40h]

  v26 = a3;
  if ( *(int *)(a1 + 40) <= 0 )
    return 0;
  v7 = (int)a2;
  v8 = (_DWORD)a2 == 12;
  v25 = 0;
  for ( i = 0; ; i = v12 )
  {
    v12 = i + 1;
    if ( v7 != (_DWORD)i && !v8 )
    {
      if ( v12 >= *(_DWORD *)(a1 + 40) )
        goto LABEL_28;
      continue;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32 * i + 8);
    if ( !v13 )
      goto LABEL_16;
    v14 = *(_BYTE **)(v13 + 8);
    if ( *(_BYTE *)(v13 + 17) )
    {
      v32 = *(_BYTE **)(v13 + 8);
      v28 = v13;
      sub_CC740(v13);
      v14 = v32;
      v13 = v28;
    }
    if ( v14[36] )
      break;
    v17 = *(_QWORD *)v14;
    v18 = *(_QWORD *)v13;
    v19 = *(_QWORD *)(*(_QWORD *)v14 + 296LL);
    if ( !v19 )
    {
      if ( *(_BYTE *)(v17 + 9) != 5
        || (a2 = "PRAGMA table_list",
            v34 = v13,
            v33 = *(_QWORD *)v14,
            v30 = *(_QWORD *)v13,
            sub_142D90(*(_QWORD *)v13, (__int64)"PRAGMA table_list", nullptr, 0, nullptr, a6),
            v17 = v33,
            v18 = v30,
            v13 = v34,
            (v19 = *(_QWORD *)(v33 + 296)) == 0) )
      {
        if ( *(_BYTE *)(v13 + 17) )
        {
          v24 = *(_DWORD *)(v13 + 20) - 1;
          v15 = *(_DWORD *)(v13 + 20) == 1;
          *(_DWORD *)(v13 + 20) = v24;
          v29 = v24;
          if ( v15 )
          {
            sub_CC7D0(v13, (__int64)a2, a3);
            result = v29;
            if ( v12 >= *(_DWORD *)(a1 + 40) )
              goto LABEL_35;
          }
          else
          {
LABEL_16:
            if ( v12 >= *(_DWORD *)(a1 + 40) )
              goto LABEL_28;
          }
        }
        else if ( *(_DWORD *)(a1 + 40) <= v12 )
        {
LABEL_28:
          result = 0;
          v23 = v25 ^ 1;
          goto LABEL_29;
        }
LABEL_17:
        a5 = nullptr;
        a4 = nullptr;
        continue;
      }
    }
    v20 = nullptr;
    if ( v26 )
      v20 = *(unsigned int (__fastcall **)(__int64))(v17 + 232);
    v27 = v13;
    a2 = (const char *)v18;
    result = sub_11AE40(
               v19,
               v18,
               v26,
               v20,
               *(_QWORD *)(v17 + 240),
               *(unsigned __int8 *)(v17 + 15),
               *(_QWORD *)(v17 + 200),
               *(_QWORD *)(v17 + 280),
               a4,
               a5);
    v22 = v27;
    if ( *(_BYTE *)(v27 + 17) )
    {
      v15 = (*(_DWORD *)(v27 + 20))-- == 1;
      if ( v15 )
      {
        v31 = result;
        sub_CC7D0(v22, (__int64)a2, v21);
        result = v31;
      }
    }
    a3 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)result != 5 )
    {
      if ( (int)a3 > v12 )
      {
        if ( (_DWORD)result )
          return result;
        goto LABEL_17;
      }
LABEL_35:
      v23 = ((_DWORD)result != 0) | v25 ^ 1;
LABEL_29:
      if ( v23 )
        return result;
      return 5;
    }
    if ( (int)a3 <= v12 )
      return 5;
    v25 = 1;
    a5 = nullptr;
    a4 = nullptr;
  }
  if ( *(_BYTE *)(v13 + 17) )
  {
    v15 = (*(_DWORD *)(v13 + 20))-- == 1;
    if ( v15 )
      sub_CC7D0(v13, (__int64)a2, a3);
  }
  return 6;
}
