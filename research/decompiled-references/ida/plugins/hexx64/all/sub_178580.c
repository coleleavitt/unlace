__int64 __fastcall sub_178580(__int64 *a1, unsigned int *a2, unsigned int *a3, double a4, __m128 a5)
{
  unsigned int v5; // ebp
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbp
  unsigned __int64 *v17[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 *v18[4]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 *v19[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v20; // [rsp+50h] [rbp-88h] BYREF
  __int64 v21; // [rsp+58h] [rbp-80h]
  _QWORD v22[13]; // [rsp+70h] [rbp-68h] BYREF

  v22[5] = __readfsqword(0x28u);
  if ( a1[1] )
    return 0;
  LOBYTE(v8) = sub_32ED40(*a2, *((_BYTE *)a2 + 64) == 0);
  v5 = v8;
  if ( (_BYTE)v8 )
    return 0;
  if ( (a2[1] & 0x40) != 0 )
    return 0;
  LOBYTE(v9) = sub_32ED70(*a3);
  v12 = v9;
  if ( !(_BYTE)v9 || (*((_BYTE *)a3 + 6) & 2) != 0 )
  {
    return 0;
  }
  else
  {
    sub_127A20((__int64)v17, *a1, (__int64)a3, 1, v10, v11, a4, a5);
    sub_124680((__int64)v19, *a1, (__int64)a3, 1, a4, a5);
    sub_64280((__int64 *)v19, (__int64 *)v17, a4);
    sub_316CB0(&v20, v18, v13, v14);
    if ( !sub_A9AA0(*a1, v19, *((_QWORD *)a3 + 1), *((_QWORD *)a2 + 1), 1u)
      && !sub_A9D90(*a1, v17, *((_QWORD *)a3 + 1), *((_QWORD *)a2 + 1), 1u) )
    {
      v5 = v12;
      if ( v21 )
      {
        v15 = *((_QWORD *)a2 + 1);
        v16 = *((_QWORD *)a3 + 1);
        if ( v15 == v16 )
        {
LABEL_21:
          v12 = 0;
        }
        else
        {
          while ( 1 )
          {
            memset(&v22[1], 0, 32);
            v22[0] = &off_4DDF00;
            if ( (unsigned int)sub_11F760((_BYTE *)v16, v22) )
              break;
            v16 = *(_QWORD *)(v16 + 8);
            if ( v15 == v16 )
              goto LABEL_21;
          }
        }
        v5 = v12 ^ 1;
      }
    }
    if ( v20 )
    {
      v21 = 0;
      qfree(v20);
    }
    qfree((__int64)v19[0]);
    if ( v18[0] )
    {
      v18[1] = nullptr;
      qfree((__int64)v18[0]);
    }
    qfree((__int64)v17[0]);
  }
  return v5;
}

