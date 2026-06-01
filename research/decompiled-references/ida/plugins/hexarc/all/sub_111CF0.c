char __fastcall sub_111CF0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  char result; // al
  _DWORD *v5; // r14
  __int64 v6; // rdi
  int *v7; // r13
  __int64 v8; // rdi
  int *v9; // rax
  int *v10; // r15
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  __int64 v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = (_DWORD *)(a2 + 32);
  v14[1] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_1163A0(a2 + 32) )
    return 0;
  v5 = (_DWORD *)(a2 + 48);
  if ( !(unsigned __int8)sub_1163A0(a2 + 48) )
    return 0;
  if ( *(_BYTE *)(a2 + 32) == 4 )
  {
    v11 = *(_DWORD **)(a2 + 40);
    if ( *v11 == 10 )
    {
      v2 = v11 + 8;
      if ( *(_BYTE *)(a2 + 48) == 4 )
      {
        v12 = *(_DWORD **)(a2 + 56);
        if ( *v12 == 10 )
          v5 = v12 + 8;
      }
    }
  }
  v6 = *(_QWORD *)(a1 + 8);
  v13 = *(_QWORD *)(a1 + 16);
  v7 = (int *)sub_122D80(v6, v2, &v13, 0);
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(a1 + 8);
  v14[0] = *(_QWORD *)(a1 + 16);
  v9 = (int *)sub_122D80(v8, v5, v14, 0);
  v10 = v9;
  if ( !v9 )
    return 0;
  result = sub_1117A0(a1, *(_DWORD *)a2, v13, v7, v14[0], v9);
  if ( !result )
  {
    if ( (unsigned __int8)sub_111910(
                            (_QWORD *)a1,
                            *(_DWORD *)a2,
                            *(_QWORD *)(a1 + 16),
                            (int)v2,
                            v13,
                            v7,
                            v14[0],
                            (__int64)v10) )
      return 8 * v2[1] <= *(_DWORD *)(a1 + 120);
    if ( (unsigned __int8)sub_111910(
                            (_QWORD *)a1,
                            *(_DWORD *)a2,
                            *(_QWORD *)(a1 + 16),
                            (int)v5,
                            v14[0],
                            v10,
                            v13,
                            (__int64)v7) )
    {
      if ( *(_DWORD *)a2 == 13 || (unsigned int)(*(_DWORD *)a2 - 29) <= 0xC )
        *(_QWORD *)(a1 + 112) = -*(_QWORD *)(a1 + 112);
      return 8 * v2[1] <= *(_DWORD *)(a1 + 120);
    }
    return 0;
  }
  return result;
}

