unsigned __int64 __fastcall sub_852E0(__int64 *a1, const char *a2)
{
  const char *v3; // rbx
  char v4; // al
  __int64 v5; // r13
  __int64 v6; // r14
  size_t v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  void *v11; // rdi
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a2 && a1 )
  {
    v3 = &a2[strlen(a2)];
    while ( a2 < v3 )
    {
      v4 = *--v3;
      if ( (unsigned __int8)(v4 - 48) > 9u )
        goto LABEL_6;
    }
    v4 = *v3;
LABEL_6:
    if ( v4 != 95 )
      v3 += strlen(v3);
    v12 = 0;
    v5 = 0;
    v6 = 0;
    v13 = 0;
    v7 = v3 - a2;
    if ( v7 )
    {
      v11 = nullptr;
      if ( v7 != -1 )
      {
        v12 = qvector_reserve(&v12, 0, v7 + 1, 1);
        v11 = (void *)v12;
      }
      *(_QWORD *)&v13 = v7 + 1;
      memmove(v11, a2, v7);
      *(_BYTE *)(v12 + v7) = 0;
      v6 = v12;
      v5 = *((_QWORD *)&v13 + 1);
      v7 = v13;
    }
    v8 = *a1;
    v12 = 0;
    v13 = 0;
    if ( v8 )
    {
      a1[1] = 0;
      qfree(v8);
      v9 = v12;
      *a1 = v6;
      a1[1] = v7;
      a1[2] = v5;
      if ( v9 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v9);
      }
    }
    else
    {
      *a1 = v6;
      a1[1] = v7;
      a1[2] = v5;
    }
  }
  return v14 - __readfsqword(0x28u);
}

