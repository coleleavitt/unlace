__int64 __fastcall sub_105680(_QWORD *a1, int a2, __int64 *a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int8 *v7; // rcx
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  const void *v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  signed int v24; // eax
  signed int v25; // r12d
  __int64 v26; // r14
  __int64 v27; // rbp
  int v28; // eax
  const void *v29; // rbp
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rax

  v7 = byte_1BAD40;
  result = *(_WORD *)(*a3 + 20) & 0x3F;
  if ( byte_1BAD40[result] != 5 )
  {
    v11 = a1[2];
    if ( *(__int16 *)(v11 + 20) >= 0 )
    {
      result = (__int64)sub_EF2D0(a1 + 1, v11, 48, (__int64)byte_1BAD40, a6, a7);
      v12 = result;
      if ( !result )
        return result;
    }
    else
    {
      v12 = *(_QWORD *)(v11 + 8);
      if ( !v12 )
        return result;
    }
    v13 = *(_DWORD *)(v12 + 20);
    v14 = *(unsigned int *)(*(_QWORD *)(*a1 + 24LL) + 136LL);
    *(_DWORD *)(v12 + 20) = v14;
    if ( a2 == 1 )
    {
      if ( v13 )
        sub_DFCC0(v12, 1, 44);
      else
        *(_DWORD *)(v12 + 36) = 1;
      LODWORD(v27) = *(_DWORD *)(v12 + 32);
      goto LABEL_18;
    }
    v15 = a3[1];
    if ( !v13 )
    {
      *(_DWORD *)(v12 + 36) = sub_D9CE0(v15, 1u, a4, v14, (int)v7, a6, a7);
LABEL_17:
      LODWORD(v27) = *(_DWORD *)(v12 + 32);
      goto LABEL_18;
    }
    v16 = sub_D9DB0(v15, 1u, a4, v14, (int)v7, a6, a7);
    v17 = a3[1];
    v18 = (const void *)v16;
    v19 = 1;
    v24 = sub_D9CE0(v17, 1u, a4, v20, v21, v22, v23);
    v25 = v24;
    if ( v18 )
    {
      v19 = (__int64)v18;
      v17 = v12;
      sub_DFD90(v12, v18, v24);
    }
    else
    {
      v25 = 0;
    }
    v26 = *(_QWORD *)(v12 + 40);
    LODWORD(v27) = *(_DWORD *)(v12 + 32);
    if ( *(_DWORD *)(v12 + 36) == v25 )
    {
      if ( !v26 )
      {
LABEL_18:
        *(_DWORD *)(v12 + 32) = v27 + 1;
        v29 = (const void *)sub_D9DB0(*a3, 1u, a4, v14, (int)v7, a6, a7);
        result = sub_D9CE0(*a3, 1u, a4, v30, v31, v32, v33);
        if ( v29 )
          return sub_DFD90(v12, v29, result);
        return result;
      }
    }
    else if ( !v26 )
    {
      if ( (unsigned int)sub_FEBD0(v17, v19) || (v34 = sub_D1E10(4LL * ((int)v27 + 1), v19)) == 0 )
      {
LABEL_11:
        v28 = *(_DWORD *)(v12 + 20);
        *(_BYTE *)(v12 + 28) = 7;
        if ( v28 )
        {
          sub_C92E0(v12);
          LODWORD(v27) = *(_DWORD *)(v12 + 32);
          goto LABEL_18;
        }
        goto LABEL_17;
      }
      v27 = *(int *)(v12 + 32);
      v14 = (unsigned int)(v27 - 1);
      if ( (int)v27 - 1 <= 0 )
      {
LABEL_33:
        if ( (int)v27 > 0 )
        {
          *(_DWORD *)(v34 + 4 * v27 - 4) = v25;
          LODWORD(v27) = *(_DWORD *)(v12 + 32);
        }
        *(_QWORD *)(v12 + 40) = v34;
        goto LABEL_18;
      }
      v14 = v34;
      do
      {
        LODWORD(v7) = *(_DWORD *)(v12 + 36);
        v14 += 4;
        *(_DWORD *)(v14 - 4) = (_DWORD)v7;
      }
      while ( v14 != v34 + 4LL * (unsigned int)(v27 - 2) + 4 );
LABEL_32:
      v27 = *(int *)(v12 + 32);
      goto LABEL_33;
    }
    if ( (unsigned int)sub_FEBD0(v17, v19) )
      goto LABEL_11;
    v34 = sub_D2640(v26, 4LL * (int)v27);
    if ( !v34 )
      goto LABEL_11;
    goto LABEL_32;
  }
  return result;
}
