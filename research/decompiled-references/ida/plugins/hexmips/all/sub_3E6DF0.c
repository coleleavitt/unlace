__int64 __fastcall sub_3E6DF0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  _BYTE *v4; // rbx
  _BYTE *v5; // r14
  __int128 v6; // rdi
  __int64 v7; // r13
  _QWORD *v8; // r13
  _QWORD v10[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  __int128 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v1 = a1[4];
  if ( (unsigned int)(*(_DWORD *)v1 - 56) > 1 )
    return 0;
  if ( *(_BYTE *)(v1 + 64) != 8 )
    return 0;
  v2 = *(_QWORD *)(v1 + 72);
  v4 = *(_BYTE **)(v2 + 24);
  v5 = &v4[80 * *(_QWORD *)(v2 + 32)];
  if ( v5 == v4 )
    return 0;
  while ( (*v4 & 0xFB) != 1 )
  {
LABEL_14:
    v4 += 80;
    if ( v5 == v4 )
      return 0;
  }
  *(_QWORD *)&v6 = a1[2];
  *((_QWORD *)&v6 + 1) = v10;
  v10[0] = 0;
  v10[1] = 0;
  v11 = 0;
  v12 = 0;
  sub_11FCA0(v6, (__int64)v4, 1u, 0xFFFF0000);
  v7 = a1[5];
  if ( !(unsigned __int8)sub_60580((_QWORD *)v7, v10)
    && !(unsigned __int8)sub_3136F0((unsigned __int64 **)(v7 + 16), (__int64)&v11) )
  {
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
    qfree();
    goto LABEL_14;
  }
  v8 = (_QWORD *)a1[5];
  if ( (unsigned __int8)sub_60620(v8, v10) && (unsigned __int8)sub_3131C0(&v11, (__int64)(v8 + 2)) )
    a1[6] = v4;
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  qfree();
  return 1;
}

