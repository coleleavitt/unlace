__int64 __fastcall sub_71590(_QWORD *a1, __int64 *a2, __int64 **a3, int a4)
{
  __int64 *v7; // rdi
  unsigned int v9; // r14d
  unsigned int v10; // ebp
  __int64 *v11; // r15
  __int64 v12; // rbp
  int v14; // r8d
  int v15; // r9d
  __int64 *v16; // rdi
  const char *v17; // r8
  char v18; // al
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // ebp
  __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // [rsp+0h] [rbp-78h]
  int v25; // [rsp+8h] [rbp-70h]
  unsigned __int8 v26; // [rsp+Fh] [rbp-69h]
  int v27; // [rsp+10h] [rbp-68h] BYREF
  __int16 v28; // [rsp+14h] [rbp-64h] BYREF
  unsigned __int16 v29; // [rsp+16h] [rbp-62h] BYREF
  __int64 v30; // [rsp+18h] [rbp-60h] BYREF
  const char *v31; // [rsp+20h] [rbp-58h] BYREF
  __int128 v32; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v7 = *a3;
  v33 = __readfsqword(0x28u);
  v26 = (*(__int64 (__fastcall **)(__int64 *, char *, __int64))(*v7 + 48))(v7, (char *)&v27 + 2, 2);
  if ( v26 )
  {
    if ( HIWORD(v27) != 4611 )
    {
      if ( !under_debugger )
        interr(30559);
      BUG();
    }
    v9 = a4 + (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3) - 2;
    while ( 1 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3);
      if ( v10 >= v9 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64))(**a3 + 48))(*a3, (char *)&v27 + 1, 1) )
        return 0;
      if ( BYTE1(v27) <= 0xEFu )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(**a3 + 40))(*a3, v10) )
          return 0;
        v11 = *a3;
        v12 = (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int16 *, __int64))(*v11 + 48))(v11, &v28, 2)
          || !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v11 + 40))(v11, v12) )
        {
          return 0;
        }
        if ( v28 == 5391 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(**a3 + 48))(*a3, &v30, 8) )
            return 0;
          v16 = *a3;
          v31 = nullptr;
          v32 = 0;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, const char **))(*v16 + 56))(v16, &v31) )
          {
            v19 = (__int64)v31;
LABEL_31:
            if ( v19 )
            {
              *(_QWORD *)&v32 = 0;
              qfree(v19);
            }
            return 0;
          }
          v17 = src;
          if ( (_QWORD)v32 )
            v17 = v31;
          v18 = sub_68400(a1, a2, HIDWORD(v30), WORD1(v30), v17);
          v19 = (__int64)v31;
          if ( !v18 )
            goto LABEL_31;
          if ( v31 )
          {
            *(_QWORD *)&v32 = 0;
            qfree(v31);
          }
        }
        else if ( v28 == 5124 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, const char **, __int64))(**a3 + 48))(*a3, &v31, 8) )
            return 0;
          sub_67120(&v30, (__int64)a1, HIDWORD(v31), &v29);
          if ( !v30 )
            return 0;
          if ( !(unsigned __int8)sub_71590(
                                   (_DWORD)a1,
                                   (_DWORD)a2,
                                   (unsigned int)&v30,
                                   v29,
                                   v14,
                                   v15,
                                   v24,
                                   v25,
                                   v27,
                                   v30,
                                   (__int64)v31,
                                   v32,
                                   *((__int64 *)&v32 + 1)) )
          {
            if ( v30 )
              (*(void (**)(void))(*(_QWORD *)v30 + 8LL))();
            return 0;
          }
          if ( v30 )
            (*(void (**)(void))(*(_QWORD *)v30 + 8LL))();
        }
        else
        {
          if ( !(unsigned __int8)sub_6F9D0(a1, (unsigned int *)&v31, 0, a3, 0, 0) )
            return 0;
          v20 = a2[1];
          v21 = (int)v31;
          v22 = *a2;
          if ( a2[2] < (unsigned __int64)(v20 + 1) )
          {
            v23 = qvector_reserve(a2, v22, v20 + 1, 4);
            *a2 = v23;
            v22 = v23;
            v20 = a2[1];
          }
          *(_DWORD *)(v22 + 4 * v20) = v21;
          ++a2[1];
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v26;
}
