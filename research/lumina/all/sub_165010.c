__int64 __fastcall sub_165010(_QWORD *a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // ecx
  __int64 *v6; // rbx
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // [rsp+Ch] [rbp-1Ch]

  result = sub_FEBD0((__int64)a1, a2);
  if ( !(_DWORD)result )
  {
    v6 = sub_DC1C0(0, 0x38u);
    if ( v6 )
    {
      v6[3] = 0;
      *((_WORD *)v6 + 10) = 1;
      sub_F11D0((__int64)v6, a1, -1, 2, nullptr, v8);
    }
    v11 = (unsigned __int8 *)sub_D9DB0((__int64)v6, 1u, a3, v4, v5, v7, v8);
    v14 = 7;
    if ( v11 )
      v14 = sub_CA9C0(v11);
    v15 = v14;
    sub_C9940((__int64)v6, 1, v9, v10, v12, v13);
    return v15;
  }
  return result;
}
