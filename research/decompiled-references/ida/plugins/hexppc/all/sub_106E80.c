__int64 __fastcall sub_106E80(_DWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, int a5, int a6)
{
  __int64 v6; // rbp
  __m128i *v7; // r12
  _QWORD *v8; // rax
  _QWORD *v9; // r15
  int v10; // ebx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v15; // [rsp+10h] [rbp-A8h]
  __int64 v16[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+30h] [rbp-88h] BYREF
  __m128i *v18; // [rsp+38h] [rbp-80h]
  _DWORD *v19; // [rsp+40h] [rbp-78h]
  _DWORD *v20; // [rsp+48h] [rbp-70h]
  _QWORD *v21; // [rsp+50h] [rbp-68h]
  __int64 v22; // [rsp+58h] [rbp-60h]
  Elf64_Rela *v23; // [rsp+60h] [rbp-58h]
  __int16 v24; // [rsp+68h] [rbp-50h]
  char v25; // [rsp+6Ah] [rbp-4Eh]
  unsigned __int64 v26; // [rsp+78h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v17 = off_4CA600;
  v20 = a1 + 124;
  v24 = 0;
  *a1 &= ~0x200000u;
  v18 = nullptr;
  v19 = a1;
  v21 = a2;
  v22 = a3;
  v23 = &stru_10000;
  v25 = 0;
  while ( 1 )
  {
    v15 = a2[1];
    if ( !v15 )
    {
LABEL_16:
      if ( !(_BYTE)v24 )
      {
        if ( v25 )
          ++a1[228];
        v10 = 0;
        if ( HIBYTE(v24) )
        {
          sub_32CD90((_DWORD)a1, -1, 11, a4, a5, a6);
          v10 = -20;
        }
        goto LABEL_33;
      }
      goto LABEL_17;
    }
    v6 = 0;
    while ( 1 )
    {
      v7 = (__m128i *)(*a2 + 24 * v6);
      v18 = v7;
      v8 = (_QWORD *)v7->m128i_i64[0];
      if ( v7->m128i_i64[0] )
      {
        if ( v7->m128i_i64[1] )
        {
          v9 = (_QWORD *)v8[1];
          if ( v8 != v9 )
            break;
        }
      }
LABEL_15:
      if ( v15 == ++v6 )
        goto LABEL_16;
    }
    while ( 1 )
    {
      a4 = (unsigned __int64)(v9 + 3);
      if ( v9[4] )
      {
        HIDWORD(v23) = 0;
        v16[0] = 0;
        v16[1] = 0;
        v10 = sub_106680((__int64)&v17, v6, v18, a4, 1u, v16);
        if ( !(unsigned __int8)sub_60E40(v16) )
          v25 = 1;
        qfree();
        if ( v10 )
          break;
      }
      if ( (*v9 & 2) != 0 )
      {
LABEL_14:
        if ( (_QWORD *)v7->m128i_i64[0] == v9 )
          goto LABEL_15;
      }
      else
      {
        v11 = (_QWORD *)v9[2];
        if ( (*(_BYTE *)v11 & 2) == 0 )
        {
          do
          {
            v9 = v11;
            v11 = (_QWORD *)v11[1];
          }
          while ( (*(_BYTE *)v11 & 2) == 0 );
          goto LABEL_14;
        }
        v12 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
        v13 = *v12;
        if ( (*v12 & 2) == 0 && (_QWORD *)v12[2] == v9 )
        {
          do
          {
            v9 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
            v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v13 & 2) != 0 )
              goto LABEL_14;
            a4 = (unsigned __int64)v12;
            v12 = v9;
          }
          while ( v9[2] == a4 );
        }
        v9 = v12;
        if ( (_QWORD *)v7->m128i_i64[0] == v12 )
          goto LABEL_15;
      }
    }
    if ( v10 != -36 )
      break;
LABEL_17:
    LODWORD(v23) = (_DWORD)v23 + 1;
    LOBYTE(v24) = 0;
  }
  if ( v10 >= 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(51686);
    BUG();
  }
  if ( v25 )
    ++a1[228];
  sub_32CD90((_DWORD)a1, -1, 11, a4, a5, a6);
LABEL_33:
  sub_FF2C0(&v17);
  return (unsigned int)v10;
}

