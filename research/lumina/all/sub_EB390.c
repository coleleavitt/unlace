__int64 __fastcall sub_EB390(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v20; // rax

  v2 = *(_QWORD *)(a1 + 16);
  sub_EA3B0(a1);
  sub_EB160(a1, 0, v3, v4, v5, v6);
  if ( qword_242248 )
    xmmword_241500(qword_242248);
  v7 = *(_QWORD *)(v2 + 16);
  if ( v7 )
  {
    xmmword_241500(v7);
    v8 = *(unsigned int *)(v2 + 28);
    if ( !(_DWORD)v8 )
      goto LABEL_5;
  }
  else if ( !*(_DWORD *)(v2 + 28) )
  {
    goto LABEL_7;
  }
  v20 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v8 + 8) = *(_QWORD *)(v20 + 40);
  *(_QWORD *)(v20 + 40) = v8;
  *(_DWORD *)(a1 + 24) = -1;
  *(_QWORD *)(a1 + 48) = 0;
LABEL_5:
  v9 = *(_QWORD *)(v2 + 16);
  if ( v9 )
    xmmword_241510(v9, 0, v8);
LABEL_7:
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 48))-- == 1 )
    {
      v12 = *(_QWORD *)(v10 + 16);
      if ( v12 )
        xmmword_241500(v12);
      sub_EB0F0(a1, 0);
      v14 = *(_QWORD *)(v10 + 16);
      if ( v14 )
        xmmword_241510(v14, 0, v13);
      v15 = *(_QWORD *)(v10 + 72);
      v16 = *(_QWORD *)(v10 + 64);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 64) = v16;
        v16 = *(_QWORD *)(v10 + 64);
      }
      else
      {
        qword_242240 = *(_QWORD *)(v10 + 64);
      }
      if ( v16 )
        *(_QWORD *)(v16 + 72) = *(_QWORD *)(v10 + 72);
      if ( *(_QWORD *)(v10 + 16) )
        ((void (*)(void))*(&xmmword_2414F0 + 1))();
      sub_C91C0(v10, 0);
    }
  }
  v18 = sub_EB030(a1, 0);
  if ( qword_242248 )
    xmmword_241510(qword_242248, 0, v17);
  return v18;
}
