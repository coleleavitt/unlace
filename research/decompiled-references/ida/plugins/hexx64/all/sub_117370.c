bool __fastcall sub_117370(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  char *v6; // rdi
  int v7; // eax
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  __int128 v12; // rdi
  _DWORD *v13; // rax
  __int128 v14; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  __int128 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // [rsp+8h] [rbp-60h] BYREF
  __int64 v22; // [rsp+18h] [rbp-50h] BYREF
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v25[7]; // [rsp+30h] [rbp-38h] BYREF

  v21 = a2;
  v25[1] = __readfsqword(0x28u);
  v5 = sub_11C8E0(a3, &v22, 14);
  if ( !v5 )
    return 0;
  v6 = (char *)sub_11C8A0(v5, &v23);
  if ( !v6 )
    return 0;
  v7 = *(_DWORD *)(a3 + 36);
  v8 = 0;
  v9 = 8 * v7 - 1;
  v10 = 1LL << (8 * (unsigned __int8)v7 - 1);
  if ( (unsigned __int64)v9 < 0x40 )
    v8 = v10;
  if ( (unsigned __int8)sub_11FD80(v6, v25, 1u)
    && v8 == v25[0]
    && (*(_QWORD *)&v12 = a1[1],
        *((_QWORD *)&v12 + 1) = v23,
        v24 = v21,
        (v13 = (_DWORD *)sub_129440(v12, (__int64)&v24, 0)) != nullptr)
    && *v13 == 9
    && (*(_QWORD *)&v14 = a1[1],
        *((_QWORD *)&v14 + 1) = v13 + 8,
        v15 = (_DWORD *)sub_129440(v14, (__int64)&v24, 0),
        (v16 = v15) != nullptr)
    && *v15 == 25
    && (*(_QWORD *)&v17 = a1[1], *((_QWORD *)&v17 + 1) = v22, v18 = sub_129440(v17, (__int64)&v21, 0), (v19 = v18) != 0)
    && *(_DWORD *)v18 == 23
    && (unsigned __int8)sub_11FD80((char *)(v18 + 48), v25, 0)
    && v25[0] == 1
    && *(_BYTE *)(v19 + 32) == 4
    && (v20 = *(_QWORD *)(v19 + 40), *(_DWORD *)v20 == 12)
    && v20
    && (*(_BYTE *)(v20 + 32) == 4 && (unsigned __int8)sub_116820(a1, v21, *(int **)(v20 + 40), 0)
     || *(_BYTE *)(v20 + 48) == 4 && (unsigned __int8)sub_116820(a1, v21, *(int **)(v20 + 56), 0)) )
  {
    return (unsigned int)sub_130480(
                           *a1,
                           (const __m128i *)a1[1],
                           v21,
                           (_DWORD *)v20,
                           v24,
                           (__int64)(v16 + 8),
                           (__int64)(v16 + 12),
                           2) != 0;
  }
  else
  {
    return 0;
  }
}

