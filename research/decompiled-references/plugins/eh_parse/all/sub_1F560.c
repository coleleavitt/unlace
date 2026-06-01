__int64 __fastcall sub_1F560(__int64 a1, __int64 *a2, char a3)
{
  unsigned int v4; // ebp
  int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h] BYREF
  __int128 v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a2 )
  {
    v4 = sub_116C0((__int64)a2);
    if ( (_BYTE)v4 )
    {
      v11 = 0;
      v10 = 0;
      v6 = 1;
      if ( (unsigned __int8)sub_1DC00(a1, (__int64)&v10, 0x7FFF, a2) )
        v6 = v11 + 1;
      v7 = *a2;
      if ( v6 == netnode_altval(*(_QWORD *)(a1 + 104), *a2, 120) )
      {
        v4 = 0;
      }
      else if ( a3 )
      {
        v8 = *(_QWORD *)(a1 + 104);
        v9 = v6;
        netnode_supset(v8, v7, &v9, 8, 120);
      }
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        qfree(v10);
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
