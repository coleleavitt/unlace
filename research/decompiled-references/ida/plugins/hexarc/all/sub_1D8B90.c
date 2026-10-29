__int64 __fastcall sub_1D8B90(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  _QWORD *v7; // rdx
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v15; // rsi
  __int64 v16; // rax

  if ( *(_BYTE *)a4 == 1 )
  {
    if ( (unsigned __int8)sub_5E4E0((_QWORD *)(a2 + 104), *(_DWORD *)(a4 + 8), *(_DWORD *)(a4 + 4)) )
      return 0;
    v10 = *(int *)(a4 + 8);
  }
  else
  {
    if ( *(_BYTE *)a4 != 5 )
      return 0;
    v7 = *(_QWORD **)(a4 + 8);
    v8 = *(int *)(a4 + 4);
    v9 = (_QWORD *)*v7;
    v10 = v7[1];
    v11 = v9[72];
    v12 = v9[71];
    v13 = v10 + v9[180];
    if ( !v11 || v13 < v12 || v12 + v11 - 1 < v8 + v13 - 1 )
    {
      v15 = v9[83];
      v16 = v9[84];
      if ( !v16 || v13 < v15 || v15 + v16 - 1 < v8 + v13 - 1 )
        return 0;
    }
  }
  *(_QWORD *)a1 = v10;
  if ( *(int *)(a4 + 4) <= 8 )
  {
    *(_BYTE *)(a1 + 8) = *(_BYTE *)a4;
    *a3 = *(_DWORD *)(a4 + 4);
    return 1;
  }
  return 0;
}

