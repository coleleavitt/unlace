__int64 __fastcall sub_28B4E0(_QWORD *a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbp
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v3 = a1[3];
  if ( v3 <= 1 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1[2] + 8 * v3 - 8) + 8LL) != 71 )
    return 0;
  sub_283C00(&v9, a1, a2, a3);
  v5 = v9;
  if ( *(_QWORD *)(v9 + 16) <= 1u )
    return 0;
  v6 = *(_DWORD *)(a2 + 12);
  v7 = (__int64)v10;
  v8 = *v10;
  if ( v6 != -1 )
  {
    if ( v8 != v9 && *(_DWORD *)(v8 + 28) == -1 )
    {
      *(_DWORD *)(v8 + 28) = v6;
      v8 = *(_QWORD *)v7;
      goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  **(_QWORD **)(v7 + 8) = v8;
  *(_QWORD *)(v8 + 8) = *(_QWORD *)(v7 + 8);
  sub_255050(v7 + 16, a3);
  qfree(v7);
  --*(_QWORD *)(v5 + 16);
  return 1;
}

