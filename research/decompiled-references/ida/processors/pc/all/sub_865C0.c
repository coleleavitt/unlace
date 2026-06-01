__int64 __fastcall sub_865C0(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  int v5; // eax
  char v7; // dl
  unsigned int v8; // r12d
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax

  v5 = *(unsigned __int16 *)(a3 + 24);
  if ( (unsigned __int16)v5 > 0x12u )
  {
    if ( (unsigned __int16)v5 <= 0xA0u )
    {
      v8 = -1;
      if ( (unsigned __int16)v5 > 0x9Eu || (unsigned __int16)(v5 - 87) <= 1u )
        return v8;
      goto LABEL_5;
    }
    if ( (unsigned __int16)(v5 - 736) > 5u )
    {
LABEL_5:
      v7 = *(_BYTE *)(a3 + 41);
      if ( v7 == 7 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v17 = *(_QWORD *)(a3 + 56) + 16LL * *(_QWORD *)a3;
        if ( v17 != v16 )
        {
          v16 &= v17;
          if ( v17 == -1 )
            v16 = -1;
        }
        v18 = a2[1];
        v19 = a2[2];
        v20 = *a2;
        if ( v19 < v18 + 1 )
        {
          v21 = qvector_reserve();
          *a2 = v21;
          v20 = v21;
          v18 = a2[1];
        }
        *(_QWORD *)(v20 + 8 * v18) = v16;
        ++a2[1];
        v5 = *(unsigned __int16 *)(a3 + 24);
        v8 = (_WORD)v5 == 16;
        goto LABEL_8;
      }
      v8 = -1;
      if ( v7 == 6 )
        return v8;
      goto LABEL_7;
    }
    return (unsigned int)-1;
  }
  if ( (unsigned __int16)v5 > 0x10u )
  {
    v8 = 0;
    if ( a4 )
      goto LABEL_8;
    return (unsigned int)-1;
  }
  if ( (_WORD)v5 != 16 || !a4 )
    goto LABEL_5;
LABEL_7:
  v8 = 0;
LABEL_8:
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_DWORD *)(v9 + 104);
  if ( v5 < v10 || v5 >= *(_DWORD *)(v9 + 108) || (*(_BYTE *)(*(_QWORD *)(v9 + 112) + 16LL * (v5 - v10) + 8) & 1) == 0 )
  {
    v11 = *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26);
    v12 = *a2;
    v13 = a2[1];
    if ( a2[2] < (unsigned __int64)(v13 + 1) )
    {
      v15 = qvector_reserve();
      *a2 = v15;
      v12 = v15;
      v13 = a2[1];
    }
    *(_QWORD *)(v12 + 8 * v13) = v11;
    ++a2[1];
  }
  return v8;
}
