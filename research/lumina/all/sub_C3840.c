__int64 __fastcall sub_C3840(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, __int64); // rax
  __int64 result; // rax
  int v12; // r12d
  bool v13; // dl

  v6 = *(_QWORD *)(a1 + 16);
  v7 = a2;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = a4;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v8 + 24LL);
  if ( v6 <= a4 || v6 > a4 + (int)a3 )
    return v10(v8, v7, a3, v9);
  v12 = v6 - a4;
  result = v10(v8, a2, (unsigned int)(v6 - a4), a4);
  if ( !(_DWORD)result )
  {
    a3 -= v12;
    result = *(_DWORD *)(a1 + 24) & 3;
    if ( (*(_DWORD *)(a1 + 24) & 3) != 0 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 40LL))(
                 *(_QWORD *)(a1 + 8),
                 (unsigned int)result);
      v13 = (_DWORD)result != 0;
    }
    else
    {
      v13 = 0;
    }
    if ( a3 && !v13 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 += v12;
      v7 = v12 + a2;
      v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v8 + 24LL);
      return v10(v8, v7, a3, v9);
    }
  }
  return result;
}
