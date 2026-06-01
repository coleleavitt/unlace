__int64 __fastcall sub_38F870(__int64 a1, __m128i *a2)
{
  __int64 v3; // rdi
  const char *v4; // r12
  unsigned int v5; // ebp
  char *v6; // r14
  __int64 v7; // rdi
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 32);
  v11 = __readfsqword(0x28u);
  s1 = nullptr;
  v10 = 0;
  v4 = sub_257AF0(v3, (unsigned __int64 *)a2, 1, 0.0);
  v5 = sub_382A60((__int64)&s1, 0, (__int64)v4, (__int64)"Please enter comment");
  if ( !(_BYTE)v5 )
    goto LABEL_7;
  if ( !v4 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v6 = (char *)::s1;
    if ( (_QWORD)v10 )
      v6 = s1;
    goto LABEL_13;
  }
  if ( !(_QWORD)v10 )
  {
    if ( *v4 )
    {
      v7 = *(_QWORD *)(a1 + 32);
      v6 = (char *)::s1;
      goto LABEL_13;
    }
LABEL_7:
    v6 = s1;
    v5 = 0;
    goto LABEL_8;
  }
  v6 = s1;
  if ( strcmp(s1, v4) )
  {
    v7 = *(_QWORD *)(a1 + 32);
LABEL_13:
    sub_25C730(v7, a2, v6);
    sub_2B6650(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
      **(_QWORD **)(a1 + 32),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL));
    sub_38F620(a1, 1);
    v6 = s1;
    goto LABEL_8;
  }
  v5 = 0;
LABEL_8:
  if ( v6 )
  {
    *(_QWORD *)&v10 = 0;
    qfree((__int64)v6);
  }
  return v5;
}

