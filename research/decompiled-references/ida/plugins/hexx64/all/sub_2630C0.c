unsigned __int64 __fastcall sub_2630C0(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4, double a5)
{
  void (**v7)(_QWORD, _QWORD, const char *, ...); // rax
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  const char *v12; // r14
  __int16 *v13; // rbx
  __int64 v14; // rdi
  char *v15; // rax
  char v16; // dl
  char *v18; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+18h] [rbp-70h]
  __int16 v20; // [rsp+30h] [rbp-58h] BYREF
  char v21; // [rsp+32h] [rbp-56h] BYREF
  char v22; // [rsp+44h] [rbp-44h] BYREF
  __int16 v23; // [rsp+45h] [rbp-43h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v7 = *(void (***)(_QWORD, _QWORD, const char *, ...))a2;
  v24 = __readfsqword(0x28u);
  if ( !((unsigned __int8 (__fastcall *)(__int64))v7[1])(a2) )
  {
    v9 = *(_QWORD *)(a2 + 40);
    if ( v9 )
    {
      v10 = sub_2572F0(v9, a1);
      v11 = *(_QWORD *)(a2 + 40);
      v18 = (char *)*sub_2572F0(v11, v10);
      LODWORD(v19) = 75 - a4;
      v12 = sub_257AF0(v11, (unsigned __int64 *)&v18, 0, a5);
      if ( v12 )
      {
        v13 = &v20;
        if ( !a4 )
        {
          v13 = (__int16 *)&v21;
          v20 = 1028;
        }
        v18 = nullptr;
        v19 = 0;
        tag_addr();
        if ( v13 >= &v23 )
        {
          if ( !under_debugger )
            sub_383060(0x208u, 0.0);
          BUG();
        }
        v14 = (__int64)v18;
        v15 = v18;
        while ( 1 )
        {
          v16 = *v15++;
          *(_BYTE *)v13 = v16;
          if ( !v16 )
            break;
          v13 = (__int16 *)((char *)v13 + 1);
          if ( v13 == (__int16 *)&v22 )
          {
            v22 = 0;
            break;
          }
        }
        if ( v14 )
        {
          *(_QWORD *)&v19 = 0;
          qfree(v14);
        }
        *(_BYTE *)v13 = 0;
        sub_25F570((void (***)(_QWORD, _QWORD, const char *, ...))a2, a3, (const char *)&v20, v12);
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}

