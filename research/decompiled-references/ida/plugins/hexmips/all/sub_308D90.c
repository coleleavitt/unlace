_DWORD *__fastcall sub_308D90(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int8 *a4)
{
  int v8; // eax
  __int128 v9; // rdi
  __int64 v10; // rax
  _DWORD *v11; // r14
  unsigned __int8 *v12; // r15
  __int128 v14; // rdi
  int *v15; // rcx
  char v16; // al
  __int64 v17; // rdi
  char v18; // al
  _DWORD *v19; // rax
  _DWORD *v20; // rax
  _DWORD *v21; // [rsp+8h] [rbp-B0h]
  _DWORD *v22; // [rsp+8h] [rbp-B0h]
  _BYTE v23[16]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v24[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v25; // [rsp+30h] [rbp-88h] BYREF
  __int128 v26; // [rsp+38h] [rbp-80h]
  __int64 v27[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v28; // [rsp+60h] [rbp-58h] BYREF
  __int128 v29; // [rsp+68h] [rbp-50h]
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  while ( 1 )
  {
    *((_QWORD *)&v9 + 1) = a4;
    *(_QWORD *)&v9 = a2;
    v10 = sub_125240(v9, (__int64)a3, 0);
    v11 = (_DWORD *)v10;
    if ( !v10 )
      return nullptr;
    if ( *(_BYTE *)(v10 + 64) )
    {
      v12 = (unsigned __int8 *)(v10 + 64);
      if ( !sub_1213D0(a4, a1, v10 + 64, 0) )
        break;
    }
    v8 = *v11;
    if ( *v11 != 4 )
      goto LABEL_9;
    a4 = (unsigned __int8 *)(v11 + 8);
  }
  if ( *v11 == 8 )
  {
    sub_11F840((__int64)v23, v12);
    if ( (unsigned __int8)sub_122D10((unsigned __int64)v23, a1, v11[9]) )
    {
      v24[0] = 0;
      v24[1] = 0;
      v25 = 0;
      v26 = 0;
      sub_123DE0(a2, v24, (__int64)v23, 0);
      v27[0] = 0;
      v27[1] = 0;
      v28 = 0;
      v29 = 0;
      sub_123DE0(a2, v27, (__int64)a4, 0);
      v16 = sub_60620(v27, v24);
      v17 = v28;
      if ( v16 )
      {
        v18 = sub_3131C0(&v25, &v28);
        v17 = v28;
        if ( v18 )
        {
          v19 = v11 + 8;
          if ( v28 )
          {
            *(_QWORD *)&v29 = 0;
            qfree();
            v19 = v11 + 8;
          }
          v21 = v19;
          qfree();
          v20 = v21;
          if ( v25 )
          {
            *(_QWORD *)&v26 = 0;
            qfree();
            v20 = v21;
          }
          v22 = v20;
          qfree();
          sub_118BA0((__int64)v23);
          return v22;
        }
      }
      if ( v17 )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
      }
      qfree();
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree();
      }
      qfree();
    }
    sub_118BA0((__int64)v23);
  }
  v8 = *v11;
LABEL_9:
  if ( v8 != 5 )
    return sub_308940((__int64)v11);
  *((_QWORD *)&v14 + 1) = v11 + 8;
  *(_QWORD *)&v14 = a2;
  v15 = (int *)sub_125240(v14, (__int64)a3, 0);
  if ( !v15 )
    return nullptr;
  return sub_308AC0(a1, a2, a3, v15);
}

