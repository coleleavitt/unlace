__int64 __fastcall sub_D890(_QWORD *a1, const void **a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rsi
  unsigned int v5; // ebx
  const void *v6; // rdx
  unsigned __int64 v7; // rax
  _DWORD *v8; // rsi
  __int64 v9; // r13
  size_t v10; // r14
  __int64 v11; // r15
  __int64 v13; // rax
  __int128 v14; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+10h] [rbp-A8h]
  __int128 v16; // [rsp+18h] [rbp-A0h]
  __int64 v17; // [rsp+28h] [rbp-90h]
  __int128 v18; // [rsp+30h] [rbp-88h]
  int v19; // [rsp+40h] [rbp-78h]
  __int64 v20; // [rsp+48h] [rbp-70h]
  __int128 v21; // [rsp+50h] [rbp-68h]
  __int64 v22; // [rsp+60h] [rbp-58h]
  __int128 v23; // [rsp+68h] [rbp-50h]
  unsigned __int64 v24; // [rsp+78h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( !a1[3] )
    return 0;
  v2 = a1[8];
  if ( v2 == -1 )
    return 0;
  v4 = a1[5];
  v19 = 0;
  v17 = v4;
  v15 = 0;
  v20 = 0;
  v22 = 0;
  v14 = 0;
  v16 = 0;
  v18 = -1;
  v21 = 0;
  v23 = 0;
  if ( (unsigned __int8)sub_CC60(&v14, v4 + 120, v2, 0) && (v5 = sub_BCF0(&v14, (__int64 *)a2), (_BYTE)v5) )
  {
    if ( a2 )
    {
      v6 = a2[1];
      v7 = (unsigned __int64)a2[2];
      v8 = *a2;
      if ( v6 )
      {
        v9 = (__int64)v6 + 4;
        v10 = (size_t)v6 - 1;
        v11 = (__int64)v6 + 3;
        if ( v7 >= (unsigned __int64)v6 + 4 )
          goto LABEL_8;
      }
      else
      {
        if ( v7 > 4 )
        {
          a2[1] = &byte_5;
          *((_BYTE *)v8 + 4) = 0;
LABEL_21:
          *(_DWORD *)*a2 = 1448368735;
          goto LABEL_13;
        }
        v10 = 0;
        v9 = 5;
        v11 = 4;
      }
      v13 = qvector_reserve();
      *a2 = (const void *)v13;
      v8 = (_DWORD *)v13;
LABEL_8:
      a2[1] = (const void *)v9;
      *((_BYTE *)v8 + v11) = 0;
      if ( v10 )
        memmove((char *)*a2 + 4, *a2, v10);
      goto LABEL_21;
    }
  }
  else
  {
    v5 = 0;
  }
LABEL_13:
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v5;
}
