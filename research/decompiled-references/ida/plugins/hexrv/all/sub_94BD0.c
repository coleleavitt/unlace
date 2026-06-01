__int64 __fastcall sub_94BD0(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // r13d
  __int64 v7; // r14
  __int64 v8; // r14
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // r15d
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  _QWORD v18[2]; // [rsp+10h] [rbp-98h] BYREF
  void *src; // [rsp+20h] [rbp-88h]
  __int128 v20; // [rsp+28h] [rbp-80h]
  __int64 v21[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v22; // [rsp+50h] [rbp-58h]
  __int128 v23; // [rsp+58h] [rbp-50h]
  unsigned __int64 v24; // [rsp+68h] [rbp-40h]

  v3 = 0;
  v24 = __readfsqword(0x28u);
  if ( *a3 )
  {
    v20 = 0;
    v18[0] = 0;
    v18[1] = 0;
    src = nullptr;
    sub_123B20(a1, v18, a3, 0);
    sub_5FC80(v21, (__int64)v18);
    v7 = v20;
    v22 = nullptr;
    v23 = 0;
    if ( (_QWORD)v20 )
    {
      v22 = (void *)qalloc_or_throw();
      *((_QWORD *)&v23 + 1) = v7;
      memcpy(v22, src, 16 * v7);
      *(_QWORD *)&v23 = v7;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    do
    {
      v12 = *(_QWORD *)(a2 + 8);
      if ( !v12 )
        break;
      v13 = sub_A58D0(a1, v18, v12, 0, 1);
      a2 = v13;
      if ( !v13 )
        break;
      v14 = v13 + 32;
      v15 = sub_125AE0(a3, v8, v13 + 32);
      if ( (unsigned int)(v15 - 2) > 1 || !(unsigned __int8)sub_A7210(a1, a2, v14, (v15 != 2) | 2u, v16, v17) )
      {
        v9 = sub_125AE0(a3, v8, a2 + 48);
        if ( (unsigned int)(v9 - 2) > 1 || !(unsigned __int8)sub_A7210(a1, a2, (int)a2 + 48, (v9 != 2) | 2u, v10, v11) )
          continue;
      }
      v3 = 1;
      goto LABEL_16;
    }
    while ( !(unsigned int)sub_11E770(v21, v18) );
    v3 = 0;
LABEL_16:
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree();
    }
    qfree();
    if ( src )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
    qfree();
  }
  return v3;
}

