__int64 __fastcall sub_3E6170(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // esi
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+8h] [rbp-50h]
  __int64 *v9; // [rsp+10h] [rbp-48h] BYREF
  __int128 v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  result = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a3 + 480) + 606LL) & 0x20) != 0
    && *(_BYTE *)a4 == 8
    && *(_DWORD *)(*(_QWORD *)(a4 + 8) + 284LL) == 16 )
  {
    v7 = 0;
    v8 = 0;
    sub_5F400(&v7, 0, 5);
    v9 = nullptr;
    v10 = 0;
    sub_5F800(a2, &v7);
    sub_3113F0(a2 + 2, &v9);
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
    qfree();
    v6 = *(_DWORD *)(a1 + 520);
    v7 = 0;
    v8 = 0;
    sub_5F400(&v7, v6, 1);
    v9 = nullptr;
    v10 = 0;
    sub_5F800(a2, &v7);
    sub_3113F0(a2 + 2, &v9);
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
    qfree();
    return 1;
  }
  return result;
}

