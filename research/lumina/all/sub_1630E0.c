__int64 __fastcall sub_1630E0(__int64 a1, __int64 a2, __int64 *a3, double a4)
{
  __int64 v5; // rbp
  __int64 (__fastcall *v7)(__int64, _QWORD *, _QWORD, _QWORD); // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  const char *v18; // rax
  __int64 v19; // rbp
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  const char *v24; // rdx
  __int64 v25; // rbp
  __int64 (__fastcall *v26)(__int64, _QWORD *, _QWORD, _QWORD); // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rdx

  v5 = *(_QWORD *)(a1 + 24);
  *(_WORD *)(*(_QWORD *)(v5 + 104) + 76LL) = 4;
  *(_QWORD *)(*(_QWORD *)(v5 + 104) + 56LL) = a2;
  if ( *(int *)(v5 + 48) <= 4 )
  {
    v11 = sub_141DB0(*(__m128i **)(a1 + 24), a2, a4);
    if ( v11 != 100 )
      goto LABEL_3;
LABEL_8:
    v21 = **(_QWORD **)(v5 + 120);
    v22 = *(unsigned __int16 *)(a1 + 8);
    if ( *(_WORD *)(v21 + 66) <= (unsigned __int16)v22 )
    {
      v24 = "null";
    }
    else
    {
      v23 = *(unsigned int *)(v21 + 4LL * *(unsigned __int16 *)(a1 + 8) + 104);
      if ( (unsigned int)v23 > 0xB )
      {
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(v21 + 4LL * (*(__int16 *)(v21 + 64) + v22) + 104);
        if ( (unsigned int)v23 > 0x7F )
          v30 = (unsigned int)(v23 - 12) >> 1;
        else
          v30 = byte_1BEB80[v23];
        *(_DWORD *)a1 = v30;
        v31 = *(_QWORD *)(v21 + 40);
        v19 = 0;
        v11 = 0;
        *(_QWORD *)(a1 + 16) = v31;
        v32 = *(_QWORD *)(v31 + 8);
        *(_BYTE *)(v31 + 1) |= 0x10u;
        *(_BYTE *)(v32 + 19) = 1;
        goto LABEL_6;
      }
      v24 = "null";
      if ( (_DWORD)v23 )
      {
        v24 = "real";
        if ( (_DWORD)v23 != 7 )
          v24 = "integer";
      }
    }
    v25 = sub_E8280(*(_QWORD *)(a1 + 32), "cannot open value of type %s", v24);
    sub_11E660(*(_QWORD *)(a1 + 24), (__int64)"cannot open value of type %s", v26, v27, v28, v29);
    *(_QWORD *)(a1 + 24) = 0;
    *a3 = v25;
    return 1;
  }
  *(_DWORD *)(v5 + 48) = 4;
  v11 = sub_137020(v5);
  if ( v11 == 100 )
    goto LABEL_8;
LABEL_3:
  v12 = *(_QWORD *)(a1 + 24);
  if ( !v12 )
  {
    v19 = 0;
    goto LABEL_6;
  }
  v11 = sub_11E660(v12, a2, v7, v8, v9, v10);
  *(_QWORD *)(a1 + 24) = 0;
  v17 = *(_QWORD *)(a1 + 32);
  if ( v11 )
  {
    v18 = sub_EEFB0(v17, a2, v13, a4, v14, v15, v16);
    v19 = sub_E8280(*(_QWORD *)(a1 + 32), "%s", v18);
LABEL_6:
    *a3 = v19;
    return v11;
  }
  *a3 = sub_E8280(v17, "no such rowid: %lld", a2);
  return 1;
}
