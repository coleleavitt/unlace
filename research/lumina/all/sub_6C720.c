__int64 __fastcall sub_6C720(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4, __int64 a5)
{
  unsigned __int64 v7; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  bool v15; // cf
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  _QWORD v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  if ( (a2 & (15LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5)))) != 5LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5)) )
    return 1;
  v20[0] = *a4;
  v7 = v20[0];
  v9 = sub_196FF0(v20, a5);
  v10 = v20[0];
  v11 = v9;
  *a4 = v20[0];
  if ( v7 < v10 )
  {
    v18 = v10;
    v12 = sub_196FF0(v20, a5);
    v13 = v20[0];
    v14 = v12;
    v15 = v18 < v20[0];
    *a4 = v20[0];
    v19 = v13;
    if ( v15 )
    {
      v16 = sub_196FF0(v20, a5);
      v17 = v20[0];
      *a4 = v20[0];
      if ( v19 < v17 && sub_6C650((_DWORD *)(a1 + 24), a4, a5) )
      {
        *(_QWORD *)a1 = v11 - 1;
        *(_QWORD *)(a1 + 8) = v14 - 1;
        *(_QWORD *)(a1 + 16) = v16 - 1;
        return 1;
      }
    }
  }
  return 0;
}
