__int64 __fastcall sub_79A80(_DWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r12d
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-18h]
  __int64 v10; // [rsp+8h] [rbp-10h]
  __int64 v11; // [rsp+10h] [rbp-8h]

  v6 = a2;
  v7 = a3;
  if ( (unsigned __int8)getinf_flag(3, 32, a3, a4, a5, a6, v9, v10, v11) )
  {
    v6 = v7;
    v7 = a2;
  }
  result = cleanup_argloc();
  *a1 = 4;
  a1[2] = v6 | (v7 << 16);
  return result;
}
