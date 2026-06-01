unsigned __int64 __fastcall sub_715C0(__int64 a1, __int64 *a2, double a3, double a4)
{
  const void **v5; // rbp
  __int64 v6; // r15
  unsigned int *v7; // r13
  __int64 i; // r14
  _DWORD *v9; // rbp
  _DWORD *v10; // [rsp+8h] [rbp-70h]
  unsigned int *v11; // [rsp+18h] [rbp-60h]
  _QWORD v12[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( (debug & 8) != 0 )
      sub_224B0((__int64)"%a: expand_func_seh (end %a)\n", a3, a4);
    if ( (unsigned __int8)sub_6F3C0(*(_QWORD *)(a1 + 5304), a2, v12, 1u) )
    {
      v5 = (const void **)v12[0];
      v6 = *(_QWORD *)(v12[0] + 8LL);
      if ( v6 )
      {
        v11 = (unsigned int *)qalloc_or_throw();
        memcpy(v11, *v5, 12 * v6);
        v7 = v11 + 1;
        for ( i = 0; i != v6; ++i )
        {
          v9 = (_DWORD *)v7[1];
          if ( *v7 )
          {
            v10 = (_DWORD *)*v7;
            sub_714C0(a1, a3, a4, (__int64)a2, v10, 1);
            v12[1] = *a2 - (_QWORD)v10;
            netnode_supset();
            sub_714C0(a1, a3, a4, (__int64)a2, v9, 2);
          }
          else
          {
            sub_714C0(a1, a3, a4, (__int64)a2, (_DWORD *)v7[1], 3);
            auto_cancel();
          }
          v12[2] = *a2 - (_QWORD)v9;
          netnode_supset();
          v7 += 3;
        }
        if ( v11 )
          qfree();
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}
