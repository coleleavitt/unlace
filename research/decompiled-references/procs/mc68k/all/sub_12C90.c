unsigned __int64 __fastcall sub_12C90(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rdx
  char *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // r8d
  char *v11; // rcx
  char *v12; // rsi
  int v13; // [rsp+4h] [rbp-3Ch] BYREF
  char *s1; // [rsp+8h] [rbp-38h] BYREF
  __int128 v15; // [rsp+10h] [rbp-30h]
  unsigned __int64 v16; // [rsp+20h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  s1 = nullptr;
  v15 = 0;
  get_segm_name(&s1, a3, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 8) == 0 )
  {
    v4 = (char *)&unk_16EE8;
    if ( (_QWORD)v15 )
      v4 = s1;
    sub_10B20(a2, (__int64)"segment \"%s\"", v4);
LABEL_5:
    if ( s1 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(s1);
    }
    return v16 - __readfsqword(0x28u);
  }
  v6 = s1;
  if ( !(_QWORD)v15 )
  {
LABEL_9:
    qsscanf(v6 + 4, &unk_166C9, &v13);
    v9 = v15;
    if ( (unsigned __int64)v15 <= 4 )
    {
      v12 = s1;
      if ( *((_QWORD *)&v15 + 1) <= 4u )
      {
        s1 = (char *)qvector_reserve(&s1, s1, 5, 1, v7, v8);
        v9 = v15;
        v12 = s1;
      }
      memset(&v12[v9], 0, 5 - v9);
      *(_QWORD *)&v15 = 5;
    }
    else if ( (_QWORD)v15 != 5 )
    {
      *(_QWORD *)&v15 = 5;
    }
    v10 = v13;
    v11 = (char *)&unk_16EE8;
    s1[4] = 0;
    if ( (_QWORD)v15 )
      v11 = s1;
    sub_10A70(a2, 0xFFFF, (__int64)"res '%s', %u", v11, v10);
    goto LABEL_5;
  }
  if ( !strcmp(s1, "code0001") )
  {
    sub_10A70(a2, 0xFFFF, (__int64)&unk_166AE);
  }
  else
  {
    if ( strcmp(v6, "data0000") )
      goto LABEL_9;
    sub_10A70(a2, 0xFFFF, (__int64)&unk_166C0);
  }
  if ( s1 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(s1);
  }
  return v16 - __readfsqword(0x28u);
}
