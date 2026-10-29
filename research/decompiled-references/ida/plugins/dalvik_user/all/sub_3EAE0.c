__int64 __fastcall sub_3EAE0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  unsigned int v4; // r13d
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  int v8; // edi
  int v9; // r14d
  int v10; // ebx
  _QWORD *v11; // rdi
  int v12; // edx
  unsigned __int64 v13; // rcx
  int *v14; // rax
  int v15; // r13d
  __int64 v16; // rsi
  __int64 v18; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+18h] [rbp-70h]
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( a2 )
  {
    a2[1] = 0;
    v3 = *(_QWORD *)(a1 + 160);
    v18 = 0;
    v20 = 0;
    v19 = 0;
    v21 = 0;
    if ( (int)v3 <= 0 )
      return 1;
    v6 = *(_QWORD **)(a1 + 152);
    v7 = v6;
    if ( !(24 * v3) )
      return 1;
    v8 = 0;
    do
    {
      v8 += *((_DWORD *)v7 + 2);
      v9 = v8;
      if ( v7 == &v6[3 * (unsigned int)(v3 - 1)] )
        break;
      v7 += 3;
    }
    while ( v7 != &v6[3 * v3] );
    if ( v8 > 0 )
    {
      v10 = 0;
      v11 = &v6[3 * v3];
      if ( 24 * v3 )
      {
        do
        {
          v12 = v10;
          while ( 1 )
          {
            v13 = v6[1];
            if ( v12 < v13 )
              break;
            v6 += 3;
            v12 -= v13;
            if ( v11 == v6 )
              goto LABEL_19;
          }
          v14 = (int *)(*v6 + 8LL * v12);
          v15 = v14[1];
          if ( !(unsigned __int8)sub_3DE20(a1 + 24, (__int64)&v18, *v14) )
            break;
          v4 = sub_3DE20(a1 + 24, (__int64)&v20, v15);
          if ( !(_BYTE)v4 )
            break;
          sub_1FAD0(a2);
          if ( ++v10 == v9 )
            goto LABEL_20;
          v16 = *(_QWORD *)(a1 + 160);
          if ( !v16 )
            break;
          v6 = *(_QWORD **)(a1 + 152);
          v11 = &v6[3 * v16];
        }
        while ( 24 * v16 );
      }
LABEL_19:
      v4 = 0;
LABEL_20:
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree();
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v4;
}

