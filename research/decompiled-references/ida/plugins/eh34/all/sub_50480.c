__int64 __fastcall sub_50480(__int64 a1, __int64 a2, char ***a3)
{
  char ***v3; // r14
  char **v4; // rdx
  size_t v6; // rax
  char **v7; // rbp
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // r15
  __int64 v13; // [rsp+8h] [rbp-70h]
  char ***v14; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-60h]
  _BYTE v16[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v17[8]; // [rsp+38h] [rbp-40h] BYREF

  v17[0] = __readfsqword(0x28u);
  v3 = a3;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = a3[1];
  if ( v4 )
  {
    v6 = pack_dd(v16, v17, v4) - (_QWORD)v16;
    if ( v6 )
      goto LABEL_22;
    while ( 1 )
    {
      v7 = *v3;
      v13 = (__int64)&(*v3)[5 * (_QWORD)v3[1]];
      if ( (char **)v13 == *v3 )
        break;
      while ( 1 )
      {
        v9 = pack_dd(v16, v17, *(unsigned int *)v7) - (_QWORD)v16;
        if ( v9 )
          sub_4E640((__int64 *)a1, v16, v9);
        v10 = pack_dd(v16, v17, *((unsigned int *)v7 + 1)) - (_QWORD)v16;
        if ( v10 )
          sub_4E640((__int64 *)a1, v16, v10);
        v11 = pack_dd(v16, v17, *((unsigned int *)v7 + 2)) - (_QWORD)v16;
        if ( v11 )
          sub_4E640((__int64 *)a1, v16, v11);
        sub_50140((__int64)&v14, a2, v7 + 2);
        v12 = v15;
        v3 = v14;
        if ( v15 > 0xFFFFFFFF )
          break;
        v8 = pack_dd(v16, v17, (unsigned int)v15) - (_QWORD)v16;
        if ( v8 )
          sub_4E640((__int64 *)a1, v16, v8);
        if ( v12 )
          sub_4E640((__int64 *)a1, v3, v12);
        if ( v14 )
        {
          v15 = 0;
          qfree(v14);
        }
        v7 += 5;
        if ( (char **)v13 == v7 )
          return a1;
      }
      if ( under_debugger )
        BUG();
      v6 = interr(5);
LABEL_22:
      sub_4E640((__int64 *)a1, v16, v6);
    }
  }
  return a1;
}

