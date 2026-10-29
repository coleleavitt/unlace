bool __fastcall sub_113170(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v12; // rdi
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  _DWORD *v16; // rax
  _DWORD *v17; // r13
  __int64 v18; // r12
  __int64 v19; // [rsp+8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+18h] [rbp-50h] BYREF
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v23[7]; // [rsp+30h] [rbp-38h] BYREF

  v19 = a2;
  v23[1] = __readfsqword(0x28u);
  v5 = sub_1186E0(a3, &v20, 14);
  if ( !v5 )
    return 0;
  v6 = sub_1186A0(v5, &v21);
  if ( !v6 )
    return 0;
  v7 = *(_DWORD *)(a3 + 36);
  v8 = 0;
  v9 = 8 * v7 - 1;
  v10 = 1LL << (8 * (unsigned __int8)v7 - 1);
  if ( (unsigned __int64)v9 < 0x40 )
    v8 = v10;
  if ( (unsigned __int8)sub_11BB80(v6, v23, 1)
    && v8 == v23[0]
    && (v12 = a1[1], v22 = v19, (v13 = (_DWORD *)sub_125240(v12, v21, &v22, 0)) != nullptr)
    && *v13 == 9
    && (v14 = (_DWORD *)sub_125240(a1[1], v13 + 8, &v22, 0), (v15 = v14) != nullptr)
    && *v14 == 25
    && (v16 = (_DWORD *)sub_125240(a1[1], v20, &v19, 0), (v17 = v16) != nullptr)
    && *v16 == 23
    && (unsigned __int8)sub_11BB80(v16 + 12, v23, 0)
    && v23[0] == 1
    && *((_BYTE *)v17 + 32) == 4
    && (v18 = *((_QWORD *)v17 + 5), *(_DWORD *)v18 == 12)
    && v18
    && (*(_BYTE *)(v18 + 32) == 4 && (unsigned __int8)sub_112620(a1, v19, *(int **)(v18 + 40), 0)
     || *(_BYTE *)(v18 + 48) == 4 && (unsigned __int8)sub_112620(a1, v19, *(int **)(v18 + 56), 0)) )
  {
    return (unsigned int)sub_12C280(*a1, a1[1], v19, v18, v22, (int)v15 + 32, (__int64)(v15 + 12), 2) != 0;
  }
  else
  {
    return 0;
  }
}

