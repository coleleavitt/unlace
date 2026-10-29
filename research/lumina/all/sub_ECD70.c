__int64 __fastcall sub_ECD70(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  unsigned int v12; // [rsp+Ch] [rbp-1Ch]

  a2 = (unsigned int)a2;
  result = sub_ECB40(a1, (unsigned int)a2);
  if ( !(_DWORD)result )
  {
    v8 = a1[16];
    v9 = 7LL * (int)a2;
    v10 = v8 + 56LL * (int)a2 - 56;
    if ( (*(_WORD *)(v10 + 20) & 0x9000) != 0 )
    {
      a2 = a3;
      sub_C9430(v10, a3, v8, v9, v6, v7);
      result = 0;
    }
    else
    {
      *(_QWORD *)v10 = a3;
      *(_WORD *)(v10 + 20) = 4;
    }
    v11 = *(_QWORD *)(*a1 + 24);
    if ( v11 )
    {
      v12 = result;
      xmmword_241510(v11, a2, *a1);
      return v12;
    }
  }
  return result;
}
