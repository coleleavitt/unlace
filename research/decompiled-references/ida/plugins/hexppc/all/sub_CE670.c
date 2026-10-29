__int64 __fastcall sub_CE670(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 *v10; // r13
  __int64 result; // rax
  char *v12; // rdi
  __int64 v13; // rcx
  char *v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // [rsp-10h] [rbp-58h]
  __int64 v18; // [rsp+0h] [rbp-48h]
  int v19; // [rsp+Ch] [rbp-3Ch]

  v10 = *(__int64 **)(a1 + 64);
  if ( a4 != a2 )
  {
    v12 = (char *)v10[57];
    v13 = v10[54];
    v14 = &v12[4 * v10[58]];
    if ( v12 != v14 )
    {
      while ( *(_DWORD *)v12 != a2 )
      {
        v12 += 4;
        if ( v14 == v12 )
          goto LABEL_12;
      }
      if ( v14 != v12 )
      {
        v19 = a6;
        v18 = v10[54];
        memmove(v12, v12 + 4, v14 - v12 - 4);
        a6 = v19;
        v13 = v18;
        --v10[58];
      }
    }
LABEL_12:
    v15 = v13 + 104LL * a2;
    v16 = *(_DWORD *)(v15 + 24);
    BYTE1(v16) &= 0x7Eu;
    *(_DWORD *)(v15 + 24) = v16 | 0x100000;
  }
  result = *(unsigned int *)(a1 + 76);
  if ( (_DWORD)result != 1 && (_DWORD)result != 6 )
  {
    sub_CE2D0(a1, nullptr, v10[5], a4, a2, a5, a3, a6);
    return v17;
  }
  return result;
}

