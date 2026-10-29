_BOOL8 __fastcall sub_E45E0(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  int v3; // r12d
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(); // rax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rdx
  int v11; // ecx
  _QWORD v12[11]; // [rsp+0h] [rbp-58h] BYREF

  v12[7] = __readfsqword(0x28u);
  result = 0;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    v12[3] = 0;
    v12[5] = a1;
    *(_DWORD *)(a1 + 40) = v3 & 0xF7FF6FEF;
    v5 = *(_QWORD *)a1;
    v12[1] = sub_105C10;
    v6 = sub_F8DF0;
    v12[0] = v5;
    if ( (v3 & 0x80000) != 0 )
      v6 = nullptr;
    v12[2] = v6;
    v7 = *(_DWORD *)(v5 + 300) + *(_DWORD *)(a2 + 40);
    v8 = *(_QWORD *)v5;
    *(_DWORD *)(v5 + 300) = v7;
    v9 = *(_DWORD *)(v8 + 148);
    if ( v7 > v9 )
    {
      sub_DBD10(v5, "Expression tree is too large (maximum depth %d)", v9);
      return 1;
    }
    else
    {
      sub_CDCD0((__int64)v12, a2);
      v10 = v12[0];
      *(_DWORD *)(v12[0] + 300LL) -= *(_DWORD *)(a2 + 40);
      *(_DWORD *)(a2 + 4) |= *(_DWORD *)(a1 + 40) & 0x8010;
      result = 1;
      v11 = *(_DWORD *)(a1 + 36);
      *(_DWORD *)(a1 + 40) |= v3 & 0x8009010;
      if ( v11 <= 0 )
        return *(_DWORD *)(v10 + 48) > 0;
    }
  }
  return result;
}
