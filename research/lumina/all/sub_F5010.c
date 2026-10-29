__int64 __fastcall sub_F5010(_DWORD *a1, __int64 a2, char ***a3)
{
  signed __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx

  v3 = sub_CD0F0(*a3);
  v8 = 0;
  if ( v3 >= 0 )
    v8 = v3;
  result = sub_F19B0(a1, v8, v4, v5, v6, v7);
  if ( (_DWORD)result )
  {
    v10 = *(_QWORD *)a1;
    a1[9] = result;
    if ( (*(_BYTE *)(v10 + 20) & 1) != 0 )
      return sub_F4FB0((__int64)a1, result);
  }
  return result;
}
