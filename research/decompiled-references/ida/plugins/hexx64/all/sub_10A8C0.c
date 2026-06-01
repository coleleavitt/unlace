__int64 __fastcall sub_10A8C0(_DWORD *a1, _QWORD *a2, __int64 a3, double a4)
{
  __int64 v4; // rbp
  __m128i *v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // r15
  int v8; // ebx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v14; // [rsp+10h] [rbp-A8h]
  __int64 v15[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+30h] [rbp-88h] BYREF
  __m128i *v17; // [rsp+38h] [rbp-80h]
  _DWORD *v18; // [rsp+40h] [rbp-78h]
  _DWORD *v19; // [rsp+48h] [rbp-70h]
  _QWORD *v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  __int64 v22; // [rsp+60h] [rbp-58h]
  __int16 v23; // [rsp+68h] [rbp-50h]
  char v24; // [rsp+6Ah] [rbp-4Eh]
  unsigned __int64 v25; // [rsp+78h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v16 = off_4DD4A0;
  v19 = a1 + 124;
  v23 = 0;
  *a1 &= ~0x200000u;
  v17 = nullptr;
  v18 = a1;
  v20 = a2;
  v21 = a3;
  v22 = 0x10000;
  v24 = 0;
  while ( 1 )
  {
    v14 = a2[1];
    if ( !v14 )
    {
LABEL_16:
      if ( !(_BYTE)v23 )
      {
        if ( v24 )
          ++a1[228];
        v8 = 0;
        if ( HIBYTE(v23) )
        {
          sub_3311F0(a1, 0xFFFFFFFFFFFFFFFFLL, 0xBu);
          v8 = -20;
        }
        goto LABEL_33;
      }
      goto LABEL_17;
    }
    v4 = 0;
    while ( 1 )
    {
      v5 = (__m128i *)(*a2 + 24 * v4);
      v17 = v5;
      v6 = (_QWORD *)v5->m128i_i64[0];
      if ( v5->m128i_i64[0] )
      {
        if ( v5->m128i_i64[1] )
        {
          v7 = (_QWORD *)v6[1];
          if ( v6 != v7 )
            break;
        }
      }
LABEL_15:
      if ( v14 == ++v4 )
        goto LABEL_16;
    }
    while ( 1 )
    {
      if ( v7[4] )
      {
        HIDWORD(v22) = 0;
        v15[0] = 0;
        v15[1] = 0;
        v8 = sub_10A0C0((__int64)&v16, v4, v17, (unsigned __int64)(v7 + 3), 1, v15, a4);
        if ( !(unsigned __int8)sub_64880(v15) )
          v24 = 1;
        qfree(v15[0]);
        if ( v8 )
          break;
      }
      if ( (*v7 & 2) != 0 )
      {
LABEL_14:
        if ( (_QWORD *)v5->m128i_i64[0] == v7 )
          goto LABEL_15;
      }
      else
      {
        v9 = (_QWORD *)v7[2];
        if ( (*(_BYTE *)v9 & 2) == 0 )
        {
          do
          {
            v7 = v9;
            v9 = (_QWORD *)v9[1];
          }
          while ( (*(_BYTE *)v9 & 2) == 0 );
          goto LABEL_14;
        }
        v10 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
        v11 = *v10;
        if ( (*v10 & 2) == 0 && (_QWORD *)v10[2] == v7 )
        {
          do
          {
            v7 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
            v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v11 & 2) != 0 )
              goto LABEL_14;
            v12 = v10;
            v10 = v7;
          }
          while ( (_QWORD *)v7[2] == v12 );
        }
        v7 = v10;
        if ( (_QWORD *)v5->m128i_i64[0] == v10 )
          goto LABEL_15;
      }
    }
    if ( v8 != -36 )
      break;
LABEL_17:
    LODWORD(v22) = v22 + 1;
    LOBYTE(v23) = 0;
  }
  if ( v8 >= 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC9E6u, a4);
    BUG();
  }
  if ( v24 )
    ++a1[228];
  sub_3311F0(a1, 0xFFFFFFFFFFFFFFFFLL, 0xBu);
LABEL_33:
  sub_102D00(&v16);
  return (unsigned int)v8;
}

