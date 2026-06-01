_BOOL8 __fastcall sub_DF50(const char *a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  const char *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BOOL4 v8; // ebx
  __int64 v10; // rbp
  __int64 v11; // rbp
  const char *v12; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v2 = s1;
  v3 = *(_QWORD *)(a2 + 8) == 0;
  v14 = __readfsqword(0x28u);
  v12 = nullptr;
  v13 = 0;
  if ( !v3 )
    v2 = *(const char **)a2;
  tag_remove(&v12, v2, 0);
  if ( !(_QWORD)v13 )
  {
    v4 = s1;
    v5 = qfwrite(a1, s1, 0);
    goto LABEL_5;
  }
  v4 = v12;
  if ( (_QWORD)v13 == 1 )
  {
    v5 = qfwrite(a1, v12, 0);
LABEL_5:
    if ( v5 )
    {
LABEL_6:
      v8 = 0;
      goto LABEL_7;
    }
    goto LABEL_13;
  }
  if ( v12[(_QWORD)v13 - 2] != 92 )
  {
    v11 = v13 - 1;
    if ( v11 != qfwrite(a1, v12, v13 - 1) )
      goto LABEL_6;
LABEL_13:
    v4 = a1;
    v8 = qfputc(10, a1) != -1;
    goto LABEL_7;
  }
  v10 = v13 - 2;
  if ( qfwrite(a1, v12, v13 - 2) != v10 )
    goto LABEL_6;
  v8 = 1;
LABEL_7:
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, v4, v6, v7);
  }
  return v8;
}

