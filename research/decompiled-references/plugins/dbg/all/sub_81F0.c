__int64 __fastcall sub_81F0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r9d
  _QWORD *segm_by_name; // rax
  _BYTE v21[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v6 = a3;
  v22 = __readfsqword(0x28u);
  if ( (int)a2 <= 0 || *(_DWORD *)(a1 + 248) < (int)a2 )
    goto LABEL_3;
  v8 = *(_QWORD *)(a1 + 240) + 20LL * ((int)a2 - 1);
  v9 = getinf(5, a2, 5LL * ((int)a2 - 1), a4, a5, a6);
  if ( v9 == 11 )
  {
    v18 = netnode_altval(*(_QWORD *)(a1 + 144), *(unsigned __int16 *)(v8 + 6), 65, v11, v12, v13);
    v17 = sub_7F30(a1, v6 - *(_QWORD *)(a1 + 152) + v18);
    if ( v17 == -1 )
      return -1;
    v6 = v19;
    goto LABEL_13;
  }
  if ( v9 <= 11 )
  {
    if ( v9 != 4 )
      goto LABEL_3;
    v17 = netnode_altval(*(_QWORD *)(a1 + 136), *(unsigned __int16 *)(v8 + 6), 65, v11, v12, v13);
    if ( v17 == -1 )
      goto LABEL_3;
LABEL_13:
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    return v16 & (v6 + v17 + *(unsigned int *)(v8 + 12));
  }
  if ( (unsigned int)(v9 - 22) > 1 )
    goto LABEL_3;
  v14 = *(unsigned __int16 *)(v8 + 2);
  if ( (_WORD)v14 )
  {
    qsnprintf(v21, 10, "ovr%03d", v14);
    segm_by_name = (_QWORD *)get_segm_by_name(v21);
    if ( segm_by_name )
    {
      v17 = *segm_by_name & 0xFFFFFFFFFFFFFFF0LL;
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      return v16 & (v6 + v17 + *(unsigned int *)(v8 + 12));
    }
LABEL_3:
    sub_5310((__int64)"Codeview: can't map address %d:%08X", a2, v6);
    return -1;
  }
  v15 = getinf(12, a2, v10, v14, v12, v13);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  v17 = v16 & (16 * (*(unsigned __int16 *)(v8 + 6) + v15));
  return v16 & (v6 + v17 + *(unsigned int *)(v8 + 12));
}
