unsigned __int64 __fastcall sub_112920(__int64 *a1, __int64 a2)
{
  _BYTE *v3; // rax
  __int64 v4; // rbx
  char *v5; // r13
  unsigned __int8 *v6; // r12
  char v7; // r14
  unsigned __int8 *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 i; // rbx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  __int64 v16; // rdi
  _QWORD v18[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v3 = (_BYTE *)a1[2];
  v19 = __readfsqword(0x28u);
  v4 = *(_QWORD *)v3;
  v5 = (char *)(*(_QWORD *)v3 + 32LL);
  v6 = (unsigned __int8 *)(*(_QWORD *)v3 + 48LL);
  if ( *v5 == 4 && **(_DWORD **)(v4 + 40) == 9 )
  {
    if ( (unsigned __int8)sub_11FD80((char *)(*(_QWORD *)v3 + 48LL), v18, 0) && !v18[0] )
    {
      v18[1] = 0;
      v18[0] = 0xFFFFFFFF00000000LL;
      sub_11CA10((char *)v18, (char *)(*(_QWORD *)(v4 + 40) + 32LL));
      sub_11CA10(v5, (char *)v18);
      sub_120A10((__int64)v6, *a1, 0, *(_DWORD *)(v4 + 36), **(_QWORD **)(v4 + 56), 0);
      sub_11CDA0((__int64)v18);
    }
    v3 = (_BYTE *)a1[2];
  }
  v7 = v3[16];
  if ( !v7 )
  {
    v8 = v6;
    v6 = (unsigned __int8 *)v5;
    v5 = (char *)v8;
  }
  sub_1571F0(a2, a1[1], (__int64)v6, a1[1], a1[1] + 32, 2);
  sub_1571F0(a2, a1[1], (__int64)v5, a1[1], a1[1] + 48, 2);
  sub_11D5D0(v4, *a1);
  v9 = a1[3];
  if ( v9 > 1 )
  {
    for ( i = 1; i < v9; ++i )
    {
      v11 = a1[2] + 24 * i;
      v12 = *(_QWORD *)v11;
      v13 = *(_QWORD *)v11 + 32LL;
      if ( *(_BYTE *)(v11 + 16) == v7 )
      {
        sub_125180(v13, v6);
        sub_125180(v12 + 48, (unsigned __int8 *)v5);
      }
      else
      {
        sub_125180(v13, (unsigned __int8 *)v5);
        sub_125180(v12 + 48, v6);
      }
      sub_11D5D0(v12, *a1);
      v9 = a1[3];
    }
  }
  v14 = a1[2];
  v15 = v14 + 24 * v9;
  while ( v14 != v15 )
  {
    v16 = *(_QWORD *)(v14 + 8);
    v14 += 24;
    sub_11D5A0(v16);
  }
  return v19 - __readfsqword(0x28u);
}

