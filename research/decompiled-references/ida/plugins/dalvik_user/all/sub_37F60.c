__int64 __fastcall sub_37F60(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r12
  char v5; // al
  char *v6; // rbx
  __int64 v7; // rbp
  char *v9; // rdi
  __int64 v10; // rax
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 8);
  v15 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  s1 = nullptr;
  v4 = v3;
  v12 = 0;
  v5 = sub_36D30((__int64 *)&s1, a2);
  v6 = s1;
  if ( !v5 )
    goto LABEL_15;
  if ( !(_QWORD)v12 )
  {
    v7 = byte_7FAF1 == 67;
    goto LABEL_4;
  }
  if ( *s1 == 67 )
  {
    v7 = 1;
    goto LABEL_4;
  }
  v9 = s1;
  if ( strcmp(s1, "Ljava/lang/String;") )
  {
LABEL_15:
    v7 = 0;
    goto LABEL_4;
  }
  v13 = 0;
  v14 = 0;
  v7 = *(_QWORD *)(v4 + 8);
  if ( v7 )
  {
    v10 = sub_135E0(v9, "Ljava/lang/String;");
    v7 = 0;
    if ( (unsigned __int8)sub_4F290(v10 + 864, &v13, *(_QWORD *)(v4 + 8)) )
      v7 = (int)v14;
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
    v6 = s1;
  }
LABEL_4:
  if ( v6 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v7;
}

