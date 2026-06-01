__int64 __fastcall sub_174380(__int64 *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // ebp
  unsigned int v6; // r13d
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9[2]; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v10[4]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v11[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v12; // [rsp+50h] [rbp-88h] BYREF
  __int64 v13; // [rsp+58h] [rbp-80h]
  _QWORD v14[13]; // [rsp+70h] [rbp-68h] BYREF

  v14[5] = __readfsqword(0x28u);
  if ( a1[1] )
    return 0;
  v3 = sub_329E00(*a2, *((_BYTE *)a2 + 64) == 0);
  if ( (_BYTE)v3 )
    return 0;
  if ( (a2[1] & 0x40) != 0 )
    return 0;
  v6 = sub_329E30(*a3);
  if ( !(_BYTE)v6 || (*((_BYTE *)a3 + 6) & 2) != 0 )
  {
    return 0;
  }
  else
  {
    sub_123820((__int64)v9, *a1, (__int64)a3, 1);
    sub_120480((__int64)v11, *a1, (__int64)a3, 1u);
    sub_60080(v11, v9);
    sub_311F30(&v12, v10);
    if ( !sub_A58A0(*a1, v11, *((_QWORD *)a3 + 1), *((_QWORD *)a2 + 1), 1u)
      && !sub_A5B90(*a1, v9, *((_QWORD *)a3 + 1), *((_QWORD *)a2 + 1), 1u) )
    {
      v3 = v6;
      if ( v13 )
      {
        v7 = *((_QWORD *)a2 + 1);
        v8 = *((_QWORD *)a3 + 1);
        if ( v7 == v8 )
        {
LABEL_21:
          v6 = 0;
        }
        else
        {
          while ( 1 )
          {
            memset(&v14[1], 0, 32);
            v14[0] = off_4BE680;
            if ( (unsigned int)sub_11B560((_BYTE *)v8, v14) )
              break;
            v8 = *(_QWORD *)(v8 + 8);
            if ( v7 == v8 )
              goto LABEL_21;
          }
        }
        v3 = v6 ^ 1;
      }
    }
    if ( v12 )
    {
      v13 = 0;
      qfree();
    }
    qfree();
    if ( v10[0] )
    {
      v10[1] = 0;
      qfree();
    }
    qfree();
  }
  return v3;
}

