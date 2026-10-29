__int64 __fastcall sub_194D60(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  _DWORD *v6; // rbx
  bool v7; // zf
  __int64 v9; // rdi
  __int64 result; // rax
  _DWORD *v11; // rbx
  int v12; // r14d
  __int64 v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v6 = (_DWORD *)a1;
  v7 = *(_BYTE *)a1 == 4;
  v13[1] = __readfsqword(0x28u);
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( (unsigned int)(*(_DWORD *)v9 - 12) > 1 || !(unsigned __int8)sub_11FD80((char *)(v9 + 48), v13, 1) )
      return 0;
    v11 = *((_DWORD **)v6 + 1);
    v12 = v13[0];
    if ( *v11 != 12 )
      v12 = -LODWORD(v13[0]);
    v6 = v11 + 8;
  }
  else
  {
    v12 = 0;
  }
  if ( !sub_125B60((unsigned __int8 *)v6, a2, 0, a5) )
    return 0;
  if ( v12 < a3 )
    return 0xFFFFFFFFLL;
  result = 1;
  if ( v12 > a4 )
    return 0xFFFFFFFFLL;
  return result;
}

