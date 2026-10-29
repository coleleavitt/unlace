unsigned __int64 __fastcall sub_37E500(__int64 a1, double a2, __m128 a3)
{
  unsigned int v3; // esi
  unsigned __int64 result; // rax
  int v5; // r12d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rcx

  v3 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 4) &= ~0x40u;
  sub_37A500(a1, v3, 0, a2, a3);
  if ( (unsigned __int8)sub_36E1B0(a1, a2) )
  {
    if ( *(_QWORD *)(a1 + 464) )
    {
      while ( 1 )
      {
        v11 = **(int **)(a1 + 456);
        if ( !(_DWORD)v11 )
          break;
        v8 = *(_QWORD *)(a1 + 432) + 104 * v11;
        v9 = *(_DWORD *)(v8 + 24);
        BYTE1(v9) &= 0x7Eu;
        *(_DWORD *)(v8 + 24) = v9 | 0x100000;
        memmove(*(void **)(a1 + 456), (const void *)(*(_QWORD *)(a1 + 456) + 4LL), 4LL * *(_QWORD *)(a1 + 464) - 4);
        if ( (*(_QWORD *)(a1 + 464))-- == 1 )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      *(_DWORD *)(a1 + 4) &= 0xFFFFFFCF;
    }
  }
  sub_37BF90(a1, 0, a2, a3);
  result = sub_19F810(*(_QWORD **)(a1 + 936));
  if ( !(_BYTE)result )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 72) - 208);
    if ( (unsigned int)result <= 0x2F )
    {
      result = *(_QWORD *)(a1 + 1496);
      if ( (*(_BYTE *)(result + 606) & 0x10) != 0 )
        result = sub_37BF90(a1, 1, a2, a3);
    }
  }
  if ( *(_QWORD *)(a1 + 464) )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = sub_13D280((_QWORD *)a1, v5, a2);
      *(_DWORD *)(v6 + 92) = 0;
      v7 = v6;
      if ( (*(_BYTE *)(v6 + 24) & 0x40) != 0 || *(_DWORD *)v6 != 2 || !(unsigned __int8)sub_1C3110(v6, 0, 0, a2) )
        goto LABEL_9;
      if ( *(_DWORD *)v7 == 2 )
        break;
      if ( (unsigned int)(*(_DWORD *)v7 - 3) > 1 )
        goto LABEL_17;
LABEL_9:
      result = ++v5;
      if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 464) )
        goto LABEL_10;
    }
    v12 = *(_QWORD *)(v7 + 8);
    v13 = *(_DWORD **)v12;
    v14 = *(_QWORD *)v12 + 24LL * *(_QWORD *)(v12 + 8);
    if ( *(_QWORD *)v12 != v14 )
    {
      while ( (unsigned int)(*v13 - 3) > 1 )
      {
        v13 += 6;
        if ( (_DWORD *)v14 == v13 )
          goto LABEL_17;
      }
      goto LABEL_9;
    }
LABEL_17:
    sub_1C4240((_DWORD *)v7, *(_QWORD *)(a1 + 1496), *(_DWORD *)(v7 + 88), a2);
    goto LABEL_9;
  }
LABEL_10:
  *(_DWORD *)(a1 + 4) |= 0x40u;
  return result;
}

