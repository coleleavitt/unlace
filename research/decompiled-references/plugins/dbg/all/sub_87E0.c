__int64 __fastcall sub_87E0(__int64 a1, __int64 a2, char a3, double a4)
{
  __int64 v4; // rcx
  unsigned __int64 v6; // rax
  __int64 v8; // rdx
  unsigned int v9; // r10d
  unsigned __int16 v10; // r9
  __int64 v11; // r8
  char *v12; // rsi
  unsigned __int8 v13; // r11
  unsigned __int64 v14; // rcx
  char *v15; // r12
  unsigned __int64 v16; // rdx
  char *v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r12
  __int16 *v21; // rcx
  unsigned __int64 v22; // rdx
  char *v23; // rsi
  unsigned __int16 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  char *v27; // r9
  char *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int16 *v32; // rax
  unsigned __int64 v33; // rsi
  __int64 v34; // rcx
  unsigned int v35; // r13d
  int v36; // ebx
  __int64 v38; // rax
  unsigned __int16 *v39; // rdx
  int v40; // ecx
  char v41[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v42; // [rsp+408h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 16);
  v42 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 < v4 + 4 )
    goto LABEL_66;
  if ( v6 < v4 + 8 )
  {
    *(_QWORD *)(a2 + 16) = v4 + 4;
    goto LABEL_66;
  }
  if ( v6 < v4 + 12 )
  {
    *(_QWORD *)(a2 + 16) = v4 + 8;
    goto LABEL_66;
  }
  *(_QWORD *)(a2 + 16) = v4 + 12;
  if ( a3 )
  {
    v8 = v4 + 16;
    if ( v6 < v4 + 16 )
      goto LABEL_66;
    v9 = *(_DWORD *)(v4 + 12);
  }
  else
  {
    v8 = v4 + 14;
    if ( v6 < v4 + 14 )
      goto LABEL_66;
    v9 = *(unsigned __int16 *)(v4 + 12);
  }
  *(_QWORD *)(a2 + 16) = v8;
  if ( v6 < v8 + 2 )
    goto LABEL_66;
  v10 = *(_WORD *)v8;
  *(_QWORD *)(a2 + 16) = v8 + 2;
  if ( v6 < v8 + 4 )
    goto LABEL_66;
  v11 = *(unsigned __int16 *)(v8 + 2);
  if ( v6 < v8 + 5 )
    JUMPOUT(0x3782);
  v12 = (char *)(v8 + 6);
  *(_QWORD *)(a2 + 16) = v8 + 5;
  v13 = *(_BYTE *)(v8 + 4);
  if ( v6 < v8 + 6 )
    goto LABEL_66;
  *(_QWORD *)(a2 + 16) = v12;
  v14 = *(unsigned __int8 *)(v8 + 5);
  if ( (unsigned int)(v6 - (_DWORD)v12) <= v14 )
    v14 = (unsigned int)(v6 - (_DWORD)v12);
  v15 = &v12[v14];
  v16 = v14;
  if ( v6 < (unsigned __int64)&v12[v14] || v15 < v12 )
LABEL_66:
    JUMPOUT(0x376A);
  v17 = v41;
  if ( (unsigned int)v14 >= 8 )
  {
    v18 = v14 >> 3;
    qmemcpy(v41, v12, 8 * v18);
    v12 += 8 * v18;
    v17 = &v41[8 * v18];
  }
  v19 = 0;
  if ( (v16 & 4) != 0 )
  {
    *(_DWORD *)v17 = *(_DWORD *)v12;
    v19 = 4;
  }
  if ( (v16 & 2) != 0 )
  {
    *(_WORD *)&v17[v19] = *(_WORD *)&v12[v19];
    v19 += 2;
  }
  if ( (v16 & 1) != 0 )
    v17[v19] = v12[v19];
  v41[v16] = 0;
  *(_QWORD *)(a2 + 16) = v15;
  if ( v13 == 2 )
  {
    v38 = sub_8750(a1, v10, v9, (__int64)v41, v11, 0);
    v20 = v38;
    if ( v38 == -1 )
      return v20;
    v39 = *(unsigned __int16 **)(a2 + 16);
    if ( *(_QWORD *)(a2 + 24) >= (unsigned __int64)(v39 + 1) )
    {
      v40 = *v39;
      *(_QWORD *)(a2 + 16) = v39 + 1;
      sub_49D0(v38, (__int64)"THUNK %s, vtable displacement: %04X", "VCALL", v40);
      return v20;
    }
    goto LABEL_66;
  }
  if ( v13 > 2u )
  {
    if ( v13 == 3 )
    {
      v20 = sub_8750(a1, v10, v9, (__int64)v41, v11, 0);
      if ( v20 == -1 )
        return v20;
      v32 = *(unsigned __int16 **)(a2 + 16);
      v33 = *(_QWORD *)(a2 + 24);
      if ( v33 >= (unsigned __int64)(v32 + 1) )
      {
        v34 = *v32;
        *(_QWORD *)(a2 + 16) = v32 + 1;
        if ( v33 >= (unsigned __int64)(v32 + 2) )
        {
          v35 = v32[1];
          *(_QWORD *)(a2 + 16) = v32 + 2;
          v36 = (unsigned __int16)v34;
          sub_81F0(a1, (unsigned __int16)v34, v35, v34, v30, v31);
          sub_49D0(v20, (__int64)"THUNK %s, entry (%d:%04X) = %08a", "PCODE", v36, v35, a4);
          return v20;
        }
      }
      goto LABEL_66;
    }
    return sub_8750(a1, v10, v9, (__int64)v41, v11, 0);
  }
  if ( !v13 )
    return sub_8750(a1, v10, v9, (__int64)v41, v11, 0);
  v20 = sub_8750(a1, v10, v9, (__int64)v41, v11, 0);
  if ( v20 == -1 )
    return v20;
  v21 = *(__int16 **)(a2 + 16);
  v22 = *(_QWORD *)(a2 + 24);
  if ( v22 < (unsigned __int64)(v21 + 1) )
    goto LABEL_66;
  v23 = (char *)v21 + 3;
  v24 = *v21;
  if ( v22 < (unsigned __int64)v21 + 3 )
    JUMPOUT(0x3766);
  *(_QWORD *)(a2 + 16) = v23;
  v25 = *((unsigned __int8 *)v21 + 2);
  v26 = (unsigned int)(v22 - (_DWORD)v23);
  if ( v26 > v25 )
    v26 = v25;
  v27 = &v23[v26];
  if ( v22 < (unsigned __int64)&v23[v26] || v27 < v23 )
    goto LABEL_66;
  v28 = v41;
  if ( (unsigned int)v26 >= 8 )
  {
    qmemcpy(v41, v23, 8 * (v26 >> 3));
    v23 += 8 * (v26 >> 3);
    v28 = &v41[8 * (v26 >> 3)];
  }
  v29 = 0;
  if ( (v26 & 4) != 0 )
  {
    *(_DWORD *)v28 = *(_DWORD *)v23;
    v29 = 4;
  }
  if ( (v26 & 2) != 0 )
  {
    *(_WORD *)&v28[v29] = *(_WORD *)&v23[v29];
    v29 += 2;
  }
  if ( (v26 & 1) != 0 )
    v28[v29] = v23[v29];
  v41[v26] = 0;
  *(_QWORD *)(a2 + 16) = v27;
  sub_49D0(v20, (__int64)"THUNK %s, delta=%04X, target=%s", "ADJUSTOR", v24, v41);
  return v20;
}
