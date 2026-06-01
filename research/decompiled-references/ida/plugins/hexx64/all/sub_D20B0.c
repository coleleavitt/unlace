__int64 __fastcall sub_D20B0(__int64 a1, int a2, int a3, unsigned int a4, int a5, unsigned int a6, double a7)
{
  __int64 *v11; // r13
  __int64 result; // rax
  char *v13; // rdi
  __int64 v14; // rcx
  char *v15; // rdx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // [rsp-10h] [rbp-58h]
  __int64 v19; // [rsp+0h] [rbp-48h]
  unsigned int v20; // [rsp+Ch] [rbp-3Ch]

  v11 = *(__int64 **)(a1 + 64);
  if ( a4 != a2 )
  {
    v13 = (char *)v11[57];
    v14 = v11[54];
    v15 = &v13[4 * v11[58]];
    if ( v13 != v15 )
    {
      while ( *(_DWORD *)v13 != a2 )
      {
        v13 += 4;
        if ( v15 == v13 )
          goto LABEL_12;
      }
      if ( v15 != v13 )
      {
        v20 = a6;
        v19 = v11[54];
        memmove(v13, v13 + 4, v15 - v13 - 4);
        a6 = v20;
        v14 = v19;
        --v11[58];
      }
    }
LABEL_12:
    v16 = v14 + 104LL * a2;
    v17 = *(_DWORD *)(v16 + 24);
    BYTE1(v17) &= 0x7Eu;
    *(_DWORD *)(v16 + 24) = v17 | 0x100000;
  }
  result = *(unsigned int *)(a1 + 76);
  if ( (_DWORD)result != 1 && (_DWORD)result != 6 )
  {
    sub_D1D10(a1, 0, v11[5], a4, a2, a5, a7, a3, a6);
    return v18;
  }
  return result;
}

