__int64 __fastcall sub_154C10(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, double a5)
{
  _DWORD *v6; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int8 *v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = (unsigned __int8 *)__readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 4 || (v6 = *(_DWORD **)(a3 + 8), *v6 != 14) )
  {
    if ( !under_debugger )
      sub_383060(0xC53Du, a5);
    BUG();
  }
  v9 = sub_11C8A0((__int64)v6, v15);
  if ( v9 )
  {
    v10 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), *(_DWORD *)(v9 + 4), 1);
    if ( sub_125B60(v15[0], a4, 0, a5) )
    {
      v12 = 1 - v10;
      if ( a3 == a1 + 32 )
        v12 = v10 - 1;
      goto LABEL_12;
    }
    if ( a3 == a1 + 48 && *(_BYTE *)a4 == 4 )
    {
      v11 = *(_QWORD *)(a4 + 8);
      if ( *(_DWORD *)v11 == 5 )
      {
        if ( sub_125B60((unsigned __int8 *)(v11 + 32), (__int64)v15[0], 0, a5) )
        {
          v12 = v10 + 1;
LABEL_12:
          v13 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)a1 = 14;
          sub_120A10(a3, a2, v12, *(_DWORD *)(a3 + 4), v13, 0);
          return 1;
        }
      }
    }
  }
  return 0;
}

