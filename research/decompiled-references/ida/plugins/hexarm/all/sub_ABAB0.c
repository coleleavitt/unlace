__int64 __fastcall sub_ABAB0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _DWORD *v6; // rsi
  unsigned int v8; // r12d
  char v9; // dl
  __int64 result; // rax
  __int64 v11; // rdx
  bool v12; // al
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rdi

  if ( (*(_BYTE *)(a2 + 1) & 0x40) != 0 )
    return 0;
  v6 = *(_DWORD **)(a1 + 32);
  if ( *v6 == 11 )
  {
    v8 = a4 == 0 ? 1 : 5;
LABEL_4:
    v9 = sub_AB110(*(_QWORD *)(a1 + 16), *(unsigned int **)(a1 + 24), a2, v8);
    result = 1;
    if ( !v9 )
    {
      v11 = *(_QWORD *)(a1 + 32);
      result = 0;
      if ( *(_BYTE *)(v11 + 64) == 8 )
      {
        v14 = *(_QWORD *)(v11 + 72);
        v15 = *(_DWORD *)(v14 + 20) & 0xFFFFFFF0;
        if ( v15 == 64 || v15 == 208 )
          result = (unsigned __int8)sub_F2E80(v14, *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a2);
      }
    }
LABEL_6:
    *(_DWORD *)(a1 + 56) += result;
    return result;
  }
  v12 = sub_A8E40(*(_QWORD *)(a1 + 8), v6, a2, 0, 0);
  v13 = *(_QWORD *)(a1 + 32);
  if ( v12 )
  {
    v8 = a4 == 0 ? 1 : 5;
    if ( *(_DWORD *)v13 != 11 && (unsigned __int8)sub_11C690(a2, *(_QWORD *)(a1 + 48), 0) )
      v8 &= ~1u;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 4) == 8 || (result = 0, (*(_BYTE *)(v13 + 5) & 8) != 0) )
  {
    if ( a4 )
    {
      result = sub_98AD0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), (_BYTE *)a2);
    }
    else
    {
      v16 = sub_151CC0(v13, 0);
      v17 = *(_QWORD *)(a1 + 16);
      if ( a2 != v16
        || (result = 0, *(_DWORD *)(a2 + 4) <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 480) + 112LL) + 80LL) / 2) )
      {
        result = sub_987E0(v17, *(_QWORD *)(a1 + 24), a2);
      }
    }
    goto LABEL_6;
  }
  return result;
}

