__int64 __fastcall sub_22227(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r12d
  __int64 v4; // r13
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx
  _DWORD *v11; // rsi
  __int64 v12; // r15
  int v13; // r8d
  int v14; // r9d
  char v15; // [rsp-Ch] [rbp-48h]
  unsigned int v16; // [rsp+0h] [rbp-3Ch]

  result = (unsigned int)(*(_DWORD *)(a2 + 56) + *(_DWORD *)(a2 + 40));
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 48);
    if ( !v3 )
    {
      v4 = *(_QWORD *)(a1 + 16);
      result = sub_E1710(v4, 75, 0, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20));
      v10 = *(_QWORD *)(a2 + 48);
      while ( *(_DWORD *)(a2 + 56) > v3 )
      {
        if ( *(int *)(v10 + 20) >= 0 )
        {
          v11 = *(_DWORD **)(*(_QWORD *)v10 + 32LL);
          if ( v11 && *v11 == 1 )
          {
            v12 = sub_F44C0(a1, v11, 0, 0);
            v16 = sub_E1710(v4, 118, *(unsigned int *)(v10 + 20), 0, 0);
            sub_DCC50(v4, v16, v12, 4294967288LL);
            *(_DWORD *)(v10 + 24) = v16;
            result = sub_E8800(
                       a1,
                       0,
                       (unsigned int)"USE TEMP B-TREE FOR %s(DISTINCT)",
                       *(_QWORD *)(*(_QWORD *)(v10 + 8) + 56LL),
                       v13,
                       v14,
                       v15);
          }
          else
          {
            result = sub_DBD10(
                       a1,
                       (unsigned int)"DISTINCT aggregates must have exactly one argument",
                       v6,
                       v7,
                       v8,
                       v9,
                       v15);
            *(_DWORD *)(v10 + 20) = -1;
          }
        }
        ++v3;
        v10 += 32;
      }
    }
  }
  return result;
}
