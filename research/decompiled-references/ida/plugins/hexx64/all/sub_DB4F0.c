__int64 __fastcall sub_DB4F0(__int128 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v5; // rdx
  __int128 v6; // rdi
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx
  __int64 v11; // rdi
  char v13; // al
  __int64 i; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v16[2]; // [rsp+18h] [rbp-98h] BYREF
  __int64 v17; // [rsp+28h] [rbp-88h] BYREF
  __int128 v18; // [rsp+30h] [rbp-80h]
  __int64 v19[2]; // [rsp+48h] [rbp-68h] BYREF
  __int64 v20; // [rsp+58h] [rbp-58h] BYREF
  __int64 v21; // [rsp+60h] [rbp-50h]
  unsigned __int64 v22; // [rsp+70h] [rbp-40h]

  v2 = *((_QWORD *)&a1 + 1);
  v3 = a1;
  v5 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) = v16;
  v22 = __readfsqword(0x28u);
  v18 = 0;
  v16[0] = 0;
  v16[1] = 0;
  v17 = 0;
  sub_123EA0(a1, v5, 0, 0xFFFF0000);
  for ( i = *a2; i; i = *(_QWORD *)(i + 16) )
  {
    *((_QWORD *)&v6 + 1) = v2;
    *(_QWORD *)&v6 = v3;
    v7 = sub_129440(v6, (__int64)&i, 0);
    v10 = v7;
    if ( !v7 )
      break;
    if ( !*(_BYTE *)(v7 + 64) )
      goto LABEL_16;
    sub_127A20((__int64)v19, v3, v7, 0, v8, v9);
    if ( (unsigned __int8)sub_64820(v16, v19) )
    {
      v13 = sub_317F40(&v20, (__int64)&v17);
      v11 = v20;
      if ( v13 )
      {
        if ( v20 )
        {
          v21 = 0;
          qfree(v20);
        }
        qfree(v19[0]);
LABEL_16:
        *a2 = i;
        goto LABEL_9;
      }
      if ( v20 )
      {
LABEL_6:
        v21 = 0;
        qfree(v11);
      }
    }
    else
    {
      v11 = v20;
      if ( v20 )
        goto LABEL_6;
    }
    qfree(v19[0]);
  }
  v10 = 0;
LABEL_9:
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  qfree(v16[0]);
  return v10;
}

