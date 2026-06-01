__int64 __fastcall sub_264C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rbp
  char *v6; // rdi
  char *v7; // rdx
  __int64 v8; // rbp
  char *v9; // rdi
  char *v10; // rdx
  unsigned __int64 v12[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v2 = a2[2];
  v3 = a2[3];
  v13 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v3 + 16);
  v12[0] = *(_QWORD *)(v2 + 16);
  v12[1] = v4;
  sub_262F0((volatile signed __int32 **)(a1 + 72), v12);
  v5 = a2[2];
  v6 = *(char **)(v5 + 96);
  v7 = &v6[8 * *(_QWORD *)(v5 + 104)];
  if ( v6 != v7 )
  {
    while ( *(_QWORD **)v6 != a2 )
    {
      v6 += 8;
      if ( v7 == v6 )
        goto LABEL_7;
    }
    if ( v7 != v6 )
    {
      memmove(v6, v6 + 8, v7 - v6 - 8);
      --*(_QWORD *)(v5 + 104);
    }
  }
LABEL_7:
  v8 = a2[3];
  v9 = *(char **)(v8 + 96);
  v10 = &v9[8 * *(_QWORD *)(v8 + 104)];
  if ( v9 != v10 )
  {
    while ( *(_QWORD **)v9 != a2 )
    {
      v9 += 8;
      if ( v10 == v9 )
        goto LABEL_13;
    }
    if ( v9 != v10 )
    {
      memmove(v9, v9 + 8, v10 - v9 - 8);
      --*(_QWORD *)(v8 + 104);
    }
  }
LABEL_13:
  if ( a2 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 8LL))(a2);
  else
    return v13 - __readfsqword(0x28u);
}
