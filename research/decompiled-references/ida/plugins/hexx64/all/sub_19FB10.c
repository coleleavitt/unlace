__int64 __fastcall sub_19FB10(__int64 *a1, double a2)
{
  __int64 v2; // rax
  bool (__fastcall *v3)(__int64); // rax
  unsigned int v4; // ebp
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  unsigned int v16; // edx
  unsigned int v17; // r14d
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v2 = *a1;
  v23 = __readfsqword(0x28u);
  v3 = *(bool (__fastcall **)(__int64))(v2 + 56);
  if ( v3 == sub_194BA0 )
  {
    if ( !a1[9] )
      return 0;
  }
  else if ( !v3((__int64)a1) )
  {
    return 0;
  }
  if ( (unsigned int)sub_19F880((__int64)a1, a2) == -1 )
    return 0;
  v6 = a1[2];
  v7 = a1[9] == 0;
  v21 = 0;
  v22 = 0;
  v8 = *(_QWORD *)(v6 + 280);
  if ( !v7 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = *(_QWORD *)(a1[8] + 40 * v13 + 24);
      if ( v14 < 0 )
        v14 = 0;
      v15 = v9 + 1;
      v20 = v14;
      if ( (unsigned __int64)&v20 < v11 || (unsigned __int64)&v20 >= v11 + 8 * v10 )
      {
        if ( v10 >= v15 )
          goto LABEL_11;
      }
      else if ( v10 >= v15 )
      {
        goto LABEL_11;
      }
      v21 = qvector_reserve((__int64)&v21, v11, v15, 8);
      v11 = v21;
      v9 = v22;
LABEL_11:
      *(_QWORD *)(v11 + 8 * v9) = v14;
      v13 = ++v12;
      v9 = v22 + 1;
      *(_QWORD *)&v22 = v22 + 1;
      if ( v12 >= (unsigned __int64)a1[9] )
        break;
      v11 = v21;
      v10 = *((_QWORD *)&v22 + 1);
    }
  }
  v16 = *(_DWORD *)(v8 + 64);
  if ( v16 == 1 )
  {
    v4 = 0;
  }
  else
  {
    v17 = 1;
    v4 = 0;
    do
    {
      if ( v17 >= v16 )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, 0.0);
        BUG();
      }
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 528) + 8LL * v17) + 48LL);
      if ( v18 )
      {
        do
        {
          v19 = sub_19B9C0(v8, v18, &v21, 0.0);
          v18 = *(_QWORD *)(v18 + 8);
          v4 |= v19;
        }
        while ( v18 );
        v16 = *(_DWORD *)(v8 + 64);
      }
      ++v17;
    }
    while ( v16 != v17 );
  }
  if ( !*(_BYTE *)(v8 + 320) )
    sub_195400(v8, 0.0);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return v4;
}

