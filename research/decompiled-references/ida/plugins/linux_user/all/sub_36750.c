__int64 __fastcall sub_36750(int *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  char v15; // [rsp+7h] [rbp-81h] BYREF
  __int64 v16; // [rsp+8h] [rbp-80h] BYREF
  __int64 v17; // [rsp+10h] [rbp-78h] BYREF
  __int128 v18; // [rsp+18h] [rbp-70h]
  int v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int128 v21; // [rsp+40h] [rbp-48h]
  unsigned __int64 v22; // [rsp+58h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v6 = sub_2FA20((__int64)a1, a2, a3, a4);
  if ( !(_BYTE)v6 )
  {
    v7 = *((_QWORD *)a1 + 85);
    v17 = 0;
    v18 = 0;
    v8 = (int)v7;
    if ( !v7 )
      v8 = a1[194];
    if ( v8 )
    {
      v19 = -2;
      v20 = -1;
      v21 = 0;
      sub_340E0(&v17, v8, (__int64)&v19);
      if ( v19 >= -1 && v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
      v9 = v17;
    }
    else
    {
      v9 = 0;
    }
    if ( (*(unsigned int (__fastcall **)(int *, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 224LL))(
           a1,
           a2,
           1,
           v9,
           0) == 1
      && (*(__int64 (__fastcall **)(int *, _QWORD, char *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           *(_QWORD *)(v17 + 32LL * a1[196] + 8),
           &v15,
           1,
           0) == 1
      && (unsigned __int8)(v15 + 62) <= 1u )
    {
      v16 = -1;
      if ( (*(__int64 (__fastcall **)(int *, _QWORD, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
             a1,
             *(_QWORD *)(v17 + 32LL * a1[195] + 8),
             &v16,
             8,
             0) == 8 )
        LOBYTE(v6) = v16 == a4;
    }
    v10 = v17;
    if ( v17 )
    {
      v11 = v18;
      if ( (_QWORD)v18 )
      {
        v12 = 0;
        do
        {
          v13 = v10 + 32 * v12;
          if ( *(int *)v13 >= -1 && *(_QWORD *)(v13 + 8) )
          {
            *(_QWORD *)(v13 + 16) = 0;
            qfree();
            v10 = v17;
          }
          ++v12;
        }
        while ( v11 != v12 );
      }
      *(_QWORD *)&v18 = 0;
      qfree();
    }
  }
  return v6;
}

