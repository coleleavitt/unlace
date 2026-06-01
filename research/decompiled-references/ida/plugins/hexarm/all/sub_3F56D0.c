__int64 __fastcall sub_3F56D0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v10; // eax
  __int64 v11; // rbp
  int v13; // eax
  int v14; // [rsp+Ch] [rbp-4Ch]
  __int64 v15; // [rsp+10h] [rbp-48h]
  int dtype_size; // [rsp+18h] [rbp-40h]

  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  sub_3F55F0(a1, a2, a6);
  v15 = *(_QWORD *)(a1 + 832);
  dtype_size = get_dtype_size();
  if ( sub_11E2E0(a2) && *(_DWORD *)(v15 + 80) == 8 && (unsigned int)(a6 - 8) <= 0x107 && dtype_size == 4 )
  {
    v13 = get_dtype_size();
    v11 = sub_1D5D50(a1, a2, v13, a4, a5, v14, a7);
    sub_1D6180(a1, 2, 7, v14, a6, 0);
  }
  else
  {
    v10 = get_dtype_size();
    v11 = sub_1D5D50(a1, a2, v10, a4, a5, a6, a7);
  }
  sub_3F1070(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 8), v11);
  return v11;
}

