__int64 __fastcall sub_D9290(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  int v8; // r14d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v14 = __readfsqword(0x28u);
  v3 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  result = sub_D90E0(*(_QWORD *)(a1 + 24) + 80 * v3, a2);
  if ( !(_DWORD)result )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v13 = 0;
    v6 = v5 + 80LL * ((unsigned __int16)v3 & 0xFFFE);
    v7 = v5 + 80LL * (int)(v3 | 1);
    v8 = (*(_DWORD *)a1 + (int)v3) / 2;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        while ( !*(_QWORD *)(v6 + 24) )
        {
LABEL_10:
          *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * v8) = -858993459 * ((__int64)(v7 - *(_QWORD *)(a1 + 24)) >> 4);
          v10 = *(_QWORD *)(a1 + 16);
          v5 = *(_QWORD *)(a1 + 24);
          v6 = v5 + 80LL * *(int *)(v10 + 4LL * (v8 ^ 1));
          v8 >>= 1;
          if ( !v8 )
            goto LABEL_11;
        }
        if ( *(_QWORD *)(v7 + 24) )
        {
          v9 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD, _QWORD, _QWORD, _QWORD))(v2 + 64))(
                 v2,
                 &v13,
                 *(_QWORD *)(v6 + 40),
                 *(unsigned int *)(v6 + 20),
                 *(_QWORD *)(v7 + 40),
                 *(unsigned int *)(v7 + 20));
          if ( v9 >= 0 && (v9 || v6 >= v7) )
          {
            if ( *(_QWORD *)(v6 + 24) )
              v13 = 0;
            goto LABEL_10;
          }
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * v8) = -858993459 * ((__int64)(v6 - *(_QWORD *)(a1 + 24)) >> 4);
        v10 = *(_QWORD *)(a1 + 16);
        v11 = *(int *)(v10 + 4LL * (v8 ^ 1));
        v13 = 0;
        v12 = 5 * v11;
        v5 = *(_QWORD *)(a1 + 24);
        v7 = v5 + 16 * v12;
        v8 >>= 1;
        if ( !v8 )
          goto LABEL_11;
      }
    }
    v10 = *(_QWORD *)(a1 + 16);
LABEL_11:
    *(_DWORD *)a2 = *(_QWORD *)(v5 + 80LL * *(int *)(v10 + 4) + 24) == 0;
    return *(unsigned __int8 *)(*(_QWORD *)(v2 + 24) + 31LL);
  }
  return result;
}
