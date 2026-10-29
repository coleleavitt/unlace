__int64 __fastcall sub_2A390(const char **a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v4; // rbx
  _QWORD *v5; // r12
  char v6; // bp
  unsigned __int8 *v7; // rax
  const char *v9; // [rsp+10h] [rbp-58h] BYREF
  __int64 v10; // [rsp+1Eh] [rbp-4Ah] BYREF
  __int16 v11; // [rsp+26h] [rbp-42h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v4 = sub_2A250(a2, a1, &v9);
  if ( !(unsigned __int8)sub_2A1A0(&v9, "MXCSR:", (_QWORD *)(a3 + 532), 4u) )
    return 2;
  v5 = (_QWORD *)(a3 + 404);
  v6 = 48;
  v10 = 0x3A5D78305B4D4D58LL;
  v11 = 0;
  while ( 1 )
  {
    v7 = sub_2A250(v4, a1, &v9);
    BYTE5(v10) = v6;
    v4 = v7;
    if ( !(unsigned __int8)sub_2A1A0(&v9, (char *)&v10, v5, 0x10u) )
      break;
    ++v6;
    v5 += 2;
    if ( v6 == 56 )
    {
      *(_DWORD *)a3 |= 0x10u;
      return 2;
    }
  }
  return 0;
}

