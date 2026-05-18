__int64 __fastcall sub_D2440(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, __int64 a5)
{
  void *v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned int v11; // [rsp+Ch] [rbp-3Ch]

  v8 = sub_D2260(*(int *)(a1 + 4), a2);
  if ( v8 )
  {
    v9 = (__int64)v8;
    result = (*(__int64 (__fastcall **)(__int64, __int64, void *, _QWORD, __int64))(a1 + 40))(a1, a2, v8, a4, a5);
    if ( (_DWORD)result )
    {
      v11 = result;
      sub_C91C0(v9, a2);
      *a3 = 0;
      return v11;
    }
    else
    {
      *a3 = v9;
    }
  }
  else
  {
    *a3 = 0;
    return 7;
  }
  return result;
}
