__int64 __fastcall sub_58BC0(__int64 a1, __int64 *a2)
{
  char *v2; // rax
  unsigned int v3; // r12d
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v7[2]; // [rsp+0h] [rbp-178h] BYREF
  __int64 v8; // [rsp+10h] [rbp-168h]
  __int128 v9; // [rsp+18h] [rbp-160h]
  __int128 v10; // [rsp+28h] [rbp-150h]
  __int64 v11; // [rsp+38h] [rbp-140h]
  __int64 v12; // [rsp+40h] [rbp-138h]
  __int64 v13; // [rsp+48h] [rbp-130h]
  __int128 v14; // [rsp+50h] [rbp-128h]
  __int64 v15; // [rsp+60h] [rbp-118h]
  __int128 v16; // [rsp+68h] [rbp-110h]
  __int64 v17; // [rsp+78h] [rbp-100h]
  __int128 v18; // [rsp+80h] [rbp-F8h]
  __int64 v19; // [rsp+90h] [rbp-E8h]
  __int128 v20; // [rsp+98h] [rbp-E0h]
  int v21; // [rsp+A8h] [rbp-D0h]
  __int64 v22; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+B8h] [rbp-C0h]
  __int64 v24; // [rsp+C8h] [rbp-B0h]
  char v25; // [rsp+D0h] [rbp-A8h]
  char v26; // [rsp+D8h] [rbp-A0h] BYREF
  char v27; // [rsp+128h] [rbp-50h] BYREF
  char v28; // [rsp+150h] [rbp-28h] BYREF
  unsigned __int64 v29; // [rsp+158h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  v7[0] = a1;
  v2 = &v26;
  v7[1] = 56;
  v8 = 0;
  v11 = -1;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v21 = 0x10000;
  v22 = 0;
  v24 = -1;
  v25 = 0;
  v9 = 0;
  v10 = -1;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  v20 = 0;
  v23 = 0;
  do
  {
    *v2 = 0;
    v2 += 40;
    *((_QWORD *)v2 - 4) = 0;
    *((_QWORD *)v2 - 3) = 0;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != &v28 );
  v3 = sub_58780(v7, a2);
  v4 = (__int64 *)&v27;
  do
  {
    v5 = v4[2];
    if ( v5 )
    {
      v4[3] = 0;
      qfree(v5, (const char *)a2);
    }
    v4 -= 5;
  }
  while ( &v22 != v4 );
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, (const char *)a2);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19, (const char *)a2);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17, (const char *)a2);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, (const char *)a2);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, (const char *)a2);
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8, (const char *)a2);
  }
  return v3;
}

