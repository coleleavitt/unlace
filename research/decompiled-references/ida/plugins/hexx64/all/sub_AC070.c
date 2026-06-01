__int64 __fastcall sub_AC070(__int64 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  _DWORD *v7; // rsi
  unsigned int v9; // r12d
  char v10; // dl
  __int64 result; // rax
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned int v19; // edx
  unsigned int *v20; // rax
  __int128 v21; // rdi

  if ( (*(_BYTE *)(a2 + 1) & 0x40) != 0 )
    return 0;
  v7 = *(_DWORD **)(a1 + 32);
  if ( *v7 == 11 )
  {
    v9 = a4 == 0 ? 1 : 5;
LABEL_4:
    v10 = sub_AB6D0(*(__m128i **)(a1 + 16), *(unsigned int **)(a1 + 24), a2, v9, a5);
    result = 1;
    if ( !v10 )
    {
      v12 = *(_QWORD *)(a1 + 32);
      result = 0;
      if ( *(_BYTE *)(v12 + 64) == 8 )
      {
        v18 = *(_QWORD *)(v12 + 72);
        v19 = *(_DWORD *)(v18 + 20) & 0xFFFFFFF0;
        if ( v19 == 64 || v19 == 208 )
          result = (unsigned __int8)sub_F3440(v18, *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a2);
      }
    }
LABEL_6:
    *(_DWORD *)(a1 + 56) += result;
    return result;
  }
  v13 = sub_A9400(*(_QWORD *)(a1 + 8), v7, a2, 0, 0, a5);
  v17 = *(_QWORD *)(a1 + 32);
  if ( v13 )
  {
    v9 = a4 == 0 ? 1 : 5;
    if ( *(_DWORD *)v17 != 11 && sub_11CC50((unsigned __int8 *)a2, *(_QWORD *)(a1 + 48)) )
      v9 &= ~1u;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 4) == 8 || (result = 0, (*(_BYTE *)(v17 + 5) & 8) != 0) )
  {
    if ( a4 )
    {
      result = sub_99090(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), (_BYTE *)a2, v14, v15, v16);
    }
    else
    {
      v20 = sub_152280((unsigned int *)v17, nullptr);
      *(_QWORD *)&v21 = *(_QWORD *)(a1 + 16);
      if ( (unsigned int *)a2 != v20
        || (result = 0, *(_DWORD *)(a2 + 4) <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 480) + 112LL) + 80LL) / 2) )
      {
        *((_QWORD *)&v21 + 1) = *(_QWORD *)(a1 + 24);
        result = sub_98DA0(v21, a2);
      }
    }
    goto LABEL_6;
  }
  return result;
}

